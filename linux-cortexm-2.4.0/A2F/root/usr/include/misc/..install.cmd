cmd_/work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/misc/.install := /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/misc ./include/uapi/misc cxl.h; /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/misc ./include/misc ; /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/misc ./include/generated/uapi/misc ; for F in ; do echo "\#include <asm-generic/$$F>" > /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/misc/$$F; done; touch /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/misc/.install