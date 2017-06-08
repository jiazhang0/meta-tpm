FILESEXTRAPATHS_prepend := "${THISDIR}/linux-yocto-tpm:"

SRC_URI += " \
    ${@bb.utils.contains('MACHINE_FEATURES', 'tpm', 'file://tpm.scc', '', d)} \
    ${@bb.utils.contains('MACHINE_FEATURES', 'tpm', 'file://tpm.cfg', '', d)} \
"
