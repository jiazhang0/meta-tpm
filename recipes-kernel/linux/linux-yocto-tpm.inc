FILESEXTRAPATHS_prepend := "${THISDIR}/linux-yocto:"

SRC_URI += " \
    ${@bb.utils.contains('MACHINE_FEATURES', 'tpm', \
                         'file://tpm.scc file://tpm.cfg', '', d)} \
"
