cmd_/work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/nfsd/.install := /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/nfsd ./include/uapi/linux/nfsd cld.h debug.h export.h nfsfh.h stats.h; /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/nfsd ./include/linux/nfsd ; /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/nfsd ./include/generated/uapi/linux/nfsd ; for F in ; do echo "\#include <asm-generic/$$F>" > /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/nfsd/$$F; done; touch /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/nfsd/.install