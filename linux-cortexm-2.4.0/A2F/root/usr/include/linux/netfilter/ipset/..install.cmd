cmd_/work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/netfilter/ipset/.install := /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/netfilter/ipset ./include/uapi/linux/netfilter/ipset ip_set.h ip_set_bitmap.h ip_set_hash.h ip_set_list.h; /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/netfilter/ipset ./include/linux/netfilter/ipset ; /bin/sh scripts/headers_install.sh /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/netfilter/ipset ./include/generated/uapi/linux/netfilter/ipset ; for F in ; do echo "\#include <asm-generic/$$F>" > /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/netfilter/ipset/$$F; done; touch /work/psl/SF/release/linux-cortexm-2.4.0/A2F/root/usr//include/linux/netfilter/ipset/.install