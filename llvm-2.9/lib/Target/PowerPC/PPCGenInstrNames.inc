//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace PPC {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    ADD4	= 14,
    ADD8	= 15,
    ADDC	= 16,
    ADDC8	= 17,
    ADDE	= 18,
    ADDE8	= 19,
    ADDI	= 20,
    ADDI8	= 21,
    ADDIC	= 22,
    ADDIC8	= 23,
    ADDICo	= 24,
    ADDIS	= 25,
    ADDIS8	= 26,
    ADDME	= 27,
    ADDME8	= 28,
    ADDZE	= 29,
    ADDZE8	= 30,
    ADJCALLSTACKDOWN	= 31,
    ADJCALLSTACKUP	= 32,
    AND	= 33,
    AND8	= 34,
    ANDC	= 35,
    ANDC8	= 36,
    ANDISo	= 37,
    ANDISo8	= 38,
    ANDIo	= 39,
    ANDIo8	= 40,
    ATOMIC_CMP_SWAP_I16	= 41,
    ATOMIC_CMP_SWAP_I32	= 42,
    ATOMIC_CMP_SWAP_I64	= 43,
    ATOMIC_CMP_SWAP_I8	= 44,
    ATOMIC_LOAD_ADD_I16	= 45,
    ATOMIC_LOAD_ADD_I32	= 46,
    ATOMIC_LOAD_ADD_I64	= 47,
    ATOMIC_LOAD_ADD_I8	= 48,
    ATOMIC_LOAD_AND_I16	= 49,
    ATOMIC_LOAD_AND_I32	= 50,
    ATOMIC_LOAD_AND_I64	= 51,
    ATOMIC_LOAD_AND_I8	= 52,
    ATOMIC_LOAD_NAND_I16	= 53,
    ATOMIC_LOAD_NAND_I32	= 54,
    ATOMIC_LOAD_NAND_I64	= 55,
    ATOMIC_LOAD_NAND_I8	= 56,
    ATOMIC_LOAD_OR_I16	= 57,
    ATOMIC_LOAD_OR_I32	= 58,
    ATOMIC_LOAD_OR_I64	= 59,
    ATOMIC_LOAD_OR_I8	= 60,
    ATOMIC_LOAD_SUB_I16	= 61,
    ATOMIC_LOAD_SUB_I32	= 62,
    ATOMIC_LOAD_SUB_I64	= 63,
    ATOMIC_LOAD_SUB_I8	= 64,
    ATOMIC_LOAD_XOR_I16	= 65,
    ATOMIC_LOAD_XOR_I32	= 66,
    ATOMIC_LOAD_XOR_I64	= 67,
    ATOMIC_LOAD_XOR_I8	= 68,
    ATOMIC_SWAP_I16	= 69,
    ATOMIC_SWAP_I32	= 70,
    ATOMIC_SWAP_I64	= 71,
    ATOMIC_SWAP_I8	= 72,
    B	= 73,
    BCC	= 74,
    BCTR	= 75,
    BCTRL8_Darwin	= 76,
    BCTRL8_ELF	= 77,
    BCTRL_Darwin	= 78,
    BCTRL_SVR4	= 79,
    BL8_Darwin	= 80,
    BL8_ELF	= 81,
    BLA8_Darwin	= 82,
    BLA8_ELF	= 83,
    BLA_Darwin	= 84,
    BLA_SVR4	= 85,
    BLR	= 86,
    BL_Darwin	= 87,
    BL_SVR4	= 88,
    CMPD	= 89,
    CMPDI	= 90,
    CMPLD	= 91,
    CMPLDI	= 92,
    CMPLW	= 93,
    CMPLWI	= 94,
    CMPW	= 95,
    CMPWI	= 96,
    CNTLZD	= 97,
    CNTLZW	= 98,
    CREQV	= 99,
    CROR	= 100,
    CRSET	= 101,
    DCBA	= 102,
    DCBF	= 103,
    DCBI	= 104,
    DCBST	= 105,
    DCBT	= 106,
    DCBTST	= 107,
    DCBZ	= 108,
    DCBZL	= 109,
    DIVD	= 110,
    DIVDU	= 111,
    DIVW	= 112,
    DIVWU	= 113,
    DSS	= 114,
    DSSALL	= 115,
    DST	= 116,
    DST64	= 117,
    DSTST	= 118,
    DSTST64	= 119,
    DSTSTT	= 120,
    DSTSTT64	= 121,
    DSTT	= 122,
    DSTT64	= 123,
    DYNALLOC	= 124,
    DYNALLOC8	= 125,
    EQV	= 126,
    EQV8	= 127,
    EXTSB	= 128,
    EXTSB8	= 129,
    EXTSH	= 130,
    EXTSH8	= 131,
    EXTSW	= 132,
    EXTSW_32	= 133,
    EXTSW_32_64	= 134,
    FABSD	= 135,
    FABSS	= 136,
    FADD	= 137,
    FADDS	= 138,
    FADDrtz	= 139,
    FCFID	= 140,
    FCMPUD	= 141,
    FCMPUS	= 142,
    FCTIDZ	= 143,
    FCTIWZ	= 144,
    FDIV	= 145,
    FDIVS	= 146,
    FMADD	= 147,
    FMADDS	= 148,
    FMR	= 149,
    FMSUB	= 150,
    FMSUBS	= 151,
    FMUL	= 152,
    FMULS	= 153,
    FNABSD	= 154,
    FNABSS	= 155,
    FNEGD	= 156,
    FNEGS	= 157,
    FNMADD	= 158,
    FNMADDS	= 159,
    FNMSUB	= 160,
    FNMSUBS	= 161,
    FRSP	= 162,
    FSELD	= 163,
    FSELS	= 164,
    FSQRT	= 165,
    FSQRTS	= 166,
    FSUB	= 167,
    FSUBS	= 168,
    LA	= 169,
    LBZ	= 170,
    LBZ8	= 171,
    LBZU	= 172,
    LBZU8	= 173,
    LBZX	= 174,
    LBZX8	= 175,
    LD	= 176,
    LDARX	= 177,
    LDU	= 178,
    LDX	= 179,
    LDinto_toc	= 180,
    LDtoc	= 181,
    LDtoc_restore	= 182,
    LFD	= 183,
    LFDU	= 184,
    LFDX	= 185,
    LFS	= 186,
    LFSU	= 187,
    LFSX	= 188,
    LHA	= 189,
    LHA8	= 190,
    LHAU	= 191,
    LHAU8	= 192,
    LHAX	= 193,
    LHAX8	= 194,
    LHBRX	= 195,
    LHZ	= 196,
    LHZ8	= 197,
    LHZU	= 198,
    LHZU8	= 199,
    LHZX	= 200,
    LHZX8	= 201,
    LI	= 202,
    LI8	= 203,
    LIS	= 204,
    LIS8	= 205,
    LVEBX	= 206,
    LVEHX	= 207,
    LVEWX	= 208,
    LVSL	= 209,
    LVSR	= 210,
    LVX	= 211,
    LVXL	= 212,
    LWA	= 213,
    LWARX	= 214,
    LWAX	= 215,
    LWBRX	= 216,
    LWZ	= 217,
    LWZ8	= 218,
    LWZU	= 219,
    LWZU8	= 220,
    LWZX	= 221,
    LWZX8	= 222,
    MCRF	= 223,
    MFCR	= 224,
    MFCRpseud	= 225,
    MFCTR	= 226,
    MFCTR8	= 227,
    MFFS	= 228,
    MFLR	= 229,
    MFLR8	= 230,
    MFOCRF	= 231,
    MFVRSAVE	= 232,
    MFVSCR	= 233,
    MTCRF	= 234,
    MTCTR	= 235,
    MTCTR8	= 236,
    MTFSB0	= 237,
    MTFSB1	= 238,
    MTFSF	= 239,
    MTLR	= 240,
    MTLR8	= 241,
    MTVRSAVE	= 242,
    MTVSCR	= 243,
    MULHD	= 244,
    MULHDU	= 245,
    MULHW	= 246,
    MULHWU	= 247,
    MULLD	= 248,
    MULLI	= 249,
    MULLW	= 250,
    MovePCtoLR	= 251,
    MovePCtoLR8	= 252,
    NAND	= 253,
    NAND8	= 254,
    NEG	= 255,
    NEG8	= 256,
    NOP	= 257,
    NOR	= 258,
    NOR8	= 259,
    OR	= 260,
    OR4To8	= 261,
    OR8	= 262,
    OR8To4	= 263,
    ORC	= 264,
    ORC8	= 265,
    ORI	= 266,
    ORI8	= 267,
    ORIS	= 268,
    ORIS8	= 269,
    RLDCL	= 270,
    RLDICL	= 271,
    RLDICR	= 272,
    RLDIMI	= 273,
    RLWIMI	= 274,
    RLWINM	= 275,
    RLWINMo	= 276,
    RLWNM	= 277,
    SELECT_CC_F4	= 278,
    SELECT_CC_F8	= 279,
    SELECT_CC_I4	= 280,
    SELECT_CC_I8	= 281,
    SELECT_CC_VRRC	= 282,
    SLD	= 283,
    SLW	= 284,
    SPILL_CR	= 285,
    SRAD	= 286,
    SRADI	= 287,
    SRAW	= 288,
    SRAWI	= 289,
    SRD	= 290,
    SRW	= 291,
    STB	= 292,
    STB8	= 293,
    STBU	= 294,
    STBU8	= 295,
    STBX	= 296,
    STBX8	= 297,
    STD	= 298,
    STDCX	= 299,
    STDU	= 300,
    STDUX	= 301,
    STDX	= 302,
    STDX_32	= 303,
    STD_32	= 304,
    STFD	= 305,
    STFDU	= 306,
    STFDX	= 307,
    STFIWX	= 308,
    STFS	= 309,
    STFSU	= 310,
    STFSX	= 311,
    STH	= 312,
    STH8	= 313,
    STHBRX	= 314,
    STHU	= 315,
    STHU8	= 316,
    STHX	= 317,
    STHX8	= 318,
    STVEBX	= 319,
    STVEHX	= 320,
    STVEWX	= 321,
    STVX	= 322,
    STVXL	= 323,
    STW	= 324,
    STW8	= 325,
    STWBRX	= 326,
    STWCX	= 327,
    STWU	= 328,
    STWUX	= 329,
    STWX	= 330,
    STWX8	= 331,
    SUBF	= 332,
    SUBF8	= 333,
    SUBFC	= 334,
    SUBFC8	= 335,
    SUBFE	= 336,
    SUBFE8	= 337,
    SUBFIC	= 338,
    SUBFIC8	= 339,
    SUBFME	= 340,
    SUBFME8	= 341,
    SUBFZE	= 342,
    SUBFZE8	= 343,
    SYNC	= 344,
    TAILB	= 345,
    TAILB8	= 346,
    TAILBA	= 347,
    TAILBA8	= 348,
    TAILBCTR	= 349,
    TAILBCTR8	= 350,
    TCRETURNai	= 351,
    TCRETURNai8	= 352,
    TCRETURNdi	= 353,
    TCRETURNdi8	= 354,
    TCRETURNri	= 355,
    TCRETURNri8	= 356,
    TRAP	= 357,
    UPDATE_VRSAVE	= 358,
    VADDCUW	= 359,
    VADDFP	= 360,
    VADDSBS	= 361,
    VADDSHS	= 362,
    VADDSWS	= 363,
    VADDUBM	= 364,
    VADDUBS	= 365,
    VADDUHM	= 366,
    VADDUHS	= 367,
    VADDUWM	= 368,
    VADDUWS	= 369,
    VAND	= 370,
    VANDC	= 371,
    VAVGSB	= 372,
    VAVGSH	= 373,
    VAVGSW	= 374,
    VAVGUB	= 375,
    VAVGUH	= 376,
    VAVGUW	= 377,
    VCFSX	= 378,
    VCFUX	= 379,
    VCMPBFP	= 380,
    VCMPBFPo	= 381,
    VCMPEQFP	= 382,
    VCMPEQFPo	= 383,
    VCMPEQUB	= 384,
    VCMPEQUBo	= 385,
    VCMPEQUH	= 386,
    VCMPEQUHo	= 387,
    VCMPEQUW	= 388,
    VCMPEQUWo	= 389,
    VCMPGEFP	= 390,
    VCMPGEFPo	= 391,
    VCMPGTFP	= 392,
    VCMPGTFPo	= 393,
    VCMPGTSB	= 394,
    VCMPGTSBo	= 395,
    VCMPGTSH	= 396,
    VCMPGTSHo	= 397,
    VCMPGTSW	= 398,
    VCMPGTSWo	= 399,
    VCMPGTUB	= 400,
    VCMPGTUBo	= 401,
    VCMPGTUH	= 402,
    VCMPGTUHo	= 403,
    VCMPGTUW	= 404,
    VCMPGTUWo	= 405,
    VCTSXS	= 406,
    VCTUXS	= 407,
    VEXPTEFP	= 408,
    VLOGEFP	= 409,
    VMADDFP	= 410,
    VMAXFP	= 411,
    VMAXSB	= 412,
    VMAXSH	= 413,
    VMAXSW	= 414,
    VMAXUB	= 415,
    VMAXUH	= 416,
    VMAXUW	= 417,
    VMHADDSHS	= 418,
    VMHRADDSHS	= 419,
    VMINFP	= 420,
    VMINSB	= 421,
    VMINSH	= 422,
    VMINSW	= 423,
    VMINUB	= 424,
    VMINUH	= 425,
    VMINUW	= 426,
    VMLADDUHM	= 427,
    VMRGHB	= 428,
    VMRGHH	= 429,
    VMRGHW	= 430,
    VMRGLB	= 431,
    VMRGLH	= 432,
    VMRGLW	= 433,
    VMSUMMBM	= 434,
    VMSUMSHM	= 435,
    VMSUMSHS	= 436,
    VMSUMUBM	= 437,
    VMSUMUHM	= 438,
    VMSUMUHS	= 439,
    VMULESB	= 440,
    VMULESH	= 441,
    VMULEUB	= 442,
    VMULEUH	= 443,
    VMULOSB	= 444,
    VMULOSH	= 445,
    VMULOUB	= 446,
    VMULOUH	= 447,
    VNMSUBFP	= 448,
    VNOR	= 449,
    VOR	= 450,
    VPERM	= 451,
    VPKPX	= 452,
    VPKSHSS	= 453,
    VPKSHUS	= 454,
    VPKSWSS	= 455,
    VPKSWUS	= 456,
    VPKUHUM	= 457,
    VPKUHUS	= 458,
    VPKUWUM	= 459,
    VPKUWUS	= 460,
    VREFP	= 461,
    VRFIM	= 462,
    VRFIN	= 463,
    VRFIP	= 464,
    VRFIZ	= 465,
    VRLB	= 466,
    VRLH	= 467,
    VRLW	= 468,
    VRSQRTEFP	= 469,
    VSEL	= 470,
    VSL	= 471,
    VSLB	= 472,
    VSLDOI	= 473,
    VSLH	= 474,
    VSLO	= 475,
    VSLW	= 476,
    VSPLTB	= 477,
    VSPLTH	= 478,
    VSPLTISB	= 479,
    VSPLTISH	= 480,
    VSPLTISW	= 481,
    VSPLTW	= 482,
    VSR	= 483,
    VSRAB	= 484,
    VSRAH	= 485,
    VSRAW	= 486,
    VSRB	= 487,
    VSRH	= 488,
    VSRO	= 489,
    VSRW	= 490,
    VSUBCUW	= 491,
    VSUBFP	= 492,
    VSUBSBS	= 493,
    VSUBSHS	= 494,
    VSUBSWS	= 495,
    VSUBUBM	= 496,
    VSUBUBS	= 497,
    VSUBUHM	= 498,
    VSUBUHS	= 499,
    VSUBUWM	= 500,
    VSUBUWS	= 501,
    VSUM2SWS	= 502,
    VSUM4SBS	= 503,
    VSUM4SHS	= 504,
    VSUM4UBS	= 505,
    VSUMSWS	= 506,
    VUPKHPX	= 507,
    VUPKHSB	= 508,
    VUPKHSH	= 509,
    VUPKLPX	= 510,
    VUPKLSB	= 511,
    VUPKLSH	= 512,
    VXOR	= 513,
    V_SET0	= 514,
    XOR	= 515,
    XOR8	= 516,
    XORI	= 517,
    XORI8	= 518,
    XORIS	= 519,
    XORIS8	= 520,
    INSTRUCTION_LIST_END = 521
  };
}
} // End llvm namespace 
