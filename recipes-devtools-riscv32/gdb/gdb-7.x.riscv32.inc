LICENSE = "GPLv3"
LIC_FILES_CHKSUM = "file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552 \
            file://COPYING3;md5=d32239bcb673463ab874e80d47fae504 \
            file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6 \
            file://COPYING.LIB;md5=9f604d8a4f8e74f4f5140845a21b6674"

SRC_URI[md5sum] = "8f8ced422fe462a00e0135a643544f17"
SRC_URI[sha256sum] = "d282508cb7df0cb8b2cf659032ce1bede7b5725796e3ac90f3cd9d65844a65f2"

COMPATIBLE_MACHINE = "riscv32"
PV = "7.x.riscv32"

SRCREV="b0946801b50b74d7b383b85e71173626d72847da"
SRC_URI = "git://github.com/riscv/riscv-binutils-gdb.git;protocol=https;branch=__archive__"

S = "${WORKDIR}/git"

EXTRA_OECONF_remove_riscv32 = "--disable-multilib"

