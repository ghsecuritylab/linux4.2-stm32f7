cmd_/home/build/fdpic/install/sysroot/usr/include/linux/hdlc/.install := /bin/sh /home/build/fdpic/scratch/kernel/scripts/headers_install.sh /home/build/fdpic/install/sysroot/usr/include/linux/hdlc /home/build/fdpic/scratch/kernel/include/uapi/linux/hdlc ioctl.h; /bin/sh /home/build/fdpic/scratch/kernel/scripts/headers_install.sh /home/build/fdpic/install/sysroot/usr/include/linux/hdlc /home/build/fdpic/scratch/kernel/include/linux/hdlc ; /bin/sh /home/build/fdpic/scratch/kernel/scripts/headers_install.sh /home/build/fdpic/install/sysroot/usr/include/linux/hdlc /home/build/fdpic/build/kernelheader/include/generated/uapi/linux/hdlc ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/build/fdpic/install/sysroot/usr/include/linux/hdlc/$$F; done; touch /home/build/fdpic/install/sysroot/usr/include/linux/hdlc/.install