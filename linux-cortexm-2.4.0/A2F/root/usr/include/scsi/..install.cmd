cmd_/work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/scsi/.install := /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/scsi ./include/uapi/scsi scsi_bsg_fc.h scsi_netlink.h scsi_netlink_fc.h; /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/scsi ./include/scsi ; /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/scsi ./include/generated/uapi/scsi ; for F in ; do echo "\#include <asm-generic/$$F>" > /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/scsi/$$F; done; touch /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/scsi/.install