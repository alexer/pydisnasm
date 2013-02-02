/* This file is auto-generated from insns.dat by insns.pl - don't edit it */

/* This file in included by nasm.h */

/* Instruction names */

#ifndef NASM_INSNSI_H
#define NASM_INSNSI_H 1

enum opcode {
	I_AAA,
	I_AAD,
	I_AAM,
	I_AAS,
	I_ADC,
	I_ADCX,
	I_ADD,
	I_ADDPD,
	I_ADDPS,
	I_ADDSD,
	I_ADDSS,
	I_ADDSUBPD,
	I_ADDSUBPS,
	I_ADOX,
	I_AESDEC,
	I_AESDECLAST,
	I_AESENC,
	I_AESENCLAST,
	I_AESIMC,
	I_AESKEYGENASSIST,
	I_AND,
	I_ANDN,
	I_ANDNPD,
	I_ANDNPS,
	I_ANDPD,
	I_ANDPS,
	I_ARPL,
	I_BB0_RESET,
	I_BB1_RESET,
	I_BEXTR,
	I_BLENDPD,
	I_BLENDPS,
	I_BLENDVPD,
	I_BLENDVPS,
	I_BLSI,
	I_BLSMSK,
	I_BLSR,
	I_BOUND,
	I_BSF,
	I_BSR,
	I_BSWAP,
	I_BT,
	I_BTC,
	I_BTR,
	I_BTS,
	I_BZHI,
	I_CALL,
	I_CBW,
	I_CDQ,
	I_CDQE,
	I_CLC,
	I_CLD,
	I_CLFLUSH,
	I_CLGI,
	I_CLI,
	I_CLTS,
	I_CMC,
	I_CMP,
	I_CMPEQPD,
	I_CMPEQPS,
	I_CMPEQSD,
	I_CMPEQSS,
	I_CMPLEPD,
	I_CMPLEPS,
	I_CMPLESD,
	I_CMPLESS,
	I_CMPLTPD,
	I_CMPLTPS,
	I_CMPLTSD,
	I_CMPLTSS,
	I_CMPNEQPD,
	I_CMPNEQPS,
	I_CMPNEQSD,
	I_CMPNEQSS,
	I_CMPNLEPD,
	I_CMPNLEPS,
	I_CMPNLESD,
	I_CMPNLESS,
	I_CMPNLTPD,
	I_CMPNLTPS,
	I_CMPNLTSD,
	I_CMPNLTSS,
	I_CMPORDPD,
	I_CMPORDPS,
	I_CMPORDSD,
	I_CMPORDSS,
	I_CMPPD,
	I_CMPPS,
	I_CMPSB,
	I_CMPSD,
	I_CMPSQ,
	I_CMPSS,
	I_CMPSW,
	I_CMPUNORDPD,
	I_CMPUNORDPS,
	I_CMPUNORDSD,
	I_CMPUNORDSS,
	I_CMPXCHG,
	I_CMPXCHG16B,
	I_CMPXCHG486,
	I_CMPXCHG8B,
	I_COMISD,
	I_COMISS,
	I_CPUID,
	I_CPU_READ,
	I_CPU_WRITE,
	I_CQO,
	I_CRC32,
	I_CVTDQ2PD,
	I_CVTDQ2PS,
	I_CVTPD2DQ,
	I_CVTPD2PI,
	I_CVTPD2PS,
	I_CVTPI2PD,
	I_CVTPI2PS,
	I_CVTPS2DQ,
	I_CVTPS2PD,
	I_CVTPS2PI,
	I_CVTSD2SI,
	I_CVTSD2SS,
	I_CVTSI2SD,
	I_CVTSI2SS,
	I_CVTSS2SD,
	I_CVTSS2SI,
	I_CVTTPD2DQ,
	I_CVTTPD2PI,
	I_CVTTPS2DQ,
	I_CVTTPS2PI,
	I_CVTTSD2SI,
	I_CVTTSS2SI,
	I_CWD,
	I_CWDE,
	I_DAA,
	I_DAS,
	I_DB,
	I_DD,
	I_DEC,
	I_DIV,
	I_DIVPD,
	I_DIVPS,
	I_DIVSD,
	I_DIVSS,
	I_DMINT,
	I_DO,
	I_DPPD,
	I_DPPS,
	I_DQ,
	I_DT,
	I_DW,
	I_DY,
	I_EMMS,
	I_ENTER,
	I_EQU,
	I_EXTRACTPS,
	I_EXTRQ,
	I_F2XM1,
	I_FABS,
	I_FADD,
	I_FADDP,
	I_FBLD,
	I_FBSTP,
	I_FCHS,
	I_FCLEX,
	I_FCMOVB,
	I_FCMOVBE,
	I_FCMOVE,
	I_FCMOVNB,
	I_FCMOVNBE,
	I_FCMOVNE,
	I_FCMOVNU,
	I_FCMOVU,
	I_FCOM,
	I_FCOMI,
	I_FCOMIP,
	I_FCOMP,
	I_FCOMPP,
	I_FCOS,
	I_FDECSTP,
	I_FDISI,
	I_FDIV,
	I_FDIVP,
	I_FDIVR,
	I_FDIVRP,
	I_FEMMS,
	I_FENI,
	I_FFREE,
	I_FFREEP,
	I_FIADD,
	I_FICOM,
	I_FICOMP,
	I_FIDIV,
	I_FIDIVR,
	I_FILD,
	I_FIMUL,
	I_FINCSTP,
	I_FINIT,
	I_FIST,
	I_FISTP,
	I_FISTTP,
	I_FISUB,
	I_FISUBR,
	I_FLD,
	I_FLD1,
	I_FLDCW,
	I_FLDENV,
	I_FLDL2E,
	I_FLDL2T,
	I_FLDLG2,
	I_FLDLN2,
	I_FLDPI,
	I_FLDZ,
	I_FMUL,
	I_FMULP,
	I_FNCLEX,
	I_FNDISI,
	I_FNENI,
	I_FNINIT,
	I_FNOP,
	I_FNSAVE,
	I_FNSTCW,
	I_FNSTENV,
	I_FNSTSW,
	I_FPATAN,
	I_FPREM,
	I_FPREM1,
	I_FPTAN,
	I_FRNDINT,
	I_FRSTOR,
	I_FSAVE,
	I_FSCALE,
	I_FSETPM,
	I_FSIN,
	I_FSINCOS,
	I_FSQRT,
	I_FST,
	I_FSTCW,
	I_FSTENV,
	I_FSTP,
	I_FSTSW,
	I_FSUB,
	I_FSUBP,
	I_FSUBR,
	I_FSUBRP,
	I_FTST,
	I_FUCOM,
	I_FUCOMI,
	I_FUCOMIP,
	I_FUCOMP,
	I_FUCOMPP,
	I_FWAIT,
	I_FXAM,
	I_FXCH,
	I_FXRSTOR,
	I_FXRSTOR64,
	I_FXSAVE,
	I_FXSAVE64,
	I_FXTRACT,
	I_FYL2X,
	I_FYL2XP1,
	I_GETSEC,
	I_HADDPD,
	I_HADDPS,
	I_HINT_NOP0,
	I_HINT_NOP1,
	I_HINT_NOP10,
	I_HINT_NOP11,
	I_HINT_NOP12,
	I_HINT_NOP13,
	I_HINT_NOP14,
	I_HINT_NOP15,
	I_HINT_NOP16,
	I_HINT_NOP17,
	I_HINT_NOP18,
	I_HINT_NOP19,
	I_HINT_NOP2,
	I_HINT_NOP20,
	I_HINT_NOP21,
	I_HINT_NOP22,
	I_HINT_NOP23,
	I_HINT_NOP24,
	I_HINT_NOP25,
	I_HINT_NOP26,
	I_HINT_NOP27,
	I_HINT_NOP28,
	I_HINT_NOP29,
	I_HINT_NOP3,
	I_HINT_NOP30,
	I_HINT_NOP31,
	I_HINT_NOP32,
	I_HINT_NOP33,
	I_HINT_NOP34,
	I_HINT_NOP35,
	I_HINT_NOP36,
	I_HINT_NOP37,
	I_HINT_NOP38,
	I_HINT_NOP39,
	I_HINT_NOP4,
	I_HINT_NOP40,
	I_HINT_NOP41,
	I_HINT_NOP42,
	I_HINT_NOP43,
	I_HINT_NOP44,
	I_HINT_NOP45,
	I_HINT_NOP46,
	I_HINT_NOP47,
	I_HINT_NOP48,
	I_HINT_NOP49,
	I_HINT_NOP5,
	I_HINT_NOP50,
	I_HINT_NOP51,
	I_HINT_NOP52,
	I_HINT_NOP53,
	I_HINT_NOP54,
	I_HINT_NOP55,
	I_HINT_NOP56,
	I_HINT_NOP57,
	I_HINT_NOP58,
	I_HINT_NOP59,
	I_HINT_NOP6,
	I_HINT_NOP60,
	I_HINT_NOP61,
	I_HINT_NOP62,
	I_HINT_NOP63,
	I_HINT_NOP7,
	I_HINT_NOP8,
	I_HINT_NOP9,
	I_HLT,
	I_HSUBPD,
	I_HSUBPS,
	I_IBTS,
	I_ICEBP,
	I_IDIV,
	I_IMUL,
	I_IN,
	I_INC,
	I_INCBIN,
	I_INSB,
	I_INSD,
	I_INSERTPS,
	I_INSERTQ,
	I_INSW,
	I_INT,
	I_INT01,
	I_INT03,
	I_INT1,
	I_INT3,
	I_INTO,
	I_INVD,
	I_INVEPT,
	I_INVLPG,
	I_INVLPGA,
	I_INVPCID,
	I_INVVPID,
	I_IRET,
	I_IRETD,
	I_IRETQ,
	I_IRETW,
	I_JCXZ,
	I_JECXZ,
	I_JMP,
	I_JMPE,
	I_JRCXZ,
	I_LAHF,
	I_LAR,
	I_LDDQU,
	I_LDMXCSR,
	I_LDS,
	I_LEA,
	I_LEAVE,
	I_LES,
	I_LFENCE,
	I_LFS,
	I_LGDT,
	I_LGS,
	I_LIDT,
	I_LLDT,
	I_LLWPCB,
	I_LMSW,
	I_LOADALL,
	I_LOADALL286,
	I_LODSB,
	I_LODSD,
	I_LODSQ,
	I_LODSW,
	I_LOOP,
	I_LOOPE,
	I_LOOPNE,
	I_LOOPNZ,
	I_LOOPZ,
	I_LSL,
	I_LSS,
	I_LTR,
	I_LWPINS,
	I_LWPVAL,
	I_LZCNT,
	I_MASKMOVDQU,
	I_MASKMOVQ,
	I_MAXPD,
	I_MAXPS,
	I_MAXSD,
	I_MAXSS,
	I_MFENCE,
	I_MINPD,
	I_MINPS,
	I_MINSD,
	I_MINSS,
	I_MONITOR,
	I_MONTMUL,
	I_MOV,
	I_MOVAPD,
	I_MOVAPS,
	I_MOVBE,
	I_MOVD,
	I_MOVDDUP,
	I_MOVDQ2Q,
	I_MOVDQA,
	I_MOVDQU,
	I_MOVHLPS,
	I_MOVHPD,
	I_MOVHPS,
	I_MOVLHPS,
	I_MOVLPD,
	I_MOVLPS,
	I_MOVMSKPD,
	I_MOVMSKPS,
	I_MOVNTDQ,
	I_MOVNTDQA,
	I_MOVNTI,
	I_MOVNTPD,
	I_MOVNTPS,
	I_MOVNTQ,
	I_MOVNTSD,
	I_MOVNTSS,
	I_MOVQ,
	I_MOVQ2DQ,
	I_MOVSB,
	I_MOVSD,
	I_MOVSHDUP,
	I_MOVSLDUP,
	I_MOVSQ,
	I_MOVSS,
	I_MOVSW,
	I_MOVSX,
	I_MOVSXD,
	I_MOVUPD,
	I_MOVUPS,
	I_MOVZX,
	I_MPSADBW,
	I_MUL,
	I_MULPD,
	I_MULPS,
	I_MULSD,
	I_MULSS,
	I_MULX,
	I_MWAIT,
	I_NEG,
	I_NOP,
	I_NOT,
	I_OR,
	I_ORPD,
	I_ORPS,
	I_OUT,
	I_OUTSB,
	I_OUTSD,
	I_OUTSW,
	I_PABSB,
	I_PABSD,
	I_PABSW,
	I_PACKSSDW,
	I_PACKSSWB,
	I_PACKUSDW,
	I_PACKUSWB,
	I_PADDB,
	I_PADDD,
	I_PADDQ,
	I_PADDSB,
	I_PADDSIW,
	I_PADDSW,
	I_PADDUSB,
	I_PADDUSW,
	I_PADDW,
	I_PALIGNR,
	I_PAND,
	I_PANDN,
	I_PAUSE,
	I_PAVEB,
	I_PAVGB,
	I_PAVGUSB,
	I_PAVGW,
	I_PBLENDVB,
	I_PBLENDW,
	I_PCLMULHQHQDQ,
	I_PCLMULHQLQDQ,
	I_PCLMULLQHQDQ,
	I_PCLMULLQLQDQ,
	I_PCLMULQDQ,
	I_PCMPEQB,
	I_PCMPEQD,
	I_PCMPEQQ,
	I_PCMPEQW,
	I_PCMPESTRI,
	I_PCMPESTRM,
	I_PCMPGTB,
	I_PCMPGTD,
	I_PCMPGTQ,
	I_PCMPGTW,
	I_PCMPISTRI,
	I_PCMPISTRM,
	I_PDEP,
	I_PDISTIB,
	I_PEXT,
	I_PEXTRB,
	I_PEXTRD,
	I_PEXTRQ,
	I_PEXTRW,
	I_PF2ID,
	I_PF2IW,
	I_PFACC,
	I_PFADD,
	I_PFCMPEQ,
	I_PFCMPGE,
	I_PFCMPGT,
	I_PFMAX,
	I_PFMIN,
	I_PFMUL,
	I_PFNACC,
	I_PFPNACC,
	I_PFRCP,
	I_PFRCPIT1,
	I_PFRCPIT2,
	I_PFRCPV,
	I_PFRSQIT1,
	I_PFRSQRT,
	I_PFRSQRTV,
	I_PFSUB,
	I_PFSUBR,
	I_PHADDD,
	I_PHADDSW,
	I_PHADDW,
	I_PHMINPOSUW,
	I_PHSUBD,
	I_PHSUBSW,
	I_PHSUBW,
	I_PI2FD,
	I_PI2FW,
	I_PINSRB,
	I_PINSRD,
	I_PINSRQ,
	I_PINSRW,
	I_PMACHRIW,
	I_PMADDUBSW,
	I_PMADDWD,
	I_PMAGW,
	I_PMAXSB,
	I_PMAXSD,
	I_PMAXSW,
	I_PMAXUB,
	I_PMAXUD,
	I_PMAXUW,
	I_PMINSB,
	I_PMINSD,
	I_PMINSW,
	I_PMINUB,
	I_PMINUD,
	I_PMINUW,
	I_PMOVMSKB,
	I_PMOVSXBD,
	I_PMOVSXBQ,
	I_PMOVSXBW,
	I_PMOVSXDQ,
	I_PMOVSXWD,
	I_PMOVSXWQ,
	I_PMOVZXBD,
	I_PMOVZXBQ,
	I_PMOVZXBW,
	I_PMOVZXDQ,
	I_PMOVZXWD,
	I_PMOVZXWQ,
	I_PMULDQ,
	I_PMULHRIW,
	I_PMULHRSW,
	I_PMULHRWA,
	I_PMULHRWC,
	I_PMULHUW,
	I_PMULHW,
	I_PMULLD,
	I_PMULLW,
	I_PMULUDQ,
	I_PMVGEZB,
	I_PMVLZB,
	I_PMVNZB,
	I_PMVZB,
	I_POP,
	I_POPA,
	I_POPAD,
	I_POPAW,
	I_POPCNT,
	I_POPF,
	I_POPFD,
	I_POPFQ,
	I_POPFW,
	I_POR,
	I_PREFETCH,
	I_PREFETCHNTA,
	I_PREFETCHT0,
	I_PREFETCHT1,
	I_PREFETCHT2,
	I_PREFETCHW,
	I_PSADBW,
	I_PSHUFB,
	I_PSHUFD,
	I_PSHUFHW,
	I_PSHUFLW,
	I_PSHUFW,
	I_PSIGNB,
	I_PSIGND,
	I_PSIGNW,
	I_PSLLD,
	I_PSLLDQ,
	I_PSLLQ,
	I_PSLLW,
	I_PSRAD,
	I_PSRAW,
	I_PSRLD,
	I_PSRLDQ,
	I_PSRLQ,
	I_PSRLW,
	I_PSUBB,
	I_PSUBD,
	I_PSUBQ,
	I_PSUBSB,
	I_PSUBSIW,
	I_PSUBSW,
	I_PSUBUSB,
	I_PSUBUSW,
	I_PSUBW,
	I_PSWAPD,
	I_PTEST,
	I_PUNPCKHBW,
	I_PUNPCKHDQ,
	I_PUNPCKHQDQ,
	I_PUNPCKHWD,
	I_PUNPCKLBW,
	I_PUNPCKLDQ,
	I_PUNPCKLQDQ,
	I_PUNPCKLWD,
	I_PUSH,
	I_PUSHA,
	I_PUSHAD,
	I_PUSHAW,
	I_PUSHF,
	I_PUSHFD,
	I_PUSHFQ,
	I_PUSHFW,
	I_PXOR,
	I_RCL,
	I_RCPPS,
	I_RCPSS,
	I_RCR,
	I_RDFSBASE,
	I_RDGSBASE,
	I_RDM,
	I_RDMSR,
	I_RDPMC,
	I_RDRAND,
	I_RDSEED,
	I_RDSHR,
	I_RDTSC,
	I_RDTSCP,
	I_RESB,
	I_RESD,
	I_RESO,
	I_RESQ,
	I_REST,
	I_RESW,
	I_RESY,
	I_RET,
	I_RETF,
	I_RETN,
	I_ROL,
	I_ROR,
	I_RORX,
	I_ROUNDPD,
	I_ROUNDPS,
	I_ROUNDSD,
	I_ROUNDSS,
	I_RSDC,
	I_RSLDT,
	I_RSM,
	I_RSQRTPS,
	I_RSQRTSS,
	I_RSTS,
	I_SAHF,
	I_SAL,
	I_SALC,
	I_SAR,
	I_SARX,
	I_SBB,
	I_SCASB,
	I_SCASD,
	I_SCASQ,
	I_SCASW,
	I_SFENCE,
	I_SGDT,
	I_SHL,
	I_SHLD,
	I_SHLX,
	I_SHR,
	I_SHRD,
	I_SHRX,
	I_SHUFPD,
	I_SHUFPS,
	I_SIDT,
	I_SKINIT,
	I_SLDT,
	I_SLWPCB,
	I_SMI,
	I_SMINT,
	I_SMINTOLD,
	I_SMSW,
	I_SQRTPD,
	I_SQRTPS,
	I_SQRTSD,
	I_SQRTSS,
	I_STC,
	I_STD,
	I_STGI,
	I_STI,
	I_STMXCSR,
	I_STOSB,
	I_STOSD,
	I_STOSQ,
	I_STOSW,
	I_STR,
	I_SUB,
	I_SUBPD,
	I_SUBPS,
	I_SUBSD,
	I_SUBSS,
	I_SVDC,
	I_SVLDT,
	I_SVTS,
	I_SWAPGS,
	I_SYSCALL,
	I_SYSENTER,
	I_SYSEXIT,
	I_SYSRET,
	I_TEST,
	I_TZCNT,
	I_UCOMISD,
	I_UCOMISS,
	I_UD0,
	I_UD1,
	I_UD2,
	I_UD2A,
	I_UD2B,
	I_UMOV,
	I_UNPCKHPD,
	I_UNPCKHPS,
	I_UNPCKLPD,
	I_UNPCKLPS,
	I_VADDPD,
	I_VADDPS,
	I_VADDSD,
	I_VADDSS,
	I_VADDSUBPD,
	I_VADDSUBPS,
	I_VAESDEC,
	I_VAESDECLAST,
	I_VAESENC,
	I_VAESENCLAST,
	I_VAESIMC,
	I_VAESKEYGENASSIST,
	I_VANDNPD,
	I_VANDNPS,
	I_VANDPD,
	I_VANDPS,
	I_VBLENDPD,
	I_VBLENDPS,
	I_VBLENDVPD,
	I_VBLENDVPS,
	I_VBROADCASTF128,
	I_VBROADCASTI128,
	I_VBROADCASTSD,
	I_VBROADCASTSS,
	I_VCMPEQPD,
	I_VCMPEQPS,
	I_VCMPEQSD,
	I_VCMPEQSS,
	I_VCMPEQ_OSPD,
	I_VCMPEQ_OSPS,
	I_VCMPEQ_OSSD,
	I_VCMPEQ_OSSS,
	I_VCMPEQ_UQPD,
	I_VCMPEQ_UQPS,
	I_VCMPEQ_UQSD,
	I_VCMPEQ_UQSS,
	I_VCMPEQ_USPD,
	I_VCMPEQ_USPS,
	I_VCMPEQ_USSD,
	I_VCMPEQ_USSS,
	I_VCMPFALSEPD,
	I_VCMPFALSEPS,
	I_VCMPFALSESD,
	I_VCMPFALSESS,
	I_VCMPFALSE_OQPD,
	I_VCMPFALSE_OQPS,
	I_VCMPFALSE_OQSD,
	I_VCMPFALSE_OQSS,
	I_VCMPFALSE_OSPD,
	I_VCMPFALSE_OSPS,
	I_VCMPFALSE_OSSD,
	I_VCMPFALSE_OSSS,
	I_VCMPGEPD,
	I_VCMPGEPS,
	I_VCMPGESD,
	I_VCMPGESS,
	I_VCMPGE_OQPD,
	I_VCMPGE_OQPS,
	I_VCMPGE_OQSD,
	I_VCMPGE_OQSS,
	I_VCMPGE_OSPD,
	I_VCMPGE_OSPS,
	I_VCMPGE_OSSD,
	I_VCMPGE_OSSS,
	I_VCMPGTPD,
	I_VCMPGTPS,
	I_VCMPGTSD,
	I_VCMPGTSS,
	I_VCMPGT_OQPD,
	I_VCMPGT_OQPS,
	I_VCMPGT_OQSD,
	I_VCMPGT_OQSS,
	I_VCMPGT_OSPD,
	I_VCMPGT_OSPS,
	I_VCMPGT_OSSD,
	I_VCMPGT_OSSS,
	I_VCMPLEPD,
	I_VCMPLEPS,
	I_VCMPLESD,
	I_VCMPLESS,
	I_VCMPLE_OQPD,
	I_VCMPLE_OQPS,
	I_VCMPLE_OQSD,
	I_VCMPLE_OQSS,
	I_VCMPLE_OSPD,
	I_VCMPLE_OSPS,
	I_VCMPLE_OSSD,
	I_VCMPLE_OSSS,
	I_VCMPLTPD,
	I_VCMPLTPS,
	I_VCMPLTSD,
	I_VCMPLTSS,
	I_VCMPLT_OQPD,
	I_VCMPLT_OQPS,
	I_VCMPLT_OQSD,
	I_VCMPLT_OQSS,
	I_VCMPLT_OSPD,
	I_VCMPLT_OSPS,
	I_VCMPLT_OSSD,
	I_VCMPLT_OSSS,
	I_VCMPNEQPD,
	I_VCMPNEQPS,
	I_VCMPNEQSD,
	I_VCMPNEQSS,
	I_VCMPNEQ_OQPD,
	I_VCMPNEQ_OQPS,
	I_VCMPNEQ_OQSD,
	I_VCMPNEQ_OQSS,
	I_VCMPNEQ_OSPD,
	I_VCMPNEQ_OSPS,
	I_VCMPNEQ_OSSD,
	I_VCMPNEQ_OSSS,
	I_VCMPNEQ_UQPD,
	I_VCMPNEQ_UQPS,
	I_VCMPNEQ_UQSD,
	I_VCMPNEQ_UQSS,
	I_VCMPNEQ_USPD,
	I_VCMPNEQ_USPS,
	I_VCMPNEQ_USSD,
	I_VCMPNEQ_USSS,
	I_VCMPNGEPD,
	I_VCMPNGEPS,
	I_VCMPNGESD,
	I_VCMPNGESS,
	I_VCMPNGE_UQPD,
	I_VCMPNGE_UQPS,
	I_VCMPNGE_UQSD,
	I_VCMPNGE_UQSS,
	I_VCMPNGE_USPD,
	I_VCMPNGE_USPS,
	I_VCMPNGE_USSD,
	I_VCMPNGE_USSS,
	I_VCMPNGTPD,
	I_VCMPNGTPS,
	I_VCMPNGTSD,
	I_VCMPNGTSS,
	I_VCMPNGT_UQPD,
	I_VCMPNGT_UQPS,
	I_VCMPNGT_UQSD,
	I_VCMPNGT_UQSS,
	I_VCMPNGT_USPD,
	I_VCMPNGT_USPS,
	I_VCMPNGT_USSD,
	I_VCMPNGT_USSS,
	I_VCMPNLEPD,
	I_VCMPNLEPS,
	I_VCMPNLESD,
	I_VCMPNLESS,
	I_VCMPNLE_UQPD,
	I_VCMPNLE_UQPS,
	I_VCMPNLE_UQSD,
	I_VCMPNLE_UQSS,
	I_VCMPNLE_USPD,
	I_VCMPNLE_USPS,
	I_VCMPNLE_USSD,
	I_VCMPNLE_USSS,
	I_VCMPNLTPD,
	I_VCMPNLTPS,
	I_VCMPNLTSD,
	I_VCMPNLTSS,
	I_VCMPNLT_UQPD,
	I_VCMPNLT_UQPS,
	I_VCMPNLT_UQSD,
	I_VCMPNLT_UQSS,
	I_VCMPNLT_USPD,
	I_VCMPNLT_USPS,
	I_VCMPNLT_USSD,
	I_VCMPNLT_USSS,
	I_VCMPORDPD,
	I_VCMPORDPS,
	I_VCMPORDSD,
	I_VCMPORDSS,
	I_VCMPORD_QPD,
	I_VCMPORD_QPS,
	I_VCMPORD_QSD,
	I_VCMPORD_QSS,
	I_VCMPORD_SPD,
	I_VCMPORD_SPS,
	I_VCMPORD_SSD,
	I_VCMPORD_SSS,
	I_VCMPPD,
	I_VCMPPS,
	I_VCMPSD,
	I_VCMPSS,
	I_VCMPTRUEPD,
	I_VCMPTRUEPS,
	I_VCMPTRUESD,
	I_VCMPTRUESS,
	I_VCMPTRUE_UQPD,
	I_VCMPTRUE_UQPS,
	I_VCMPTRUE_UQSD,
	I_VCMPTRUE_UQSS,
	I_VCMPTRUE_USPD,
	I_VCMPTRUE_USPS,
	I_VCMPTRUE_USSD,
	I_VCMPTRUE_USSS,
	I_VCMPUNORDPD,
	I_VCMPUNORDPS,
	I_VCMPUNORDSD,
	I_VCMPUNORDSS,
	I_VCMPUNORD_QPD,
	I_VCMPUNORD_QPS,
	I_VCMPUNORD_QSD,
	I_VCMPUNORD_QSS,
	I_VCMPUNORD_SPD,
	I_VCMPUNORD_SPS,
	I_VCMPUNORD_SSD,
	I_VCMPUNORD_SSS,
	I_VCOMISD,
	I_VCOMISS,
	I_VCVTDQ2PD,
	I_VCVTDQ2PS,
	I_VCVTPD2DQ,
	I_VCVTPD2PS,
	I_VCVTPH2PS,
	I_VCVTPS2DQ,
	I_VCVTPS2PD,
	I_VCVTPS2PH,
	I_VCVTSD2SI,
	I_VCVTSD2SS,
	I_VCVTSI2SD,
	I_VCVTSI2SS,
	I_VCVTSS2SD,
	I_VCVTSS2SI,
	I_VCVTTPD2DQ,
	I_VCVTTPS2DQ,
	I_VCVTTSD2SI,
	I_VCVTTSS2SI,
	I_VDIVPD,
	I_VDIVPS,
	I_VDIVSD,
	I_VDIVSS,
	I_VDPPD,
	I_VDPPS,
	I_VERR,
	I_VERW,
	I_VEXTRACTF128,
	I_VEXTRACTI128,
	I_VEXTRACTPS,
	I_VFMADD123PD,
	I_VFMADD123PS,
	I_VFMADD123SD,
	I_VFMADD123SS,
	I_VFMADD132PD,
	I_VFMADD132PS,
	I_VFMADD132SD,
	I_VFMADD132SS,
	I_VFMADD213PD,
	I_VFMADD213PS,
	I_VFMADD213SD,
	I_VFMADD213SS,
	I_VFMADD231PD,
	I_VFMADD231PS,
	I_VFMADD231SD,
	I_VFMADD231SS,
	I_VFMADD312PD,
	I_VFMADD312PS,
	I_VFMADD312SD,
	I_VFMADD312SS,
	I_VFMADD321PD,
	I_VFMADD321PS,
	I_VFMADD321SD,
	I_VFMADD321SS,
	I_VFMADDPD,
	I_VFMADDPS,
	I_VFMADDSD,
	I_VFMADDSS,
	I_VFMADDSUB123PD,
	I_VFMADDSUB123PS,
	I_VFMADDSUB132PD,
	I_VFMADDSUB132PS,
	I_VFMADDSUB213PD,
	I_VFMADDSUB213PS,
	I_VFMADDSUB231PD,
	I_VFMADDSUB231PS,
	I_VFMADDSUB312PD,
	I_VFMADDSUB312PS,
	I_VFMADDSUB321PD,
	I_VFMADDSUB321PS,
	I_VFMADDSUBPD,
	I_VFMADDSUBPS,
	I_VFMSUB123PD,
	I_VFMSUB123PS,
	I_VFMSUB123SD,
	I_VFMSUB123SS,
	I_VFMSUB132PD,
	I_VFMSUB132PS,
	I_VFMSUB132SD,
	I_VFMSUB132SS,
	I_VFMSUB213PD,
	I_VFMSUB213PS,
	I_VFMSUB213SD,
	I_VFMSUB213SS,
	I_VFMSUB231PD,
	I_VFMSUB231PS,
	I_VFMSUB231SD,
	I_VFMSUB231SS,
	I_VFMSUB312PD,
	I_VFMSUB312PS,
	I_VFMSUB312SD,
	I_VFMSUB312SS,
	I_VFMSUB321PD,
	I_VFMSUB321PS,
	I_VFMSUB321SD,
	I_VFMSUB321SS,
	I_VFMSUBADD123PD,
	I_VFMSUBADD123PS,
	I_VFMSUBADD132PD,
	I_VFMSUBADD132PS,
	I_VFMSUBADD213PD,
	I_VFMSUBADD213PS,
	I_VFMSUBADD231PD,
	I_VFMSUBADD231PS,
	I_VFMSUBADD312PD,
	I_VFMSUBADD312PS,
	I_VFMSUBADD321PD,
	I_VFMSUBADD321PS,
	I_VFMSUBADDPD,
	I_VFMSUBADDPS,
	I_VFMSUBPD,
	I_VFMSUBPS,
	I_VFMSUBSD,
	I_VFMSUBSS,
	I_VFNMADD123PD,
	I_VFNMADD123PS,
	I_VFNMADD123SD,
	I_VFNMADD123SS,
	I_VFNMADD132PD,
	I_VFNMADD132PS,
	I_VFNMADD132SD,
	I_VFNMADD132SS,
	I_VFNMADD213PD,
	I_VFNMADD213PS,
	I_VFNMADD213SD,
	I_VFNMADD213SS,
	I_VFNMADD231PD,
	I_VFNMADD231PS,
	I_VFNMADD231SD,
	I_VFNMADD231SS,
	I_VFNMADD312PD,
	I_VFNMADD312PS,
	I_VFNMADD312SD,
	I_VFNMADD312SS,
	I_VFNMADD321PD,
	I_VFNMADD321PS,
	I_VFNMADD321SD,
	I_VFNMADD321SS,
	I_VFNMADDPD,
	I_VFNMADDPS,
	I_VFNMADDSD,
	I_VFNMADDSS,
	I_VFNMSUB123PD,
	I_VFNMSUB123PS,
	I_VFNMSUB123SD,
	I_VFNMSUB123SS,
	I_VFNMSUB132PD,
	I_VFNMSUB132PS,
	I_VFNMSUB132SD,
	I_VFNMSUB132SS,
	I_VFNMSUB213PD,
	I_VFNMSUB213PS,
	I_VFNMSUB213SD,
	I_VFNMSUB213SS,
	I_VFNMSUB231PD,
	I_VFNMSUB231PS,
	I_VFNMSUB231SD,
	I_VFNMSUB231SS,
	I_VFNMSUB312PD,
	I_VFNMSUB312PS,
	I_VFNMSUB312SD,
	I_VFNMSUB312SS,
	I_VFNMSUB321PD,
	I_VFNMSUB321PS,
	I_VFNMSUB321SD,
	I_VFNMSUB321SS,
	I_VFNMSUBPD,
	I_VFNMSUBPS,
	I_VFNMSUBSD,
	I_VFNMSUBSS,
	I_VFRCZPD,
	I_VFRCZPS,
	I_VFRCZSD,
	I_VFRCZSS,
	I_VGATHERDPD,
	I_VGATHERDPS,
	I_VGATHERQPD,
	I_VGATHERQPS,
	I_VHADDPD,
	I_VHADDPS,
	I_VHSUBPD,
	I_VHSUBPS,
	I_VINSERTF128,
	I_VINSERTI128,
	I_VINSERTPS,
	I_VLDDQU,
	I_VLDMXCSR,
	I_VLDQQU,
	I_VMASKMOVDQU,
	I_VMASKMOVPD,
	I_VMASKMOVPS,
	I_VMAXPD,
	I_VMAXPS,
	I_VMAXSD,
	I_VMAXSS,
	I_VMCALL,
	I_VMCLEAR,
	I_VMFUNC,
	I_VMINPD,
	I_VMINPS,
	I_VMINSD,
	I_VMINSS,
	I_VMLAUNCH,
	I_VMLOAD,
	I_VMMCALL,
	I_VMOVAPD,
	I_VMOVAPS,
	I_VMOVD,
	I_VMOVDDUP,
	I_VMOVDQA,
	I_VMOVDQU,
	I_VMOVHLPS,
	I_VMOVHPD,
	I_VMOVHPS,
	I_VMOVLHPS,
	I_VMOVLPD,
	I_VMOVLPS,
	I_VMOVMSKPD,
	I_VMOVMSKPS,
	I_VMOVNTDQ,
	I_VMOVNTDQA,
	I_VMOVNTPD,
	I_VMOVNTPS,
	I_VMOVNTQQ,
	I_VMOVQ,
	I_VMOVQQA,
	I_VMOVQQU,
	I_VMOVSD,
	I_VMOVSHDUP,
	I_VMOVSLDUP,
	I_VMOVSS,
	I_VMOVUPD,
	I_VMOVUPS,
	I_VMPSADBW,
	I_VMPTRLD,
	I_VMPTRST,
	I_VMREAD,
	I_VMRESUME,
	I_VMRUN,
	I_VMSAVE,
	I_VMULPD,
	I_VMULPS,
	I_VMULSD,
	I_VMULSS,
	I_VMWRITE,
	I_VMXOFF,
	I_VMXON,
	I_VORPD,
	I_VORPS,
	I_VPABSB,
	I_VPABSD,
	I_VPABSW,
	I_VPACKSSDW,
	I_VPACKSSWB,
	I_VPACKUSDW,
	I_VPACKUSWB,
	I_VPADDB,
	I_VPADDD,
	I_VPADDQ,
	I_VPADDSB,
	I_VPADDSW,
	I_VPADDUSB,
	I_VPADDUSW,
	I_VPADDW,
	I_VPALIGNR,
	I_VPAND,
	I_VPANDN,
	I_VPAVGB,
	I_VPAVGW,
	I_VPBLENDD,
	I_VPBLENDVB,
	I_VPBLENDW,
	I_VPBROADCASTB,
	I_VPBROADCASTD,
	I_VPBROADCASTQ,
	I_VPBROADCASTW,
	I_VPCLMULHQHQDQ,
	I_VPCLMULHQLQDQ,
	I_VPCLMULLQHQDQ,
	I_VPCLMULLQLQDQ,
	I_VPCLMULQDQ,
	I_VPCMOV,
	I_VPCMPEQB,
	I_VPCMPEQD,
	I_VPCMPEQQ,
	I_VPCMPEQW,
	I_VPCMPESTRI,
	I_VPCMPESTRM,
	I_VPCMPGTB,
	I_VPCMPGTD,
	I_VPCMPGTQ,
	I_VPCMPGTW,
	I_VPCMPISTRI,
	I_VPCMPISTRM,
	I_VPCOMB,
	I_VPCOMD,
	I_VPCOMQ,
	I_VPCOMUB,
	I_VPCOMUD,
	I_VPCOMUQ,
	I_VPCOMUW,
	I_VPCOMW,
	I_VPERM2F128,
	I_VPERM2I128,
	I_VPERMD,
	I_VPERMILPD,
	I_VPERMILPS,
	I_VPERMPD,
	I_VPERMPS,
	I_VPERMQ,
	I_VPEXTRB,
	I_VPEXTRD,
	I_VPEXTRQ,
	I_VPEXTRW,
	I_VPGATHERDD,
	I_VPGATHERDQ,
	I_VPGATHERQD,
	I_VPGATHERQQ,
	I_VPHADDBD,
	I_VPHADDBQ,
	I_VPHADDBW,
	I_VPHADDD,
	I_VPHADDDQ,
	I_VPHADDSW,
	I_VPHADDUBD,
	I_VPHADDUBQ,
	I_VPHADDUBW,
	I_VPHADDUDQ,
	I_VPHADDUWD,
	I_VPHADDUWQ,
	I_VPHADDW,
	I_VPHADDWD,
	I_VPHADDWQ,
	I_VPHMINPOSUW,
	I_VPHSUBBW,
	I_VPHSUBD,
	I_VPHSUBDQ,
	I_VPHSUBSW,
	I_VPHSUBW,
	I_VPHSUBWD,
	I_VPINSRB,
	I_VPINSRD,
	I_VPINSRQ,
	I_VPINSRW,
	I_VPMACSDD,
	I_VPMACSDQH,
	I_VPMACSDQL,
	I_VPMACSSDD,
	I_VPMACSSDQH,
	I_VPMACSSDQL,
	I_VPMACSSWD,
	I_VPMACSSWW,
	I_VPMACSWD,
	I_VPMACSWW,
	I_VPMADCSSWD,
	I_VPMADCSWD,
	I_VPMADDUBSW,
	I_VPMADDWD,
	I_VPMASKMOVD,
	I_VPMASKMOVQ,
	I_VPMAXSB,
	I_VPMAXSD,
	I_VPMAXSW,
	I_VPMAXUB,
	I_VPMAXUD,
	I_VPMAXUW,
	I_VPMINSB,
	I_VPMINSD,
	I_VPMINSW,
	I_VPMINUB,
	I_VPMINUD,
	I_VPMINUW,
	I_VPMOVMSKB,
	I_VPMOVSXBD,
	I_VPMOVSXBQ,
	I_VPMOVSXBW,
	I_VPMOVSXDQ,
	I_VPMOVSXWD,
	I_VPMOVSXWQ,
	I_VPMOVZXBD,
	I_VPMOVZXBQ,
	I_VPMOVZXBW,
	I_VPMOVZXDQ,
	I_VPMOVZXWD,
	I_VPMOVZXWQ,
	I_VPMULDQ,
	I_VPMULHRSW,
	I_VPMULHUW,
	I_VPMULHW,
	I_VPMULLD,
	I_VPMULLW,
	I_VPMULUDQ,
	I_VPOR,
	I_VPPERM,
	I_VPROTB,
	I_VPROTD,
	I_VPROTQ,
	I_VPROTW,
	I_VPSADBW,
	I_VPSHAB,
	I_VPSHAD,
	I_VPSHAQ,
	I_VPSHAW,
	I_VPSHLB,
	I_VPSHLD,
	I_VPSHLQ,
	I_VPSHLW,
	I_VPSHUFB,
	I_VPSHUFD,
	I_VPSHUFHW,
	I_VPSHUFLW,
	I_VPSIGNB,
	I_VPSIGND,
	I_VPSIGNW,
	I_VPSLLD,
	I_VPSLLDQ,
	I_VPSLLQ,
	I_VPSLLVD,
	I_VPSLLVQ,
	I_VPSLLW,
	I_VPSRAD,
	I_VPSRAVD,
	I_VPSRAW,
	I_VPSRLD,
	I_VPSRLDQ,
	I_VPSRLQ,
	I_VPSRLVD,
	I_VPSRLVQ,
	I_VPSRLW,
	I_VPSUBB,
	I_VPSUBD,
	I_VPSUBQ,
	I_VPSUBSB,
	I_VPSUBSW,
	I_VPSUBUSB,
	I_VPSUBUSW,
	I_VPSUBW,
	I_VPTEST,
	I_VPUNPCKHBW,
	I_VPUNPCKHDQ,
	I_VPUNPCKHQDQ,
	I_VPUNPCKHWD,
	I_VPUNPCKLBW,
	I_VPUNPCKLDQ,
	I_VPUNPCKLQDQ,
	I_VPUNPCKLWD,
	I_VPXOR,
	I_VRCPPS,
	I_VRCPSS,
	I_VROUNDPD,
	I_VROUNDPS,
	I_VROUNDSD,
	I_VROUNDSS,
	I_VRSQRTPS,
	I_VRSQRTSS,
	I_VSHUFPD,
	I_VSHUFPS,
	I_VSQRTPD,
	I_VSQRTPS,
	I_VSQRTSD,
	I_VSQRTSS,
	I_VSTMXCSR,
	I_VSUBPD,
	I_VSUBPS,
	I_VSUBSD,
	I_VSUBSS,
	I_VTESTPD,
	I_VTESTPS,
	I_VUCOMISD,
	I_VUCOMISS,
	I_VUNPCKHPD,
	I_VUNPCKHPS,
	I_VUNPCKLPD,
	I_VUNPCKLPS,
	I_VXORPD,
	I_VXORPS,
	I_VZEROALL,
	I_VZEROUPPER,
	I_WBINVD,
	I_WRFSBASE,
	I_WRGSBASE,
	I_WRMSR,
	I_WRSHR,
	I_XABORT,
	I_XADD,
	I_XBEGIN,
	I_XBTS,
	I_XCHG,
	I_XCRYPTCBC,
	I_XCRYPTCFB,
	I_XCRYPTCTR,
	I_XCRYPTECB,
	I_XCRYPTOFB,
	I_XEND,
	I_XGETBV,
	I_XLAT,
	I_XLATB,
	I_XOR,
	I_XORPD,
	I_XORPS,
	I_XRSTOR,
	I_XRSTOR64,
	I_XSAVE,
	I_XSAVE64,
	I_XSAVEOPT,
	I_XSAVEOPT64,
	I_XSETBV,
	I_XSHA1,
	I_XSHA256,
	I_XSTORE,
	I_XTEST,
	I_CMOVcc,
	I_Jcc,
	I_SETcc,
	I_none = -1
};

#define MAX_INSLEN 16
#define FIRST_COND_OPCODE I_CMOVcc

#endif /* NASM_INSNSI_H */
