//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the PPC target
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*94 cases */, 40,  TARGET_VAL(ISD::MEMBARRIER),// ->44
/*4*/       OPC_RecordNode,   // #0 = 'membarrier' chained node
/*5*/       OPC_MoveChild, 1,
/*7*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10*/      OPC_CheckType, MVT::i32,
/*12*/      OPC_MoveParent,
/*13*/      OPC_MoveChild, 2,
/*15*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18*/      OPC_MoveParent,
/*19*/      OPC_MoveChild, 3,
/*21*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*24*/      OPC_MoveParent,
/*25*/      OPC_MoveChild, 4,
/*27*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*30*/      OPC_MoveParent,
/*31*/      OPC_MoveChild, 5,
/*33*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36*/      OPC_MoveParent,
/*37*/      OPC_EmitMergeInputChains1_0,
/*38*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (membarrier (imm:i32), (imm:i32), (imm:i32), (imm:i32), (imm:i32)) - Complexity = 18
            // Dst: (SYNC)
          /*SwitchOpcode*/ 73|128,4/*585*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->633
/*48*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*49*/      OPC_MoveChild, 1,
/*51*/      OPC_Scope, 17, /*->70*/ // 21 children in Scope
/*53*/        OPC_CheckInteger, 70|128,2/*326*/, 
/*56*/        OPC_MoveParent,
/*57*/        OPC_RecordChild2, // #1 = $dst
/*58*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*61*/        OPC_EmitMergeInputChains1_0,
/*62*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 326:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*70*/      /*Scope*/ 17, /*->88*/
/*71*/        OPC_CheckInteger, 71|128,2/*327*/, 
/*74*/        OPC_MoveParent,
/*75*/        OPC_RecordChild2, // #1 = $dst
/*76*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*79*/        OPC_EmitMergeInputChains1_0,
/*80*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 327:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*88*/      /*Scope*/ 17, /*->106*/
/*89*/        OPC_CheckInteger, 72|128,2/*328*/, 
/*92*/        OPC_MoveParent,
/*93*/        OPC_RecordChild2, // #1 = $dst
/*94*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*97*/        OPC_EmitMergeInputChains1_0,
/*98*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 328:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*106*/     /*Scope*/ 17, /*->124*/
/*107*/       OPC_CheckInteger, 73|128,2/*329*/, 
/*110*/       OPC_MoveParent,
/*111*/       OPC_RecordChild2, // #1 = $dst
/*112*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*115*/       OPC_EmitMergeInputChains1_0,
/*116*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 329:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*124*/     /*Scope*/ 17, /*->142*/
/*125*/       OPC_CheckInteger, 74|128,2/*330*/, 
/*128*/       OPC_MoveParent,
/*129*/       OPC_RecordChild2, // #1 = $dst
/*130*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*133*/       OPC_EmitMergeInputChains1_0,
/*134*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 330:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*142*/     /*Scope*/ 17, /*->160*/
/*143*/       OPC_CheckInteger, 75|128,2/*331*/, 
/*146*/       OPC_MoveParent,
/*147*/       OPC_RecordChild2, // #1 = $dst
/*148*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*151*/       OPC_EmitMergeInputChains1_0,
/*152*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 331:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*160*/     /*Scope*/ 17, /*->178*/
/*161*/       OPC_CheckInteger, 76|128,2/*332*/, 
/*164*/       OPC_MoveParent,
/*165*/       OPC_RecordChild2, // #1 = $dst
/*166*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*169*/       OPC_EmitMergeInputChains1_0,
/*170*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 332:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*178*/     /*Scope*/ 17, /*->196*/
/*179*/       OPC_CheckInteger, 77|128,2/*333*/, 
/*182*/       OPC_MoveParent,
/*183*/       OPC_RecordChild2, // #1 = $dst
/*184*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*187*/       OPC_EmitMergeInputChains1_0,
/*188*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 333:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*196*/     /*Scope*/ 19, /*->216*/
/*197*/       OPC_CheckInteger, 66|128,1/*194*/, 
/*200*/       OPC_MoveParent,
/*201*/       OPC_RecordChild2, // #1 = $rS
/*202*/       OPC_RecordChild3, // #2 = $dst
/*203*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*206*/       OPC_EmitMergeInputChains1_0,
/*207*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 194:iPTR, VRRC:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX VRRC:v16i8:$rS, xoaddr:iPTR:$dst)
/*216*/     /*Scope*/ 19, /*->236*/
/*217*/       OPC_CheckInteger, 67|128,1/*195*/, 
/*220*/       OPC_MoveParent,
/*221*/       OPC_RecordChild2, // #1 = $rS
/*222*/       OPC_RecordChild3, // #2 = $dst
/*223*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*226*/       OPC_EmitMergeInputChains1_0,
/*227*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 195:iPTR, VRRC:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX VRRC:v8i16:$rS, xoaddr:iPTR:$dst)
/*236*/     /*Scope*/ 19, /*->256*/
/*237*/       OPC_CheckInteger, 68|128,1/*196*/, 
/*240*/       OPC_MoveParent,
/*241*/       OPC_RecordChild2, // #1 = $rS
/*242*/       OPC_RecordChild3, // #2 = $dst
/*243*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*246*/       OPC_EmitMergeInputChains1_0,
/*247*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 196:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*256*/     /*Scope*/ 19, /*->276*/
/*257*/       OPC_CheckInteger, 69|128,1/*197*/, 
/*260*/       OPC_MoveParent,
/*261*/       OPC_RecordChild2, // #1 = $rS
/*262*/       OPC_RecordChild3, // #2 = $dst
/*263*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*266*/       OPC_EmitMergeInputChains1_0,
/*267*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 197:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*276*/     /*Scope*/ 19, /*->296*/
/*277*/       OPC_CheckInteger, 70|128,1/*198*/, 
/*280*/       OPC_MoveParent,
/*281*/       OPC_RecordChild2, // #1 = $rS
/*282*/       OPC_RecordChild3, // #2 = $dst
/*283*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*286*/       OPC_EmitMergeInputChains1_0,
/*287*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 198:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*296*/     /*Scope*/ 33, /*->330*/
/*297*/       OPC_CheckInteger, 51|128,1/*179*/, 
/*300*/       OPC_MoveParent,
/*301*/       OPC_RecordChild2, // #1 = $STRM
/*302*/       OPC_MoveChild, 2,
/*304*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*307*/       OPC_MoveParent,
/*308*/       OPC_EmitMergeInputChains1_0,
/*309*/       OPC_EmitInteger, MVT::i32, 0, 
/*312*/       OPC_EmitConvertToTarget, 1,
/*314*/       OPC_EmitInteger, MVT::i32, 0, 
/*317*/       OPC_EmitInteger, MVT::i32, 0, 
/*320*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 179:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*330*/     /*Scope*/ 61, /*->392*/
/*331*/       OPC_CheckInteger, 53|128,1/*181*/, 
/*334*/       OPC_MoveParent,
/*335*/       OPC_RecordChild2, // #1 = $rA
/*336*/       OPC_Scope, 26, /*->364*/ // 2 children in Scope
/*338*/         OPC_CheckChild2Type, MVT::i32,
/*340*/         OPC_RecordChild3, // #2 = $rB
/*341*/         OPC_RecordChild4, // #3 = $STRM
/*342*/         OPC_MoveChild, 4,
/*344*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*347*/         OPC_MoveParent,
/*348*/         OPC_EmitMergeInputChains1_0,
/*349*/         OPC_EmitInteger, MVT::i32, 0, 
/*352*/         OPC_EmitConvertToTarget, 3,
/*354*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 181:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*364*/       /*Scope*/ 26, /*->391*/
/*365*/         OPC_CheckChild2Type, MVT::i64,
/*367*/         OPC_RecordChild3, // #2 = $rB
/*368*/         OPC_RecordChild4, // #3 = $STRM
/*369*/         OPC_MoveChild, 4,
/*371*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*374*/         OPC_MoveParent,
/*375*/         OPC_EmitMergeInputChains1_0,
/*376*/         OPC_EmitInteger, MVT::i32, 0, 
/*379*/         OPC_EmitConvertToTarget, 3,
/*381*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 181:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*391*/       0, /*End of Scope*/
/*392*/     /*Scope*/ 61, /*->454*/
/*393*/       OPC_CheckInteger, 56|128,1/*184*/, 
/*396*/       OPC_MoveParent,
/*397*/       OPC_RecordChild2, // #1 = $rA
/*398*/       OPC_Scope, 26, /*->426*/ // 2 children in Scope
/*400*/         OPC_CheckChild2Type, MVT::i32,
/*402*/         OPC_RecordChild3, // #2 = $rB
/*403*/         OPC_RecordChild4, // #3 = $STRM
/*404*/         OPC_MoveChild, 4,
/*406*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*409*/         OPC_MoveParent,
/*410*/         OPC_EmitMergeInputChains1_0,
/*411*/         OPC_EmitInteger, MVT::i32, 1, 
/*414*/         OPC_EmitConvertToTarget, 3,
/*416*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 184:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*426*/       /*Scope*/ 26, /*->453*/
/*427*/         OPC_CheckChild2Type, MVT::i64,
/*429*/         OPC_RecordChild3, // #2 = $rB
/*430*/         OPC_RecordChild4, // #3 = $STRM
/*431*/         OPC_MoveChild, 4,
/*433*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*436*/         OPC_MoveParent,
/*437*/         OPC_EmitMergeInputChains1_0,
/*438*/         OPC_EmitInteger, MVT::i32, 1, 
/*441*/         OPC_EmitConvertToTarget, 3,
/*443*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 184:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*453*/       0, /*End of Scope*/
/*454*/     /*Scope*/ 61, /*->516*/
/*455*/       OPC_CheckInteger, 54|128,1/*182*/, 
/*458*/       OPC_MoveParent,
/*459*/       OPC_RecordChild2, // #1 = $rA
/*460*/       OPC_Scope, 26, /*->488*/ // 2 children in Scope
/*462*/         OPC_CheckChild2Type, MVT::i32,
/*464*/         OPC_RecordChild3, // #2 = $rB
/*465*/         OPC_RecordChild4, // #3 = $STRM
/*466*/         OPC_MoveChild, 4,
/*468*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*471*/         OPC_MoveParent,
/*472*/         OPC_EmitMergeInputChains1_0,
/*473*/         OPC_EmitInteger, MVT::i32, 0, 
/*476*/         OPC_EmitConvertToTarget, 3,
/*478*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 182:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*488*/       /*Scope*/ 26, /*->515*/
/*489*/         OPC_CheckChild2Type, MVT::i64,
/*491*/         OPC_RecordChild3, // #2 = $rB
/*492*/         OPC_RecordChild4, // #3 = $STRM
/*493*/         OPC_MoveChild, 4,
/*495*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*498*/         OPC_MoveParent,
/*499*/         OPC_EmitMergeInputChains1_0,
/*500*/         OPC_EmitInteger, MVT::i32, 0, 
/*503*/         OPC_EmitConvertToTarget, 3,
/*505*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 182:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*515*/       0, /*End of Scope*/
/*516*/     /*Scope*/ 61, /*->578*/
/*517*/       OPC_CheckInteger, 55|128,1/*183*/, 
/*520*/       OPC_MoveParent,
/*521*/       OPC_RecordChild2, // #1 = $rA
/*522*/       OPC_Scope, 26, /*->550*/ // 2 children in Scope
/*524*/         OPC_CheckChild2Type, MVT::i32,
/*526*/         OPC_RecordChild3, // #2 = $rB
/*527*/         OPC_RecordChild4, // #3 = $STRM
/*528*/         OPC_MoveChild, 4,
/*530*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*533*/         OPC_MoveParent,
/*534*/         OPC_EmitMergeInputChains1_0,
/*535*/         OPC_EmitInteger, MVT::i32, 1, 
/*538*/         OPC_EmitConvertToTarget, 3,
/*540*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 183:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*550*/       /*Scope*/ 26, /*->577*/
/*551*/         OPC_CheckChild2Type, MVT::i64,
/*553*/         OPC_RecordChild3, // #2 = $rB
/*554*/         OPC_RecordChild4, // #3 = $STRM
/*555*/         OPC_MoveChild, 4,
/*557*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*560*/         OPC_MoveParent,
/*561*/         OPC_EmitMergeInputChains1_0,
/*562*/         OPC_EmitInteger, MVT::i32, 1, 
/*565*/         OPC_EmitConvertToTarget, 3,
/*567*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 183:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*577*/       0, /*End of Scope*/
/*578*/     /*Scope*/ 11, /*->590*/
/*579*/       OPC_CheckInteger, 78|128,2/*334*/, 
/*582*/       OPC_MoveParent,
/*583*/       OPC_EmitMergeInputChains1_0,
/*584*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 334:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*590*/     /*Scope*/ 13, /*->604*/
/*591*/       OPC_CheckInteger, 65|128,1/*193*/, 
/*594*/       OPC_MoveParent,
/*595*/       OPC_RecordChild2, // #1 = $vB
/*596*/       OPC_EmitMergeInputChains1_0,
/*597*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 193:iPTR, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR VRRC:v4i32:$vB)
/*604*/     /*Scope*/ 27, /*->632*/
/*605*/       OPC_CheckInteger, 52|128,1/*180*/, 
/*608*/       OPC_MoveParent,
/*609*/       OPC_EmitMergeInputChains1_0,
/*610*/       OPC_EmitInteger, MVT::i32, 1, 
/*613*/       OPC_EmitInteger, MVT::i32, 0, 
/*616*/       OPC_EmitInteger, MVT::i32, 0, 
/*619*/       OPC_EmitInteger, MVT::i32, 0, 
/*622*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 180:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*632*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 32|128,4/*544*/,  TARGET_VAL(ISD::ADD),// ->1181
/*637*/     OPC_Scope, 49|128,1/*177*/, /*->817*/ // 3 children in Scope
/*640*/       OPC_RecordChild0, // #0 = $rA
/*641*/       OPC_MoveChild, 1,
/*643*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->671
/*647*/         OPC_RecordChild0, // #1 = $sym
/*648*/         OPC_MoveChild, 0,
/*650*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*653*/         OPC_MoveParent,
/*654*/         OPC_MoveChild, 1,
/*656*/         OPC_CheckInteger, 0, 
/*658*/         OPC_MoveParent,
/*659*/         OPC_MoveParent,
/*660*/         OPC_CheckType, MVT::i32,
/*662*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->816
/*675*/         OPC_RecordChild0, // #1 = $g
/*676*/         OPC_MoveChild, 0,
/*678*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->713
/*682*/           OPC_MoveParent,
/*683*/           OPC_MoveChild, 1,
/*685*/           OPC_CheckInteger, 0, 
/*687*/           OPC_MoveParent,
/*688*/           OPC_MoveParent,
/*689*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->701
/*692*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->712
/*703*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->747
/*716*/           OPC_MoveParent,
/*717*/           OPC_MoveChild, 1,
/*719*/           OPC_CheckInteger, 0, 
/*721*/           OPC_MoveParent,
/*722*/           OPC_MoveParent,
/*723*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->735
/*726*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->746
/*737*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->781
/*750*/           OPC_MoveParent,
/*751*/           OPC_MoveChild, 1,
/*753*/           OPC_CheckInteger, 0, 
/*755*/           OPC_MoveParent,
/*756*/           OPC_MoveParent,
/*757*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->769
/*760*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->780
/*771*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->815
/*784*/           OPC_MoveParent,
/*785*/           OPC_MoveChild, 1,
/*787*/           OPC_CheckInteger, 0, 
/*789*/           OPC_MoveParent,
/*790*/           OPC_MoveParent,
/*791*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->803
/*794*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->814
/*805*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*817*/     /*Scope*/ 53|128,1/*181*/, /*->1000*/
/*819*/       OPC_MoveChild, 0,
/*821*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->850
/*825*/         OPC_RecordChild0, // #0 = $sym
/*826*/         OPC_MoveChild, 0,
/*828*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*831*/         OPC_MoveParent,
/*832*/         OPC_MoveChild, 1,
/*834*/         OPC_CheckInteger, 0, 
/*836*/         OPC_MoveParent,
/*837*/         OPC_MoveParent,
/*838*/         OPC_RecordChild1, // #1 = $rA
/*839*/         OPC_CheckType, MVT::i32,
/*841*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), GPRC:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->999
/*854*/         OPC_RecordChild0, // #0 = $g
/*855*/         OPC_MoveChild, 0,
/*857*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->893
/*861*/           OPC_MoveParent,
/*862*/           OPC_MoveChild, 1,
/*864*/           OPC_CheckInteger, 0, 
/*866*/           OPC_MoveParent,
/*867*/           OPC_MoveParent,
/*868*/           OPC_RecordChild1, // #1 = $in
/*869*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->881
/*872*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->892
/*883*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->928
/*896*/           OPC_MoveParent,
/*897*/           OPC_MoveChild, 1,
/*899*/           OPC_CheckInteger, 0, 
/*901*/           OPC_MoveParent,
/*902*/           OPC_MoveParent,
/*903*/           OPC_RecordChild1, // #1 = $in
/*904*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->916
/*907*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->927
/*918*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->963
/*931*/           OPC_MoveParent,
/*932*/           OPC_MoveChild, 1,
/*934*/           OPC_CheckInteger, 0, 
/*936*/           OPC_MoveParent,
/*937*/           OPC_MoveParent,
/*938*/           OPC_RecordChild1, // #1 = $in
/*939*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->951
/*942*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->962
/*953*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->998
/*966*/           OPC_MoveParent,
/*967*/           OPC_MoveChild, 1,
/*969*/           OPC_CheckInteger, 0, 
/*971*/           OPC_MoveParent,
/*972*/           OPC_MoveParent,
/*973*/           OPC_RecordChild1, // #1 = $in
/*974*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->986
/*977*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->997
/*988*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1000*/    /*Scope*/ 50|128,1/*178*/, /*->1180*/
/*1002*/      OPC_RecordChild0, // #0 = $rA
/*1003*/      OPC_RecordChild1, // #1 = $imm
/*1004*/      OPC_Scope, 113, /*->1119*/ // 6 children in Scope
/*1006*/        OPC_MoveChild, 1,
/*1008*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1011*/        OPC_Scope, 16, /*->1029*/ // 5 children in Scope
/*1013*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1015*/          OPC_MoveParent,
/*1016*/          OPC_CheckType, MVT::i32,
/*1018*/          OPC_EmitConvertToTarget, 1,
/*1020*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (ADDI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1029*/        /*Scope*/ 19, /*->1049*/
/*1030*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1032*/          OPC_MoveParent,
/*1033*/          OPC_CheckType, MVT::i32,
/*1035*/          OPC_EmitConvertToTarget, 1,
/*1037*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1040*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS:i32 GPRC:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1049*/        /*Scope*/ 16, /*->1066*/
/*1050*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1052*/          OPC_MoveParent,
/*1053*/          OPC_CheckType, MVT::i64,
/*1055*/          OPC_EmitConvertToTarget, 1,
/*1057*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (ADDI8:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1066*/        /*Scope*/ 19, /*->1086*/
/*1067*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1069*/          OPC_MoveParent,
/*1070*/          OPC_CheckType, MVT::i64,
/*1072*/          OPC_EmitConvertToTarget, 1,
/*1074*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1077*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS8:i64 G8RC:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1086*/        /*Scope*/ 31, /*->1118*/
/*1087*/          OPC_MoveParent,
/*1088*/          OPC_CheckType, MVT::i32,
/*1090*/          OPC_EmitConvertToTarget, 1,
/*1092*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1095*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*1104*/          OPC_EmitConvertToTarget, 1,
/*1106*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1109*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1118*/        0, /*End of Scope*/
/*1119*/      /*Scope*/ 11, /*->1131*/
/*1120*/        OPC_CheckType, MVT::i32,
/*1122*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADD4:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*1131*/      /*Scope*/ 11, /*->1143*/
/*1132*/        OPC_CheckType, MVT::i64,
/*1134*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADD8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*1143*/      /*Scope*/ 11, /*->1155*/
/*1144*/        OPC_CheckType, MVT::v16i8,
/*1146*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                // Dst: (VADDUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*1155*/      /*Scope*/ 11, /*->1167*/
/*1156*/        OPC_CheckType, MVT::v8i16,
/*1158*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                // Dst: (VADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*1167*/      /*Scope*/ 11, /*->1179*/
/*1168*/        OPC_CheckType, MVT::v4i32,
/*1170*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VADDUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*1179*/      0, /*End of Scope*/
/*1180*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 72|128,6/*840*/,  TARGET_VAL(ISD::LOAD),// ->2025
/*1185*/    OPC_RecordMemRef,
/*1186*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1187*/    OPC_RecordChild1, // #1 = $src
/*1188*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1190*/    OPC_Scope, 19, /*->1211*/ // 18 children in Scope
/*1192*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1194*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1196*/      OPC_CheckType, MVT::i32,
/*1198*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1201*/      OPC_EmitMergeInputChains1_0,
/*1202*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1211*/    /*Scope*/ 19, /*->1231*/
/*1212*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1214*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1216*/      OPC_CheckType, MVT::i32,
/*1218*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1221*/      OPC_EmitMergeInputChains1_0,
/*1222*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1231*/    /*Scope*/ 19, /*->1251*/
/*1232*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1234*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1236*/      OPC_CheckType, MVT::i32,
/*1238*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1241*/      OPC_EmitMergeInputChains1_0,
/*1242*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1251*/    /*Scope*/ 17, /*->1269*/
/*1252*/      OPC_CheckPredicate, 8, // Predicate_load
/*1254*/      OPC_CheckType, MVT::i32,
/*1256*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1259*/      OPC_EmitMergeInputChains1_0,
/*1260*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1269*/    /*Scope*/ 19, /*->1289*/
/*1270*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1272*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1274*/      OPC_CheckType, MVT::i32,
/*1276*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1279*/      OPC_EmitMergeInputChains1_0,
/*1280*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1289*/    /*Scope*/ 19, /*->1309*/
/*1290*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1292*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1294*/      OPC_CheckType, MVT::i32,
/*1296*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1299*/      OPC_EmitMergeInputChains1_0,
/*1300*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1309*/    /*Scope*/ 19, /*->1329*/
/*1310*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1312*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1314*/      OPC_CheckType, MVT::i32,
/*1316*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1319*/      OPC_EmitMergeInputChains1_0,
/*1320*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1329*/    /*Scope*/ 17, /*->1347*/
/*1330*/      OPC_CheckPredicate, 8, // Predicate_load
/*1332*/      OPC_CheckType, MVT::i32,
/*1334*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1337*/      OPC_EmitMergeInputChains1_0,
/*1338*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1347*/    /*Scope*/ 36, /*->1384*/
/*1348*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1350*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1352*/      OPC_CheckType, MVT::i32,
/*1354*/      OPC_Scope, 13, /*->1369*/ // 2 children in Scope
/*1356*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1359*/        OPC_EmitMergeInputChains1_0,
/*1360*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1369*/      /*Scope*/ 13, /*->1383*/
/*1370*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1373*/        OPC_EmitMergeInputChains1_0,
/*1374*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1383*/      0, /*End of Scope*/
/*1384*/    /*Scope*/ 105, /*->1490*/
/*1385*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1387*/      OPC_CheckType, MVT::i32,
/*1389*/      OPC_Scope, 32, /*->1423*/ // 3 children in Scope
/*1391*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1393*/        OPC_Scope, 13, /*->1408*/ // 2 children in Scope
/*1395*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1398*/          OPC_EmitMergeInputChains1_0,
/*1399*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1408*/        /*Scope*/ 13, /*->1422*/
/*1409*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1412*/          OPC_EmitMergeInputChains1_0,
/*1413*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1422*/        0, /*End of Scope*/
/*1423*/      /*Scope*/ 32, /*->1456*/
/*1424*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1426*/        OPC_Scope, 13, /*->1441*/ // 2 children in Scope
/*1428*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1431*/          OPC_EmitMergeInputChains1_0,
/*1432*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1441*/        /*Scope*/ 13, /*->1455*/
/*1442*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1445*/          OPC_EmitMergeInputChains1_0,
/*1446*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1455*/        0, /*End of Scope*/
/*1456*/      /*Scope*/ 32, /*->1489*/
/*1457*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1459*/        OPC_Scope, 13, /*->1474*/ // 2 children in Scope
/*1461*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1464*/          OPC_EmitMergeInputChains1_0,
/*1465*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1474*/        /*Scope*/ 13, /*->1488*/
/*1475*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1478*/          OPC_EmitMergeInputChains1_0,
/*1479*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1488*/        0, /*End of Scope*/
/*1489*/      0, /*End of Scope*/
/*1490*/    /*Scope*/ 70, /*->1561*/
/*1491*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1493*/      OPC_CheckType, MVT::i64,
/*1495*/      OPC_Scope, 15, /*->1512*/ // 4 children in Scope
/*1497*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1499*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1502*/        OPC_EmitMergeInputChains1_0,
/*1503*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1512*/      /*Scope*/ 15, /*->1528*/
/*1513*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1515*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1518*/        OPC_EmitMergeInputChains1_0,
/*1519*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1528*/      /*Scope*/ 15, /*->1544*/
/*1529*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1531*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1534*/        OPC_EmitMergeInputChains1_0,
/*1535*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1544*/      /*Scope*/ 15, /*->1560*/
/*1545*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1547*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1550*/        OPC_EmitMergeInputChains1_0,
/*1551*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1560*/      0, /*End of Scope*/
/*1561*/    /*Scope*/ 102, /*->1664*/
/*1562*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1564*/      OPC_CheckType, MVT::i64,
/*1566*/      OPC_Scope, 15, /*->1583*/ // 6 children in Scope
/*1568*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1570*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1573*/        OPC_EmitMergeInputChains1_0,
/*1574*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1583*/      /*Scope*/ 15, /*->1599*/
/*1584*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1586*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1589*/        OPC_EmitMergeInputChains1_0,
/*1590*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1599*/      /*Scope*/ 15, /*->1615*/
/*1600*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1602*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1605*/        OPC_EmitMergeInputChains1_0,
/*1606*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1615*/      /*Scope*/ 15, /*->1631*/
/*1616*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1618*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1621*/        OPC_EmitMergeInputChains1_0,
/*1622*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1631*/      /*Scope*/ 15, /*->1647*/
/*1632*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1634*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1637*/        OPC_EmitMergeInputChains1_0,
/*1638*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1647*/      /*Scope*/ 15, /*->1663*/
/*1648*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1650*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1653*/        OPC_EmitMergeInputChains1_0,
/*1654*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1663*/      0, /*End of Scope*/
/*1664*/    /*Scope*/ 34, /*->1699*/
/*1665*/      OPC_CheckPredicate, 8, // Predicate_load
/*1667*/      OPC_CheckType, MVT::i64,
/*1669*/      OPC_Scope, 13, /*->1684*/ // 2 children in Scope
/*1671*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1674*/        OPC_EmitMergeInputChains1_0,
/*1675*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1684*/      /*Scope*/ 13, /*->1698*/
/*1685*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1688*/        OPC_EmitMergeInputChains1_0,
/*1689*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1698*/      0, /*End of Scope*/
/*1699*/    /*Scope*/ 36, /*->1736*/
/*1700*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1702*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1704*/      OPC_CheckType, MVT::i64,
/*1706*/      OPC_Scope, 13, /*->1721*/ // 2 children in Scope
/*1708*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1711*/        OPC_EmitMergeInputChains1_0,
/*1712*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1721*/      /*Scope*/ 13, /*->1735*/
/*1722*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1725*/        OPC_EmitMergeInputChains1_0,
/*1726*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1735*/      0, /*End of Scope*/
/*1736*/    /*Scope*/ 10|128,1/*138*/, /*->1876*/
/*1738*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1740*/      OPC_CheckType, MVT::i64,
/*1742*/      OPC_Scope, 32, /*->1776*/ // 4 children in Scope
/*1744*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1746*/        OPC_Scope, 13, /*->1761*/ // 2 children in Scope
/*1748*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1751*/          OPC_EmitMergeInputChains1_0,
/*1752*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1761*/        /*Scope*/ 13, /*->1775*/
/*1762*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1765*/          OPC_EmitMergeInputChains1_0,
/*1766*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1775*/        0, /*End of Scope*/
/*1776*/      /*Scope*/ 32, /*->1809*/
/*1777*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1779*/        OPC_Scope, 13, /*->1794*/ // 2 children in Scope
/*1781*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1784*/          OPC_EmitMergeInputChains1_0,
/*1785*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1794*/        /*Scope*/ 13, /*->1808*/
/*1795*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1798*/          OPC_EmitMergeInputChains1_0,
/*1799*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1808*/        0, /*End of Scope*/
/*1809*/      /*Scope*/ 32, /*->1842*/
/*1810*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1812*/        OPC_Scope, 13, /*->1827*/ // 2 children in Scope
/*1814*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1817*/          OPC_EmitMergeInputChains1_0,
/*1818*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1827*/        /*Scope*/ 13, /*->1841*/
/*1828*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1831*/          OPC_EmitMergeInputChains1_0,
/*1832*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1841*/        0, /*End of Scope*/
/*1842*/      /*Scope*/ 32, /*->1875*/
/*1843*/        OPC_CheckPredicate, 16, // Predicate_extloadi32
/*1845*/        OPC_Scope, 13, /*->1860*/ // 2 children in Scope
/*1847*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1850*/          OPC_EmitMergeInputChains1_0,
/*1851*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1860*/        /*Scope*/ 13, /*->1874*/
/*1861*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1864*/          OPC_EmitMergeInputChains1_0,
/*1865*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1874*/        0, /*End of Scope*/
/*1875*/      0, /*End of Scope*/
/*1876*/    /*Scope*/ 68, /*->1945*/
/*1877*/      OPC_CheckPredicate, 8, // Predicate_load
/*1879*/      OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->1912
/*1882*/        OPC_Scope, 13, /*->1897*/ // 2 children in Scope
/*1884*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1887*/          OPC_EmitMergeInputChains1_0,
/*1888*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*1897*/        /*Scope*/ 13, /*->1911*/
/*1898*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1901*/          OPC_EmitMergeInputChains1_0,
/*1902*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*1911*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->1944
/*1914*/        OPC_Scope, 13, /*->1929*/ // 2 children in Scope
/*1916*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1919*/          OPC_EmitMergeInputChains1_0,
/*1920*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*1929*/        /*Scope*/ 13, /*->1943*/
/*1930*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1933*/          OPC_EmitMergeInputChains1_0,
/*1934*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*1943*/        0, /*End of Scope*/
              0, // EndSwitchType
/*1945*/    /*Scope*/ 60, /*->2006*/
/*1946*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1948*/      OPC_CheckPredicate, 17, // Predicate_extloadf32
/*1950*/      OPC_CheckType, MVT::f64,
/*1952*/      OPC_Scope, 25, /*->1979*/ // 2 children in Scope
/*1954*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1957*/        OPC_EmitMergeInputChains1_0,
/*1958*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*1967*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*1970*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:f64)
/*1979*/      /*Scope*/ 25, /*->2005*/
/*1980*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1983*/        OPC_EmitMergeInputChains1_0,
/*1984*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*1993*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*1996*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:f64)
/*2005*/      0, /*End of Scope*/
/*2006*/    /*Scope*/ 17, /*->2024*/
/*2007*/      OPC_CheckPredicate, 8, // Predicate_load
/*2009*/      OPC_CheckType, MVT::v4i32,
/*2011*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2014*/      OPC_EmitMergeInputChains1_0,
/*2015*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2024*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,4/*541*/,  TARGET_VAL(ISD::STORE),// ->2570
/*2029*/    OPC_RecordMemRef,
/*2030*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2031*/    OPC_RecordChild1, // #1 = $rS
/*2032*/    OPC_Scope, 52|128,1/*180*/, /*->2215*/ // 5 children in Scope
/*2035*/      OPC_CheckChild1Type, MVT::i32,
/*2037*/      OPC_RecordChild2, // #2 = $src
/*2038*/      OPC_Scope, 110, /*->2150*/ // 2 children in Scope
/*2040*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2042*/        OPC_Scope, 36, /*->2080*/ // 4 children in Scope
/*2044*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2046*/          OPC_Scope, 15, /*->2063*/ // 2 children in Scope
/*2048*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2050*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2053*/            OPC_EmitMergeInputChains1_0,
/*2054*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB GPRC:i32:$rS, iaddr:iPTR:$src)
/*2063*/          /*Scope*/ 15, /*->2079*/
/*2064*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2066*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2069*/            OPC_EmitMergeInputChains1_0,
/*2070*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH GPRC:i32:$rS, iaddr:iPTR:$src)
/*2079*/          0, /*End of Scope*/
/*2080*/        /*Scope*/ 15, /*->2096*/
/*2081*/          OPC_CheckPredicate, 22, // Predicate_store
/*2083*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2086*/          OPC_EmitMergeInputChains1_0,
/*2087*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW GPRC:i32:$rS, iaddr:iPTR:$src)
/*2096*/        /*Scope*/ 36, /*->2133*/
/*2097*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2099*/          OPC_Scope, 15, /*->2116*/ // 2 children in Scope
/*2101*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2103*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2106*/            OPC_EmitMergeInputChains1_0,
/*2107*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2116*/          /*Scope*/ 15, /*->2132*/
/*2117*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2119*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2122*/            OPC_EmitMergeInputChains1_0,
/*2123*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2132*/          0, /*End of Scope*/
/*2133*/        /*Scope*/ 15, /*->2149*/
/*2134*/          OPC_CheckPredicate, 22, // Predicate_store
/*2136*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2139*/          OPC_EmitMergeInputChains1_0,
/*2140*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2149*/        0, /*End of Scope*/
/*2150*/      /*Scope*/ 63, /*->2214*/
/*2151*/        OPC_RecordChild3, // #3 = $ptroff
/*2152*/        OPC_Scope, 40, /*->2194*/ // 2 children in Scope
/*2154*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2156*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2158*/          OPC_Scope, 16, /*->2176*/ // 2 children in Scope
/*2160*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2162*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2165*/            OPC_EmitMergeInputChains1_0,
/*2166*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2176*/          /*Scope*/ 16, /*->2193*/
/*2177*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2179*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2182*/            OPC_EmitMergeInputChains1_0,
/*2183*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2193*/          0, /*End of Scope*/
/*2194*/        /*Scope*/ 18, /*->2213*/
/*2195*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2197*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2199*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2202*/          OPC_EmitMergeInputChains1_0,
/*2203*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2213*/        0, /*End of Scope*/
/*2214*/      0, /*End of Scope*/
/*2215*/    /*Scope*/ 60, /*->2276*/
/*2216*/      OPC_CheckChild1Type, MVT::f32,
/*2218*/      OPC_RecordChild2, // #2 = $dst
/*2219*/      OPC_Scope, 34, /*->2255*/ // 2 children in Scope
/*2221*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2223*/        OPC_CheckPredicate, 22, // Predicate_store
/*2225*/        OPC_Scope, 13, /*->2240*/ // 2 children in Scope
/*2227*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2230*/          OPC_EmitMergeInputChains1_0,
/*2231*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS F4RC:f32:$rS, iaddr:iPTR:$dst)
/*2240*/        /*Scope*/ 13, /*->2254*/
/*2241*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2244*/          OPC_EmitMergeInputChains1_0,
/*2245*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX F4RC:f32:$frS, xaddr:iPTR:$dst)
/*2254*/        0, /*End of Scope*/
/*2255*/      /*Scope*/ 19, /*->2275*/
/*2256*/        OPC_RecordChild3, // #3 = $ptroff
/*2257*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2259*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2261*/        OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2264*/        OPC_EmitMergeInputChains1_0,
/*2265*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                // Dst: (STFSU:iPTR F4RC:f32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2275*/      0, /*End of Scope*/
/*2276*/    /*Scope*/ 60, /*->2337*/
/*2277*/      OPC_CheckChild1Type, MVT::f64,
/*2279*/      OPC_RecordChild2, // #2 = $dst
/*2280*/      OPC_Scope, 34, /*->2316*/ // 2 children in Scope
/*2282*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2284*/        OPC_CheckPredicate, 22, // Predicate_store
/*2286*/        OPC_Scope, 13, /*->2301*/ // 2 children in Scope
/*2288*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2291*/          OPC_EmitMergeInputChains1_0,
/*2292*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD F8RC:f64:$rS, iaddr:iPTR:$dst)
/*2301*/        /*Scope*/ 13, /*->2315*/
/*2302*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2305*/          OPC_EmitMergeInputChains1_0,
/*2306*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX F8RC:f64:$frS, xaddr:iPTR:$dst)
/*2315*/        0, /*End of Scope*/
/*2316*/      /*Scope*/ 19, /*->2336*/
/*2317*/        OPC_RecordChild3, // #3 = $ptroff
/*2318*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2320*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2322*/        OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2325*/        OPC_EmitMergeInputChains1_0,
/*2326*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                // Dst: (STFDU:iPTR F8RC:f64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2336*/      0, /*End of Scope*/
/*2337*/    /*Scope*/ 20, /*->2358*/
/*2338*/      OPC_CheckChild1Type, MVT::v4i32,
/*2340*/      OPC_RecordChild2, // #2 = $dst
/*2341*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2343*/      OPC_CheckPredicate, 22, // Predicate_store
/*2345*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2348*/      OPC_EmitMergeInputChains1_0,
/*2349*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st VRRC:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*2358*/    /*Scope*/ 81|128,1/*209*/, /*->2569*/
/*2360*/      OPC_CheckChild1Type, MVT::i64,
/*2362*/      OPC_RecordChild2, // #2 = $src
/*2363*/      OPC_Scope, 10|128,1/*138*/, /*->2504*/ // 2 children in Scope
/*2366*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2368*/        OPC_Scope, 100, /*->2470*/ // 2 children in Scope
/*2370*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2372*/          OPC_Scope, 15, /*->2389*/ // 6 children in Scope
/*2374*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2376*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2379*/            OPC_EmitMergeInputChains1_0,
/*2380*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2389*/          /*Scope*/ 15, /*->2405*/
/*2390*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2392*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2395*/            OPC_EmitMergeInputChains1_0,
/*2396*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2405*/          /*Scope*/ 15, /*->2421*/
/*2406*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2408*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2411*/            OPC_EmitMergeInputChains1_0,
/*2412*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2421*/          /*Scope*/ 15, /*->2437*/
/*2422*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2424*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2427*/            OPC_EmitMergeInputChains1_0,
/*2428*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2437*/          /*Scope*/ 15, /*->2453*/
/*2438*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2440*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2443*/            OPC_EmitMergeInputChains1_0,
/*2444*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2453*/          /*Scope*/ 15, /*->2469*/
/*2454*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2456*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2459*/            OPC_EmitMergeInputChains1_0,
/*2460*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2469*/          0, /*End of Scope*/
/*2470*/        /*Scope*/ 32, /*->2503*/
/*2471*/          OPC_CheckPredicate, 22, // Predicate_store
/*2473*/          OPC_Scope, 13, /*->2488*/ // 2 children in Scope
/*2475*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2478*/            OPC_EmitMergeInputChains1_0,
/*2479*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STD G8RC:i64:$rS, ixaddr:iPTR:$dst)
/*2488*/          /*Scope*/ 13, /*->2502*/
/*2489*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2492*/            OPC_EmitMergeInputChains1_0,
/*2493*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2502*/          0, /*End of Scope*/
/*2503*/        0, /*End of Scope*/
/*2504*/      /*Scope*/ 63, /*->2568*/
/*2505*/        OPC_RecordChild3, // #3 = $ptroff
/*2506*/        OPC_Scope, 40, /*->2548*/ // 2 children in Scope
/*2508*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2510*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2512*/          OPC_Scope, 16, /*->2530*/ // 2 children in Scope
/*2514*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2516*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2519*/            OPC_EmitMergeInputChains1_0,
/*2520*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2530*/          /*Scope*/ 16, /*->2547*/
/*2531*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2533*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2536*/            OPC_EmitMergeInputChains1_0,
/*2537*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2547*/          0, /*End of Scope*/
/*2548*/        /*Scope*/ 18, /*->2567*/
/*2549*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2551*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2553*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2556*/          OPC_EmitMergeInputChains1_0,
/*2557*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2567*/        0, /*End of Scope*/
/*2568*/      0, /*End of Scope*/
/*2569*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2652
/*2573*/    OPC_RecordMemRef,
/*2574*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2575*/    OPC_RecordChild1, // #1 = $ptr
/*2576*/    OPC_RecordChild2, // #2 = $incr
/*2577*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2633
/*2580*/      OPC_Scope, 16, /*->2598*/ // 3 children in Scope
/*2582*/        OPC_CheckPredicate, 30, // Predicate_atomic_load_add_8
/*2584*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2587*/        OPC_EmitMergeInputChains1_0,
/*2588*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2598*/      /*Scope*/ 16, /*->2615*/
/*2599*/        OPC_CheckPredicate, 31, // Predicate_atomic_load_add_16
/*2601*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2604*/        OPC_EmitMergeInputChains1_0,
/*2605*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2615*/      /*Scope*/ 16, /*->2632*/
/*2616*/        OPC_CheckPredicate, 32, // Predicate_atomic_load_add_32
/*2618*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2621*/        OPC_EmitMergeInputChains1_0,
/*2622*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2632*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2651
/*2635*/      OPC_CheckPredicate, 33, // Predicate_atomic_load_add_64
/*2637*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2640*/      OPC_EmitMergeInputChains1_0,
/*2641*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->2734
/*2655*/    OPC_RecordMemRef,
/*2656*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2657*/    OPC_RecordChild1, // #1 = $ptr
/*2658*/    OPC_RecordChild2, // #2 = $incr
/*2659*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2715
/*2662*/      OPC_Scope, 16, /*->2680*/ // 3 children in Scope
/*2664*/        OPC_CheckPredicate, 34, // Predicate_atomic_load_sub_8
/*2666*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2669*/        OPC_EmitMergeInputChains1_0,
/*2670*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2680*/      /*Scope*/ 16, /*->2697*/
/*2681*/        OPC_CheckPredicate, 35, // Predicate_atomic_load_sub_16
/*2683*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2686*/        OPC_EmitMergeInputChains1_0,
/*2687*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2697*/      /*Scope*/ 16, /*->2714*/
/*2698*/        OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_32
/*2700*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2703*/        OPC_EmitMergeInputChains1_0,
/*2704*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2714*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2733
/*2717*/      OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_64
/*2719*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2722*/      OPC_EmitMergeInputChains1_0,
/*2723*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->2816
/*2737*/    OPC_RecordMemRef,
/*2738*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*2739*/    OPC_RecordChild1, // #1 = $ptr
/*2740*/    OPC_RecordChild2, // #2 = $incr
/*2741*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2797
/*2744*/      OPC_Scope, 16, /*->2762*/ // 3 children in Scope
/*2746*/        OPC_CheckPredicate, 38, // Predicate_atomic_load_and_8
/*2748*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2751*/        OPC_EmitMergeInputChains1_0,
/*2752*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2762*/      /*Scope*/ 16, /*->2779*/
/*2763*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_and_16
/*2765*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2768*/        OPC_EmitMergeInputChains1_0,
/*2769*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2779*/      /*Scope*/ 16, /*->2796*/
/*2780*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_and_32
/*2782*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2785*/        OPC_EmitMergeInputChains1_0,
/*2786*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2796*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2815
/*2799*/      OPC_CheckPredicate, 41, // Predicate_atomic_load_and_64
/*2801*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2804*/      OPC_EmitMergeInputChains1_0,
/*2805*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->2898
/*2819*/    OPC_RecordMemRef,
/*2820*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*2821*/    OPC_RecordChild1, // #1 = $ptr
/*2822*/    OPC_RecordChild2, // #2 = $incr
/*2823*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2879
/*2826*/      OPC_Scope, 16, /*->2844*/ // 3 children in Scope
/*2828*/        OPC_CheckPredicate, 42, // Predicate_atomic_load_or_8
/*2830*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2833*/        OPC_EmitMergeInputChains1_0,
/*2834*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2844*/      /*Scope*/ 16, /*->2861*/
/*2845*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_or_16
/*2847*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2850*/        OPC_EmitMergeInputChains1_0,
/*2851*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2861*/      /*Scope*/ 16, /*->2878*/
/*2862*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_or_32
/*2864*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2867*/        OPC_EmitMergeInputChains1_0,
/*2868*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2878*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2897
/*2881*/      OPC_CheckPredicate, 45, // Predicate_atomic_load_or_64
/*2883*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2886*/      OPC_EmitMergeInputChains1_0,
/*2887*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->2980
/*2901*/    OPC_RecordMemRef,
/*2902*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*2903*/    OPC_RecordChild1, // #1 = $ptr
/*2904*/    OPC_RecordChild2, // #2 = $incr
/*2905*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2961
/*2908*/      OPC_Scope, 16, /*->2926*/ // 3 children in Scope
/*2910*/        OPC_CheckPredicate, 46, // Predicate_atomic_load_xor_8
/*2912*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2915*/        OPC_EmitMergeInputChains1_0,
/*2916*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2926*/      /*Scope*/ 16, /*->2943*/
/*2927*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_xor_16
/*2929*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2932*/        OPC_EmitMergeInputChains1_0,
/*2933*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2943*/      /*Scope*/ 16, /*->2960*/
/*2944*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_32
/*2946*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2949*/        OPC_EmitMergeInputChains1_0,
/*2950*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2960*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2979
/*2963*/      OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_64
/*2965*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2968*/      OPC_EmitMergeInputChains1_0,
/*2969*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3062
/*2983*/    OPC_RecordMemRef,
/*2984*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*2985*/    OPC_RecordChild1, // #1 = $ptr
/*2986*/    OPC_RecordChild2, // #2 = $incr
/*2987*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->3043
/*2990*/      OPC_Scope, 16, /*->3008*/ // 3 children in Scope
/*2992*/        OPC_CheckPredicate, 50, // Predicate_atomic_load_nand_8
/*2994*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2997*/        OPC_EmitMergeInputChains1_0,
/*2998*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3008*/      /*Scope*/ 16, /*->3025*/
/*3009*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_nand_16
/*3011*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3014*/        OPC_EmitMergeInputChains1_0,
/*3015*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3025*/      /*Scope*/ 16, /*->3042*/
/*3026*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_32
/*3028*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3031*/        OPC_EmitMergeInputChains1_0,
/*3032*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3042*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->3061
/*3045*/      OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_64
/*3047*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3050*/      OPC_EmitMergeInputChains1_0,
/*3051*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3149
/*3065*/    OPC_RecordMemRef,
/*3066*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3067*/    OPC_RecordChild1, // #1 = $ptr
/*3068*/    OPC_RecordChild2, // #2 = $old
/*3069*/    OPC_RecordChild3, // #3 = $new
/*3070*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3129
/*3073*/      OPC_Scope, 17, /*->3092*/ // 3 children in Scope
/*3075*/        OPC_CheckPredicate, 54, // Predicate_atomic_cmp_swap_8
/*3077*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3080*/        OPC_EmitMergeInputChains1_0,
/*3081*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3092*/      /*Scope*/ 17, /*->3110*/
/*3093*/        OPC_CheckPredicate, 55, // Predicate_atomic_cmp_swap_16
/*3095*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3098*/        OPC_EmitMergeInputChains1_0,
/*3099*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3110*/      /*Scope*/ 17, /*->3128*/
/*3111*/        OPC_CheckPredicate, 56, // Predicate_atomic_cmp_swap_32
/*3113*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3116*/        OPC_EmitMergeInputChains1_0,
/*3117*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3128*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3148
/*3131*/      OPC_CheckPredicate, 57, // Predicate_atomic_cmp_swap_64
/*3133*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3136*/      OPC_EmitMergeInputChains1_0,
/*3137*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3231
/*3152*/    OPC_RecordMemRef,
/*3153*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3154*/    OPC_RecordChild1, // #1 = $ptr
/*3155*/    OPC_RecordChild2, // #2 = $new
/*3156*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->3212
/*3159*/      OPC_Scope, 16, /*->3177*/ // 3 children in Scope
/*3161*/        OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*3163*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3166*/        OPC_EmitMergeInputChains1_0,
/*3167*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3177*/      /*Scope*/ 16, /*->3194*/
/*3178*/        OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*3180*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3183*/        OPC_EmitMergeInputChains1_0,
/*3184*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3194*/      /*Scope*/ 16, /*->3211*/
/*3195*/        OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*3197*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3200*/        OPC_EmitMergeInputChains1_0,
/*3201*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3211*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->3230
/*3214*/      OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*3216*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3219*/      OPC_EmitMergeInputChains1_0,
/*3220*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3282
/*3234*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3235*/    OPC_RecordChild1, // #1 = $negsize
/*3236*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3259
/*3239*/      OPC_CheckChild1Type, MVT::i32,
/*3241*/      OPC_RecordChild2, // #2 = $fpsi
/*3242*/      OPC_CheckChild2Type, MVT::iPTR,
/*3244*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3247*/      OPC_EmitMergeInputChains1_0,
/*3248*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3281
/*3261*/      OPC_CheckChild1Type, MVT::i64,
/*3263*/      OPC_RecordChild2, // #2 = $fpsi
/*3264*/      OPC_CheckChild2Type, MVT::iPTR,
/*3266*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3269*/      OPC_EmitMergeInputChains1_0,
/*3270*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3319
/*3285*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3286*/    OPC_RecordChild1, // #1 = $src
/*3287*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3303
/*3290*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3293*/      OPC_EmitMergeInputChains1_0,
/*3294*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3318
/*3305*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3308*/      OPC_EmitMergeInputChains1_0,
/*3309*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::LBRX),// ->3362
/*3322*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3323*/    OPC_RecordChild1, // #1 = $src
/*3324*/    OPC_MoveChild, 2,
/*3326*/    OPC_Scope, 16, /*->3344*/ // 2 children in Scope
/*3328*/      OPC_CheckValueType, MVT::i16,
/*3330*/      OPC_MoveParent,
/*3331*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3334*/      OPC_EmitMergeInputChains1_0,
/*3335*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3344*/    /*Scope*/ 16, /*->3361*/
/*3345*/      OPC_CheckValueType, MVT::i32,
/*3347*/      OPC_MoveParent,
/*3348*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3351*/      OPC_EmitMergeInputChains1_0,
/*3352*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3361*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3402
/*3365*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3366*/    OPC_CaptureGlueInput,
/*3367*/    OPC_RecordChild1, // #1 = $src
/*3368*/    OPC_CheckChild1Type, MVT::iPTR,
/*3370*/    OPC_CheckType, MVT::i64,
/*3372*/    OPC_Scope, 13, /*->3387*/ // 2 children in Scope
/*3374*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3377*/      OPC_EmitMergeInputChains1_0,
/*3378*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3387*/    /*Scope*/ 13, /*->3401*/
/*3388*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3391*/      OPC_EmitMergeInputChains1_0,
/*3392*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3401*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82|128,4/*594*/,  TARGET_VAL(ISD::XOR),// ->4000
/*3406*/    OPC_Scope, 39|128,1/*167*/, /*->3576*/ // 8 children in Scope
/*3409*/      OPC_MoveChild, 0,
/*3411*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3456
/*3415*/        OPC_RecordChild0, // #0 = $rS
/*3416*/        OPC_RecordChild1, // #1 = $rB
/*3417*/        OPC_MoveParent,
/*3418*/        OPC_MoveChild, 1,
/*3420*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3431*/        OPC_MoveParent,
/*3432*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3444
/*3435*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3455
/*3446*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3500
/*3459*/        OPC_RecordChild0, // #0 = $rS
/*3460*/        OPC_RecordChild1, // #1 = $rB
/*3461*/        OPC_MoveParent,
/*3462*/        OPC_MoveChild, 1,
/*3464*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3475*/        OPC_MoveParent,
/*3476*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3488
/*3479*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3499
/*3490*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->3575
/*3503*/        OPC_RecordChild0, // #0 = $rS
/*3504*/        OPC_Scope, 40, /*->3546*/ // 2 children in Scope
/*3506*/          OPC_RecordChild1, // #1 = $rB
/*3507*/          OPC_MoveParent,
/*3508*/          OPC_MoveChild, 1,
/*3510*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3521*/          OPC_MoveParent,
/*3522*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3534
/*3525*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3545
/*3536*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                  0, // EndSwitchType
/*3546*/        /*Scope*/ 27, /*->3574*/
/*3547*/          OPC_MoveChild, 1,
/*3549*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3560*/          OPC_MoveParent,
/*3561*/          OPC_MoveParent,
/*3562*/          OPC_RecordChild1, // #1 = $rB
/*3563*/          OPC_CheckType, MVT::i32,
/*3565*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, -1:i32), GPRC:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3574*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3576*/    /*Scope*/ 33, /*->3610*/
/*3577*/      OPC_RecordChild0, // #0 = $rB
/*3578*/      OPC_MoveChild, 1,
/*3580*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3583*/      OPC_RecordChild0, // #1 = $rS
/*3584*/      OPC_MoveChild, 1,
/*3586*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3597*/      OPC_MoveParent,
/*3598*/      OPC_MoveParent,
/*3599*/      OPC_CheckType, MVT::i32,
/*3601*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 GPRC:i32:$rB, (xor:i32 GPRC:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3610*/    /*Scope*/ 33, /*->3644*/
/*3611*/      OPC_MoveChild, 0,
/*3613*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3616*/      OPC_RecordChild0, // #0 = $rS
/*3617*/      OPC_MoveChild, 1,
/*3619*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3630*/      OPC_MoveParent,
/*3631*/      OPC_MoveParent,
/*3632*/      OPC_RecordChild1, // #1 = $rB
/*3633*/      OPC_CheckType, MVT::i64,
/*3635*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, -1:i64), G8RC:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3644*/    /*Scope*/ 33, /*->3678*/
/*3645*/      OPC_RecordChild0, // #0 = $rB
/*3646*/      OPC_MoveChild, 1,
/*3648*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3651*/      OPC_RecordChild0, // #1 = $rS
/*3652*/      OPC_MoveChild, 1,
/*3654*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3665*/      OPC_MoveParent,
/*3666*/      OPC_MoveParent,
/*3667*/      OPC_CheckType, MVT::i64,
/*3669*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i64 G8RC:i64:$rB, (xor:i64 G8RC:i64:$rS, -1:i64)) - Complexity = 11
              // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3678*/    /*Scope*/ 70, /*->3749*/
/*3679*/      OPC_MoveChild, 0,
/*3681*/      OPC_SwitchOpcode /*2 cases */, 30,  TARGET_VAL(ISD::OR),// ->3715
/*3685*/        OPC_RecordChild0, // #0 = $vA
/*3686*/        OPC_RecordChild1, // #1 = $vB
/*3687*/        OPC_MoveParent,
/*3688*/        OPC_MoveChild, 1,
/*3690*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*3693*/        OPC_MoveChild, 0,
/*3695*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*3698*/        OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*3700*/        OPC_CheckType, MVT::v16i8,
/*3702*/        OPC_MoveParent,
/*3703*/        OPC_MoveParent,
/*3704*/        OPC_CheckType, MVT::v4i32,
/*3706*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::BITCAST),// ->3748
/*3718*/        OPC_MoveChild, 0,
/*3720*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*3723*/        OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*3725*/        OPC_CheckType, MVT::v16i8,
/*3727*/        OPC_MoveParent,
/*3728*/        OPC_MoveParent,
/*3729*/        OPC_MoveChild, 1,
/*3731*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3734*/        OPC_RecordChild0, // #0 = $vA
/*3735*/        OPC_RecordChild1, // #1 = $vB
/*3736*/        OPC_MoveParent,
/*3737*/        OPC_CheckType, MVT::v4i32,
/*3739*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              0, // EndSwitchOpcode
/*3749*/    /*Scope*/ 28, /*->3778*/
/*3750*/      OPC_RecordChild0, // #0 = $vA
/*3751*/      OPC_MoveChild, 1,
/*3753*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*3756*/      OPC_MoveChild, 0,
/*3758*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*3761*/      OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*3763*/      OPC_CheckType, MVT::v16i8,
/*3765*/      OPC_MoveParent,
/*3766*/      OPC_MoveParent,
/*3767*/      OPC_CheckType, MVT::v4i32,
/*3769*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*3778*/    /*Scope*/ 28, /*->3807*/
/*3779*/      OPC_MoveChild, 0,
/*3781*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*3784*/      OPC_MoveChild, 0,
/*3786*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*3789*/      OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*3791*/      OPC_CheckType, MVT::v16i8,
/*3793*/      OPC_MoveParent,
/*3794*/      OPC_MoveParent,
/*3795*/      OPC_RecordChild1, // #0 = $vA
/*3796*/      OPC_CheckType, MVT::v4i32,
/*3798*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*3807*/    /*Scope*/ 62|128,1/*190*/, /*->3999*/
/*3809*/      OPC_RecordChild0, // #0 = $in
/*3810*/      OPC_Scope, 25, /*->3837*/ // 2 children in Scope
/*3812*/        OPC_MoveChild, 1,
/*3814*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3825*/        OPC_MoveParent,
/*3826*/        OPC_CheckType, MVT::i32,
/*3828*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (xor:i32 GPRC:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 GPRC:i32:$in, GPRC:i32:$in)
/*3837*/      /*Scope*/ 31|128,1/*159*/, /*->3998*/
/*3839*/        OPC_RecordChild1, // #1 = $src2
/*3840*/        OPC_Scope, 119, /*->3961*/ // 4 children in Scope
/*3842*/          OPC_MoveChild, 1,
/*3844*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3847*/          OPC_Scope, 19, /*->3868*/ // 5 children in Scope
/*3849*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*3851*/            OPC_MoveParent,
/*3852*/            OPC_CheckType, MVT::i32,
/*3854*/            OPC_EmitConvertToTarget, 1,
/*3856*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*3859*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*3868*/          /*Scope*/ 19, /*->3888*/
/*3869*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*3871*/            OPC_MoveParent,
/*3872*/            OPC_CheckType, MVT::i32,
/*3874*/            OPC_EmitConvertToTarget, 1,
/*3876*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*3879*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*3888*/          /*Scope*/ 19, /*->3908*/
/*3889*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*3891*/            OPC_MoveParent,
/*3892*/            OPC_CheckType, MVT::i64,
/*3894*/            OPC_EmitConvertToTarget, 1,
/*3896*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*3899*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*3908*/          /*Scope*/ 19, /*->3928*/
/*3909*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*3911*/            OPC_MoveParent,
/*3912*/            OPC_CheckType, MVT::i64,
/*3914*/            OPC_EmitConvertToTarget, 1,
/*3916*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*3919*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*3928*/          /*Scope*/ 31, /*->3960*/
/*3929*/            OPC_MoveParent,
/*3930*/            OPC_CheckType, MVT::i32,
/*3932*/            OPC_EmitConvertToTarget, 1,
/*3934*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*3937*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*3946*/            OPC_EmitConvertToTarget, 1,
/*3948*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*3951*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*3960*/          0, /*End of Scope*/
/*3961*/        /*Scope*/ 11, /*->3973*/
/*3962*/          OPC_CheckType, MVT::i32,
/*3964*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3973*/        /*Scope*/ 11, /*->3985*/
/*3974*/          OPC_CheckType, MVT::i64,
/*3976*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3985*/        /*Scope*/ 11, /*->3997*/
/*3986*/          OPC_CheckType, MVT::v4i32,
/*3988*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VXOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*3997*/        0, /*End of Scope*/
/*3998*/      0, /*End of Scope*/
/*3999*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,4/*517*/,  TARGET_VAL(ISD::AND),// ->4521
/*4004*/    OPC_Scope, 46, /*->4052*/ // 7 children in Scope
/*4006*/      OPC_RecordChild0, // #0 = $rS
/*4007*/      OPC_MoveChild, 1,
/*4009*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4012*/      OPC_RecordChild0, // #1 = $rB
/*4013*/      OPC_MoveChild, 1,
/*4015*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4026*/      OPC_MoveParent,
/*4027*/      OPC_MoveParent,
/*4028*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4040
/*4031*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4051
/*4042*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4052*/    /*Scope*/ 88, /*->4141*/
/*4053*/      OPC_MoveChild, 0,
/*4055*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4100
/*4059*/        OPC_RecordChild0, // #0 = $rB
/*4060*/        OPC_MoveChild, 1,
/*4062*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4073*/        OPC_MoveParent,
/*4074*/        OPC_MoveParent,
/*4075*/        OPC_RecordChild1, // #1 = $rS
/*4076*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4088
/*4079*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4099
/*4090*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4140
/*4103*/        OPC_RecordChild0, // #0 = $in
/*4104*/        OPC_RecordChild1, // #1 = $sh
/*4105*/        OPC_CheckChild1Type, MVT::i32,
/*4107*/        OPC_MoveParent,
/*4108*/        OPC_RecordChild1, // #2 = $imm
/*4109*/        OPC_MoveChild, 1,
/*4111*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4114*/        OPC_CheckPredicate, 65, // Predicate_maskimm32
/*4116*/        OPC_MoveParent,
/*4117*/        OPC_CheckType, MVT::i32,
/*4119*/        OPC_EmitConvertToTarget, 2,
/*4121*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4124*/        OPC_EmitConvertToTarget, 2,
/*4126*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4129*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4141*/    /*Scope*/ 68, /*->4210*/
/*4142*/      OPC_RecordChild0, // #0 = $vA
/*4143*/      OPC_MoveChild, 1,
/*4145*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4148*/      OPC_Scope, 29, /*->4179*/ // 2 children in Scope
/*4150*/        OPC_RecordChild0, // #1 = $vB
/*4151*/        OPC_MoveChild, 1,
/*4153*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4156*/        OPC_MoveChild, 0,
/*4158*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4161*/        OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*4163*/        OPC_CheckType, MVT::v16i8,
/*4165*/        OPC_MoveParent,
/*4166*/        OPC_MoveParent,
/*4167*/        OPC_MoveParent,
/*4168*/        OPC_CheckType, MVT::v4i32,
/*4170*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4179*/      /*Scope*/ 29, /*->4209*/
/*4180*/        OPC_MoveChild, 0,
/*4182*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4185*/        OPC_MoveChild, 0,
/*4187*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4190*/        OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*4192*/        OPC_CheckType, MVT::v16i8,
/*4194*/        OPC_MoveParent,
/*4195*/        OPC_MoveParent,
/*4196*/        OPC_RecordChild1, // #1 = $vB
/*4197*/        OPC_MoveParent,
/*4198*/        OPC_CheckType, MVT::v4i32,
/*4200*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB)) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4209*/      0, /*End of Scope*/
/*4210*/    /*Scope*/ 69, /*->4280*/
/*4211*/      OPC_MoveChild, 0,
/*4213*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4216*/      OPC_Scope, 30, /*->4248*/ // 2 children in Scope
/*4218*/        OPC_RecordChild0, // #0 = $vB
/*4219*/        OPC_MoveChild, 1,
/*4221*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4224*/        OPC_MoveChild, 0,
/*4226*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4229*/        OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*4231*/        OPC_CheckType, MVT::v16i8,
/*4233*/        OPC_MoveParent,
/*4234*/        OPC_MoveParent,
/*4235*/        OPC_MoveParent,
/*4236*/        OPC_RecordChild1, // #1 = $vA
/*4237*/        OPC_CheckType, MVT::v4i32,
/*4239*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4248*/      /*Scope*/ 30, /*->4279*/
/*4249*/        OPC_MoveChild, 0,
/*4251*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4254*/        OPC_MoveChild, 0,
/*4256*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4259*/        OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*4261*/        OPC_CheckType, MVT::v16i8,
/*4263*/        OPC_MoveParent,
/*4264*/        OPC_MoveParent,
/*4265*/        OPC_RecordChild1, // #0 = $vB
/*4266*/        OPC_MoveParent,
/*4267*/        OPC_RecordChild1, // #1 = $vA
/*4268*/        OPC_CheckType, MVT::v4i32,
/*4270*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4279*/      0, /*End of Scope*/
/*4280*/    /*Scope*/ 35, /*->4316*/
/*4281*/      OPC_RecordChild0, // #0 = $A
/*4282*/      OPC_MoveChild, 1,
/*4284*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4287*/      OPC_MoveChild, 0,
/*4289*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4292*/      OPC_MoveChild, 0,
/*4294*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4297*/      OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*4299*/      OPC_CheckType, MVT::v16i8,
/*4301*/      OPC_MoveParent,
/*4302*/      OPC_MoveParent,
/*4303*/      OPC_RecordChild1, // #1 = $B
/*4304*/      OPC_MoveParent,
/*4305*/      OPC_CheckType, MVT::v4i32,
/*4307*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:v4i32 VRRC:v4i32:$A, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$B)) - Complexity = 13
              // Dst: (VANDC:v4i32 VRRC:v4i32:$A, VRRC:v4i32:$B)
/*4316*/    /*Scope*/ 69, /*->4386*/
/*4317*/      OPC_MoveChild, 0,
/*4319*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4322*/      OPC_Scope, 30, /*->4354*/ // 2 children in Scope
/*4324*/        OPC_RecordChild0, // #0 = $B
/*4325*/        OPC_MoveChild, 1,
/*4327*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4330*/        OPC_MoveChild, 0,
/*4332*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4335*/        OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*4337*/        OPC_CheckType, MVT::v16i8,
/*4339*/        OPC_MoveParent,
/*4340*/        OPC_MoveParent,
/*4341*/        OPC_MoveParent,
/*4342*/        OPC_RecordChild1, // #1 = $A
/*4343*/        OPC_CheckType, MVT::v4i32,
/*4345*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 VRRC:v4i32:$B, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), VRRC:v4i32:$A) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$A, VRRC:v4i32:$B)
/*4354*/      /*Scope*/ 30, /*->4385*/
/*4355*/        OPC_MoveChild, 0,
/*4357*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4360*/        OPC_MoveChild, 0,
/*4362*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4365*/        OPC_CheckPredicate, 62, // Predicate_immAllOnesV
/*4367*/        OPC_CheckType, MVT::v16i8,
/*4369*/        OPC_MoveParent,
/*4370*/        OPC_MoveParent,
/*4371*/        OPC_RecordChild1, // #0 = $B
/*4372*/        OPC_MoveParent,
/*4373*/        OPC_RecordChild1, // #1 = $A
/*4374*/        OPC_CheckType, MVT::v4i32,
/*4376*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$B), VRRC:v4i32:$A) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$A, VRRC:v4i32:$B)
/*4385*/      0, /*End of Scope*/
/*4386*/    /*Scope*/ 4|128,1/*132*/, /*->4520*/
/*4388*/      OPC_RecordChild0, // #0 = $src1
/*4389*/      OPC_RecordChild1, // #1 = $src2
/*4390*/      OPC_Scope, 91, /*->4483*/ // 4 children in Scope
/*4392*/        OPC_MoveChild, 1,
/*4394*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4397*/        OPC_Scope, 20, /*->4419*/ // 4 children in Scope
/*4399*/          OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4401*/          OPC_MoveParent,
/*4402*/          OPC_CheckType, MVT::i32,
/*4404*/          OPC_EmitConvertToTarget, 1,
/*4406*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4409*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo:i32:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4419*/        /*Scope*/ 20, /*->4440*/
/*4420*/          OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4422*/          OPC_MoveParent,
/*4423*/          OPC_CheckType, MVT::i32,
/*4425*/          OPC_EmitConvertToTarget, 1,
/*4427*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4430*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo:i32:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4440*/        /*Scope*/ 20, /*->4461*/
/*4441*/          OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4443*/          OPC_MoveParent,
/*4444*/          OPC_CheckType, MVT::i64,
/*4446*/          OPC_EmitConvertToTarget, 1,
/*4448*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4451*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo8:i64:i32 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4461*/        /*Scope*/ 20, /*->4482*/
/*4462*/          OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4464*/          OPC_MoveParent,
/*4465*/          OPC_CheckType, MVT::i64,
/*4467*/          OPC_EmitConvertToTarget, 1,
/*4469*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4472*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo8:i64:i32 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4482*/        0, /*End of Scope*/
/*4483*/      /*Scope*/ 11, /*->4495*/
/*4484*/        OPC_CheckType, MVT::i32,
/*4486*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (AND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4495*/      /*Scope*/ 11, /*->4507*/
/*4496*/        OPC_CheckType, MVT::i64,
/*4498*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                // Dst: (AND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4507*/      /*Scope*/ 11, /*->4519*/
/*4508*/        OPC_CheckType, MVT::v4i32,
/*4510*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VAND:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4519*/      0, /*End of Scope*/
/*4520*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 2|128,2/*258*/,  TARGET_VAL(ISD::OR),// ->4783
/*4525*/    OPC_Scope, 46, /*->4573*/ // 3 children in Scope
/*4527*/      OPC_RecordChild0, // #0 = $rS
/*4528*/      OPC_MoveChild, 1,
/*4530*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4533*/      OPC_RecordChild0, // #1 = $rB
/*4534*/      OPC_MoveChild, 1,
/*4536*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4547*/      OPC_MoveParent,
/*4548*/      OPC_MoveParent,
/*4549*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4561
/*4552*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4572
/*4563*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4573*/    /*Scope*/ 46, /*->4620*/
/*4574*/      OPC_MoveChild, 0,
/*4576*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4579*/      OPC_RecordChild0, // #0 = $rB
/*4580*/      OPC_MoveChild, 1,
/*4582*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4593*/      OPC_MoveParent,
/*4594*/      OPC_MoveParent,
/*4595*/      OPC_RecordChild1, // #1 = $rS
/*4596*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4608
/*4599*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4619
/*4610*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4620*/    /*Scope*/ 32|128,1/*160*/, /*->4782*/
/*4622*/      OPC_RecordChild0, // #0 = $src1
/*4623*/      OPC_RecordChild1, // #1 = $src2
/*4624*/      OPC_Scope, 119, /*->4745*/ // 4 children in Scope
/*4626*/        OPC_MoveChild, 1,
/*4628*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4631*/        OPC_Scope, 19, /*->4652*/ // 5 children in Scope
/*4633*/          OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4635*/          OPC_MoveParent,
/*4636*/          OPC_CheckType, MVT::i32,
/*4638*/          OPC_EmitConvertToTarget, 1,
/*4640*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4643*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4652*/        /*Scope*/ 19, /*->4672*/
/*4653*/          OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4655*/          OPC_MoveParent,
/*4656*/          OPC_CheckType, MVT::i32,
/*4658*/          OPC_EmitConvertToTarget, 1,
/*4660*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4663*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4672*/        /*Scope*/ 19, /*->4692*/
/*4673*/          OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4675*/          OPC_MoveParent,
/*4676*/          OPC_CheckType, MVT::i64,
/*4678*/          OPC_EmitConvertToTarget, 1,
/*4680*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4683*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4692*/        /*Scope*/ 19, /*->4712*/
/*4693*/          OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4695*/          OPC_MoveParent,
/*4696*/          OPC_CheckType, MVT::i64,
/*4698*/          OPC_EmitConvertToTarget, 1,
/*4700*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4703*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4712*/        /*Scope*/ 31, /*->4744*/
/*4713*/          OPC_MoveParent,
/*4714*/          OPC_CheckType, MVT::i32,
/*4716*/          OPC_EmitConvertToTarget, 1,
/*4718*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4721*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*4730*/          OPC_EmitConvertToTarget, 1,
/*4732*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*4735*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4744*/        0, /*End of Scope*/
/*4745*/      /*Scope*/ 11, /*->4757*/
/*4746*/        OPC_CheckType, MVT::i32,
/*4748*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4757*/      /*Scope*/ 11, /*->4769*/
/*4758*/        OPC_CheckType, MVT::i64,
/*4760*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4769*/      /*Scope*/ 11, /*->4781*/
/*4770*/        OPC_CheckType, MVT::v4i32,
/*4772*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4781*/      0, /*End of Scope*/
/*4782*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 1|128,1/*129*/,  TARGET_VAL(PPCISD::Hi),// ->4916
/*4787*/    OPC_RecordChild0, // #0 = $in
/*4788*/    OPC_MoveChild, 0,
/*4790*/    OPC_SwitchOpcode /*4 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->4822
/*4794*/      OPC_MoveParent,
/*4795*/      OPC_MoveChild, 1,
/*4797*/      OPC_CheckInteger, 0, 
/*4799*/      OPC_MoveParent,
/*4800*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4811
/*4803*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4821
/*4813*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->4853
/*4825*/      OPC_MoveParent,
/*4826*/      OPC_MoveChild, 1,
/*4828*/      OPC_CheckInteger, 0, 
/*4830*/      OPC_MoveParent,
/*4831*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4842
/*4834*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4852
/*4844*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->4884
/*4856*/      OPC_MoveParent,
/*4857*/      OPC_MoveChild, 1,
/*4859*/      OPC_CheckInteger, 0, 
/*4861*/      OPC_MoveParent,
/*4862*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4873
/*4865*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4883
/*4875*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->4915
/*4887*/      OPC_MoveParent,
/*4888*/      OPC_MoveChild, 1,
/*4890*/      OPC_CheckInteger, 0, 
/*4892*/      OPC_MoveParent,
/*4893*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4904
/*4896*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4914
/*4906*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 1|128,1/*129*/,  TARGET_VAL(PPCISD::Lo),// ->5049
/*4920*/    OPC_RecordChild0, // #0 = $in
/*4921*/    OPC_MoveChild, 0,
/*4923*/    OPC_SwitchOpcode /*4 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->4955
/*4927*/      OPC_MoveParent,
/*4928*/      OPC_MoveChild, 1,
/*4930*/      OPC_CheckInteger, 0, 
/*4932*/      OPC_MoveParent,
/*4933*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4944
/*4936*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4954
/*4946*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->4986
/*4958*/      OPC_MoveParent,
/*4959*/      OPC_MoveChild, 1,
/*4961*/      OPC_CheckInteger, 0, 
/*4963*/      OPC_MoveParent,
/*4964*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4975
/*4967*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4985
/*4977*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5017
/*4989*/      OPC_MoveParent,
/*4990*/      OPC_MoveChild, 1,
/*4992*/      OPC_CheckInteger, 0, 
/*4994*/      OPC_MoveParent,
/*4995*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5006
/*4998*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5016
/*5008*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5048
/*5020*/      OPC_MoveParent,
/*5021*/      OPC_MoveChild, 1,
/*5023*/      OPC_CheckInteger, 0, 
/*5025*/      OPC_MoveParent,
/*5026*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5037
/*5029*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5047
/*5039*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->5165
/*5052*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*5053*/    OPC_MoveChild, 1,
/*5055*/    OPC_Scope, 18, /*->5075*/ // 6 children in Scope
/*5057*/      OPC_CheckInteger, 57|128,1/*185*/, 
/*5060*/      OPC_MoveParent,
/*5061*/      OPC_RecordChild2, // #1 = $src
/*5062*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5065*/      OPC_EmitMergeInputChains1_0,
/*5066*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 185:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*5075*/    /*Scope*/ 18, /*->5094*/
/*5076*/      OPC_CheckInteger, 58|128,1/*186*/, 
/*5079*/      OPC_MoveParent,
/*5080*/      OPC_RecordChild2, // #1 = $src
/*5081*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5084*/      OPC_EmitMergeInputChains1_0,
/*5085*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 186:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*5094*/    /*Scope*/ 18, /*->5113*/
/*5095*/      OPC_CheckInteger, 59|128,1/*187*/, 
/*5098*/      OPC_MoveParent,
/*5099*/      OPC_RecordChild2, // #1 = $src
/*5100*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5103*/      OPC_EmitMergeInputChains1_0,
/*5104*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 187:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*5113*/    /*Scope*/ 18, /*->5132*/
/*5114*/      OPC_CheckInteger, 62|128,1/*190*/, 
/*5117*/      OPC_MoveParent,
/*5118*/      OPC_RecordChild2, // #1 = $src
/*5119*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5122*/      OPC_EmitMergeInputChains1_0,
/*5123*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 190:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*5132*/    /*Scope*/ 18, /*->5151*/
/*5133*/      OPC_CheckInteger, 63|128,1/*191*/, 
/*5136*/      OPC_MoveParent,
/*5137*/      OPC_RecordChild2, // #1 = $src
/*5138*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5141*/      OPC_EmitMergeInputChains1_0,
/*5142*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 191:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*5151*/    /*Scope*/ 12, /*->5164*/
/*5152*/      OPC_CheckInteger, 64|128,1/*192*/, 
/*5155*/      OPC_MoveParent,
/*5156*/      OPC_EmitMergeInputChains1_0,
/*5157*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 192:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*5164*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 22|128,13/*1686*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->6855
/*5169*/    OPC_MoveChild, 0,
/*5171*/    OPC_Scope, 17, /*->5190*/ // 103 children in Scope
/*5173*/      OPC_CheckInteger, 60|128,1/*188*/, 
/*5176*/      OPC_MoveParent,
/*5177*/      OPC_RecordChild1, // #0 = $src
/*5178*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5181*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 188:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*5190*/    /*Scope*/ 17, /*->5208*/
/*5191*/      OPC_CheckInteger, 61|128,1/*189*/, 
/*5194*/      OPC_MoveParent,
/*5195*/      OPC_RecordChild1, // #0 = $src
/*5196*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5199*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 189:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*5208*/    /*Scope*/ 23, /*->5232*/
/*5209*/      OPC_CheckInteger, 112|128,1/*240*/, 
/*5212*/      OPC_MoveParent,
/*5213*/      OPC_RecordChild1, // #0 = $vB
/*5214*/      OPC_RecordChild2, // #1 = $UIMM
/*5215*/      OPC_MoveChild, 2,
/*5217*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5220*/      OPC_MoveParent,
/*5221*/      OPC_EmitConvertToTarget, 1,
/*5223*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4i32 240:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*5232*/    /*Scope*/ 23, /*->5256*/
/*5233*/      OPC_CheckInteger, 113|128,1/*241*/, 
/*5236*/      OPC_MoveParent,
/*5237*/      OPC_RecordChild1, // #0 = $vB
/*5238*/      OPC_RecordChild2, // #1 = $UIMM
/*5239*/      OPC_MoveChild, 2,
/*5241*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5244*/      OPC_MoveParent,
/*5245*/      OPC_EmitConvertToTarget, 1,
/*5247*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4i32 241:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*5256*/    /*Scope*/ 23, /*->5280*/
/*5257*/      OPC_CheckInteger, 84|128,1/*212*/, 
/*5260*/      OPC_MoveParent,
/*5261*/      OPC_RecordChild1, // #0 = $vB
/*5262*/      OPC_RecordChild2, // #1 = $UIMM
/*5263*/      OPC_MoveChild, 2,
/*5265*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5268*/      OPC_MoveParent,
/*5269*/      OPC_EmitConvertToTarget, 1,
/*5271*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4f32 212:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*5280*/    /*Scope*/ 23, /*->5304*/
/*5281*/      OPC_CheckInteger, 85|128,1/*213*/, 
/*5284*/      OPC_MoveParent,
/*5285*/      OPC_RecordChild1, // #0 = $vB
/*5286*/      OPC_RecordChild2, // #1 = $UIMM
/*5287*/      OPC_MoveChild, 2,
/*5289*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5292*/      OPC_MoveParent,
/*5293*/      OPC_EmitConvertToTarget, 1,
/*5295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4f32 213:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*5304*/    /*Scope*/ 17, /*->5322*/
/*5305*/      OPC_CheckInteger, 124|128,1/*252*/, 
/*5308*/      OPC_MoveParent,
/*5309*/      OPC_RecordChild1, // #0 = $vA
/*5310*/      OPC_RecordChild2, // #1 = $vB
/*5311*/      OPC_RecordChild3, // #2 = $vC
/*5312*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 252:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*5322*/    /*Scope*/ 17, /*->5340*/
/*5323*/      OPC_CheckInteger, 125|128,1/*253*/, 
/*5326*/      OPC_MoveParent,
/*5327*/      OPC_RecordChild1, // #0 = $vA
/*5328*/      OPC_RecordChild2, // #1 = $vB
/*5329*/      OPC_RecordChild3, // #2 = $vC
/*5330*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 253:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*5340*/    /*Scope*/ 17, /*->5358*/
/*5341*/      OPC_CheckInteger, 5|128,2/*261*/, 
/*5344*/      OPC_MoveParent,
/*5345*/      OPC_RecordChild1, // #0 = $vA
/*5346*/      OPC_RecordChild2, // #1 = $vB
/*5347*/      OPC_RecordChild3, // #2 = $vC
/*5348*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 261:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*5358*/    /*Scope*/ 17, /*->5376*/
/*5359*/      OPC_CheckInteger, 21|128,2/*277*/, 
/*5362*/      OPC_MoveParent,
/*5363*/      OPC_RecordChild1, // #0 = $vA
/*5364*/      OPC_RecordChild2, // #1 = $vB
/*5365*/      OPC_RecordChild3, // #2 = $vC
/*5366*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 277:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC)
/*5376*/    /*Scope*/ 17, /*->5394*/
/*5377*/      OPC_CheckInteger, 38|128,2/*294*/, 
/*5380*/      OPC_MoveParent,
/*5381*/      OPC_RecordChild1, // #0 = $vA
/*5382*/      OPC_RecordChild2, // #1 = $vB
/*5383*/      OPC_RecordChild3, // #2 = $vC
/*5384*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 294:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC)
/*5394*/    /*Scope*/ 15, /*->5410*/
/*5395*/      OPC_CheckInteger, 71|128,1/*199*/, 
/*5398*/      OPC_MoveParent,
/*5399*/      OPC_RecordChild1, // #0 = $vA
/*5400*/      OPC_RecordChild2, // #1 = $vB
/*5401*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 199:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5410*/    /*Scope*/ 15, /*->5426*/
/*5411*/      OPC_CheckInteger, 72|128,1/*200*/, 
/*5414*/      OPC_MoveParent,
/*5415*/      OPC_RecordChild1, // #0 = $vA
/*5416*/      OPC_RecordChild2, // #1 = $vB
/*5417*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 200:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5426*/    /*Scope*/ 15, /*->5442*/
/*5427*/      OPC_CheckInteger, 73|128,1/*201*/, 
/*5430*/      OPC_MoveParent,
/*5431*/      OPC_RecordChild1, // #0 = $vA
/*5432*/      OPC_RecordChild2, // #1 = $vB
/*5433*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 201:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5442*/    /*Scope*/ 15, /*->5458*/
/*5443*/      OPC_CheckInteger, 74|128,1/*202*/, 
/*5446*/      OPC_MoveParent,
/*5447*/      OPC_RecordChild1, // #0 = $vA
/*5448*/      OPC_RecordChild2, // #1 = $vB
/*5449*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 202:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5458*/    /*Scope*/ 15, /*->5474*/
/*5459*/      OPC_CheckInteger, 75|128,1/*203*/, 
/*5462*/      OPC_MoveParent,
/*5463*/      OPC_RecordChild1, // #0 = $vA
/*5464*/      OPC_RecordChild2, // #1 = $vB
/*5465*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 203:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5474*/    /*Scope*/ 15, /*->5490*/
/*5475*/      OPC_CheckInteger, 76|128,1/*204*/, 
/*5478*/      OPC_MoveParent,
/*5479*/      OPC_RecordChild1, // #0 = $vA
/*5480*/      OPC_RecordChild2, // #1 = $vB
/*5481*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 204:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5490*/    /*Scope*/ 15, /*->5506*/
/*5491*/      OPC_CheckInteger, 77|128,1/*205*/, 
/*5494*/      OPC_MoveParent,
/*5495*/      OPC_RecordChild1, // #0 = $vA
/*5496*/      OPC_RecordChild2, // #1 = $vB
/*5497*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 205:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5506*/    /*Scope*/ 15, /*->5522*/
/*5507*/      OPC_CheckInteger, 78|128,1/*206*/, 
/*5510*/      OPC_MoveParent,
/*5511*/      OPC_RecordChild1, // #0 = $vA
/*5512*/      OPC_RecordChild2, // #1 = $vB
/*5513*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 206:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5522*/    /*Scope*/ 15, /*->5538*/
/*5523*/      OPC_CheckInteger, 79|128,1/*207*/, 
/*5526*/      OPC_MoveParent,
/*5527*/      OPC_RecordChild1, // #0 = $vA
/*5528*/      OPC_RecordChild2, // #1 = $vB
/*5529*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 207:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5538*/    /*Scope*/ 15, /*->5554*/
/*5539*/      OPC_CheckInteger, 80|128,1/*208*/, 
/*5542*/      OPC_MoveParent,
/*5543*/      OPC_RecordChild1, // #0 = $vA
/*5544*/      OPC_RecordChild2, // #1 = $vB
/*5545*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 208:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5554*/    /*Scope*/ 15, /*->5570*/
/*5555*/      OPC_CheckInteger, 81|128,1/*209*/, 
/*5558*/      OPC_MoveParent,
/*5559*/      OPC_RecordChild1, // #0 = $vA
/*5560*/      OPC_RecordChild2, // #1 = $vB
/*5561*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 209:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5570*/    /*Scope*/ 15, /*->5586*/
/*5571*/      OPC_CheckInteger, 82|128,1/*210*/, 
/*5574*/      OPC_MoveParent,
/*5575*/      OPC_RecordChild1, // #0 = $vA
/*5576*/      OPC_RecordChild2, // #1 = $vB
/*5577*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 210:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5586*/    /*Scope*/ 15, /*->5602*/
/*5587*/      OPC_CheckInteger, 83|128,1/*211*/, 
/*5590*/      OPC_MoveParent,
/*5591*/      OPC_RecordChild1, // #0 = $vA
/*5592*/      OPC_RecordChild2, // #1 = $vB
/*5593*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 211:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5602*/    /*Scope*/ 15, /*->5618*/
/*5603*/      OPC_CheckInteger, 118|128,1/*246*/, 
/*5606*/      OPC_MoveParent,
/*5607*/      OPC_RecordChild1, // #0 = $vA
/*5608*/      OPC_RecordChild2, // #1 = $vB
/*5609*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 246:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5618*/    /*Scope*/ 15, /*->5634*/
/*5619*/      OPC_CheckInteger, 119|128,1/*247*/, 
/*5622*/      OPC_MoveParent,
/*5623*/      OPC_RecordChild1, // #0 = $vA
/*5624*/      OPC_RecordChild2, // #1 = $vB
/*5625*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 247:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5634*/    /*Scope*/ 15, /*->5650*/
/*5635*/      OPC_CheckInteger, 120|128,1/*248*/, 
/*5638*/      OPC_MoveParent,
/*5639*/      OPC_RecordChild1, // #0 = $vA
/*5640*/      OPC_RecordChild2, // #1 = $vB
/*5641*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 248:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5650*/    /*Scope*/ 15, /*->5666*/
/*5651*/      OPC_CheckInteger, 121|128,1/*249*/, 
/*5654*/      OPC_MoveParent,
/*5655*/      OPC_RecordChild1, // #0 = $vA
/*5656*/      OPC_RecordChild2, // #1 = $vB
/*5657*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 249:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5666*/    /*Scope*/ 15, /*->5682*/
/*5667*/      OPC_CheckInteger, 122|128,1/*250*/, 
/*5670*/      OPC_MoveParent,
/*5671*/      OPC_RecordChild1, // #0 = $vA
/*5672*/      OPC_RecordChild2, // #1 = $vB
/*5673*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 250:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5682*/    /*Scope*/ 15, /*->5698*/
/*5683*/      OPC_CheckInteger, 123|128,1/*251*/, 
/*5686*/      OPC_MoveParent,
/*5687*/      OPC_RecordChild1, // #0 = $vA
/*5688*/      OPC_RecordChild2, // #1 = $vB
/*5689*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 251:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5698*/    /*Scope*/ 15, /*->5714*/
/*5699*/      OPC_CheckInteger, 127|128,1/*255*/, 
/*5702*/      OPC_MoveParent,
/*5703*/      OPC_RecordChild1, // #0 = $vA
/*5704*/      OPC_RecordChild2, // #1 = $vB
/*5705*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 255:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5714*/    /*Scope*/ 15, /*->5730*/
/*5715*/      OPC_CheckInteger, 0|128,2/*256*/, 
/*5718*/      OPC_MoveParent,
/*5719*/      OPC_RecordChild1, // #0 = $vA
/*5720*/      OPC_RecordChild2, // #1 = $vB
/*5721*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 256:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5730*/    /*Scope*/ 15, /*->5746*/
/*5731*/      OPC_CheckInteger, 1|128,2/*257*/, 
/*5734*/      OPC_MoveParent,
/*5735*/      OPC_RecordChild1, // #0 = $vA
/*5736*/      OPC_RecordChild2, // #1 = $vB
/*5737*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 257:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5746*/    /*Scope*/ 15, /*->5762*/
/*5747*/      OPC_CheckInteger, 2|128,2/*258*/, 
/*5750*/      OPC_MoveParent,
/*5751*/      OPC_RecordChild1, // #0 = $vA
/*5752*/      OPC_RecordChild2, // #1 = $vB
/*5753*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 258:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5762*/    /*Scope*/ 15, /*->5778*/
/*5763*/      OPC_CheckInteger, 3|128,2/*259*/, 
/*5766*/      OPC_MoveParent,
/*5767*/      OPC_RecordChild1, // #0 = $vA
/*5768*/      OPC_RecordChild2, // #1 = $vB
/*5769*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 259:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5778*/    /*Scope*/ 15, /*->5794*/
/*5779*/      OPC_CheckInteger, 4|128,2/*260*/, 
/*5782*/      OPC_MoveParent,
/*5783*/      OPC_RecordChild1, // #0 = $vA
/*5784*/      OPC_RecordChild2, // #1 = $vB
/*5785*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 260:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5794*/    /*Scope*/ 17, /*->5812*/
/*5795*/      OPC_CheckInteger, 6|128,2/*262*/, 
/*5798*/      OPC_MoveParent,
/*5799*/      OPC_RecordChild1, // #0 = $vA
/*5800*/      OPC_RecordChild2, // #1 = $vB
/*5801*/      OPC_RecordChild3, // #2 = $vC
/*5802*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 262:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*5812*/    /*Scope*/ 17, /*->5830*/
/*5813*/      OPC_CheckInteger, 7|128,2/*263*/, 
/*5816*/      OPC_MoveParent,
/*5817*/      OPC_RecordChild1, // #0 = $vA
/*5818*/      OPC_RecordChild2, // #1 = $vB
/*5819*/      OPC_RecordChild3, // #2 = $vC
/*5820*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 263:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*5830*/    /*Scope*/ 17, /*->5848*/
/*5831*/      OPC_CheckInteger, 8|128,2/*264*/, 
/*5834*/      OPC_MoveParent,
/*5835*/      OPC_RecordChild1, // #0 = $vA
/*5836*/      OPC_RecordChild2, // #1 = $vB
/*5837*/      OPC_RecordChild3, // #2 = $vC
/*5838*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 264:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*5848*/    /*Scope*/ 17, /*->5866*/
/*5849*/      OPC_CheckInteger, 9|128,2/*265*/, 
/*5852*/      OPC_MoveParent,
/*5853*/      OPC_RecordChild1, // #0 = $vA
/*5854*/      OPC_RecordChild2, // #1 = $vB
/*5855*/      OPC_RecordChild3, // #2 = $vC
/*5856*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 265:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*5866*/    /*Scope*/ 17, /*->5884*/
/*5867*/      OPC_CheckInteger, 10|128,2/*266*/, 
/*5870*/      OPC_MoveParent,
/*5871*/      OPC_RecordChild1, // #0 = $vA
/*5872*/      OPC_RecordChild2, // #1 = $vB
/*5873*/      OPC_RecordChild3, // #2 = $vC
/*5874*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 266:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*5884*/    /*Scope*/ 17, /*->5902*/
/*5885*/      OPC_CheckInteger, 11|128,2/*267*/, 
/*5888*/      OPC_MoveParent,
/*5889*/      OPC_RecordChild1, // #0 = $vA
/*5890*/      OPC_RecordChild2, // #1 = $vB
/*5891*/      OPC_RecordChild3, // #2 = $vC
/*5892*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 267:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*5902*/    /*Scope*/ 15, /*->5918*/
/*5903*/      OPC_CheckInteger, 12|128,2/*268*/, 
/*5906*/      OPC_MoveParent,
/*5907*/      OPC_RecordChild1, // #0 = $vA
/*5908*/      OPC_RecordChild2, // #1 = $vB
/*5909*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 268:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5918*/    /*Scope*/ 15, /*->5934*/
/*5919*/      OPC_CheckInteger, 13|128,2/*269*/, 
/*5922*/      OPC_MoveParent,
/*5923*/      OPC_RecordChild1, // #0 = $vA
/*5924*/      OPC_RecordChild2, // #1 = $vB
/*5925*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 269:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5934*/    /*Scope*/ 15, /*->5950*/
/*5935*/      OPC_CheckInteger, 14|128,2/*270*/, 
/*5938*/      OPC_MoveParent,
/*5939*/      OPC_RecordChild1, // #0 = $vA
/*5940*/      OPC_RecordChild2, // #1 = $vB
/*5941*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 270:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5950*/    /*Scope*/ 15, /*->5966*/
/*5951*/      OPC_CheckInteger, 15|128,2/*271*/, 
/*5954*/      OPC_MoveParent,
/*5955*/      OPC_RecordChild1, // #0 = $vA
/*5956*/      OPC_RecordChild2, // #1 = $vB
/*5957*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 271:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5966*/    /*Scope*/ 15, /*->5982*/
/*5967*/      OPC_CheckInteger, 16|128,2/*272*/, 
/*5970*/      OPC_MoveParent,
/*5971*/      OPC_RecordChild1, // #0 = $vA
/*5972*/      OPC_RecordChild2, // #1 = $vB
/*5973*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 272:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5982*/    /*Scope*/ 15, /*->5998*/
/*5983*/      OPC_CheckInteger, 17|128,2/*273*/, 
/*5986*/      OPC_MoveParent,
/*5987*/      OPC_RecordChild1, // #0 = $vA
/*5988*/      OPC_RecordChild2, // #1 = $vB
/*5989*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 273:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5998*/    /*Scope*/ 15, /*->6014*/
/*5999*/      OPC_CheckInteger, 18|128,2/*274*/, 
/*6002*/      OPC_MoveParent,
/*6003*/      OPC_RecordChild1, // #0 = $vA
/*6004*/      OPC_RecordChild2, // #1 = $vB
/*6005*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 274:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6014*/    /*Scope*/ 15, /*->6030*/
/*6015*/      OPC_CheckInteger, 19|128,2/*275*/, 
/*6018*/      OPC_MoveParent,
/*6019*/      OPC_RecordChild1, // #0 = $vA
/*6020*/      OPC_RecordChild2, // #1 = $vB
/*6021*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 275:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6030*/    /*Scope*/ 15, /*->6046*/
/*6031*/      OPC_CheckInteger, 52|128,2/*308*/, 
/*6034*/      OPC_MoveParent,
/*6035*/      OPC_RecordChild1, // #0 = $vA
/*6036*/      OPC_RecordChild2, // #1 = $vB
/*6037*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 308:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6046*/    /*Scope*/ 15, /*->6062*/
/*6047*/      OPC_CheckInteger, 53|128,2/*309*/, 
/*6050*/      OPC_MoveParent,
/*6051*/      OPC_RecordChild1, // #0 = $vA
/*6052*/      OPC_RecordChild2, // #1 = $vB
/*6053*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 309:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6062*/    /*Scope*/ 15, /*->6078*/
/*6063*/      OPC_CheckInteger, 54|128,2/*310*/, 
/*6066*/      OPC_MoveParent,
/*6067*/      OPC_RecordChild1, // #0 = $vA
/*6068*/      OPC_RecordChild2, // #1 = $vB
/*6069*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 310:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6078*/    /*Scope*/ 15, /*->6094*/
/*6079*/      OPC_CheckInteger, 55|128,2/*311*/, 
/*6082*/      OPC_MoveParent,
/*6083*/      OPC_RecordChild1, // #0 = $vA
/*6084*/      OPC_RecordChild2, // #1 = $vB
/*6085*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 311:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6094*/    /*Scope*/ 15, /*->6110*/
/*6095*/      OPC_CheckInteger, 56|128,2/*312*/, 
/*6098*/      OPC_MoveParent,
/*6099*/      OPC_RecordChild1, // #0 = $vA
/*6100*/      OPC_RecordChild2, // #1 = $vB
/*6101*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 312:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6110*/    /*Scope*/ 15, /*->6126*/
/*6111*/      OPC_CheckInteger, 57|128,2/*313*/, 
/*6114*/      OPC_MoveParent,
/*6115*/      OPC_RecordChild1, // #0 = $vA
/*6116*/      OPC_RecordChild2, // #1 = $vB
/*6117*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 313:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6126*/    /*Scope*/ 15, /*->6142*/
/*6127*/      OPC_CheckInteger, 58|128,2/*314*/, 
/*6130*/      OPC_MoveParent,
/*6131*/      OPC_RecordChild1, // #0 = $vA
/*6132*/      OPC_RecordChild2, // #1 = $vB
/*6133*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 314:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6142*/    /*Scope*/ 15, /*->6158*/
/*6143*/      OPC_CheckInteger, 63|128,2/*319*/, 
/*6146*/      OPC_MoveParent,
/*6147*/      OPC_RecordChild1, // #0 = $vA
/*6148*/      OPC_RecordChild2, // #1 = $vB
/*6149*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 319:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6158*/    /*Scope*/ 15, /*->6174*/
/*6159*/      OPC_CheckInteger, 59|128,2/*315*/, 
/*6162*/      OPC_MoveParent,
/*6163*/      OPC_RecordChild1, // #0 = $vA
/*6164*/      OPC_RecordChild2, // #1 = $vB
/*6165*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 315:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6174*/    /*Scope*/ 15, /*->6190*/
/*6175*/      OPC_CheckInteger, 60|128,2/*316*/, 
/*6178*/      OPC_MoveParent,
/*6179*/      OPC_RecordChild1, // #0 = $vA
/*6180*/      OPC_RecordChild2, // #1 = $vB
/*6181*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 316:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*6190*/    /*Scope*/ 15, /*->6206*/
/*6191*/      OPC_CheckInteger, 61|128,2/*317*/, 
/*6194*/      OPC_MoveParent,
/*6195*/      OPC_RecordChild1, // #0 = $vA
/*6196*/      OPC_RecordChild2, // #1 = $vB
/*6197*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 317:iPTR, VRRC:v8i16:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 VRRC:v8i16:$vA, VRRC:v4i32:$vB)
/*6206*/    /*Scope*/ 15, /*->6222*/
/*6207*/      OPC_CheckInteger, 62|128,2/*318*/, 
/*6210*/      OPC_MoveParent,
/*6211*/      OPC_RecordChild1, // #0 = $vA
/*6212*/      OPC_RecordChild2, // #1 = $vB
/*6213*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 318:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*6222*/    /*Scope*/ 15, /*->6238*/
/*6223*/      OPC_CheckInteger, 34|128,2/*290*/, 
/*6226*/      OPC_MoveParent,
/*6227*/      OPC_RecordChild1, // #0 = $vA
/*6228*/      OPC_RecordChild2, // #1 = $vB
/*6229*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 290:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6238*/    /*Scope*/ 15, /*->6254*/
/*6239*/      OPC_CheckInteger, 35|128,2/*291*/, 
/*6242*/      OPC_MoveParent,
/*6243*/      OPC_RecordChild1, // #0 = $vA
/*6244*/      OPC_RecordChild2, // #1 = $vB
/*6245*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 291:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6254*/    /*Scope*/ 15, /*->6270*/
/*6255*/      OPC_CheckInteger, 36|128,2/*292*/, 
/*6258*/      OPC_MoveParent,
/*6259*/      OPC_RecordChild1, // #0 = $vA
/*6260*/      OPC_RecordChild2, // #1 = $vB
/*6261*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 292:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6270*/    /*Scope*/ 15, /*->6286*/
/*6271*/      OPC_CheckInteger, 39|128,2/*295*/, 
/*6274*/      OPC_MoveParent,
/*6275*/      OPC_RecordChild1, // #0 = $vA
/*6276*/      OPC_RecordChild2, // #1 = $vB
/*6277*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 295:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6286*/    /*Scope*/ 15, /*->6302*/
/*6287*/      OPC_CheckInteger, 42|128,2/*298*/, 
/*6290*/      OPC_MoveParent,
/*6291*/      OPC_RecordChild1, // #0 = $vA
/*6292*/      OPC_RecordChild2, // #1 = $vB
/*6293*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 298:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6302*/    /*Scope*/ 15, /*->6318*/
/*6303*/      OPC_CheckInteger, 40|128,2/*296*/, 
/*6306*/      OPC_MoveParent,
/*6307*/      OPC_RecordChild1, // #0 = $vA
/*6308*/      OPC_RecordChild2, // #1 = $vB
/*6309*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 296:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6318*/    /*Scope*/ 15, /*->6334*/
/*6319*/      OPC_CheckInteger, 41|128,2/*297*/, 
/*6322*/      OPC_MoveParent,
/*6323*/      OPC_RecordChild1, // #0 = $vA
/*6324*/      OPC_RecordChild2, // #1 = $vB
/*6325*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 297:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6334*/    /*Scope*/ 15, /*->6350*/
/*6335*/      OPC_CheckInteger, 43|128,2/*299*/, 
/*6338*/      OPC_MoveParent,
/*6339*/      OPC_RecordChild1, // #0 = $vA
/*6340*/      OPC_RecordChild2, // #1 = $vB
/*6341*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 299:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6350*/    /*Scope*/ 15, /*->6366*/
/*6351*/      OPC_CheckInteger, 44|128,2/*300*/, 
/*6354*/      OPC_MoveParent,
/*6355*/      OPC_RecordChild1, // #0 = $vA
/*6356*/      OPC_RecordChild2, // #1 = $vB
/*6357*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 300:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6366*/    /*Scope*/ 15, /*->6382*/
/*6367*/      OPC_CheckInteger, 50|128,2/*306*/, 
/*6370*/      OPC_MoveParent,
/*6371*/      OPC_RecordChild1, // #0 = $vA
/*6372*/      OPC_RecordChild2, // #1 = $vB
/*6373*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 306:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6382*/    /*Scope*/ 15, /*->6398*/
/*6383*/      OPC_CheckInteger, 45|128,2/*301*/, 
/*6386*/      OPC_MoveParent,
/*6387*/      OPC_RecordChild1, // #0 = $vA
/*6388*/      OPC_RecordChild2, // #1 = $vB
/*6389*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 301:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6398*/    /*Scope*/ 15, /*->6414*/
/*6399*/      OPC_CheckInteger, 46|128,2/*302*/, 
/*6402*/      OPC_MoveParent,
/*6403*/      OPC_RecordChild1, // #0 = $vA
/*6404*/      OPC_RecordChild2, // #1 = $vB
/*6405*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 302:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6414*/    /*Scope*/ 15, /*->6430*/
/*6415*/      OPC_CheckInteger, 47|128,2/*303*/, 
/*6418*/      OPC_MoveParent,
/*6419*/      OPC_RecordChild1, // #0 = $vA
/*6420*/      OPC_RecordChild2, // #1 = $vB
/*6421*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 303:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6430*/    /*Scope*/ 15, /*->6446*/
/*6431*/      OPC_CheckInteger, 48|128,2/*304*/, 
/*6434*/      OPC_MoveParent,
/*6435*/      OPC_RecordChild1, // #0 = $vA
/*6436*/      OPC_RecordChild2, // #1 = $vB
/*6437*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 304:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6446*/    /*Scope*/ 15, /*->6462*/
/*6447*/      OPC_CheckInteger, 49|128,2/*305*/, 
/*6450*/      OPC_MoveParent,
/*6451*/      OPC_RecordChild1, // #0 = $vA
/*6452*/      OPC_RecordChild2, // #1 = $vB
/*6453*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 305:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6462*/    /*Scope*/ 15, /*->6478*/
/*6463*/      OPC_CheckInteger, 51|128,2/*307*/, 
/*6466*/      OPC_MoveParent,
/*6467*/      OPC_RecordChild1, // #0 = $vA
/*6468*/      OPC_RecordChild2, // #1 = $vB
/*6469*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 307:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6478*/    /*Scope*/ 15, /*->6494*/
/*6479*/      OPC_CheckInteger, 22|128,2/*278*/, 
/*6482*/      OPC_MoveParent,
/*6483*/      OPC_RecordChild1, // #0 = $vA
/*6484*/      OPC_RecordChild2, // #1 = $vB
/*6485*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 278:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6494*/    /*Scope*/ 15, /*->6510*/
/*6495*/      OPC_CheckInteger, 23|128,2/*279*/, 
/*6498*/      OPC_MoveParent,
/*6499*/      OPC_RecordChild1, // #0 = $vA
/*6500*/      OPC_RecordChild2, // #1 = $vB
/*6501*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 279:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6510*/    /*Scope*/ 15, /*->6526*/
/*6511*/      OPC_CheckInteger, 24|128,2/*280*/, 
/*6514*/      OPC_MoveParent,
/*6515*/      OPC_RecordChild1, // #0 = $vA
/*6516*/      OPC_RecordChild2, // #1 = $vB
/*6517*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 280:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6526*/    /*Scope*/ 15, /*->6542*/
/*6527*/      OPC_CheckInteger, 25|128,2/*281*/, 
/*6530*/      OPC_MoveParent,
/*6531*/      OPC_RecordChild1, // #0 = $vA
/*6532*/      OPC_RecordChild2, // #1 = $vB
/*6533*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 281:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6542*/    /*Scope*/ 15, /*->6558*/
/*6543*/      OPC_CheckInteger, 26|128,2/*282*/, 
/*6546*/      OPC_MoveParent,
/*6547*/      OPC_RecordChild1, // #0 = $vA
/*6548*/      OPC_RecordChild2, // #1 = $vB
/*6549*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 282:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6558*/    /*Scope*/ 15, /*->6574*/
/*6559*/      OPC_CheckInteger, 27|128,2/*283*/, 
/*6562*/      OPC_MoveParent,
/*6563*/      OPC_RecordChild1, // #0 = $vA
/*6564*/      OPC_RecordChild2, // #1 = $vB
/*6565*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 283:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6574*/    /*Scope*/ 15, /*->6590*/
/*6575*/      OPC_CheckInteger, 28|128,2/*284*/, 
/*6578*/      OPC_MoveParent,
/*6579*/      OPC_RecordChild1, // #0 = $vA
/*6580*/      OPC_RecordChild2, // #1 = $vB
/*6581*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 284:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6590*/    /*Scope*/ 13, /*->6604*/
/*6591*/      OPC_CheckInteger, 64|128,2/*320*/, 
/*6594*/      OPC_MoveParent,
/*6595*/      OPC_RecordChild1, // #0 = $vB
/*6596*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 320:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 VRRC:v8i16:$vB)
/*6604*/    /*Scope*/ 13, /*->6618*/
/*6605*/      OPC_CheckInteger, 65|128,2/*321*/, 
/*6608*/      OPC_MoveParent,
/*6609*/      OPC_RecordChild1, // #0 = $vB
/*6610*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 321:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 VRRC:v16i8:$vB)
/*6618*/    /*Scope*/ 13, /*->6632*/
/*6619*/      OPC_CheckInteger, 66|128,2/*322*/, 
/*6622*/      OPC_MoveParent,
/*6623*/      OPC_RecordChild1, // #0 = $vB
/*6624*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 322:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 VRRC:v8i16:$vB)
/*6632*/    /*Scope*/ 13, /*->6646*/
/*6633*/      OPC_CheckInteger, 67|128,2/*323*/, 
/*6636*/      OPC_MoveParent,
/*6637*/      OPC_RecordChild1, // #0 = $vB
/*6638*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 323:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 VRRC:v8i16:$vB)
/*6646*/    /*Scope*/ 13, /*->6660*/
/*6647*/      OPC_CheckInteger, 68|128,2/*324*/, 
/*6650*/      OPC_MoveParent,
/*6651*/      OPC_RecordChild1, // #0 = $vB
/*6652*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 324:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 VRRC:v16i8:$vB)
/*6660*/    /*Scope*/ 13, /*->6674*/
/*6661*/      OPC_CheckInteger, 69|128,2/*325*/, 
/*6664*/      OPC_MoveParent,
/*6665*/      OPC_RecordChild1, // #0 = $vB
/*6666*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 325:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 VRRC:v8i16:$vB)
/*6674*/    /*Scope*/ 13, /*->6688*/
/*6675*/      OPC_CheckInteger, 114|128,1/*242*/, 
/*6678*/      OPC_MoveParent,
/*6679*/      OPC_RecordChild1, // #0 = $vB
/*6680*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 242:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 VRRC:v4f32:$vB)
/*6688*/    /*Scope*/ 13, /*->6702*/
/*6689*/      OPC_CheckInteger, 115|128,1/*243*/, 
/*6692*/      OPC_MoveParent,
/*6693*/      OPC_RecordChild1, // #0 = $vB
/*6694*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 243:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 VRRC:v4f32:$vB)
/*6702*/    /*Scope*/ 15, /*->6718*/
/*6703*/      OPC_CheckInteger, 117|128,1/*245*/, 
/*6706*/      OPC_MoveParent,
/*6707*/      OPC_RecordChild1, // #0 = $vA
/*6708*/      OPC_RecordChild2, // #1 = $vB
/*6709*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 245:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*6718*/    /*Scope*/ 15, /*->6734*/
/*6719*/      OPC_CheckInteger, 126|128,1/*254*/, 
/*6722*/      OPC_MoveParent,
/*6723*/      OPC_RecordChild1, // #0 = $vA
/*6724*/      OPC_RecordChild2, // #1 = $vB
/*6725*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 254:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*6734*/    /*Scope*/ 13, /*->6748*/
/*6735*/      OPC_CheckInteger, 29|128,2/*285*/, 
/*6738*/      OPC_MoveParent,
/*6739*/      OPC_RecordChild1, // #0 = $vB
/*6740*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 285:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 VRRC:v4f32:$vB)
/*6748*/    /*Scope*/ 13, /*->6762*/
/*6749*/      OPC_CheckInteger, 30|128,2/*286*/, 
/*6752*/      OPC_MoveParent,
/*6753*/      OPC_RecordChild1, // #0 = $vB
/*6754*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 286:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 VRRC:v4f32:$vB)
/*6762*/    /*Scope*/ 13, /*->6776*/
/*6763*/      OPC_CheckInteger, 31|128,2/*287*/, 
/*6766*/      OPC_MoveParent,
/*6767*/      OPC_RecordChild1, // #0 = $vB
/*6768*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 287:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 VRRC:v4f32:$vB)
/*6776*/    /*Scope*/ 13, /*->6790*/
/*6777*/      OPC_CheckInteger, 32|128,2/*288*/, 
/*6780*/      OPC_MoveParent,
/*6781*/      OPC_RecordChild1, // #0 = $vB
/*6782*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 288:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 VRRC:v4f32:$vB)
/*6790*/    /*Scope*/ 13, /*->6804*/
/*6791*/      OPC_CheckInteger, 33|128,2/*289*/, 
/*6794*/      OPC_MoveParent,
/*6795*/      OPC_RecordChild1, // #0 = $vB
/*6796*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 289:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 VRRC:v4f32:$vB)
/*6804*/    /*Scope*/ 13, /*->6818*/
/*6805*/      OPC_CheckInteger, 37|128,2/*293*/, 
/*6808*/      OPC_MoveParent,
/*6809*/      OPC_RecordChild1, // #0 = $vB
/*6810*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 293:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 VRRC:v4f32:$vB)
/*6818*/    /*Scope*/ 17, /*->6836*/
/*6819*/      OPC_CheckInteger, 116|128,1/*244*/, 
/*6822*/      OPC_MoveParent,
/*6823*/      OPC_RecordChild1, // #0 = $A
/*6824*/      OPC_RecordChild2, // #1 = $B
/*6825*/      OPC_RecordChild3, // #2 = $C
/*6826*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 244:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*6836*/    /*Scope*/ 17, /*->6854*/
/*6837*/      OPC_CheckInteger, 20|128,2/*276*/, 
/*6840*/      OPC_MoveParent,
/*6841*/      OPC_RecordChild1, // #0 = $A
/*6842*/      OPC_RecordChild2, // #1 = $B
/*6843*/      OPC_RecordChild3, // #2 = $C
/*6844*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 276:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*6854*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->6898
/*6858*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*6859*/    OPC_RecordChild1, // #1 = $rS
/*6860*/    OPC_Scope, 17, /*->6879*/ // 2 children in Scope
/*6862*/      OPC_CheckChild1Type, MVT::i32,
/*6864*/      OPC_RecordChild2, // #2 = $dst
/*6865*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*6868*/      OPC_EmitMergeInputChains1_0,
/*6869*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx GPRC:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*6879*/    /*Scope*/ 17, /*->6897*/
/*6880*/      OPC_CheckChild1Type, MVT::i64,
/*6882*/      OPC_RecordChild2, // #2 = $dst
/*6883*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*6886*/      OPC_EmitMergeInputChains1_0,
/*6887*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx G8RC:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 G8RC:i64:$rS, xoaddr:iPTR:$dst)
/*6897*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(PPCISD::STBRX),// ->6942
/*6901*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*6902*/    OPC_RecordChild1, // #1 = $rS
/*6903*/    OPC_RecordChild2, // #2 = $dst
/*6904*/    OPC_MoveChild, 3,
/*6906*/    OPC_Scope, 16, /*->6924*/ // 2 children in Scope
/*6908*/      OPC_CheckValueType, MVT::i16,
/*6910*/      OPC_MoveParent,
/*6911*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*6914*/      OPC_EmitMergeInputChains1_0,
/*6915*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
              // Dst: (STHBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*6924*/    /*Scope*/ 16, /*->6941*/
/*6925*/      OPC_CheckValueType, MVT::i32,
/*6927*/      OPC_MoveParent,
/*6928*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*6931*/      OPC_EmitMergeInputChains1_0,
/*6932*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
              // Dst: (STWBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*6941*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->6961
/*6945*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*6946*/    OPC_RecordChild1, // #1 = $frS
/*6947*/    OPC_RecordChild2, // #2 = $dst
/*6948*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*6951*/    OPC_EmitMergeInputChains1_0,
/*6952*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx F8RC:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX F8RC:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::STD_32),// ->6999
/*6964*/    OPC_RecordNode,   // #0 = 'PPCstd_32' chained node
/*6965*/    OPC_RecordChild1, // #1 = $rT
/*6966*/    OPC_CheckChild1Type, MVT::i32,
/*6968*/    OPC_RecordChild2, // #2 = $dst
/*6969*/    OPC_Scope, 13, /*->6984*/ // 2 children in Scope
/*6971*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*6974*/      OPC_EmitMergeInputChains1_0,
/*6975*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STD_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, ixaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STD_32 GPRC:i32:$rT, ixaddr:iPTR:$dst)
/*6984*/    /*Scope*/ 13, /*->6998*/
/*6985*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*6988*/      OPC_EmitMergeInputChains1_0,
/*6989*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDX_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, xaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDX_32 GPRC:i32:$rT, xaddr:iPTR:$dst)
/*6998*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31|128,1/*159*/,  TARGET_VAL(ISD::FSUB),// ->7162
/*7003*/    OPC_Scope, 76, /*->7081*/ // 2 children in Scope
/*7005*/      OPC_MoveChild, 0,
/*7007*/      OPC_SwitchOpcode /*2 cases */, 32,  TARGET_VAL(ISD::BUILD_VECTOR),// ->7043
/*7011*/        OPC_CheckPredicate, 66, // Predicate_V_immneg0
/*7013*/        OPC_MoveParent,
/*7014*/        OPC_MoveChild, 1,
/*7016*/        OPC_CheckOpcode, TARGET_VAL(ISD::FSUB),
/*7019*/        OPC_MoveChild, 0,
/*7021*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7024*/        OPC_RecordChild0, // #0 = $vA
/*7025*/        OPC_RecordChild1, // #1 = $vC
/*7026*/        OPC_MoveParent,
/*7027*/        OPC_RecordChild1, // #2 = $vB
/*7028*/        OPC_MoveParent,
/*7029*/        OPC_CheckType, MVT::v4f32,
/*7031*/        OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7033*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fsub:v4f32 (build_vector:v4f32)<<P:Predicate_V_immneg0>>, (fsub:v4f32 (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC), VRRC:v4f32:$vB)) - Complexity = 13
                // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
              /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::FMUL),// ->7080
/*7046*/        OPC_RecordChild0, // #0 = $FRA
/*7047*/        OPC_RecordChild1, // #1 = $FRC
/*7048*/        OPC_MoveParent,
/*7049*/        OPC_RecordChild1, // #2 = $FRB
/*7050*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->7065
/*7053*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7055*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fsub:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB) - Complexity = 6
                  // Dst: (FMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                /*SwitchType*/ 12,  MVT::f32,// ->7079
/*7067*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7069*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fsub:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB) - Complexity = 6
                  // Dst: (FMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7081*/    /*Scope*/ 79, /*->7161*/
/*7082*/      OPC_RecordChild0, // #0 = $B
/*7083*/      OPC_Scope, 38, /*->7123*/ // 2 children in Scope
/*7085*/        OPC_MoveChild, 1,
/*7087*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7090*/        OPC_RecordChild0, // #1 = $A
/*7091*/        OPC_RecordChild1, // #2 = $C
/*7092*/        OPC_MoveParent,
/*7093*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->7108
/*7096*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7098*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fsub:f64 F8RC:f64:$B, (fmul:f64 F8RC:f64:$A, F8RC:f64:$C)) - Complexity = 6
                  // Dst: (FNMSUB:f64 F8RC:f64:$A, F8RC:f64:$C, F8RC:f64:$B)
                /*SwitchType*/ 12,  MVT::f32,// ->7122
/*7110*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7112*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fsub:f32 F4RC:f32:$B, (fmul:f32 F4RC:f32:$A, F4RC:f32:$C)) - Complexity = 6
                  // Dst: (FNMSUBS:f32 F4RC:f32:$A, F4RC:f32:$C, F4RC:f32:$B)
                0, // EndSwitchType
/*7123*/      /*Scope*/ 36, /*->7160*/
/*7124*/        OPC_RecordChild1, // #1 = $FRB
/*7125*/        OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7137
/*7128*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
                  // Dst: (FSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
                /*SwitchType*/ 9,  MVT::f32,// ->7148
/*7139*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
                  // Dst: (FSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
                /*SwitchType*/ 9,  MVT::v4f32,// ->7159
/*7150*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                      1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
                  // Dst: (VSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
                0, // EndSwitchType
/*7160*/      0, /*End of Scope*/
/*7161*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->7191
/*7165*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*7166*/    OPC_CaptureGlueInput,
/*7167*/    OPC_RecordChild1, // #1 = $amt1
/*7168*/    OPC_MoveChild, 1,
/*7170*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7173*/    OPC_MoveParent,
/*7174*/    OPC_RecordChild2, // #2 = $amt2
/*7175*/    OPC_MoveChild, 2,
/*7177*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7180*/    OPC_MoveParent,
/*7181*/    OPC_EmitMergeInputChains1_0,
/*7182*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->7393
/*7195*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*7196*/    OPC_CaptureGlueInput,
/*7197*/    OPC_RecordChild1, // #1 = $func
/*7198*/    OPC_Scope, 21|128,1/*149*/, /*->7350*/ // 3 children in Scope
/*7201*/      OPC_MoveChild, 1,
/*7203*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->7255
/*7207*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->7231
/*7210*/          OPC_MoveParent,
/*7211*/          OPC_RecordChild2, // #2 = $offset
/*7212*/          OPC_MoveChild, 2,
/*7214*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7217*/          OPC_MoveParent,
/*7218*/          OPC_EmitMergeInputChains1_0,
/*7219*/          OPC_EmitConvertToTarget, 1,
/*7221*/          OPC_EmitConvertToTarget, 2,
/*7223*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->7254
/*7233*/          OPC_MoveParent,
/*7234*/          OPC_RecordChild2, // #2 = $offset
/*7235*/          OPC_MoveChild, 2,
/*7237*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7240*/          OPC_MoveParent,
/*7241*/          OPC_EmitMergeInputChains1_0,
/*7242*/          OPC_EmitConvertToTarget, 1,
/*7244*/          OPC_EmitConvertToTarget, 2,
/*7246*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7302
/*7258*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7280
/*7261*/          OPC_MoveParent,
/*7262*/          OPC_RecordChild2, // #2 = $imm
/*7263*/          OPC_MoveChild, 2,
/*7265*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7268*/          OPC_MoveParent,
/*7269*/          OPC_EmitMergeInputChains1_0,
/*7270*/          OPC_EmitConvertToTarget, 2,
/*7272*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7301
/*7282*/          OPC_MoveParent,
/*7283*/          OPC_RecordChild2, // #2 = $imm
/*7284*/          OPC_MoveChild, 2,
/*7286*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7289*/          OPC_MoveParent,
/*7290*/          OPC_EmitMergeInputChains1_0,
/*7291*/          OPC_EmitConvertToTarget, 2,
/*7293*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->7349
/*7305*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7327
/*7308*/          OPC_MoveParent,
/*7309*/          OPC_RecordChild2, // #2 = $imm
/*7310*/          OPC_MoveChild, 2,
/*7312*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7315*/          OPC_MoveParent,
/*7316*/          OPC_EmitMergeInputChains1_0,
/*7317*/          OPC_EmitConvertToTarget, 2,
/*7319*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7348
/*7329*/          OPC_MoveParent,
/*7330*/          OPC_RecordChild2, // #2 = $imm
/*7331*/          OPC_MoveChild, 2,
/*7333*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7336*/          OPC_MoveParent,
/*7337*/          OPC_EmitMergeInputChains1_0,
/*7338*/          OPC_EmitConvertToTarget, 2,
/*7340*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7350*/    /*Scope*/ 20, /*->7371*/
/*7351*/      OPC_CheckChild1Type, MVT::i32,
/*7353*/      OPC_RecordChild2, // #2 = $imm
/*7354*/      OPC_MoveChild, 2,
/*7356*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7359*/      OPC_MoveParent,
/*7360*/      OPC_EmitMergeInputChains1_0,
/*7361*/      OPC_EmitConvertToTarget, 2,
/*7363*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*7371*/    /*Scope*/ 20, /*->7392*/
/*7372*/      OPC_CheckChild1Type, MVT::i64,
/*7374*/      OPC_RecordChild2, // #2 = $imm
/*7375*/      OPC_MoveChild, 2,
/*7377*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7380*/      OPC_MoveParent,
/*7381*/      OPC_EmitMergeInputChains1_0,
/*7382*/      OPC_EmitConvertToTarget, 2,
/*7384*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*7392*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 118,  TARGET_VAL(ISD::SUB),// ->7514
/*7396*/    OPC_Scope, 28, /*->7426*/ // 2 children in Scope
/*7398*/      OPC_MoveChild, 0,
/*7400*/      OPC_CheckInteger, 0, 
/*7402*/      OPC_MoveParent,
/*7403*/      OPC_RecordChild1, // #0 = $rA
/*7404*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7415
/*7407*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 GPRC:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->7425
/*7417*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 G8RC:i64:$rA)
              0, // EndSwitchType
/*7426*/    /*Scope*/ 86, /*->7513*/
/*7427*/      OPC_RecordChild0, // #0 = $imm
/*7428*/      OPC_Scope, 23, /*->7453*/ // 2 children in Scope
/*7430*/        OPC_MoveChild, 0,
/*7432*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7435*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7437*/        OPC_MoveParent,
/*7438*/        OPC_RecordChild1, // #1 = $in
/*7439*/        OPC_CheckType, MVT::i32,
/*7441*/        OPC_EmitConvertToTarget, 0,
/*7443*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$in, (imm:i32):$imm)
/*7453*/      /*Scope*/ 58, /*->7512*/
/*7454*/        OPC_RecordChild1, // #1 = $rA
/*7455*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->7467
/*7458*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 GPRC:i32:$rA, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->7478
/*7469*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
                /*SwitchType*/ 9,  MVT::v16i8,// ->7489
/*7480*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
                /*SwitchType*/ 9,  MVT::v8i16,// ->7500
/*7491*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
                /*SwitchType*/ 9,  MVT::v4i32,// ->7511
/*7502*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
                0, // EndSwitchType
/*7512*/      0, /*End of Scope*/
/*7513*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->7619
/*7517*/    OPC_CaptureGlueInput,
/*7518*/    OPC_RecordChild0, // #0 = $rA
/*7519*/    OPC_Scope, 69, /*->7590*/ // 2 children in Scope
/*7521*/      OPC_MoveChild, 1,
/*7523*/      OPC_Scope, 36, /*->7561*/ // 2 children in Scope
/*7525*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7536*/        OPC_MoveParent,
/*7537*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7549
/*7540*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->7560
/*7551*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*7561*/      /*Scope*/ 27, /*->7589*/
/*7562*/        OPC_CheckInteger, 0, 
/*7564*/        OPC_MoveParent,
/*7565*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7577
/*7568*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->7588
/*7579*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*7589*/      0, /*End of Scope*/
/*7590*/    /*Scope*/ 27, /*->7618*/
/*7591*/      OPC_RecordChild1, // #1 = $rB
/*7592*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7605
/*7595*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->7617
/*7607*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*7618*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->7726
/*7622*/    OPC_CaptureGlueInput,
/*7623*/    OPC_Scope, 71, /*->7696*/ // 2 children in Scope
/*7625*/      OPC_MoveChild, 0,
/*7627*/      OPC_Scope, 37, /*->7666*/ // 2 children in Scope
/*7629*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7640*/        OPC_MoveParent,
/*7641*/        OPC_RecordChild1, // #0 = $rA
/*7642*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7654
/*7645*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->7665
/*7656*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*7666*/      /*Scope*/ 28, /*->7695*/
/*7667*/        OPC_CheckInteger, 0, 
/*7669*/        OPC_MoveParent,
/*7670*/        OPC_RecordChild1, // #0 = $rA
/*7671*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7683
/*7674*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->7694
/*7685*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*7695*/      0, /*End of Scope*/
/*7696*/    /*Scope*/ 28, /*->7725*/
/*7697*/      OPC_RecordChild0, // #0 = $rB
/*7698*/      OPC_RecordChild1, // #1 = $rA
/*7699*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7712
/*7702*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->7724
/*7714*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*7725*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->7798
/*7729*/    OPC_RecordChild0, // #0 = $rA
/*7730*/    OPC_RecordChild1, // #1 = $imm
/*7731*/    OPC_Scope, 38, /*->7771*/ // 3 children in Scope
/*7733*/      OPC_MoveChild, 1,
/*7735*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7738*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7740*/      OPC_MoveParent,
/*7741*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7756
/*7744*/        OPC_EmitConvertToTarget, 1,
/*7746*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->7770
/*7758*/        OPC_EmitConvertToTarget, 1,
/*7760*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*7771*/    /*Scope*/ 12, /*->7784*/
/*7772*/      OPC_CheckType, MVT::i32,
/*7774*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*7784*/    /*Scope*/ 12, /*->7797*/
/*7785*/      OPC_CheckType, MVT::i64,
/*7787*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
/*7797*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->7851
/*7801*/    OPC_RecordChild0, // #0 = $rA
/*7802*/    OPC_RecordChild1, // #1 = $imm
/*7803*/    OPC_Scope, 21, /*->7826*/ // 3 children in Scope
/*7805*/      OPC_MoveChild, 1,
/*7807*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7810*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7812*/      OPC_MoveParent,
/*7813*/      OPC_CheckType, MVT::i32,
/*7815*/      OPC_EmitConvertToTarget, 1,
/*7817*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*7826*/    /*Scope*/ 11, /*->7838*/
/*7827*/      OPC_CheckType, MVT::i32,
/*7829*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*7838*/    /*Scope*/ 11, /*->7850*/
/*7839*/      OPC_CheckType, MVT::i64,
/*7841*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*7850*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->7925
/*7854*/    OPC_RecordChild0, // #0 = $imm
/*7855*/    OPC_Scope, 39, /*->7896*/ // 2 children in Scope
/*7857*/      OPC_MoveChild, 0,
/*7859*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7862*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7864*/      OPC_MoveParent,
/*7865*/      OPC_RecordChild1, // #1 = $rA
/*7866*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7881
/*7869*/        OPC_EmitConvertToTarget, 0,
/*7871*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->7895
/*7883*/        OPC_EmitConvertToTarget, 0,
/*7885*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, G8RC:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*7896*/    /*Scope*/ 27, /*->7924*/
/*7897*/      OPC_RecordChild1, // #1 = $rA
/*7898*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7911
/*7901*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->7923
/*7913*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*7924*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::FNEG),// ->8118
/*7929*/    OPC_Scope, 33|128,1/*161*/, /*->8093*/ // 2 children in Scope
/*7932*/      OPC_MoveChild, 0,
/*7934*/      OPC_SwitchOpcode /*3 cases */, 84,  TARGET_VAL(ISD::FADD),// ->8022
/*7938*/        OPC_Scope, 40, /*->7980*/ // 2 children in Scope
/*7940*/          OPC_MoveChild, 0,
/*7942*/          OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7945*/          OPC_RecordChild0, // #0 = $FRA
/*7946*/          OPC_RecordChild1, // #1 = $FRC
/*7947*/          OPC_MoveParent,
/*7948*/          OPC_RecordChild1, // #2 = $FRB
/*7949*/          OPC_MoveParent,
/*7950*/          OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->7965
/*7953*/            OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7955*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fadd:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB)) - Complexity = 9
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 12,  MVT::f32,// ->7979
/*7967*/            OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7969*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fadd:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB)) - Complexity = 9
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*7980*/        /*Scope*/ 40, /*->8021*/
/*7981*/          OPC_RecordChild0, // #0 = $FRB
/*7982*/          OPC_MoveChild, 1,
/*7984*/          OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7987*/          OPC_RecordChild0, // #1 = $FRA
/*7988*/          OPC_RecordChild1, // #2 = $FRC
/*7989*/          OPC_MoveParent,
/*7990*/          OPC_MoveParent,
/*7991*/          OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->8006
/*7994*/            OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7996*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (fneg:f64 (fadd:f64 F8RC:f64:$FRB, (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC))) - Complexity = 9
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 12,  MVT::f32,// ->8020
/*8008*/            OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*8010*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (fneg:f32 (fadd:f32 F4RC:f32:$FRB, (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC))) - Complexity = 9
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*8021*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::FSUB),// ->8065
/*8025*/        OPC_MoveChild, 0,
/*8027*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*8030*/        OPC_RecordChild0, // #0 = $FRA
/*8031*/        OPC_RecordChild1, // #1 = $FRC
/*8032*/        OPC_MoveParent,
/*8033*/        OPC_RecordChild1, // #2 = $FRB
/*8034*/        OPC_MoveParent,
/*8035*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->8050
/*8038*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*8040*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fneg:f64 (fsub:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB)) - Complexity = 9
                  // Dst: (FNMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                /*SwitchType*/ 12,  MVT::f32,// ->8064
/*8052*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*8054*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fneg:f32 (fsub:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB)) - Complexity = 9
                  // Dst: (FNMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->8092
/*8068*/        OPC_RecordChild0, // #0 = $frB
/*8069*/        OPC_MoveParent,
/*8070*/        OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->8081
/*8073*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 F4RC:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 F4RC:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->8091
/*8083*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 F8RC:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 F8RC:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*8093*/    /*Scope*/ 23, /*->8117*/
/*8094*/      OPC_RecordChild0, // #0 = $frB
/*8095*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->8106
/*8098*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 F4RC:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 F4RC:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->8116
/*8108*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 F8RC:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 F8RC:f64:$frB)
              0, // EndSwitchType
/*8117*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,1/*212*/,  TARGET_VAL(PPCISD::VCMP),// ->8334
/*8122*/    OPC_RecordChild0, // #0 = $vA
/*8123*/    OPC_RecordChild1, // #1 = $vB
/*8124*/    OPC_MoveChild, 2,
/*8126*/    OPC_Scope, 14, /*->8142*/ // 13 children in Scope
/*8128*/      OPC_CheckInteger, 6, 
/*8130*/      OPC_MoveParent,
/*8131*/      OPC_CheckType, MVT::v16i8,
/*8133*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8142*/    /*Scope*/ 15, /*->8158*/
/*8143*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*8146*/      OPC_MoveParent,
/*8147*/      OPC_CheckType, MVT::v16i8,
/*8149*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8158*/    /*Scope*/ 15, /*->8174*/
/*8159*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*8162*/      OPC_MoveParent,
/*8163*/      OPC_CheckType, MVT::v16i8,
/*8165*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8174*/    /*Scope*/ 14, /*->8189*/
/*8175*/      OPC_CheckInteger, 70, 
/*8177*/      OPC_MoveParent,
/*8178*/      OPC_CheckType, MVT::v8i16,
/*8180*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8189*/    /*Scope*/ 15, /*->8205*/
/*8190*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*8193*/      OPC_MoveParent,
/*8194*/      OPC_CheckType, MVT::v8i16,
/*8196*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8205*/    /*Scope*/ 15, /*->8221*/
/*8206*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*8209*/      OPC_MoveParent,
/*8210*/      OPC_CheckType, MVT::v8i16,
/*8212*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8221*/    /*Scope*/ 15, /*->8237*/
/*8222*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*8225*/      OPC_MoveParent,
/*8226*/      OPC_CheckType, MVT::v4i32,
/*8228*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8237*/    /*Scope*/ 15, /*->8253*/
/*8238*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*8241*/      OPC_MoveParent,
/*8242*/      OPC_CheckType, MVT::v4i32,
/*8244*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8253*/    /*Scope*/ 15, /*->8269*/
/*8254*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*8257*/      OPC_MoveParent,
/*8258*/      OPC_CheckType, MVT::v4i32,
/*8260*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8269*/    /*Scope*/ 15, /*->8285*/
/*8270*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*8273*/      OPC_MoveParent,
/*8274*/      OPC_CheckType, MVT::v4f32,
/*8276*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8285*/    /*Scope*/ 15, /*->8301*/
/*8286*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*8289*/      OPC_MoveParent,
/*8290*/      OPC_CheckType, MVT::v4f32,
/*8292*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8301*/    /*Scope*/ 15, /*->8317*/
/*8302*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*8305*/      OPC_MoveParent,
/*8306*/      OPC_CheckType, MVT::v4f32,
/*8308*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8317*/    /*Scope*/ 15, /*->8333*/
/*8318*/      OPC_CheckInteger, 70|128,5/*710*/, 
/*8321*/      OPC_MoveParent,
/*8322*/      OPC_CheckType, MVT::v4f32,
/*8324*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8333*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(PPCISD::VCMPo),// ->8563
/*8338*/    OPC_RecordChild0, // #0 = $vA
/*8339*/    OPC_RecordChild1, // #1 = $vB
/*8340*/    OPC_MoveChild, 2,
/*8342*/    OPC_Scope, 15, /*->8359*/ // 13 children in Scope
/*8344*/      OPC_CheckInteger, 6, 
/*8346*/      OPC_MoveParent,
/*8347*/      OPC_CheckType, MVT::v16i8,
/*8349*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8359*/    /*Scope*/ 16, /*->8376*/
/*8360*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*8363*/      OPC_MoveParent,
/*8364*/      OPC_CheckType, MVT::v16i8,
/*8366*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8376*/    /*Scope*/ 16, /*->8393*/
/*8377*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*8380*/      OPC_MoveParent,
/*8381*/      OPC_CheckType, MVT::v16i8,
/*8383*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8393*/    /*Scope*/ 15, /*->8409*/
/*8394*/      OPC_CheckInteger, 70, 
/*8396*/      OPC_MoveParent,
/*8397*/      OPC_CheckType, MVT::v8i16,
/*8399*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8409*/    /*Scope*/ 16, /*->8426*/
/*8410*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*8413*/      OPC_MoveParent,
/*8414*/      OPC_CheckType, MVT::v8i16,
/*8416*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8426*/    /*Scope*/ 16, /*->8443*/
/*8427*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*8430*/      OPC_MoveParent,
/*8431*/      OPC_CheckType, MVT::v8i16,
/*8433*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8443*/    /*Scope*/ 16, /*->8460*/
/*8444*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*8447*/      OPC_MoveParent,
/*8448*/      OPC_CheckType, MVT::v4i32,
/*8450*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8460*/    /*Scope*/ 16, /*->8477*/
/*8461*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*8464*/      OPC_MoveParent,
/*8465*/      OPC_CheckType, MVT::v4i32,
/*8467*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8477*/    /*Scope*/ 16, /*->8494*/
/*8478*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*8481*/      OPC_MoveParent,
/*8482*/      OPC_CheckType, MVT::v4i32,
/*8484*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8494*/    /*Scope*/ 16, /*->8511*/
/*8495*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*8498*/      OPC_MoveParent,
/*8499*/      OPC_CheckType, MVT::v4f32,
/*8501*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8511*/    /*Scope*/ 16, /*->8528*/
/*8512*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*8515*/      OPC_MoveParent,
/*8516*/      OPC_CheckType, MVT::v4f32,
/*8518*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8528*/    /*Scope*/ 16, /*->8545*/
/*8529*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*8532*/      OPC_MoveParent,
/*8533*/      OPC_CheckType, MVT::v4f32,
/*8535*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8545*/    /*Scope*/ 16, /*->8562*/
/*8546*/      OPC_CheckInteger, 70|128,5/*710*/, 
/*8549*/      OPC_MoveParent,
/*8550*/      OPC_CheckType, MVT::v4f32,
/*8552*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8562*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->8875
/*8567*/    OPC_Scope, 73, /*->8642*/ // 4 children in Scope
/*8569*/      OPC_RecordNode, // #0 = $UIMM
/*8570*/      OPC_RecordChild0, // #1 = $vB
/*8571*/      OPC_MoveChild, 1,
/*8573*/      OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*8576*/      OPC_MoveParent,
/*8577*/      OPC_CheckType, MVT::v16i8,
/*8579*/      OPC_Scope, 14, /*->8595*/ // 4 children in Scope
/*8581*/        OPC_CheckPredicate, 67, // Predicate_vspltb_shuffle
/*8583*/        OPC_EmitNodeXForm, 5, 0, // VSPLTB_get_imm
/*8586*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*8595*/      /*Scope*/ 14, /*->8610*/
/*8596*/        OPC_CheckPredicate, 68, // Predicate_vsplth_shuffle
/*8598*/        OPC_EmitNodeXForm, 6, 0, // VSPLTH_get_imm
/*8601*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*8610*/      /*Scope*/ 14, /*->8625*/
/*8611*/        OPC_CheckPredicate, 69, // Predicate_vspltw_shuffle
/*8613*/        OPC_EmitNodeXForm, 7, 0, // VSPLTW_get_imm
/*8616*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*8625*/      /*Scope*/ 15, /*->8641*/
/*8626*/        OPC_CheckPredicate, 70, // Predicate_vsldoi_unary_shuffle
/*8628*/        OPC_EmitNodeXForm, 8, 0, // VSLDOI_unary_get_imm
/*8631*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA, (VSLDOI_unary_get_imm:i32 VRRC:v16i8:$in))
/*8641*/      0, /*End of Scope*/
/*8642*/    /*Scope*/ 107, /*->8750*/
/*8643*/      OPC_RecordChild0, // #0 = $vA
/*8644*/      OPC_MoveChild, 1,
/*8646*/      OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*8649*/      OPC_MoveParent,
/*8650*/      OPC_CheckType, MVT::v16i8,
/*8652*/      OPC_Scope, 11, /*->8665*/ // 8 children in Scope
/*8654*/        OPC_CheckPredicate, 71, // Predicate_vpkuwum_unary_shuffle
/*8656*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8665*/      /*Scope*/ 11, /*->8677*/
/*8666*/        OPC_CheckPredicate, 72, // Predicate_vpkuhum_unary_shuffle
/*8668*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8677*/      /*Scope*/ 11, /*->8689*/
/*8678*/        OPC_CheckPredicate, 73, // Predicate_vmrglb_unary_shuffle
/*8680*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8689*/      /*Scope*/ 11, /*->8701*/
/*8690*/        OPC_CheckPredicate, 74, // Predicate_vmrglh_unary_shuffle
/*8692*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8701*/      /*Scope*/ 11, /*->8713*/
/*8702*/        OPC_CheckPredicate, 75, // Predicate_vmrglw_unary_shuffle
/*8704*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8713*/      /*Scope*/ 11, /*->8725*/
/*8714*/        OPC_CheckPredicate, 76, // Predicate_vmrghb_unary_shuffle
/*8716*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8725*/      /*Scope*/ 11, /*->8737*/
/*8726*/        OPC_CheckPredicate, 77, // Predicate_vmrghh_unary_shuffle
/*8728*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8737*/      /*Scope*/ 11, /*->8749*/
/*8738*/        OPC_CheckPredicate, 78, // Predicate_vmrghw_unary_shuffle
/*8740*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8749*/      0, /*End of Scope*/
/*8750*/    /*Scope*/ 20, /*->8771*/
/*8751*/      OPC_RecordNode, // #0 = $SH
/*8752*/      OPC_RecordChild0, // #1 = $vA
/*8753*/      OPC_RecordChild1, // #2 = $vB
/*8754*/      OPC_CheckPredicate, 79, // Predicate_vsldoi_shuffle
/*8756*/      OPC_CheckType, MVT::v16i8,
/*8758*/      OPC_EmitNodeXForm, 9, 0, // VSLDOI_get_imm
/*8761*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB):$SH))
/*8771*/    /*Scope*/ 102, /*->8874*/
/*8772*/      OPC_RecordChild0, // #0 = $vA
/*8773*/      OPC_RecordChild1, // #1 = $vB
/*8774*/      OPC_CheckType, MVT::v16i8,
/*8776*/      OPC_Scope, 11, /*->8789*/ // 8 children in Scope
/*8778*/        OPC_CheckPredicate, 80, // Predicate_vmrghb_shuffle
/*8780*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8789*/      /*Scope*/ 11, /*->8801*/
/*8790*/        OPC_CheckPredicate, 81, // Predicate_vmrghh_shuffle
/*8792*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8801*/      /*Scope*/ 11, /*->8813*/
/*8802*/        OPC_CheckPredicate, 82, // Predicate_vmrghw_shuffle
/*8804*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8813*/      /*Scope*/ 11, /*->8825*/
/*8814*/        OPC_CheckPredicate, 83, // Predicate_vmrglb_shuffle
/*8816*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8825*/      /*Scope*/ 11, /*->8837*/
/*8826*/        OPC_CheckPredicate, 84, // Predicate_vmrglh_shuffle
/*8828*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8837*/      /*Scope*/ 11, /*->8849*/
/*8838*/        OPC_CheckPredicate, 85, // Predicate_vmrglw_shuffle
/*8840*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8849*/      /*Scope*/ 11, /*->8861*/
/*8850*/        OPC_CheckPredicate, 86, // Predicate_vpkuhum_shuffle
/*8852*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8861*/      /*Scope*/ 11, /*->8873*/
/*8862*/        OPC_CheckPredicate, 87, // Predicate_vpkuwum_shuffle
/*8864*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8873*/      0, /*End of Scope*/
/*8874*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->8895
/*8878*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*8879*/    OPC_RecordChild1, // #1 = $amt
/*8880*/    OPC_MoveChild, 1,
/*8882*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*8885*/    OPC_MoveParent,
/*8886*/    OPC_EmitMergeInputChains1_0,
/*8887*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_Darwin),// ->8996
/*8898*/    OPC_RecordNode,   // #0 = 'PPCcall_Darwin' chained node
/*8899*/    OPC_CaptureGlueInput,
/*8900*/    OPC_RecordChild1, // #1 = $func
/*8901*/    OPC_MoveChild, 1,
/*8903*/    OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->8937
/*8907*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8922
/*8910*/        OPC_MoveParent,
/*8911*/        OPC_EmitMergeInputChains1_0,
/*8912*/        OPC_EmitConvertToTarget, 1,
/*8914*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_Darwin:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->8936
/*8924*/        OPC_MoveParent,
/*8925*/        OPC_EmitMergeInputChains1_0,
/*8926*/        OPC_EmitConvertToTarget, 1,
/*8928*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_Darwin:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->8966
/*8940*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8953
/*8943*/        OPC_MoveParent,
/*8944*/        OPC_EmitMergeInputChains1_0,
/*8945*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->8965
/*8955*/        OPC_MoveParent,
/*8956*/        OPC_EmitMergeInputChains1_0,
/*8957*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->8995
/*8969*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8982
/*8972*/        OPC_MoveParent,
/*8973*/        OPC_EmitMergeInputChains1_0,
/*8974*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->8994
/*8984*/        OPC_MoveParent,
/*8985*/        OPC_EmitMergeInputChains1_0,
/*8986*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_SVR4),// ->9097
/*8999*/    OPC_RecordNode,   // #0 = 'PPCcall_SVR4' chained node
/*9000*/    OPC_CaptureGlueInput,
/*9001*/    OPC_RecordChild1, // #1 = $func
/*9002*/    OPC_MoveChild, 1,
/*9004*/    OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->9038
/*9008*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9023
/*9011*/        OPC_MoveParent,
/*9012*/        OPC_EmitMergeInputChains1_0,
/*9013*/        OPC_EmitConvertToTarget, 1,
/*9015*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_SVR4:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->9037
/*9025*/        OPC_MoveParent,
/*9026*/        OPC_EmitMergeInputChains1_0,
/*9027*/        OPC_EmitConvertToTarget, 1,
/*9029*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_ELF:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9067
/*9041*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9054
/*9044*/        OPC_MoveParent,
/*9045*/        OPC_EmitMergeInputChains1_0,
/*9046*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->9066
/*9056*/        OPC_MoveParent,
/*9057*/        OPC_EmitMergeInputChains1_0,
/*9058*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->9096
/*9070*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9083
/*9073*/        OPC_MoveParent,
/*9074*/        OPC_EmitMergeInputChains1_0,
/*9075*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->9095
/*9085*/        OPC_MoveParent,
/*9086*/        OPC_EmitMergeInputChains1_0,
/*9087*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 114,  TARGET_VAL(ISD::SRA),// ->9214
/*9100*/    OPC_RecordChild0, // #0 = $rS
/*9101*/    OPC_RecordChild1, // #1 = $SH
/*9102*/    OPC_Scope, 38, /*->9142*/ // 5 children in Scope
/*9104*/      OPC_MoveChild, 1,
/*9106*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9109*/      OPC_CheckType, MVT::i32,
/*9111*/      OPC_MoveParent,
/*9112*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9127
/*9115*/        OPC_EmitConvertToTarget, 1,
/*9117*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPRC:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 GPRC:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->9141
/*9129*/        OPC_EmitConvertToTarget, 1,
/*9131*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 G8RC:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 G8RC:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*9142*/    /*Scope*/ 28, /*->9171*/
/*9143*/      OPC_CheckChild1Type, MVT::i32,
/*9145*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9158
/*9148*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->9170
/*9160*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*9171*/    /*Scope*/ 13, /*->9185*/
/*9172*/      OPC_CheckChild1Type, MVT::v16i8,
/*9174*/      OPC_CheckType, MVT::v16i8,
/*9176*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9185*/    /*Scope*/ 13, /*->9199*/
/*9186*/      OPC_CheckChild1Type, MVT::v8i16,
/*9188*/      OPC_CheckType, MVT::v8i16,
/*9190*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9199*/    /*Scope*/ 13, /*->9213*/
/*9200*/      OPC_CheckChild1Type, MVT::v4i32,
/*9202*/      OPC_CheckType, MVT::v4i32,
/*9204*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9213*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB0),// ->9236
/*9217*/    OPC_CaptureGlueInput,
/*9218*/    OPC_RecordChild0, // #0 = $FM
/*9219*/    OPC_MoveChild, 0,
/*9221*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9224*/    OPC_CheckType, MVT::i32,
/*9226*/    OPC_MoveParent,
/*9227*/    OPC_EmitConvertToTarget, 0,
/*9229*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB0), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb0 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB0 (imm:i32):$FM)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB1),// ->9258
/*9239*/    OPC_CaptureGlueInput,
/*9240*/    OPC_RecordChild0, // #0 = $FM
/*9241*/    OPC_MoveChild, 0,
/*9243*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9246*/    OPC_CheckType, MVT::i32,
/*9248*/    OPC_MoveParent,
/*9249*/    OPC_EmitConvertToTarget, 0,
/*9251*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB1), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb1 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB1 (imm:i32):$FM)
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SHL),// ->9387
/*9261*/    OPC_RecordChild0, // #0 = $in
/*9262*/    OPC_RecordChild1, // #1 = $imm
/*9263*/    OPC_Scope, 52, /*->9317*/ // 5 children in Scope
/*9265*/      OPC_MoveChild, 1,
/*9267*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9270*/      OPC_CheckType, MVT::i32,
/*9272*/      OPC_MoveParent,
/*9273*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9297
/*9276*/        OPC_EmitConvertToTarget, 1,
/*9278*/        OPC_EmitInteger, MVT::i32, 0, 
/*9281*/        OPC_EmitConvertToTarget, 1,
/*9283*/        OPC_EmitNodeXForm, 10, 4, // SHL32
/*9286*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->9316
/*9299*/        OPC_EmitConvertToTarget, 1,
/*9301*/        OPC_EmitConvertToTarget, 1,
/*9303*/        OPC_EmitNodeXForm, 11, 3, // SHL64
/*9306*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 G8RC:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*9317*/    /*Scope*/ 26, /*->9344*/
/*9318*/      OPC_CheckChild1Type, MVT::i32,
/*9320*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9332
/*9323*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->9343
/*9334*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*9344*/    /*Scope*/ 13, /*->9358*/
/*9345*/      OPC_CheckChild1Type, MVT::v16i8,
/*9347*/      OPC_CheckType, MVT::v16i8,
/*9349*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9358*/    /*Scope*/ 13, /*->9372*/
/*9359*/      OPC_CheckChild1Type, MVT::v8i16,
/*9361*/      OPC_CheckType, MVT::v8i16,
/*9363*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9372*/    /*Scope*/ 13, /*->9386*/
/*9373*/      OPC_CheckChild1Type, MVT::v4i32,
/*9375*/      OPC_CheckType, MVT::v4i32,
/*9377*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9386*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SRL),// ->9516
/*9390*/    OPC_RecordChild0, // #0 = $in
/*9391*/    OPC_RecordChild1, // #1 = $imm
/*9392*/    OPC_Scope, 52, /*->9446*/ // 5 children in Scope
/*9394*/      OPC_MoveChild, 1,
/*9396*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9399*/      OPC_CheckType, MVT::i32,
/*9401*/      OPC_MoveParent,
/*9402*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9426
/*9405*/        OPC_EmitConvertToTarget, 1,
/*9407*/        OPC_EmitNodeXForm, 12, 2, // SRL32
/*9410*/        OPC_EmitConvertToTarget, 1,
/*9412*/        OPC_EmitInteger, MVT::i32, 31, 
/*9415*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->9445
/*9428*/        OPC_EmitConvertToTarget, 1,
/*9430*/        OPC_EmitNodeXForm, 13, 2, // SRL64
/*9433*/        OPC_EmitConvertToTarget, 1,
/*9435*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*9446*/    /*Scope*/ 26, /*->9473*/
/*9447*/      OPC_CheckChild1Type, MVT::i32,
/*9449*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9461
/*9452*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->9472
/*9463*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*9473*/    /*Scope*/ 13, /*->9487*/
/*9474*/      OPC_CheckChild1Type, MVT::v16i8,
/*9476*/      OPC_CheckType, MVT::v16i8,
/*9478*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9487*/    /*Scope*/ 13, /*->9501*/
/*9488*/      OPC_CheckChild1Type, MVT::v8i16,
/*9490*/      OPC_CheckType, MVT::v8i16,
/*9492*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9501*/    /*Scope*/ 13, /*->9515*/
/*9502*/      OPC_CheckChild1Type, MVT::v4i32,
/*9504*/      OPC_CheckType, MVT::v4i32,
/*9506*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9515*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->9611
/*9519*/    OPC_RecordChild0, // #0 = $in
/*9520*/    OPC_RecordChild1, // #1 = $imm
/*9521*/    OPC_Scope, 48, /*->9571*/ // 2 children in Scope
/*9523*/      OPC_MoveChild, 1,
/*9525*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9528*/      OPC_CheckType, MVT::i32,
/*9530*/      OPC_MoveParent,
/*9531*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->9553
/*9534*/        OPC_EmitConvertToTarget, 1,
/*9536*/        OPC_EmitInteger, MVT::i32, 0, 
/*9539*/        OPC_EmitInteger, MVT::i32, 31, 
/*9542*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->9570
/*9555*/        OPC_EmitConvertToTarget, 1,
/*9557*/        OPC_EmitInteger, MVT::i32, 0, 
/*9560*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*9571*/    /*Scope*/ 38, /*->9610*/
/*9572*/      OPC_CheckChild1Type, MVT::i32,
/*9574*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->9594
/*9577*/        OPC_EmitInteger, MVT::i32, 0, 
/*9580*/        OPC_EmitInteger, MVT::i32, 31, 
/*9583*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->9609
/*9596*/        OPC_EmitInteger, MVT::i32, 0, 
/*9599*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 G8RC:i64:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 G8RC:i64:$in, GPRC:i32:$sh, 0:i32)
              0, // EndSwitchType
/*9610*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->9633
/*9614*/    OPC_RecordChild0, // #0 = $disp
/*9615*/    OPC_MoveChild, 0,
/*9617*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9620*/    OPC_MoveParent,
/*9621*/    OPC_RecordChild1, // #1 = $reg
/*9622*/    OPC_CheckType, MVT::i64,
/*9624*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg) - Complexity = 6
            // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->9733
/*9636*/    OPC_RecordNode,   // #0 = $imm
/*9637*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->9699
/*9640*/      OPC_Scope, 12, /*->9654*/ // 3 children in Scope
/*9642*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*9644*/        OPC_EmitConvertToTarget, 0,
/*9646*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*9654*/      /*Scope*/ 15, /*->9670*/
/*9655*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9657*/        OPC_EmitConvertToTarget, 0,
/*9659*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9662*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*9670*/      /*Scope*/ 27, /*->9698*/
/*9671*/        OPC_EmitConvertToTarget, 0,
/*9673*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9676*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*9684*/        OPC_EmitConvertToTarget, 0,
/*9686*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*9689*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*9698*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->9732
/*9701*/      OPC_Scope, 12, /*->9715*/ // 2 children in Scope
/*9703*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*9705*/        OPC_EmitConvertToTarget, 0,
/*9707*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*9715*/      /*Scope*/ 15, /*->9731*/
/*9716*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9718*/        OPC_EmitConvertToTarget, 0,
/*9720*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9723*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*9731*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->9764
/*9736*/    OPC_RecordChild0, // #0 = $rS
/*9737*/    OPC_RecordChild1, // #1 = $rB
/*9738*/    OPC_CheckChild1Type, MVT::i32,
/*9740*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9752
/*9743*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9763
/*9754*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->9795
/*9767*/    OPC_RecordChild0, // #0 = $rS
/*9768*/    OPC_RecordChild1, // #1 = $rB
/*9769*/    OPC_CheckChild1Type, MVT::i32,
/*9771*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9783
/*9774*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9794
/*9785*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->9828
/*9798*/    OPC_RecordChild0, // #0 = $rS
/*9799*/    OPC_RecordChild1, // #1 = $rB
/*9800*/    OPC_CheckChild1Type, MVT::i32,
/*9802*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9815
/*9805*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->9827
/*9817*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->9854
/*9831*/    OPC_RecordChild0, // #0 = $rS
/*9832*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9843
/*9835*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GPRC:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 GPRC:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->9853
/*9845*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 G8RC:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 G8RC:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9926
/*9857*/    OPC_RecordChild0, // #0 = $rS
/*9858*/    OPC_MoveChild, 1,
/*9860*/    OPC_Scope, 25, /*->9887*/ // 3 children in Scope
/*9862*/      OPC_CheckValueType, MVT::i8,
/*9864*/      OPC_MoveParent,
/*9865*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9876
/*9868*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9886
/*9878*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*9887*/    /*Scope*/ 25, /*->9913*/
/*9888*/      OPC_CheckValueType, MVT::i16,
/*9890*/      OPC_MoveParent,
/*9891*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9902
/*9894*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9912
/*9904*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*9913*/    /*Scope*/ 11, /*->9925*/
/*9914*/      OPC_CheckValueType, MVT::i32,
/*9916*/      OPC_MoveParent,
/*9917*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 G8RC:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 G8RC:i64:$rS)
/*9925*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->9955
/*9929*/    OPC_RecordChild0, // #0 = $rA
/*9930*/    OPC_RecordChild1, // #1 = $rB
/*9931*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9943
/*9934*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9954
/*9945*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->9984
/*9958*/    OPC_RecordChild0, // #0 = $rA
/*9959*/    OPC_RecordChild1, // #1 = $rB
/*9960*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9972
/*9963*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9983
/*9974*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->10013
/*9987*/    OPC_RecordChild0, // #0 = $rA
/*9988*/    OPC_RecordChild1, // #1 = $rB
/*9989*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->10001
/*9992*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->10012
/*10003*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->10042
/*10016*/   OPC_RecordChild0, // #0 = $rA
/*10017*/   OPC_RecordChild1, // #1 = $rB
/*10018*/   OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->10030
/*10021*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->10041
/*10032*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::EXTSW_32),// ->10056
/*10045*/   OPC_RecordChild0, // #0 = $rS
/*10046*/   OPC_CheckType, MVT::i32,
/*10048*/   OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (PPCextsw_32:i32 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32:i32 GPRC:i32:$rS)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->10072
/*10059*/   OPC_RecordChild0, // #0 = $rS
/*10060*/   OPC_CheckChild0Type, MVT::i32,
/*10062*/   OPC_CheckType, MVT::i64,
/*10064*/   OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 GPRC:i32:$rS)
          /*SwitchOpcode*/ 14,  TARGET_VAL(ISD::ANY_EXTEND),// ->10089
/*10075*/   OPC_RecordChild0, // #0 = $in
/*10076*/   OPC_CheckChild0Type, MVT::i32,
/*10078*/   OPC_CheckType, MVT::i64,
/*10080*/   OPC_MorphNodeTo, TARGET_VAL(PPC::OR4To8), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 0, 
            // Src: (anyext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (OR4To8:i64 GPRC:i32:$in, GPRC:i32:$in)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TRUNCATE),// ->10104
/*10092*/   OPC_RecordChild0, // #0 = $in
/*10093*/   OPC_CheckType, MVT::i32,
/*10095*/   OPC_MorphNodeTo, TARGET_VAL(PPC::OR8To4), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
            // Src: (trunc:i32 G8RC:i64:$in) - Complexity = 3
            // Dst: (OR8To4:i32 G8RC:i64:$in, G8RC:i64:$in)
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::ZERO_EXTEND),// ->10137
/*10107*/   OPC_RecordChild0, // #0 = $in
/*10108*/   OPC_CheckChild0Type, MVT::i32,
/*10110*/   OPC_CheckType, MVT::i64,
/*10112*/   OPC_EmitNode, TARGET_VAL(PPC::OR4To8), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 0,  // Results = #1 
/*10121*/   OPC_EmitInteger, MVT::i32, 0, 
/*10124*/   OPC_EmitInteger, MVT::i32, 32, 
/*10127*/   OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
            // Src: (zext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (OR4To8:i64 GPRC:i32:$in, GPRC:i32:$in), 0:i32, 32:i32)
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::MTFSF),// ->10164
/*10140*/   OPC_CaptureGlueInput,
/*10141*/   OPC_RecordChild0, // #0 = $FM
/*10142*/   OPC_MoveChild, 0,
/*10144*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10147*/   OPC_CheckType, MVT::i32,
/*10149*/   OPC_MoveParent,
/*10150*/   OPC_RecordChild1, // #1 = $rT
/*10151*/   OPC_RecordChild2, // #2 = $FRB
/*10152*/   OPC_EmitConvertToTarget, 0,
/*10154*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSF), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 1, 2, 
            // Src: (PPCmtfsf:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB) - Complexity = 6
            // Dst: (MTFSF:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 47|128,1/*175*/,  TARGET_VAL(ISD::FADD),// ->10343
/*10168*/   OPC_Scope, 39, /*->10209*/ // 4 children in Scope
/*10170*/     OPC_MoveChild, 0,
/*10172*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*10175*/     OPC_RecordChild0, // #0 = $FRA
/*10176*/     OPC_RecordChild1, // #1 = $FRC
/*10177*/     OPC_MoveParent,
/*10178*/     OPC_RecordChild1, // #2 = $FRB
/*10179*/     OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->10194
/*10182*/       OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*10184*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fadd:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB) - Complexity = 6
                // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 12,  MVT::f32,// ->10208
/*10196*/       OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*10198*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fadd:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB) - Complexity = 6
                // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              0, // EndSwitchType
/*10209*/   /*Scope*/ 68, /*->10278*/
/*10210*/     OPC_RecordChild0, // #0 = $FRB
/*10211*/     OPC_Scope, 38, /*->10251*/ // 2 children in Scope
/*10213*/       OPC_MoveChild, 1,
/*10215*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*10218*/       OPC_RecordChild0, // #1 = $FRA
/*10219*/       OPC_RecordChild1, // #2 = $FRC
/*10220*/       OPC_MoveParent,
/*10221*/       OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->10236
/*10224*/         OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*10226*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fadd:f64 F8RC:f64:$FRB, (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC)) - Complexity = 6
                  // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                /*SwitchType*/ 12,  MVT::f32,// ->10250
/*10238*/         OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*10240*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fadd:f32 F4RC:f32:$FRB, (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC)) - Complexity = 6
                  // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                0, // EndSwitchType
/*10251*/     /*Scope*/ 25, /*->10277*/
/*10252*/       OPC_RecordChild1, // #1 = $FRB
/*10253*/       OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->10265
/*10256*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
                  // Dst: (FADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
                /*SwitchType*/ 9,  MVT::f32,// ->10276
/*10267*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
                  // Dst: (FADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
                0, // EndSwitchType
/*10277*/     0, /*End of Scope*/
/*10278*/   /*Scope*/ 23, /*->10302*/
/*10279*/     OPC_MoveChild, 0,
/*10281*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*10284*/     OPC_RecordChild0, // #0 = $vA
/*10285*/     OPC_RecordChild1, // #1 = $vC
/*10286*/     OPC_MoveParent,
/*10287*/     OPC_RecordChild1, // #2 = $vB
/*10288*/     OPC_CheckType, MVT::v4f32,
/*10290*/     OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*10292*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fadd:v4f32 (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC), VRRC:v4f32:$vB) - Complexity = 6
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*10302*/   /*Scope*/ 39, /*->10342*/
/*10303*/     OPC_RecordChild0, // #0 = $vB
/*10304*/     OPC_Scope, 22, /*->10328*/ // 2 children in Scope
/*10306*/       OPC_MoveChild, 1,
/*10308*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*10311*/       OPC_RecordChild0, // #1 = $vA
/*10312*/       OPC_RecordChild1, // #2 = $vC
/*10313*/       OPC_MoveParent,
/*10314*/       OPC_CheckType, MVT::v4f32,
/*10316*/       OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*10318*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 1, 2, 0, 
                // Src: (fadd:v4f32 VRRC:v4f32:$vB, (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC)) - Complexity = 6
                // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*10328*/     /*Scope*/ 12, /*->10341*/
/*10329*/       OPC_RecordChild1, // #1 = $vB
/*10330*/       OPC_CheckType, MVT::v4f32,
/*10332*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
                // Dst: (VADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10341*/     0, /*End of Scope*/
/*10342*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->10357
/*10346*/   OPC_RecordChild0, // #0 = $frB
/*10347*/   OPC_CheckType, MVT::f64,
/*10349*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->10369
/*10360*/   OPC_RecordChild0, // #0 = $frB
/*10361*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 F8RC:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->10395
/*10372*/   OPC_RecordChild0, // #0 = $frB
/*10373*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10384
/*10376*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 F8RC:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10394
/*10386*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 F4RC:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->10421
/*10398*/   OPC_RecordChild0, // #0 = $frB
/*10399*/   OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10410
/*10402*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 F4RC:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->10420
/*10412*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 F8RC:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->10431
/*10424*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 14,  TARGET_VAL(PPCISD::FADDRTZ),// ->10448
/*10434*/   OPC_CaptureGlueInput,
/*10435*/   OPC_RecordChild0, // #0 = $FRA
/*10436*/   OPC_RecordChild1, // #1 = $FRB
/*10437*/   OPC_CheckType, MVT::f64,
/*10439*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->10480
/*10451*/   OPC_RecordChild0, // #0 = $FRA
/*10452*/   OPC_RecordChild1, // #1 = $FRC
/*10453*/   OPC_RecordChild2, // #2 = $FRB
/*10454*/   OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10467
/*10457*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->10479
/*10469*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->10509
/*10483*/   OPC_RecordChild0, // #0 = $FRA
/*10484*/   OPC_RecordChild1, // #1 = $FRB
/*10485*/   OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->10497
/*10488*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10508
/*10499*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->10557
/*10512*/   OPC_RecordChild0, // #0 = $FRA
/*10513*/   OPC_RecordChild1, // #1 = $FRB
/*10514*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10526
/*10517*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FMUL:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10537
/*10528*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FMULS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 17,  MVT::v4f32,// ->10556
/*10539*/     OPC_EmitNode, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #2 
/*10546*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, (V_SET0:v4i32))
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->10573
/*10560*/   OPC_RecordChild0, // #0 = $src
/*10561*/   OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*10564*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 F4RC:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 F4RC:f32:$src, F8RC:f64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->10587
/*10576*/   OPC_RecordChild0, // #0 = $frB
/*10577*/   OPC_CheckType, MVT::f64,
/*10579*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->10601
/*10590*/   OPC_RecordChild0, // #0 = $frB
/*10591*/   OPC_CheckType, MVT::f64,
/*10593*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::BUILD_VECTOR),// ->10667
/*10604*/   OPC_Scope, 48, /*->10654*/ // 2 children in Scope
/*10606*/     OPC_RecordNode, // #0 = $SIMM
/*10607*/     OPC_SwitchType /*3 cases */, 13,  MVT::v16i8,// ->10623
/*10610*/       OPC_CheckPredicate, 88, // Predicate_vecspltisb
/*10612*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*10615*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 13,  MVT::v8i16,// ->10638
/*10625*/       OPC_CheckPredicate, 89, // Predicate_vecspltish
/*10627*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*10630*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 13,  MVT::v4i32,// ->10653
/*10640*/       OPC_CheckPredicate, 90, // Predicate_vecspltisw
/*10642*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*10645*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*10654*/   /*Scope*/ 11, /*->10666*/
/*10655*/     OPC_CheckPredicate, 91, // Predicate_immAllZerosV
/*10657*/     OPC_CheckType, MVT::v4i32,
/*10659*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*10666*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::BITCAST),// ->10753
/*10670*/   OPC_RecordChild0, // #0 = $src
/*10671*/   OPC_Scope, 19, /*->10692*/ // 4 children in Scope
/*10673*/     OPC_CheckChild0Type, MVT::v8i16,
/*10675*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10681
/*10678*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10686
/*10683*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10691
/*10688*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10692*/   /*Scope*/ 19, /*->10712*/
/*10693*/     OPC_CheckChild0Type, MVT::v4i32,
/*10695*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10701
/*10698*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10706
/*10703*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10711
/*10708*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10712*/   /*Scope*/ 19, /*->10732*/
/*10713*/     OPC_CheckChild0Type, MVT::v4f32,
/*10715*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10721
/*10718*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10726
/*10723*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10731
/*10728*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*10732*/   /*Scope*/ 19, /*->10752*/
/*10733*/     OPC_CheckChild0Type, MVT::v16i8,
/*10735*/     OPC_SwitchType /*3 cases */, 3,  MVT::v8i16,// ->10741
/*10738*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10746
/*10743*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10751
/*10748*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10752*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::RET_FLAG),// ->10773
/*10756*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*10757*/   OPC_CaptureGlueInput,
/*10758*/   OPC_EmitMergeInputChains1_0,
/*10759*/   OPC_EmitInteger, MVT::i32, 20, 
/*10762*/   OPC_EmitRegister, MVT::i32, 0 /*zero_reg*/,
/*10765*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->10792
/*10776*/   OPC_RecordNode,   // #0 = 'br' chained node
/*10777*/   OPC_RecordChild1, // #1 = $dst
/*10778*/   OPC_MoveChild, 1,
/*10780*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*10783*/   OPC_MoveParent,
/*10784*/   OPC_EmitMergeInputChains1_0,
/*10785*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_Darwin),// ->10821
/*10795*/   OPC_RecordNode,   // #0 = 'PPCbctrl_Darwin' chained node
/*10796*/   OPC_CaptureGlueInput,
/*10797*/   OPC_Scope, 10, /*->10809*/ // 2 children in Scope
/*10799*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*10801*/     OPC_EmitMergeInputChains1_0,
/*10802*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL_Darwin:i32)
/*10809*/   /*Scope*/ 10, /*->10820*/
/*10810*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*10812*/     OPC_EmitMergeInputChains1_0,
/*10813*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL8_Darwin:i64)
/*10820*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_SVR4),// ->10850
/*10824*/   OPC_RecordNode,   // #0 = 'PPCbctrl_SVR4' chained node
/*10825*/   OPC_CaptureGlueInput,
/*10826*/   OPC_Scope, 10, /*->10838*/ // 2 children in Scope
/*10828*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*10830*/     OPC_EmitMergeInputChains1_0,
/*10831*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL_SVR4:i32)
/*10838*/   /*Scope*/ 10, /*->10849*/
/*10839*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*10841*/     OPC_EmitMergeInputChains1_0,
/*10842*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL8_ELF:i64)
/*10849*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->10861
/*10853*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*10854*/   OPC_EmitMergeInputChains1_0,
/*10855*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->10893
/*10864*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*10865*/   OPC_CaptureGlueInput,
/*10866*/   OPC_RecordChild1, // #1 = $rS
/*10867*/   OPC_Scope, 11, /*->10880*/ // 2 children in Scope
/*10869*/     OPC_CheckChild1Type, MVT::i32,
/*10871*/     OPC_EmitMergeInputChains1_0,
/*10872*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr GPRC:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 GPRC:i32:$rS)
/*10880*/   /*Scope*/ 11, /*->10892*/
/*10881*/     OPC_CheckChild1Type, MVT::i64,
/*10883*/     OPC_EmitMergeInputChains1_0,
/*10884*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr G8RC:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 G8RC:i64:$rS)
/*10892*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VPERM),// ->10911
/*10896*/   OPC_RecordChild0, // #0 = $vA
/*10897*/   OPC_RecordChild1, // #1 = $vB
/*10898*/   OPC_RecordChild2, // #2 = $vC
/*10899*/   OPC_CheckType, MVT::v16i8,
/*10901*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VMADDFP),// ->10929
/*10914*/   OPC_RecordChild0, // #0 = $A
/*10915*/   OPC_RecordChild1, // #1 = $B
/*10916*/   OPC_RecordChild2, // #2 = $C
/*10917*/   OPC_CheckType, MVT::v4f32,
/*10919*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VNMSUBFP),// ->10947
/*10932*/   OPC_RecordChild0, // #0 = $A
/*10933*/   OPC_RecordChild1, // #1 = $B
/*10934*/   OPC_RecordChild2, // #2 = $C
/*10935*/   OPC_CheckType, MVT::v4f32,
/*10937*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::NOP),// ->10957
/*10950*/   OPC_CaptureGlueInput,
/*10951*/   OPC_MorphNodeTo, TARGET_VAL(PPC::NOP), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCnop) - Complexity = 3
            // Dst: (NOP)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->10973
/*10960*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*10961*/   OPC_CaptureGlueInput,
/*10962*/   OPC_RecordChild1, // #1 = $reg
/*10963*/   OPC_CheckChild1Type, MVT::i64,
/*10965*/   OPC_EmitMergeInputChains1_0,
/*10966*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc G8RC:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc G8RC:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->10985
/*10976*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*10977*/   OPC_CaptureGlueInput,
/*10978*/   OPC_EmitMergeInputChains1_0,
/*10979*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 10987 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 107
  // #OPC_RecordNode                     = 38
  // #OPC_RecordChild                    = 495
  // #OPC_RecordMemRef                   = 10
  // #OPC_CaptureGlueInput               = 18
  // #OPC_MoveChild                      = 148
  // #OPC_MoveParent                     = 367
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 21
  // #OPC_CheckPredicate                 = 179
  // #OPC_CheckOpcode                    = 93
  // #OPC_SwitchOpcode                   = 15
  // #OPC_CheckType                      = 152
  // #OPC_SwitchType                     = 94
  // #OPC_CheckChildType                 = 50
  // #OPC_CheckInteger                   = 191
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 7
  // #OPC_CheckComplexPat                = 139
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 26
  // #OPC_EmitStringInteger              = 3
  // #OPC_EmitRegister                   = 1
  // #OPC_EmitConvertToTarget            = 78
  // #OPC_EmitMergeInputChains           = 184
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 8
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 576

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (!NoExcessFPPrecision);
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 18: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 19: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 20: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 21: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 22: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 23: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 25: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 31: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 32: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 33: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 34: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 35: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 36: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 37: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 38: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 55: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 56: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 57: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 58: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 63: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 64: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 65: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 66: { // Predicate_V_immneg0
    SDNode *N = Node;

  return PPC::isAllNegativeZeroVector(N);

  }
  case 67: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 68: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 69: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 70: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 71: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 72: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 73: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 74: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 75: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 76: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 77: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 78: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 79: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 80: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 81: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 82: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 83: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 84: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 85: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 86: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 87: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 88: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 89: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 90: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 91: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent, SDValue N,
                         unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: assert(0 && "Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: assert(0 && "Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 6: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 7: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 8: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 9: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 10: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 11: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 12: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 13: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

