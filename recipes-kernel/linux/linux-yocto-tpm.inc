FILESEXTRAPATHS_prepend := "${THISDIR}/linux-yocto-tpm:"

SRC_URI += " \
    ${@base_contains('MACHINE_FEATURES', 'tpm', 'file://tpm.scc', '', d)} \
    ${@base_contains('MACHINE_FEATURES', 'tpm', 'file://tpm.cfg', '', d)} \    
"

