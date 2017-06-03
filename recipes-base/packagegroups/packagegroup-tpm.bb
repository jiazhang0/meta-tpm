DESCRIPTION = "Basic packagegroup for TCG TSS and utilities that use it."
LICENSE = "MIT"
PR = "r0"

inherit packagegroup

RDEPENDS_${PN} = "\
    trousers \
    tpm-tools \
    openssl-tpm-engine \
"

RRECOMMENDS_${PN} = "\
    kernel-module-tpm-tis \
    kernel-module-tpm-atmel \
    kernel-module-tpm-infineon \
"
