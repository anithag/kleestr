//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace BF {
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
    ABORT	= 14,
    ADD	= 15,
    ADD16	= 16,
    ADD_RND20	= 17,
    ADDimm7	= 18,
    ADDpp	= 19,
    ADDpp_imm7	= 20,
    ADJCALLSTACKDOWN	= 21,
    ADJCALLSTACKUP	= 22,
    ALIGN16	= 23,
    ALIGN24	= 24,
    ALIGN8	= 25,
    AND	= 26,
    BITCLR	= 27,
    BITSET	= 28,
    BITTGL	= 29,
    BITTST	= 30,
    CALLa	= 31,
    CALLp	= 32,
    CLI	= 33,
    CSYNC	= 34,
    DISALGNEXCPT	= 35,
    EMUEXCPT	= 36,
    EXCPT	= 37,
    IDLE	= 38,
    JUMPa	= 39,
    JUMPcc	= 40,
    JUMPp	= 41,
    LINK	= 42,
    LOAD16fi	= 43,
    LOAD16i	= 44,
    LOAD16i_d16	= 45,
    LOAD16pi	= 46,
    LOAD16s32p_dec	= 47,
    LOAD16s32p_inc	= 48,
    LOAD16s32p_post	= 49,
    LOAD16z32p_dec	= 50,
    LOAD16z32p_inc	= 51,
    LOAD16z32p_post	= 52,
    LOAD32fi	= 53,
    LOAD32fp_nimm7m4	= 54,
    LOAD32i	= 55,
    LOAD32i_dec	= 56,
    LOAD32i_inc	= 57,
    LOAD32i_post	= 58,
    LOAD32imm	= 59,
    LOAD32p	= 60,
    LOAD32p_16s	= 61,
    LOAD32p_16z	= 62,
    LOAD32p_8s	= 63,
    LOAD32p_8z	= 64,
    LOAD32p_dec	= 65,
    LOAD32p_imm16_8s	= 66,
    LOAD32p_imm16_8z	= 67,
    LOAD32p_imm17m2_16s	= 68,
    LOAD32p_imm17m2_16z	= 69,
    LOAD32p_imm18m4	= 70,
    LOAD32p_inc	= 71,
    LOAD32p_post	= 72,
    LOAD32p_uimm5m2_16s	= 73,
    LOAD32p_uimm5m2_16z	= 74,
    LOAD32p_uimm6m4	= 75,
    LOAD32sym	= 76,
    LOAD8fi	= 77,
    LOAD8s32p_dec	= 78,
    LOAD8s32p_inc	= 79,
    LOAD8z32p_dec	= 80,
    LOAD8z32p_inc	= 81,
    LOADhi_dec	= 82,
    LOADhi_inc	= 83,
    LOADhp_post	= 84,
    LOADimm16	= 85,
    LOADimm7	= 86,
    LOADuimm16	= 87,
    MNOP	= 88,
    MOVE	= 89,
    MOVECC_nz	= 90,
    MOVECC_zext	= 91,
    MOVENCC_z	= 92,
    MOVE_cc_ac0	= 93,
    MOVE_ccncc	= 94,
    MOVE_ncccc	= 95,
    MOVEcc	= 96,
    MOVEsext	= 97,
    MOVEsext8	= 98,
    MOVEzext	= 99,
    MOVEzext8	= 100,
    MUL16	= 101,
    MUL32	= 102,
    MULHS16	= 103,
    MULhh32s	= 104,
    MULhh32u	= 105,
    NBITTST	= 106,
    NEG	= 107,
    NOP	= 108,
    NOT	= 109,
    ONES	= 110,
    OR	= 111,
    OR_ac0_cc	= 112,
    POP	= 113,
    PUSH	= 114,
    RAISE	= 115,
    RTS	= 116,
    SETEQdd	= 117,
    SETEQpp	= 118,
    SETEQri	= 119,
    SETEQri_not	= 120,
    SETLEdd	= 121,
    SETLEpp	= 122,
    SETLEri	= 123,
    SETLEri_not	= 124,
    SETLTdd	= 125,
    SETLTpp	= 126,
    SETLTri	= 127,
    SETLTri_not	= 128,
    SETNEdd	= 129,
    SETULEdd	= 130,
    SETULEpp	= 131,
    SETULEri	= 132,
    SETULEri_not	= 133,
    SETULTdd	= 134,
    SETULTpp	= 135,
    SETULTri	= 136,
    SETULTri_not	= 137,
    SLA16r	= 138,
    SLAr16	= 139,
    SLL16i	= 140,
    SLL16r	= 141,
    SLLi	= 142,
    SLLr	= 143,
    SLLr16	= 144,
    SRA16i	= 145,
    SRAi	= 146,
    SRAr	= 147,
    SRL16i	= 148,
    SRLi	= 149,
    SRLr	= 150,
    SSYNC	= 151,
    STI	= 152,
    STORE16fi	= 153,
    STORE16i_dec	= 154,
    STORE16i_inc	= 155,
    STORE16p_post	= 156,
    STORE16pi	= 157,
    STORE32fi	= 158,
    STORE32fp_nimm7m4	= 159,
    STORE32i	= 160,
    STORE32i_dec	= 161,
    STORE32i_inc	= 162,
    STORE32i_post	= 163,
    STORE32p	= 164,
    STORE32p_dec	= 165,
    STORE32p_imm18m4	= 166,
    STORE32p_inc	= 167,
    STORE32p_post	= 168,
    STORE32p_uimm6m4	= 169,
    STORE8fi	= 170,
    STORE8p	= 171,
    STORE8p_dec	= 172,
    STORE8p_imm16	= 173,
    STORE8p_inc	= 174,
    SUB	= 175,
    SUB16	= 176,
    UNLINK	= 177,
    XOR	= 178,
    INSTRUCTION_LIST_END = 179
  };
}
} // End llvm namespace 