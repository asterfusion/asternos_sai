#!/bin/bash

if [ "${1:-}" = "-h" ] || [ "${1:-}" = "--help" ]; then
    echo "Usage: sudo $0 [-h] [-d] [iface] [count] [start_vlan]"
    echo "  iface       parent interface (default: nic0)"
    echo "  count       number of VLANs to create/delete (default: 48)"
    echo "  start_vlan  first VLAN ID (default: 100)"
    echo "  -d          delete VLAN interfaces instead of creating"
    echo "  -h          show this help"
    exit 0
fi

# Must run as root.
if [ "$(id -u)" -ne 0 ]; then
    echo "[ERROR] This script must be run as root (use sudo)." >&2
    exit 1
fi

# Parse optional -d.
ACTION="create"
if [ "${1:-}" = "-d" ]; then
    ACTION="delete"
    shift
fi

IFACE="${1:-nic0}"
COUNT="${2:-48}"
START="${3:-100}"
END=$((START + COUNT - 1))

echo "[INFO] action=$ACTION iface=$IFACE vlan=$START-$END count=$COUNT"

if [ "$ACTION" = "delete" ]; then
    ok=0
    fail=0

    for v in $(seq "$START" "$END"); do
        if sudo ip link del "${IFACE}.$v" 2>/dev/null; then
            ok=$((ok + 1))
        else
            fail=$((fail + 1))
        fi
    done

    echo "[INFO] delete done: removed=$ok not_found_or_failed=$fail"
    exit 0
fi

# Create mode: check parent interface first.
if ! ip link show "$IFACE" >/dev/null 2>&1; then
    echo "[ERROR] parent interface not found: $IFACE" >&2
    exit 1
fi

ip link set "$IFACE" mtu 9702

ok=0
fail=0

for v in $(seq "$START" "$END"); do
    # Remove stale VLAN interface if it exists.
    sudo ip link del "${IFACE}.$v" 2>/dev/null || true

    # Create VLAN interface and set MTU/up.
    if sudo ip link add link "$IFACE" name "${IFACE}.$v" type vlan id "$v" \
       && sudo ip link set "${IFACE}.$v" mtu 9698 up; then
        ok=$((ok + 1))
    else
        fail=$((fail + 1))
    fi
done

echo "[INFO] create done: created=$ok failed=$fail"

