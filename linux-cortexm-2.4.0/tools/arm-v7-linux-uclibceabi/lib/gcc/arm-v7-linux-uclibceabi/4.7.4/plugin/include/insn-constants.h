/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define FPA_F0_REGNUM 16
#define CMP_CMN 2
#define CMP_CMP 0
#define DOM_CC_NX_OR_Y 1
#define FPA_F7_REGNUM 23
#define VFPCC_REGNUM 127
#define DOM_CC_X_OR_Y 2
#define CC_REGNUM 24
#define SP_REGNUM 13
#define R1_REGNUM 1
#define PC_REGNUM 15
#define NUM_OF_COND_CMP 4
#define R0_REGNUM 0
#define CMN_CMP 1
#define LR_REGNUM 14
#define DOM_CC_X_AND_Y 0
#define CMN_CMN 3
#define IP_REGNUM 12
#define LAST_ARM_REGNUM 15

enum unspec {
  UNSPEC_SIN = 0,
  UNPSEC_COS = 1,
  UNSPEC_PUSH_MULT = 2,
  UNSPEC_PIC_SYM = 3,
  UNSPEC_PIC_BASE = 4,
  UNSPEC_PRLG_STK = 5,
  UNSPEC_PROLOGUE_USE = 6,
  UNSPEC_CHECK_ARCH = 7,
  UNSPEC_WSHUFH = 8,
  UNSPEC_WACC = 9,
  UNSPEC_TMOVMSK = 10,
  UNSPEC_WSAD = 11,
  UNSPEC_WSADZ = 12,
  UNSPEC_WMACS = 13,
  UNSPEC_WMACU = 14,
  UNSPEC_WMACSZ = 15,
  UNSPEC_WMACUZ = 16,
  UNSPEC_CLRDI = 17,
  UNSPEC_WMADDS = 18,
  UNSPEC_WMADDU = 19,
  UNSPEC_TLS = 20,
  UNSPEC_PIC_LABEL = 21,
  UNSPEC_PIC_OFFSET = 22,
  UNSPEC_GOTSYM_OFF = 23,
  UNSPEC_THUMB1_CASESI = 24,
  UNSPEC_RBIT = 25,
  UNSPEC_SYMBOL_OFFSET = 26,
  UNSPEC_MEMORY_BARRIER = 27,
  UNSPEC_UNALIGNED_LOAD = 28,
  UNSPEC_UNALIGNED_STORE = 29,
  UNSPEC_PIC_UNIFIED = 30,
  UNSPEC_PIC_RESTORE = 31,
  UNSPEC_ASHIFT_SIGNED = 32,
  UNSPEC_ASHIFT_UNSIGNED = 33,
  UNSPEC_LOAD_COUNT = 34,
  UNSPEC_VABD = 35,
  UNSPEC_VABDL = 36,
  UNSPEC_VADD = 37,
  UNSPEC_VADDHN = 38,
  UNSPEC_VADDL = 39,
  UNSPEC_VADDW = 40,
  UNSPEC_VBSL = 41,
  UNSPEC_VCAGE = 42,
  UNSPEC_VCAGT = 43,
  UNSPEC_VCEQ = 44,
  UNSPEC_VCGE = 45,
  UNSPEC_VCGEU = 46,
  UNSPEC_VCGT = 47,
  UNSPEC_VCGTU = 48,
  UNSPEC_VCLS = 49,
  UNSPEC_VCONCAT = 50,
  UNSPEC_VCVT = 51,
  UNSPEC_VCVT_N = 52,
  UNSPEC_VEXT = 53,
  UNSPEC_VHADD = 54,
  UNSPEC_VHSUB = 55,
  UNSPEC_VLD1 = 56,
  UNSPEC_VLD1_DUP = 57,
  UNSPEC_VLD1_LANE = 58,
  UNSPEC_VLD2 = 59,
  UNSPEC_VLD2_DUP = 60,
  UNSPEC_VLD2_LANE = 61,
  UNSPEC_VLD3 = 62,
  UNSPEC_VLD3A = 63,
  UNSPEC_VLD3B = 64,
  UNSPEC_VLD3_DUP = 65,
  UNSPEC_VLD3_LANE = 66,
  UNSPEC_VLD4 = 67,
  UNSPEC_VLD4A = 68,
  UNSPEC_VLD4B = 69,
  UNSPEC_VLD4_DUP = 70,
  UNSPEC_VLD4_LANE = 71,
  UNSPEC_VMAX = 72,
  UNSPEC_VMIN = 73,
  UNSPEC_VMLA = 74,
  UNSPEC_VMLAL = 75,
  UNSPEC_VMLA_LANE = 76,
  UNSPEC_VMLAL_LANE = 77,
  UNSPEC_VMLS = 78,
  UNSPEC_VMLSL = 79,
  UNSPEC_VMLS_LANE = 80,
  UNSPEC_VMLSL_LANE = 81,
  UNSPEC_VMOVL = 82,
  UNSPEC_VMOVN = 83,
  UNSPEC_VMUL = 84,
  UNSPEC_VMULL = 85,
  UNSPEC_VMUL_LANE = 86,
  UNSPEC_VMULL_LANE = 87,
  UNSPEC_VPADAL = 88,
  UNSPEC_VPADD = 89,
  UNSPEC_VPADDL = 90,
  UNSPEC_VPMAX = 91,
  UNSPEC_VPMIN = 92,
  UNSPEC_VPSMAX = 93,
  UNSPEC_VPSMIN = 94,
  UNSPEC_VPUMAX = 95,
  UNSPEC_VPUMIN = 96,
  UNSPEC_VQABS = 97,
  UNSPEC_VQADD = 98,
  UNSPEC_VQDMLAL = 99,
  UNSPEC_VQDMLAL_LANE = 100,
  UNSPEC_VQDMLSL = 101,
  UNSPEC_VQDMLSL_LANE = 102,
  UNSPEC_VQDMULH = 103,
  UNSPEC_VQDMULH_LANE = 104,
  UNSPEC_VQDMULL = 105,
  UNSPEC_VQDMULL_LANE = 106,
  UNSPEC_VQMOVN = 107,
  UNSPEC_VQMOVUN = 108,
  UNSPEC_VQNEG = 109,
  UNSPEC_VQSHL = 110,
  UNSPEC_VQSHL_N = 111,
  UNSPEC_VQSHLU_N = 112,
  UNSPEC_VQSHRN_N = 113,
  UNSPEC_VQSHRUN_N = 114,
  UNSPEC_VQSUB = 115,
  UNSPEC_VRECPE = 116,
  UNSPEC_VRECPS = 117,
  UNSPEC_VREV16 = 118,
  UNSPEC_VREV32 = 119,
  UNSPEC_VREV64 = 120,
  UNSPEC_VRSQRTE = 121,
  UNSPEC_VRSQRTS = 122,
  UNSPEC_VSHL = 123,
  UNSPEC_VSHLL_N = 124,
  UNSPEC_VSHL_N = 125,
  UNSPEC_VSHR_N = 126,
  UNSPEC_VSHRN_N = 127,
  UNSPEC_VSLI = 128,
  UNSPEC_VSRA_N = 129,
  UNSPEC_VSRI = 130,
  UNSPEC_VST1 = 131,
  UNSPEC_VST1_LANE = 132,
  UNSPEC_VST2 = 133,
  UNSPEC_VST2_LANE = 134,
  UNSPEC_VST3 = 135,
  UNSPEC_VST3A = 136,
  UNSPEC_VST3B = 137,
  UNSPEC_VST3_LANE = 138,
  UNSPEC_VST4 = 139,
  UNSPEC_VST4A = 140,
  UNSPEC_VST4B = 141,
  UNSPEC_VST4_LANE = 142,
  UNSPEC_VSTRUCTDUMMY = 143,
  UNSPEC_VSUB = 144,
  UNSPEC_VSUBHN = 145,
  UNSPEC_VSUBL = 146,
  UNSPEC_VSUBW = 147,
  UNSPEC_VTBL = 148,
  UNSPEC_VTBX = 149,
  UNSPEC_VTRN1 = 150,
  UNSPEC_VTRN2 = 151,
  UNSPEC_VTST = 152,
  UNSPEC_VUZP1 = 153,
  UNSPEC_VUZP2 = 154,
  UNSPEC_VZIP1 = 155,
  UNSPEC_VZIP2 = 156,
  UNSPEC_MISALIGNED_ACCESS = 157,
  UNSPEC_VCLE = 158,
  UNSPEC_VCLT = 159
};
#define NUM_UNSPEC_VALUES 160
extern const char *const unspec_strings[];

enum unspecv {
  VUNSPEC_BLOCKAGE = 0,
  VUNSPEC_EPILOGUE = 1,
  VUNSPEC_THUMB1_INTERWORK = 2,
  VUNSPEC_ALIGN = 3,
  VUNSPEC_POOL_END = 4,
  VUNSPEC_POOL_1 = 5,
  VUNSPEC_POOL_2 = 6,
  VUNSPEC_POOL_4 = 7,
  VUNSPEC_POOL_8 = 8,
  VUNSPEC_POOL_16 = 9,
  VUNSPEC_TMRC = 10,
  VUNSPEC_TMCR = 11,
  VUNSPEC_ALIGN8 = 12,
  VUNSPEC_WCMP_EQ = 13,
  VUNSPEC_WCMP_GTU = 14,
  VUNSPEC_WCMP_GT = 15,
  VUNSPEC_EH_RETURN = 16,
  VUNSPEC_ATOMIC_CAS = 17,
  VUNSPEC_ATOMIC_XCHG = 18,
  VUNSPEC_ATOMIC_OP = 19,
  VUNSPEC_LL = 20,
  VUNSPEC_SC = 21
};
#define NUM_UNSPECV_VALUES 22
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */