#!/usr/bin/env bash
# ==============================================================================
# CLX SAI Community PTF Test Runner
# Convenient script to execute single or batch community PTF test cases on TC
# ==============================================================================

DUT_IP="${DUT_IP:-192.168.15.191}"
PTF_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export PLATFORM="clx"
export PYTHONPATH="${PTF_DIR}"

# Build 32-port interface list: 0@nic7.101 ... 31@nic7.132
IFACE_ARGS=()
for i in {0..31}; do
    IFACE_ARGS+=("-i" "${i}@nic7.$((101 + i))")
done

# Predefined passed cases
L2_CASES=(
    "saisanity.L2TrunkToTrunkVlanTest"
    "saisanity.L2TrunkToAccessVlanTest"
    "saisanity.L2SanityTest"
)

ROUTE_CASES=(
    "sairoute.multipleRoutesTest"
    "sairoute.dropRouteTest"
    "sairoute.routeUpdateTest"
    "sairoute.sviNeighborTest"
    "sairoute.emptyECMPGroupTest"
    "sairoute.routeIngressRifTest"
    "sairoute.routeNbrColisionTest"
)

RIF_CASES=(
    "sairif.LoopbackRifTest"
    "sairif.DuplicatePortRifCreationTest"
    "sairif.DuplicateVlanRifCreationTest"
    "sairif.RifSharedMtuTest"
    "sairif.RifMyIPTest"
    "sairif.Ipv4MtuTest"
    "sairif.Ipv6MtuTest"
    "sairif.Ipv4FibTest"
    "sairif.Ipv4FibLPMTest"
    "sairif.Ipv4FibLagTest"
    "sairif.Ipv4DisableTest"
)

NEIGHBOR_CASES=(
    "saineighbor.noHostRouteIpv4NeighborTest"
    "saineighbor.addHostRouteIpv4NeighborTest"
    "saineighbor.updateNeighborEntryAttributeDstMacAddr"
    "saineighbor.addNeighborEntryAttrIPv4addrFamily"
)

QUEUE_CASES=(
    "saiqueue.portQueueQueryTest"
    "saiqueue.cpuPortQueueObjectTest"
)

HOSTIF_CASES=(
    "saihostif.trapGroupTest"
    "saihostif.trapTypeTest"
    "saihostif.trapActionTest"
)

ECMP_CASES=(
    "sainexthopgroup.L3IPv4EcmpHostTest"
)

ACL_CASES=(
    "saiacl.SrcIpAclTest"
    "saiacl.DstIpAclTest"
    "saiacl.MACSrcAclTest"
    "saiacl.TCPFlagsACLTest"
    "saiacl.AclTableTypeTest"
)

ALL_PASSED_CASES=(
    "${L2_CASES[@]}"
    "${ROUTE_CASES[@]}"
    "${RIF_CASES[@]}"
    "${NEIGHBOR_CASES[@]}"
    "${QUEUE_CASES[@]}"
    "${HOSTIF_CASES[@]}"
    "${ECMP_CASES[@]}"
)

run_cases() {
    local target_cases=("$@")
    echo "======================================================================"
    echo " Running PTF Test Cases: ${target_cases[*]}"
    echo " DUT Thrift Server: ${DUT_IP}:9092"
    echo " Interfaces: 32 front ports (0@nic7.101 ~ 31@nic7.132)"
    echo "======================================================================"

    local sudo_prefix="sudo"
    if [ "$(id -u)" -eq 0 ]; then
        sudo_prefix=""
    elif [ ! -t 0 ]; then
        sudo_prefix="sudo -S"
    fi

    ${sudo_prefix} env PLATFORM=clx PYTHONPATH="${PTF_DIR}" ptf \
        --test-dir "${PTF_DIR}" \
        "${target_cases[@]}" \
        "${IFACE_ARGS[@]}" \
        -t "thrift_server='${DUT_IP}'"
}

usage() {
    echo "Usage: $0 [case_name | module | all | list]"
    echo ""
    echo "Examples:"
    echo "  $0 saisanity.L2SanityTest       # Run a single test case"
    echo "  $0 sairif.Ipv6MtuTest           # Run IPv6 MTU test"
    echo "  $0 l2                           # Run all passed L2/VLAN cases"
    echo "  $0 route                        # Run all passed L3 Route cases"
    echo "  $0 rif                          # Run all passed RIF cases"
    echo "  $0 neighbor                     # Run all passed Neighbor cases"
    echo "  $0 queue                        # Run all passed Queue/QoS cases"
    echo "  $0 hostif                       # Run all passed Hostif/Trap cases"
    echo "  $0 ecmp                         # Run ECMP cases"
    echo "  $0 acl                          # Run ACL cases (SrcIp/DstIp/MAC/TCP/TableType)"
    echo "  $0 all                          # Run all 31 passed test cases in regression (~7 min)"
    echo "  $0 full                         # Run ENTIRE community test suite (all 300+ cases, ~50 min)"
    echo "  $0 list                         # List all 31 supported test cases"
    exit 1
}

TARGET="$1"
shift 2>/dev/null || true

case "${TARGET}" in
    "all"|"--all"|"-all"|"-a")
        run_cases "${ALL_PASSED_CASES[@]}"
        ;;
    "full"|"everything"|"all-suite")
        run_cases
        ;;
    "l2")
        run_cases "${L2_CASES[@]}"
        ;;
    "route")
        run_cases "${ROUTE_CASES[@]}"
        ;;
    "rif")
        run_cases "${RIF_CASES[@]}"
        ;;
    "neighbor")
        run_cases "${NEIGHBOR_CASES[@]}"
        ;;
    "queue")
        run_cases "${QUEUE_CASES[@]}"
        ;;
    "hostif")
        run_cases "${HOSTIF_CASES[@]}"
        ;;
    "ecmp")
        run_cases "${ECMP_CASES[@]}"
        ;;
    "acl")
        run_cases "${ACL_CASES[@]}"
        ;;
    "list")
        echo "Supported Community PTF Test Cases (Total: ${#ALL_PASSED_CASES[@]}):"
        for c in "${ALL_PASSED_CASES[@]}"; do
            echo "  - $c"
        done
        ;;
    "")
        usage
        ;;
    *)
        # Run user specified case(s)
        run_cases "${TARGET}" "$@"
        ;;
esac
