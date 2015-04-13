//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the PTX target
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
/*0*/     OPC_SwitchOpcode /*16 cases */, 57|128,23/*3001*/,  TARGET_VAL(ISD::LOAD),// ->3006
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_RecordChild1, // #1 = $a
/*8*/       OPC_Scope, 88|128,11/*1496*/, /*->1507*/ // 2 children in Scope
/*11*/        OPC_CheckChild1Type, MVT::i32,
/*13*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15*/        OPC_CheckPredicate, 1, // Predicate_load
/*17*/        OPC_Scope, 92|128,1/*220*/, /*->240*/ // 8 children in Scope
/*20*/          OPC_CheckPredicate, 2, // Predicate_load_global
/*22*/          OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->95
/*25*/            OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*27*/            OPC_Scope, 21, /*->50*/ // 3 children in Scope
/*29*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*32*/              OPC_EmitMergeInputChains1_0,
/*33*/              OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*36*/              OPC_EmitInteger, MVT::i32, 0, 
/*39*/              OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16rr32:i16 ADDRrr32:i32:$a)
/*50*/            /*Scope*/ 21, /*->72*/
/*51*/              OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*54*/              OPC_EmitMergeInputChains1_0,
/*55*/              OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*58*/              OPC_EmitInteger, MVT::i32, 0, 
/*61*/              OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16ri32:i16 ADDRri32:i32:$a)
/*72*/            /*Scope*/ 21, /*->94*/
/*73*/              OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*76*/              OPC_EmitMergeInputChains1_0,
/*77*/              OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*80*/              OPC_EmitInteger, MVT::i32, 0, 
/*83*/              OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16ii32:i16 ADDRii32:i32:$a)
/*94*/            0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->167
/*97*/            OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*99*/            OPC_Scope, 21, /*->122*/ // 3 children in Scope
/*101*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*104*/             OPC_EmitMergeInputChains1_0,
/*105*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*108*/             OPC_EmitInteger, MVT::i32, 0, 
/*111*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32rr32:i32 ADDRrr32:i32:$a)
/*122*/           /*Scope*/ 21, /*->144*/
/*123*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*126*/             OPC_EmitMergeInputChains1_0,
/*127*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*130*/             OPC_EmitInteger, MVT::i32, 0, 
/*133*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32ri32:i32 ADDRri32:i32:$a)
/*144*/           /*Scope*/ 21, /*->166*/
/*145*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*148*/             OPC_EmitMergeInputChains1_0,
/*149*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*152*/             OPC_EmitInteger, MVT::i32, 0, 
/*155*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32ii32:i32 ADDRii32:i32:$a)
/*166*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->239
/*169*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*171*/           OPC_Scope, 21, /*->194*/ // 3 children in Scope
/*173*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*176*/             OPC_EmitMergeInputChains1_0,
/*177*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*180*/             OPC_EmitInteger, MVT::i32, 0, 
/*183*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64rr32:i64 ADDRrr32:i32:$a)
/*194*/           /*Scope*/ 21, /*->216*/
/*195*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*198*/             OPC_EmitMergeInputChains1_0,
/*199*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*202*/             OPC_EmitInteger, MVT::i32, 0, 
/*205*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64ri32:i64 ADDRri32:i32:$a)
/*216*/           /*Scope*/ 21, /*->238*/
/*217*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*220*/             OPC_EmitMergeInputChains1_0,
/*221*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*224*/             OPC_EmitInteger, MVT::i32, 0, 
/*227*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64ii32:i64 ADDRii32:i32:$a)
/*238*/           0, /*End of Scope*/
                0, // EndSwitchType
/*240*/       /*Scope*/ 92|128,1/*220*/, /*->462*/
/*242*/         OPC_CheckPredicate, 3, // Predicate_load_constant
/*244*/         OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->317
/*247*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*249*/           OPC_Scope, 21, /*->272*/ // 3 children in Scope
/*251*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*254*/             OPC_EmitMergeInputChains1_0,
/*255*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*258*/             OPC_EmitInteger, MVT::i32, 0, 
/*261*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16rr32:i16 ADDRrr32:i32:$a)
/*272*/           /*Scope*/ 21, /*->294*/
/*273*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*276*/             OPC_EmitMergeInputChains1_0,
/*277*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*280*/             OPC_EmitInteger, MVT::i32, 0, 
/*283*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16ri32:i16 ADDRri32:i32:$a)
/*294*/           /*Scope*/ 21, /*->316*/
/*295*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*298*/             OPC_EmitMergeInputChains1_0,
/*299*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*302*/             OPC_EmitInteger, MVT::i32, 0, 
/*305*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16ii32:i16 ADDRii32:i32:$a)
/*316*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->389
/*319*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*321*/           OPC_Scope, 21, /*->344*/ // 3 children in Scope
/*323*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*326*/             OPC_EmitMergeInputChains1_0,
/*327*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*330*/             OPC_EmitInteger, MVT::i32, 0, 
/*333*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32rr32:i32 ADDRrr32:i32:$a)
/*344*/           /*Scope*/ 21, /*->366*/
/*345*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*348*/             OPC_EmitMergeInputChains1_0,
/*349*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*352*/             OPC_EmitInteger, MVT::i32, 0, 
/*355*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32ri32:i32 ADDRri32:i32:$a)
/*366*/           /*Scope*/ 21, /*->388*/
/*367*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*370*/             OPC_EmitMergeInputChains1_0,
/*371*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*374*/             OPC_EmitInteger, MVT::i32, 0, 
/*377*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32ii32:i32 ADDRii32:i32:$a)
/*388*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->461
/*391*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*393*/           OPC_Scope, 21, /*->416*/ // 3 children in Scope
/*395*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*398*/             OPC_EmitMergeInputChains1_0,
/*399*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*402*/             OPC_EmitInteger, MVT::i32, 0, 
/*405*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64rr32:i64 ADDRrr32:i32:$a)
/*416*/           /*Scope*/ 21, /*->438*/
/*417*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*420*/             OPC_EmitMergeInputChains1_0,
/*421*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*424*/             OPC_EmitInteger, MVT::i32, 0, 
/*427*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64ri32:i64 ADDRri32:i32:$a)
/*438*/           /*Scope*/ 21, /*->460*/
/*439*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*442*/             OPC_EmitMergeInputChains1_0,
/*443*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*446*/             OPC_EmitInteger, MVT::i32, 0, 
/*449*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64ii32:i64 ADDRii32:i32:$a)
/*460*/           0, /*End of Scope*/
                0, // EndSwitchType
/*462*/       /*Scope*/ 92|128,1/*220*/, /*->684*/
/*464*/         OPC_CheckPredicate, 4, // Predicate_load_local
/*466*/         OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->539
/*469*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*471*/           OPC_Scope, 21, /*->494*/ // 3 children in Scope
/*473*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*476*/             OPC_EmitMergeInputChains1_0,
/*477*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*480*/             OPC_EmitInteger, MVT::i32, 0, 
/*483*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16rr32:i16 ADDRrr32:i32:$a)
/*494*/           /*Scope*/ 21, /*->516*/
/*495*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*498*/             OPC_EmitMergeInputChains1_0,
/*499*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*502*/             OPC_EmitInteger, MVT::i32, 0, 
/*505*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16ri32:i16 ADDRri32:i32:$a)
/*516*/           /*Scope*/ 21, /*->538*/
/*517*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*520*/             OPC_EmitMergeInputChains1_0,
/*521*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*524*/             OPC_EmitInteger, MVT::i32, 0, 
/*527*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16ii32:i16 ADDRii32:i32:$a)
/*538*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->611
/*541*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*543*/           OPC_Scope, 21, /*->566*/ // 3 children in Scope
/*545*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*548*/             OPC_EmitMergeInputChains1_0,
/*549*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*552*/             OPC_EmitInteger, MVT::i32, 0, 
/*555*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32rr32:i32 ADDRrr32:i32:$a)
/*566*/           /*Scope*/ 21, /*->588*/
/*567*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*570*/             OPC_EmitMergeInputChains1_0,
/*571*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*574*/             OPC_EmitInteger, MVT::i32, 0, 
/*577*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32ri32:i32 ADDRri32:i32:$a)
/*588*/           /*Scope*/ 21, /*->610*/
/*589*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*592*/             OPC_EmitMergeInputChains1_0,
/*593*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*596*/             OPC_EmitInteger, MVT::i32, 0, 
/*599*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32ii32:i32 ADDRii32:i32:$a)
/*610*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->683
/*613*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*615*/           OPC_Scope, 21, /*->638*/ // 3 children in Scope
/*617*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*620*/             OPC_EmitMergeInputChains1_0,
/*621*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*624*/             OPC_EmitInteger, MVT::i32, 0, 
/*627*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64rr32:i64 ADDRrr32:i32:$a)
/*638*/           /*Scope*/ 21, /*->660*/
/*639*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*642*/             OPC_EmitMergeInputChains1_0,
/*643*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*646*/             OPC_EmitInteger, MVT::i32, 0, 
/*649*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64ri32:i64 ADDRri32:i32:$a)
/*660*/           /*Scope*/ 21, /*->682*/
/*661*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*664*/             OPC_EmitMergeInputChains1_0,
/*665*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*668*/             OPC_EmitInteger, MVT::i32, 0, 
/*671*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64ii32:i64 ADDRii32:i32:$a)
/*682*/           0, /*End of Scope*/
                0, // EndSwitchType
/*684*/       /*Scope*/ 92|128,1/*220*/, /*->906*/
/*686*/         OPC_CheckPredicate, 5, // Predicate_load_shared
/*688*/         OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->761
/*691*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*693*/           OPC_Scope, 21, /*->716*/ // 3 children in Scope
/*695*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*698*/             OPC_EmitMergeInputChains1_0,
/*699*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*702*/             OPC_EmitInteger, MVT::i32, 0, 
/*705*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16rr32:i16 ADDRrr32:i32:$a)
/*716*/           /*Scope*/ 21, /*->738*/
/*717*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*720*/             OPC_EmitMergeInputChains1_0,
/*721*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*724*/             OPC_EmitInteger, MVT::i32, 0, 
/*727*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16ri32:i16 ADDRri32:i32:$a)
/*738*/           /*Scope*/ 21, /*->760*/
/*739*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*742*/             OPC_EmitMergeInputChains1_0,
/*743*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*746*/             OPC_EmitInteger, MVT::i32, 0, 
/*749*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16ii32:i16 ADDRii32:i32:$a)
/*760*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->833
/*763*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*765*/           OPC_Scope, 21, /*->788*/ // 3 children in Scope
/*767*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*770*/             OPC_EmitMergeInputChains1_0,
/*771*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*774*/             OPC_EmitInteger, MVT::i32, 0, 
/*777*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32rr32:i32 ADDRrr32:i32:$a)
/*788*/           /*Scope*/ 21, /*->810*/
/*789*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*792*/             OPC_EmitMergeInputChains1_0,
/*793*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*796*/             OPC_EmitInteger, MVT::i32, 0, 
/*799*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32ri32:i32 ADDRri32:i32:$a)
/*810*/           /*Scope*/ 21, /*->832*/
/*811*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*814*/             OPC_EmitMergeInputChains1_0,
/*815*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*818*/             OPC_EmitInteger, MVT::i32, 0, 
/*821*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32ii32:i32 ADDRii32:i32:$a)
/*832*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->905
/*835*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*837*/           OPC_Scope, 21, /*->860*/ // 3 children in Scope
/*839*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*842*/             OPC_EmitMergeInputChains1_0,
/*843*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*846*/             OPC_EmitInteger, MVT::i32, 0, 
/*849*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64rr32:i64 ADDRrr32:i32:$a)
/*860*/           /*Scope*/ 21, /*->882*/
/*861*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*864*/             OPC_EmitMergeInputChains1_0,
/*865*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*868*/             OPC_EmitInteger, MVT::i32, 0, 
/*871*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64ri32:i64 ADDRri32:i32:$a)
/*882*/           /*Scope*/ 21, /*->904*/
/*883*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*886*/             OPC_EmitMergeInputChains1_0,
/*887*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*890*/             OPC_EmitInteger, MVT::i32, 0, 
/*893*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64ii32:i64 ADDRii32:i32:$a)
/*904*/           0, /*End of Scope*/
                0, // EndSwitchType
/*906*/       /*Scope*/ 20|128,1/*148*/, /*->1056*/
/*908*/         OPC_CheckPredicate, 2, // Predicate_load_global
/*910*/         OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->983
/*913*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*915*/           OPC_Scope, 21, /*->938*/ // 3 children in Scope
/*917*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*920*/             OPC_EmitMergeInputChains1_0,
/*921*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*924*/             OPC_EmitInteger, MVT::i32, 0, 
/*927*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32rr32:f32 ADDRrr32:i32:$a)
/*938*/           /*Scope*/ 21, /*->960*/
/*939*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*942*/             OPC_EmitMergeInputChains1_0,
/*943*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*946*/             OPC_EmitInteger, MVT::i32, 0, 
/*949*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32ri32:f32 ADDRri32:i32:$a)
/*960*/           /*Scope*/ 21, /*->982*/
/*961*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*964*/             OPC_EmitMergeInputChains1_0,
/*965*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*968*/             OPC_EmitInteger, MVT::i32, 0, 
/*971*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32ii32:f32 ADDRii32:i32:$a)
/*982*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->1055
/*985*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*987*/           OPC_Scope, 21, /*->1010*/ // 3 children in Scope
/*989*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*992*/             OPC_EmitMergeInputChains1_0,
/*993*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*996*/             OPC_EmitInteger, MVT::i32, 0, 
/*999*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64rr32:f64 ADDRrr32:i32:$a)
/*1010*/          /*Scope*/ 21, /*->1032*/
/*1011*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1014*/            OPC_EmitMergeInputChains1_0,
/*1015*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1018*/            OPC_EmitInteger, MVT::i32, 0, 
/*1021*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64ri32:f64 ADDRri32:i32:$a)
/*1032*/          /*Scope*/ 21, /*->1054*/
/*1033*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1036*/            OPC_EmitMergeInputChains1_0,
/*1037*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1040*/            OPC_EmitInteger, MVT::i32, 0, 
/*1043*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64ii32:f64 ADDRii32:i32:$a)
/*1054*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1056*/      /*Scope*/ 20|128,1/*148*/, /*->1206*/
/*1058*/        OPC_CheckPredicate, 3, // Predicate_load_constant
/*1060*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->1133
/*1063*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1065*/          OPC_Scope, 21, /*->1088*/ // 3 children in Scope
/*1067*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1070*/            OPC_EmitMergeInputChains1_0,
/*1071*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1074*/            OPC_EmitInteger, MVT::i32, 0, 
/*1077*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32rr32:f32 ADDRrr32:i32:$a)
/*1088*/          /*Scope*/ 21, /*->1110*/
/*1089*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1092*/            OPC_EmitMergeInputChains1_0,
/*1093*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1096*/            OPC_EmitInteger, MVT::i32, 0, 
/*1099*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32ri32:f32 ADDRri32:i32:$a)
/*1110*/          /*Scope*/ 21, /*->1132*/
/*1111*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1114*/            OPC_EmitMergeInputChains1_0,
/*1115*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1118*/            OPC_EmitInteger, MVT::i32, 0, 
/*1121*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32ii32:f32 ADDRii32:i32:$a)
/*1132*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->1205
/*1135*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1137*/          OPC_Scope, 21, /*->1160*/ // 3 children in Scope
/*1139*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1142*/            OPC_EmitMergeInputChains1_0,
/*1143*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1146*/            OPC_EmitInteger, MVT::i32, 0, 
/*1149*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64rr32:f64 ADDRrr32:i32:$a)
/*1160*/          /*Scope*/ 21, /*->1182*/
/*1161*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1164*/            OPC_EmitMergeInputChains1_0,
/*1165*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1168*/            OPC_EmitInteger, MVT::i32, 0, 
/*1171*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64ri32:f64 ADDRri32:i32:$a)
/*1182*/          /*Scope*/ 21, /*->1204*/
/*1183*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1186*/            OPC_EmitMergeInputChains1_0,
/*1187*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1190*/            OPC_EmitInteger, MVT::i32, 0, 
/*1193*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64ii32:f64 ADDRii32:i32:$a)
/*1204*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1206*/      /*Scope*/ 20|128,1/*148*/, /*->1356*/
/*1208*/        OPC_CheckPredicate, 4, // Predicate_load_local
/*1210*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->1283
/*1213*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1215*/          OPC_Scope, 21, /*->1238*/ // 3 children in Scope
/*1217*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1220*/            OPC_EmitMergeInputChains1_0,
/*1221*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1224*/            OPC_EmitInteger, MVT::i32, 0, 
/*1227*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32rr32:f32 ADDRrr32:i32:$a)
/*1238*/          /*Scope*/ 21, /*->1260*/
/*1239*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1242*/            OPC_EmitMergeInputChains1_0,
/*1243*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1246*/            OPC_EmitInteger, MVT::i32, 0, 
/*1249*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32ri32:f32 ADDRri32:i32:$a)
/*1260*/          /*Scope*/ 21, /*->1282*/
/*1261*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1264*/            OPC_EmitMergeInputChains1_0,
/*1265*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1268*/            OPC_EmitInteger, MVT::i32, 0, 
/*1271*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32ii32:f32 ADDRii32:i32:$a)
/*1282*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->1355
/*1285*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1287*/          OPC_Scope, 21, /*->1310*/ // 3 children in Scope
/*1289*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1292*/            OPC_EmitMergeInputChains1_0,
/*1293*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1296*/            OPC_EmitInteger, MVT::i32, 0, 
/*1299*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64rr32:f64 ADDRrr32:i32:$a)
/*1310*/          /*Scope*/ 21, /*->1332*/
/*1311*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1314*/            OPC_EmitMergeInputChains1_0,
/*1315*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1318*/            OPC_EmitInteger, MVT::i32, 0, 
/*1321*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64ri32:f64 ADDRri32:i32:$a)
/*1332*/          /*Scope*/ 21, /*->1354*/
/*1333*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1336*/            OPC_EmitMergeInputChains1_0,
/*1337*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1340*/            OPC_EmitInteger, MVT::i32, 0, 
/*1343*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64ii32:f64 ADDRii32:i32:$a)
/*1354*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1356*/      /*Scope*/ 20|128,1/*148*/, /*->1506*/
/*1358*/        OPC_CheckPredicate, 5, // Predicate_load_shared
/*1360*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->1433
/*1363*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1365*/          OPC_Scope, 21, /*->1388*/ // 3 children in Scope
/*1367*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1370*/            OPC_EmitMergeInputChains1_0,
/*1371*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1374*/            OPC_EmitInteger, MVT::i32, 0, 
/*1377*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32rr32:f32 ADDRrr32:i32:$a)
/*1388*/          /*Scope*/ 21, /*->1410*/
/*1389*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1392*/            OPC_EmitMergeInputChains1_0,
/*1393*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1396*/            OPC_EmitInteger, MVT::i32, 0, 
/*1399*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32ri32:f32 ADDRri32:i32:$a)
/*1410*/          /*Scope*/ 21, /*->1432*/
/*1411*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1414*/            OPC_EmitMergeInputChains1_0,
/*1415*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1418*/            OPC_EmitInteger, MVT::i32, 0, 
/*1421*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32ii32:f32 ADDRii32:i32:$a)
/*1432*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->1505
/*1435*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1437*/          OPC_Scope, 21, /*->1460*/ // 3 children in Scope
/*1439*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1442*/            OPC_EmitMergeInputChains1_0,
/*1443*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1446*/            OPC_EmitInteger, MVT::i32, 0, 
/*1449*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64rr32:f64 ADDRrr32:i32:$a)
/*1460*/          /*Scope*/ 21, /*->1482*/
/*1461*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1464*/            OPC_EmitMergeInputChains1_0,
/*1465*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1468*/            OPC_EmitInteger, MVT::i32, 0, 
/*1471*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64ri32:f64 ADDRri32:i32:$a)
/*1482*/          /*Scope*/ 21, /*->1504*/
/*1483*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1486*/            OPC_EmitMergeInputChains1_0,
/*1487*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1490*/            OPC_EmitInteger, MVT::i32, 0, 
/*1493*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64ii32:f64 ADDRii32:i32:$a)
/*1504*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1506*/      0, /*End of Scope*/
/*1507*/    /*Scope*/ 88|128,11/*1496*/, /*->3005*/
/*1509*/      OPC_CheckChild1Type, MVT::i64,
/*1511*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1513*/      OPC_CheckPredicate, 1, // Predicate_load
/*1515*/      OPC_Scope, 92|128,1/*220*/, /*->1738*/ // 8 children in Scope
/*1518*/        OPC_CheckPredicate, 2, // Predicate_load_global
/*1520*/        OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->1593
/*1523*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1525*/          OPC_Scope, 21, /*->1548*/ // 3 children in Scope
/*1527*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1530*/            OPC_EmitMergeInputChains1_0,
/*1531*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1534*/            OPC_EmitInteger, MVT::i32, 0, 
/*1537*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16rr64:i16 ADDRrr64:i64:$a)
/*1548*/          /*Scope*/ 21, /*->1570*/
/*1549*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1552*/            OPC_EmitMergeInputChains1_0,
/*1553*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1556*/            OPC_EmitInteger, MVT::i32, 0, 
/*1559*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16ri64:i16 ADDRri64:i64:$a)
/*1570*/          /*Scope*/ 21, /*->1592*/
/*1571*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1574*/            OPC_EmitMergeInputChains1_0,
/*1575*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1578*/            OPC_EmitInteger, MVT::i32, 0, 
/*1581*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16ii64:i16 ADDRii64:i64:$a)
/*1592*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->1665
/*1595*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1597*/          OPC_Scope, 21, /*->1620*/ // 3 children in Scope
/*1599*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1602*/            OPC_EmitMergeInputChains1_0,
/*1603*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1606*/            OPC_EmitInteger, MVT::i32, 0, 
/*1609*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32rr64:i32 ADDRrr64:i64:$a)
/*1620*/          /*Scope*/ 21, /*->1642*/
/*1621*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1624*/            OPC_EmitMergeInputChains1_0,
/*1625*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1628*/            OPC_EmitInteger, MVT::i32, 0, 
/*1631*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32ri64:i32 ADDRri64:i64:$a)
/*1642*/          /*Scope*/ 21, /*->1664*/
/*1643*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1646*/            OPC_EmitMergeInputChains1_0,
/*1647*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1650*/            OPC_EmitInteger, MVT::i32, 0, 
/*1653*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32ii64:i32 ADDRii64:i64:$a)
/*1664*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->1737
/*1667*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1669*/          OPC_Scope, 21, /*->1692*/ // 3 children in Scope
/*1671*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1674*/            OPC_EmitMergeInputChains1_0,
/*1675*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1678*/            OPC_EmitInteger, MVT::i32, 0, 
/*1681*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64rr64:i64 ADDRrr64:i64:$a)
/*1692*/          /*Scope*/ 21, /*->1714*/
/*1693*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1696*/            OPC_EmitMergeInputChains1_0,
/*1697*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1700*/            OPC_EmitInteger, MVT::i32, 0, 
/*1703*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64ri64:i64 ADDRri64:i64:$a)
/*1714*/          /*Scope*/ 21, /*->1736*/
/*1715*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1718*/            OPC_EmitMergeInputChains1_0,
/*1719*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1722*/            OPC_EmitInteger, MVT::i32, 0, 
/*1725*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64ii64:i64 ADDRii64:i64:$a)
/*1736*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1738*/      /*Scope*/ 92|128,1/*220*/, /*->1960*/
/*1740*/        OPC_CheckPredicate, 3, // Predicate_load_constant
/*1742*/        OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->1815
/*1745*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1747*/          OPC_Scope, 21, /*->1770*/ // 3 children in Scope
/*1749*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1752*/            OPC_EmitMergeInputChains1_0,
/*1753*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1756*/            OPC_EmitInteger, MVT::i32, 0, 
/*1759*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16rr64:i16 ADDRrr64:i64:$a)
/*1770*/          /*Scope*/ 21, /*->1792*/
/*1771*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1774*/            OPC_EmitMergeInputChains1_0,
/*1775*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1778*/            OPC_EmitInteger, MVT::i32, 0, 
/*1781*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16ri64:i16 ADDRri64:i64:$a)
/*1792*/          /*Scope*/ 21, /*->1814*/
/*1793*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1796*/            OPC_EmitMergeInputChains1_0,
/*1797*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1800*/            OPC_EmitInteger, MVT::i32, 0, 
/*1803*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16ii64:i16 ADDRii64:i64:$a)
/*1814*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->1887
/*1817*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1819*/          OPC_Scope, 21, /*->1842*/ // 3 children in Scope
/*1821*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1824*/            OPC_EmitMergeInputChains1_0,
/*1825*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1828*/            OPC_EmitInteger, MVT::i32, 0, 
/*1831*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32rr64:i32 ADDRrr64:i64:$a)
/*1842*/          /*Scope*/ 21, /*->1864*/
/*1843*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1846*/            OPC_EmitMergeInputChains1_0,
/*1847*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1850*/            OPC_EmitInteger, MVT::i32, 0, 
/*1853*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32ri64:i32 ADDRri64:i64:$a)
/*1864*/          /*Scope*/ 21, /*->1886*/
/*1865*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1868*/            OPC_EmitMergeInputChains1_0,
/*1869*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1872*/            OPC_EmitInteger, MVT::i32, 0, 
/*1875*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32ii64:i32 ADDRii64:i64:$a)
/*1886*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->1959
/*1889*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1891*/          OPC_Scope, 21, /*->1914*/ // 3 children in Scope
/*1893*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1896*/            OPC_EmitMergeInputChains1_0,
/*1897*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1900*/            OPC_EmitInteger, MVT::i32, 0, 
/*1903*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64rr64:i64 ADDRrr64:i64:$a)
/*1914*/          /*Scope*/ 21, /*->1936*/
/*1915*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1918*/            OPC_EmitMergeInputChains1_0,
/*1919*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1922*/            OPC_EmitInteger, MVT::i32, 0, 
/*1925*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64ri64:i64 ADDRri64:i64:$a)
/*1936*/          /*Scope*/ 21, /*->1958*/
/*1937*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1940*/            OPC_EmitMergeInputChains1_0,
/*1941*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1944*/            OPC_EmitInteger, MVT::i32, 0, 
/*1947*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64ii64:i64 ADDRii64:i64:$a)
/*1958*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1960*/      /*Scope*/ 92|128,1/*220*/, /*->2182*/
/*1962*/        OPC_CheckPredicate, 4, // Predicate_load_local
/*1964*/        OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->2037
/*1967*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1969*/          OPC_Scope, 21, /*->1992*/ // 3 children in Scope
/*1971*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1974*/            OPC_EmitMergeInputChains1_0,
/*1975*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1978*/            OPC_EmitInteger, MVT::i32, 0, 
/*1981*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16rr64:i16 ADDRrr64:i64:$a)
/*1992*/          /*Scope*/ 21, /*->2014*/
/*1993*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1996*/            OPC_EmitMergeInputChains1_0,
/*1997*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2000*/            OPC_EmitInteger, MVT::i32, 0, 
/*2003*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16ri64:i16 ADDRri64:i64:$a)
/*2014*/          /*Scope*/ 21, /*->2036*/
/*2015*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2018*/            OPC_EmitMergeInputChains1_0,
/*2019*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2022*/            OPC_EmitInteger, MVT::i32, 0, 
/*2025*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16ii64:i16 ADDRii64:i64:$a)
/*2036*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->2109
/*2039*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2041*/          OPC_Scope, 21, /*->2064*/ // 3 children in Scope
/*2043*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2046*/            OPC_EmitMergeInputChains1_0,
/*2047*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2050*/            OPC_EmitInteger, MVT::i32, 0, 
/*2053*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32rr64:i32 ADDRrr64:i64:$a)
/*2064*/          /*Scope*/ 21, /*->2086*/
/*2065*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2068*/            OPC_EmitMergeInputChains1_0,
/*2069*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2072*/            OPC_EmitInteger, MVT::i32, 0, 
/*2075*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32ri64:i32 ADDRri64:i64:$a)
/*2086*/          /*Scope*/ 21, /*->2108*/
/*2087*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2090*/            OPC_EmitMergeInputChains1_0,
/*2091*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2094*/            OPC_EmitInteger, MVT::i32, 0, 
/*2097*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32ii64:i32 ADDRii64:i64:$a)
/*2108*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->2181
/*2111*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2113*/          OPC_Scope, 21, /*->2136*/ // 3 children in Scope
/*2115*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2118*/            OPC_EmitMergeInputChains1_0,
/*2119*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2122*/            OPC_EmitInteger, MVT::i32, 0, 
/*2125*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64rr64:i64 ADDRrr64:i64:$a)
/*2136*/          /*Scope*/ 21, /*->2158*/
/*2137*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2140*/            OPC_EmitMergeInputChains1_0,
/*2141*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2144*/            OPC_EmitInteger, MVT::i32, 0, 
/*2147*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64ri64:i64 ADDRri64:i64:$a)
/*2158*/          /*Scope*/ 21, /*->2180*/
/*2159*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2162*/            OPC_EmitMergeInputChains1_0,
/*2163*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2166*/            OPC_EmitInteger, MVT::i32, 0, 
/*2169*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64ii64:i64 ADDRii64:i64:$a)
/*2180*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2182*/      /*Scope*/ 92|128,1/*220*/, /*->2404*/
/*2184*/        OPC_CheckPredicate, 5, // Predicate_load_shared
/*2186*/        OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->2259
/*2189*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2191*/          OPC_Scope, 21, /*->2214*/ // 3 children in Scope
/*2193*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2196*/            OPC_EmitMergeInputChains1_0,
/*2197*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2200*/            OPC_EmitInteger, MVT::i32, 0, 
/*2203*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16rr64:i16 ADDRrr64:i64:$a)
/*2214*/          /*Scope*/ 21, /*->2236*/
/*2215*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2218*/            OPC_EmitMergeInputChains1_0,
/*2219*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2222*/            OPC_EmitInteger, MVT::i32, 0, 
/*2225*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16ri64:i16 ADDRri64:i64:$a)
/*2236*/          /*Scope*/ 21, /*->2258*/
/*2237*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2240*/            OPC_EmitMergeInputChains1_0,
/*2241*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2244*/            OPC_EmitInteger, MVT::i32, 0, 
/*2247*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16ii64:i16 ADDRii64:i64:$a)
/*2258*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->2331
/*2261*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2263*/          OPC_Scope, 21, /*->2286*/ // 3 children in Scope
/*2265*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2268*/            OPC_EmitMergeInputChains1_0,
/*2269*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2272*/            OPC_EmitInteger, MVT::i32, 0, 
/*2275*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32rr64:i32 ADDRrr64:i64:$a)
/*2286*/          /*Scope*/ 21, /*->2308*/
/*2287*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2290*/            OPC_EmitMergeInputChains1_0,
/*2291*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2294*/            OPC_EmitInteger, MVT::i32, 0, 
/*2297*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32ri64:i32 ADDRri64:i64:$a)
/*2308*/          /*Scope*/ 21, /*->2330*/
/*2309*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2312*/            OPC_EmitMergeInputChains1_0,
/*2313*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2316*/            OPC_EmitInteger, MVT::i32, 0, 
/*2319*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32ii64:i32 ADDRii64:i64:$a)
/*2330*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->2403
/*2333*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2335*/          OPC_Scope, 21, /*->2358*/ // 3 children in Scope
/*2337*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2340*/            OPC_EmitMergeInputChains1_0,
/*2341*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2344*/            OPC_EmitInteger, MVT::i32, 0, 
/*2347*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64rr64:i64 ADDRrr64:i64:$a)
/*2358*/          /*Scope*/ 21, /*->2380*/
/*2359*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2362*/            OPC_EmitMergeInputChains1_0,
/*2363*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2366*/            OPC_EmitInteger, MVT::i32, 0, 
/*2369*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64ri64:i64 ADDRri64:i64:$a)
/*2380*/          /*Scope*/ 21, /*->2402*/
/*2381*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2384*/            OPC_EmitMergeInputChains1_0,
/*2385*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2388*/            OPC_EmitInteger, MVT::i32, 0, 
/*2391*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64ii64:i64 ADDRii64:i64:$a)
/*2402*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2404*/      /*Scope*/ 20|128,1/*148*/, /*->2554*/
/*2406*/        OPC_CheckPredicate, 2, // Predicate_load_global
/*2408*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->2481
/*2411*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2413*/          OPC_Scope, 21, /*->2436*/ // 3 children in Scope
/*2415*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2418*/            OPC_EmitMergeInputChains1_0,
/*2419*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2422*/            OPC_EmitInteger, MVT::i32, 0, 
/*2425*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32rr64:f32 ADDRrr64:i64:$a)
/*2436*/          /*Scope*/ 21, /*->2458*/
/*2437*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2440*/            OPC_EmitMergeInputChains1_0,
/*2441*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2444*/            OPC_EmitInteger, MVT::i32, 0, 
/*2447*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32ri64:f32 ADDRri64:i64:$a)
/*2458*/          /*Scope*/ 21, /*->2480*/
/*2459*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2462*/            OPC_EmitMergeInputChains1_0,
/*2463*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2466*/            OPC_EmitInteger, MVT::i32, 0, 
/*2469*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32ii64:f32 ADDRii64:i64:$a)
/*2480*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->2553
/*2483*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2485*/          OPC_Scope, 21, /*->2508*/ // 3 children in Scope
/*2487*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2490*/            OPC_EmitMergeInputChains1_0,
/*2491*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2494*/            OPC_EmitInteger, MVT::i32, 0, 
/*2497*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64rr64:f64 ADDRrr64:i64:$a)
/*2508*/          /*Scope*/ 21, /*->2530*/
/*2509*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2512*/            OPC_EmitMergeInputChains1_0,
/*2513*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2516*/            OPC_EmitInteger, MVT::i32, 0, 
/*2519*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64ri64:f64 ADDRri64:i64:$a)
/*2530*/          /*Scope*/ 21, /*->2552*/
/*2531*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2534*/            OPC_EmitMergeInputChains1_0,
/*2535*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2538*/            OPC_EmitInteger, MVT::i32, 0, 
/*2541*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64ii64:f64 ADDRii64:i64:$a)
/*2552*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2554*/      /*Scope*/ 20|128,1/*148*/, /*->2704*/
/*2556*/        OPC_CheckPredicate, 3, // Predicate_load_constant
/*2558*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->2631
/*2561*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2563*/          OPC_Scope, 21, /*->2586*/ // 3 children in Scope
/*2565*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2568*/            OPC_EmitMergeInputChains1_0,
/*2569*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2572*/            OPC_EmitInteger, MVT::i32, 0, 
/*2575*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32rr64:f32 ADDRrr64:i64:$a)
/*2586*/          /*Scope*/ 21, /*->2608*/
/*2587*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2590*/            OPC_EmitMergeInputChains1_0,
/*2591*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2594*/            OPC_EmitInteger, MVT::i32, 0, 
/*2597*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32ri64:f32 ADDRri64:i64:$a)
/*2608*/          /*Scope*/ 21, /*->2630*/
/*2609*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2612*/            OPC_EmitMergeInputChains1_0,
/*2613*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2616*/            OPC_EmitInteger, MVT::i32, 0, 
/*2619*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32ii64:f32 ADDRii64:i64:$a)
/*2630*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->2703
/*2633*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2635*/          OPC_Scope, 21, /*->2658*/ // 3 children in Scope
/*2637*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2640*/            OPC_EmitMergeInputChains1_0,
/*2641*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2644*/            OPC_EmitInteger, MVT::i32, 0, 
/*2647*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64rr64:f64 ADDRrr64:i64:$a)
/*2658*/          /*Scope*/ 21, /*->2680*/
/*2659*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2662*/            OPC_EmitMergeInputChains1_0,
/*2663*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2666*/            OPC_EmitInteger, MVT::i32, 0, 
/*2669*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64ri64:f64 ADDRri64:i64:$a)
/*2680*/          /*Scope*/ 21, /*->2702*/
/*2681*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2684*/            OPC_EmitMergeInputChains1_0,
/*2685*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2688*/            OPC_EmitInteger, MVT::i32, 0, 
/*2691*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64ii64:f64 ADDRii64:i64:$a)
/*2702*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2704*/      /*Scope*/ 20|128,1/*148*/, /*->2854*/
/*2706*/        OPC_CheckPredicate, 4, // Predicate_load_local
/*2708*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->2781
/*2711*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2713*/          OPC_Scope, 21, /*->2736*/ // 3 children in Scope
/*2715*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2718*/            OPC_EmitMergeInputChains1_0,
/*2719*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2722*/            OPC_EmitInteger, MVT::i32, 0, 
/*2725*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32rr64:f32 ADDRrr64:i64:$a)
/*2736*/          /*Scope*/ 21, /*->2758*/
/*2737*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2740*/            OPC_EmitMergeInputChains1_0,
/*2741*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2744*/            OPC_EmitInteger, MVT::i32, 0, 
/*2747*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32ri64:f32 ADDRri64:i64:$a)
/*2758*/          /*Scope*/ 21, /*->2780*/
/*2759*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2762*/            OPC_EmitMergeInputChains1_0,
/*2763*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2766*/            OPC_EmitInteger, MVT::i32, 0, 
/*2769*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32ii64:f32 ADDRii64:i64:$a)
/*2780*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->2853
/*2783*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2785*/          OPC_Scope, 21, /*->2808*/ // 3 children in Scope
/*2787*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2790*/            OPC_EmitMergeInputChains1_0,
/*2791*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2794*/            OPC_EmitInteger, MVT::i32, 0, 
/*2797*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64rr64:f64 ADDRrr64:i64:$a)
/*2808*/          /*Scope*/ 21, /*->2830*/
/*2809*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2812*/            OPC_EmitMergeInputChains1_0,
/*2813*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2816*/            OPC_EmitInteger, MVT::i32, 0, 
/*2819*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64ri64:f64 ADDRri64:i64:$a)
/*2830*/          /*Scope*/ 21, /*->2852*/
/*2831*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2834*/            OPC_EmitMergeInputChains1_0,
/*2835*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2838*/            OPC_EmitInteger, MVT::i32, 0, 
/*2841*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64ii64:f64 ADDRii64:i64:$a)
/*2852*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2854*/      /*Scope*/ 20|128,1/*148*/, /*->3004*/
/*2856*/        OPC_CheckPredicate, 5, // Predicate_load_shared
/*2858*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->2931
/*2861*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2863*/          OPC_Scope, 21, /*->2886*/ // 3 children in Scope
/*2865*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2868*/            OPC_EmitMergeInputChains1_0,
/*2869*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2872*/            OPC_EmitInteger, MVT::i32, 0, 
/*2875*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32rr64:f32 ADDRrr64:i64:$a)
/*2886*/          /*Scope*/ 21, /*->2908*/
/*2887*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2890*/            OPC_EmitMergeInputChains1_0,
/*2891*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2894*/            OPC_EmitInteger, MVT::i32, 0, 
/*2897*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32ri64:f32 ADDRri64:i64:$a)
/*2908*/          /*Scope*/ 21, /*->2930*/
/*2909*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2912*/            OPC_EmitMergeInputChains1_0,
/*2913*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2916*/            OPC_EmitInteger, MVT::i32, 0, 
/*2919*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32ii64:f32 ADDRii64:i64:$a)
/*2930*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->3003
/*2933*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2935*/          OPC_Scope, 21, /*->2958*/ // 3 children in Scope
/*2937*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2940*/            OPC_EmitMergeInputChains1_0,
/*2941*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2944*/            OPC_EmitInteger, MVT::i32, 0, 
/*2947*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64rr64:f64 ADDRrr64:i64:$a)
/*2958*/          /*Scope*/ 21, /*->2980*/
/*2959*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2962*/            OPC_EmitMergeInputChains1_0,
/*2963*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2966*/            OPC_EmitInteger, MVT::i32, 0, 
/*2969*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64ri64:f64 ADDRri64:i64:$a)
/*2980*/          /*Scope*/ 21, /*->3002*/
/*2981*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2984*/            OPC_EmitMergeInputChains1_0,
/*2985*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2988*/            OPC_EmitInteger, MVT::i32, 0, 
/*2991*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64ii64:f64 ADDRii64:i64:$a)
/*3002*/          0, /*End of Scope*/
                0, // EndSwitchType
/*3004*/      0, /*End of Scope*/
/*3005*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26|128,18/*2330*/,  TARGET_VAL(ISD::STORE),// ->5340
/*3010*/    OPC_RecordMemRef,
/*3011*/    OPC_RecordNode,   // #0 = 'st' chained node
/*3012*/    OPC_RecordChild1, // #1 = $d
/*3013*/    OPC_Scope, 79|128,3/*463*/, /*->3479*/ // 5 children in Scope
/*3016*/      OPC_CheckChild1Type, MVT::i16,
/*3018*/      OPC_RecordChild2, // #2 = $a
/*3019*/      OPC_Scope, 99|128,1/*227*/, /*->3249*/ // 2 children in Scope
/*3022*/        OPC_CheckChild2Type, MVT::i32,
/*3024*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*3026*/        OPC_CheckPredicate, 7, // Predicate_store
/*3028*/        OPC_Scope, 72, /*->3102*/ // 3 children in Scope
/*3030*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*3032*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3034*/          OPC_Scope, 21, /*->3057*/ // 3 children in Scope
/*3036*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3039*/            OPC_EmitMergeInputChains1_0,
/*3040*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3043*/            OPC_EmitInteger, MVT::i32, 0, 
/*3046*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16rr32 RRegu16:i16:$d, ADDRrr32:i32:$a)
/*3057*/          /*Scope*/ 21, /*->3079*/
/*3058*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3061*/            OPC_EmitMergeInputChains1_0,
/*3062*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3065*/            OPC_EmitInteger, MVT::i32, 0, 
/*3068*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16ri32 RRegu16:i16:$d, ADDRri32:i32:$a)
/*3079*/          /*Scope*/ 21, /*->3101*/
/*3080*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3083*/            OPC_EmitMergeInputChains1_0,
/*3084*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3087*/            OPC_EmitInteger, MVT::i32, 0, 
/*3090*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16ii32 RRegu16:i16:$d, ADDRii32:i32:$a)
/*3101*/          0, /*End of Scope*/
/*3102*/        /*Scope*/ 72, /*->3175*/
/*3103*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*3105*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3107*/          OPC_Scope, 21, /*->3130*/ // 3 children in Scope
/*3109*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3112*/            OPC_EmitMergeInputChains1_0,
/*3113*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3116*/            OPC_EmitInteger, MVT::i32, 0, 
/*3119*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16rr32 RRegu16:i16:$d, ADDRrr32:i32:$a)
/*3130*/          /*Scope*/ 21, /*->3152*/
/*3131*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3134*/            OPC_EmitMergeInputChains1_0,
/*3135*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3138*/            OPC_EmitInteger, MVT::i32, 0, 
/*3141*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16ri32 RRegu16:i16:$d, ADDRri32:i32:$a)
/*3152*/          /*Scope*/ 21, /*->3174*/
/*3153*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3156*/            OPC_EmitMergeInputChains1_0,
/*3157*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3160*/            OPC_EmitInteger, MVT::i32, 0, 
/*3163*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16ii32 RRegu16:i16:$d, ADDRii32:i32:$a)
/*3174*/          0, /*End of Scope*/
/*3175*/        /*Scope*/ 72, /*->3248*/
/*3176*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*3178*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3180*/          OPC_Scope, 21, /*->3203*/ // 3 children in Scope
/*3182*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3185*/            OPC_EmitMergeInputChains1_0,
/*3186*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3189*/            OPC_EmitInteger, MVT::i32, 0, 
/*3192*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16rr32 RRegu16:i16:$d, ADDRrr32:i32:$a)
/*3203*/          /*Scope*/ 21, /*->3225*/
/*3204*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3207*/            OPC_EmitMergeInputChains1_0,
/*3208*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3211*/            OPC_EmitInteger, MVT::i32, 0, 
/*3214*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16ri32 RRegu16:i16:$d, ADDRri32:i32:$a)
/*3225*/          /*Scope*/ 21, /*->3247*/
/*3226*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3229*/            OPC_EmitMergeInputChains1_0,
/*3230*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3233*/            OPC_EmitInteger, MVT::i32, 0, 
/*3236*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16ii32 RRegu16:i16:$d, ADDRii32:i32:$a)
/*3247*/          0, /*End of Scope*/
/*3248*/        0, /*End of Scope*/
/*3249*/      /*Scope*/ 99|128,1/*227*/, /*->3478*/
/*3251*/        OPC_CheckChild2Type, MVT::i64,
/*3253*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*3255*/        OPC_CheckPredicate, 7, // Predicate_store
/*3257*/        OPC_Scope, 72, /*->3331*/ // 3 children in Scope
/*3259*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*3261*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*3263*/          OPC_Scope, 21, /*->3286*/ // 3 children in Scope
/*3265*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*3268*/            OPC_EmitMergeInputChains1_0,
/*3269*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3272*/            OPC_EmitInteger, MVT::i32, 0, 
/*3275*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16rr64 RRegu16:i16:$d, ADDRrr64:i64:$a)
/*3286*/          /*Scope*/ 21, /*->3308*/
/*3287*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*3290*/            OPC_EmitMergeInputChains1_0,
/*3291*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3294*/            OPC_EmitInteger, MVT::i32, 0, 
/*3297*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16ri64 RRegu16:i16:$d, ADDRri64:i64:$a)
/*3308*/          /*Scope*/ 21, /*->3330*/
/*3309*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*3312*/            OPC_EmitMergeInputChains1_0,
/*3313*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3316*/            OPC_EmitInteger, MVT::i32, 0, 
/*3319*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16ii64 RRegu16:i16:$d, ADDRii64:i64:$a)
/*3330*/          0, /*End of Scope*/
/*3331*/        /*Scope*/ 72, /*->3404*/
/*3332*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*3334*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*3336*/          OPC_Scope, 21, /*->3359*/ // 3 children in Scope
/*3338*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*3341*/            OPC_EmitMergeInputChains1_0,
/*3342*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3345*/            OPC_EmitInteger, MVT::i32, 0, 
/*3348*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16rr64 RRegu16:i16:$d, ADDRrr64:i64:$a)
/*3359*/          /*Scope*/ 21, /*->3381*/
/*3360*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*3363*/            OPC_EmitMergeInputChains1_0,
/*3364*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3367*/            OPC_EmitInteger, MVT::i32, 0, 
/*3370*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16ri64 RRegu16:i16:$d, ADDRri64:i64:$a)
/*3381*/          /*Scope*/ 21, /*->3403*/
/*3382*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*3385*/            OPC_EmitMergeInputChains1_0,
/*3386*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3389*/            OPC_EmitInteger, MVT::i32, 0, 
/*3392*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16ii64 RRegu16:i16:$d, ADDRii64:i64:$a)
/*3403*/          0, /*End of Scope*/
/*3404*/        /*Scope*/ 72, /*->3477*/
/*3405*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*3407*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*3409*/          OPC_Scope, 21, /*->3432*/ // 3 children in Scope
/*3411*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*3414*/            OPC_EmitMergeInputChains1_0,
/*3415*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3418*/            OPC_EmitInteger, MVT::i32, 0, 
/*3421*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16rr64 RRegu16:i16:$d, ADDRrr64:i64:$a)
/*3432*/          /*Scope*/ 21, /*->3454*/
/*3433*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*3436*/            OPC_EmitMergeInputChains1_0,
/*3437*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3440*/            OPC_EmitInteger, MVT::i32, 0, 
/*3443*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16ri64 RRegu16:i16:$d, ADDRri64:i64:$a)
/*3454*/          /*Scope*/ 21, /*->3476*/
/*3455*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*3458*/            OPC_EmitMergeInputChains1_0,
/*3459*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3462*/            OPC_EmitInteger, MVT::i32, 0, 
/*3465*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16ii64 RRegu16:i16:$d, ADDRii64:i64:$a)
/*3476*/          0, /*End of Scope*/
/*3477*/        0, /*End of Scope*/
/*3478*/      0, /*End of Scope*/
/*3479*/    /*Scope*/ 79|128,3/*463*/, /*->3944*/
/*3481*/      OPC_CheckChild1Type, MVT::i32,
/*3483*/      OPC_RecordChild2, // #2 = $a
/*3484*/      OPC_Scope, 99|128,1/*227*/, /*->3714*/ // 2 children in Scope
/*3487*/        OPC_CheckChild2Type, MVT::i32,
/*3489*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*3491*/        OPC_CheckPredicate, 7, // Predicate_store
/*3493*/        OPC_Scope, 72, /*->3567*/ // 3 children in Scope
/*3495*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*3497*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3499*/          OPC_Scope, 21, /*->3522*/ // 3 children in Scope
/*3501*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3504*/            OPC_EmitMergeInputChains1_0,
/*3505*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3508*/            OPC_EmitInteger, MVT::i32, 0, 
/*3511*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32rr32 RRegu32:i32:$d, ADDRrr32:i32:$a)
/*3522*/          /*Scope*/ 21, /*->3544*/
/*3523*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3526*/            OPC_EmitMergeInputChains1_0,
/*3527*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3530*/            OPC_EmitInteger, MVT::i32, 0, 
/*3533*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32ri32 RRegu32:i32:$d, ADDRri32:i32:$a)
/*3544*/          /*Scope*/ 21, /*->3566*/
/*3545*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3548*/            OPC_EmitMergeInputChains1_0,
/*3549*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3552*/            OPC_EmitInteger, MVT::i32, 0, 
/*3555*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32ii32 RRegu32:i32:$d, ADDRii32:i32:$a)
/*3566*/          0, /*End of Scope*/
/*3567*/        /*Scope*/ 72, /*->3640*/
/*3568*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*3570*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3572*/          OPC_Scope, 21, /*->3595*/ // 3 children in Scope
/*3574*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3577*/            OPC_EmitMergeInputChains1_0,
/*3578*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3581*/            OPC_EmitInteger, MVT::i32, 0, 
/*3584*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32rr32 RRegu32:i32:$d, ADDRrr32:i32:$a)
/*3595*/          /*Scope*/ 21, /*->3617*/
/*3596*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3599*/            OPC_EmitMergeInputChains1_0,
/*3600*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3603*/            OPC_EmitInteger, MVT::i32, 0, 
/*3606*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32ri32 RRegu32:i32:$d, ADDRri32:i32:$a)
/*3617*/          /*Scope*/ 21, /*->3639*/
/*3618*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3621*/            OPC_EmitMergeInputChains1_0,
/*3622*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3625*/            OPC_EmitInteger, MVT::i32, 0, 
/*3628*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32ii32 RRegu32:i32:$d, ADDRii32:i32:$a)
/*3639*/          0, /*End of Scope*/
/*3640*/        /*Scope*/ 72, /*->3713*/
/*3641*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*3643*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3645*/          OPC_Scope, 21, /*->3668*/ // 3 children in Scope
/*3647*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3650*/            OPC_EmitMergeInputChains1_0,
/*3651*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3654*/            OPC_EmitInteger, MVT::i32, 0, 
/*3657*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32rr32 RRegu32:i32:$d, ADDRrr32:i32:$a)
/*3668*/          /*Scope*/ 21, /*->3690*/
/*3669*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3672*/            OPC_EmitMergeInputChains1_0,
/*3673*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3676*/            OPC_EmitInteger, MVT::i32, 0, 
/*3679*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32ri32 RRegu32:i32:$d, ADDRri32:i32:$a)
/*3690*/          /*Scope*/ 21, /*->3712*/
/*3691*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3694*/            OPC_EmitMergeInputChains1_0,
/*3695*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3698*/            OPC_EmitInteger, MVT::i32, 0, 
/*3701*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32ii32 RRegu32:i32:$d, ADDRii32:i32:$a)
/*3712*/          0, /*End of Scope*/
/*3713*/        0, /*End of Scope*/
/*3714*/      /*Scope*/ 99|128,1/*227*/, /*->3943*/
/*3716*/        OPC_CheckChild2Type, MVT::i64,
/*3718*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*3720*/        OPC_CheckPredicate, 7, // Predicate_store
/*3722*/        OPC_Scope, 72, /*->3796*/ // 3 children in Scope
/*3724*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*3726*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*3728*/          OPC_Scope, 21, /*->3751*/ // 3 children in Scope
/*3730*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*3733*/            OPC_EmitMergeInputChains1_0,
/*3734*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3737*/            OPC_EmitInteger, MVT::i32, 0, 
/*3740*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32rr64 RRegu32:i32:$d, ADDRrr64:i64:$a)
/*3751*/          /*Scope*/ 21, /*->3773*/
/*3752*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*3755*/            OPC_EmitMergeInputChains1_0,
/*3756*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3759*/            OPC_EmitInteger, MVT::i32, 0, 
/*3762*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32ri64 RRegu32:i32:$d, ADDRri64:i64:$a)
/*3773*/          /*Scope*/ 21, /*->3795*/
/*3774*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*3777*/            OPC_EmitMergeInputChains1_0,
/*3778*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3781*/            OPC_EmitInteger, MVT::i32, 0, 
/*3784*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32ii64 RRegu32:i32:$d, ADDRii64:i64:$a)
/*3795*/          0, /*End of Scope*/
/*3796*/        /*Scope*/ 72, /*->3869*/
/*3797*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*3799*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*3801*/          OPC_Scope, 21, /*->3824*/ // 3 children in Scope
/*3803*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*3806*/            OPC_EmitMergeInputChains1_0,
/*3807*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3810*/            OPC_EmitInteger, MVT::i32, 0, 
/*3813*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32rr64 RRegu32:i32:$d, ADDRrr64:i64:$a)
/*3824*/          /*Scope*/ 21, /*->3846*/
/*3825*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*3828*/            OPC_EmitMergeInputChains1_0,
/*3829*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3832*/            OPC_EmitInteger, MVT::i32, 0, 
/*3835*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32ri64 RRegu32:i32:$d, ADDRri64:i64:$a)
/*3846*/          /*Scope*/ 21, /*->3868*/
/*3847*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*3850*/            OPC_EmitMergeInputChains1_0,
/*3851*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3854*/            OPC_EmitInteger, MVT::i32, 0, 
/*3857*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32ii64 RRegu32:i32:$d, ADDRii64:i64:$a)
/*3868*/          0, /*End of Scope*/
/*3869*/        /*Scope*/ 72, /*->3942*/
/*3870*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*3872*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*3874*/          OPC_Scope, 21, /*->3897*/ // 3 children in Scope
/*3876*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*3879*/            OPC_EmitMergeInputChains1_0,
/*3880*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3883*/            OPC_EmitInteger, MVT::i32, 0, 
/*3886*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32rr64 RRegu32:i32:$d, ADDRrr64:i64:$a)
/*3897*/          /*Scope*/ 21, /*->3919*/
/*3898*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*3901*/            OPC_EmitMergeInputChains1_0,
/*3902*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3905*/            OPC_EmitInteger, MVT::i32, 0, 
/*3908*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32ri64 RRegu32:i32:$d, ADDRri64:i64:$a)
/*3919*/          /*Scope*/ 21, /*->3941*/
/*3920*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*3923*/            OPC_EmitMergeInputChains1_0,
/*3924*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3927*/            OPC_EmitInteger, MVT::i32, 0, 
/*3930*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32ii64 RRegu32:i32:$d, ADDRii64:i64:$a)
/*3941*/          0, /*End of Scope*/
/*3942*/        0, /*End of Scope*/
/*3943*/      0, /*End of Scope*/
/*3944*/    /*Scope*/ 79|128,3/*463*/, /*->4409*/
/*3946*/      OPC_CheckChild1Type, MVT::i64,
/*3948*/      OPC_RecordChild2, // #2 = $a
/*3949*/      OPC_Scope, 99|128,1/*227*/, /*->4179*/ // 2 children in Scope
/*3952*/        OPC_CheckChild2Type, MVT::i32,
/*3954*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*3956*/        OPC_CheckPredicate, 7, // Predicate_store
/*3958*/        OPC_Scope, 72, /*->4032*/ // 3 children in Scope
/*3960*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*3962*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3964*/          OPC_Scope, 21, /*->3987*/ // 3 children in Scope
/*3966*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3969*/            OPC_EmitMergeInputChains1_0,
/*3970*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3973*/            OPC_EmitInteger, MVT::i32, 0, 
/*3976*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64rr32 RRegu64:i64:$d, ADDRrr32:i32:$a)
/*3987*/          /*Scope*/ 21, /*->4009*/
/*3988*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3991*/            OPC_EmitMergeInputChains1_0,
/*3992*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3995*/            OPC_EmitInteger, MVT::i32, 0, 
/*3998*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64ri32 RRegu64:i64:$d, ADDRri32:i32:$a)
/*4009*/          /*Scope*/ 21, /*->4031*/
/*4010*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4013*/            OPC_EmitMergeInputChains1_0,
/*4014*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4017*/            OPC_EmitInteger, MVT::i32, 0, 
/*4020*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64ii32 RRegu64:i64:$d, ADDRii32:i32:$a)
/*4031*/          0, /*End of Scope*/
/*4032*/        /*Scope*/ 72, /*->4105*/
/*4033*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4035*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4037*/          OPC_Scope, 21, /*->4060*/ // 3 children in Scope
/*4039*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4042*/            OPC_EmitMergeInputChains1_0,
/*4043*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4046*/            OPC_EmitInteger, MVT::i32, 0, 
/*4049*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64rr32 RRegu64:i64:$d, ADDRrr32:i32:$a)
/*4060*/          /*Scope*/ 21, /*->4082*/
/*4061*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4064*/            OPC_EmitMergeInputChains1_0,
/*4065*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4068*/            OPC_EmitInteger, MVT::i32, 0, 
/*4071*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64ri32 RRegu64:i64:$d, ADDRri32:i32:$a)
/*4082*/          /*Scope*/ 21, /*->4104*/
/*4083*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4086*/            OPC_EmitMergeInputChains1_0,
/*4087*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4090*/            OPC_EmitInteger, MVT::i32, 0, 
/*4093*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64ii32 RRegu64:i64:$d, ADDRii32:i32:$a)
/*4104*/          0, /*End of Scope*/
/*4105*/        /*Scope*/ 72, /*->4178*/
/*4106*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*4108*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4110*/          OPC_Scope, 21, /*->4133*/ // 3 children in Scope
/*4112*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4115*/            OPC_EmitMergeInputChains1_0,
/*4116*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4119*/            OPC_EmitInteger, MVT::i32, 0, 
/*4122*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64rr32 RRegu64:i64:$d, ADDRrr32:i32:$a)
/*4133*/          /*Scope*/ 21, /*->4155*/
/*4134*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4137*/            OPC_EmitMergeInputChains1_0,
/*4138*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4141*/            OPC_EmitInteger, MVT::i32, 0, 
/*4144*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64ri32 RRegu64:i64:$d, ADDRri32:i32:$a)
/*4155*/          /*Scope*/ 21, /*->4177*/
/*4156*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4159*/            OPC_EmitMergeInputChains1_0,
/*4160*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4163*/            OPC_EmitInteger, MVT::i32, 0, 
/*4166*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64ii32 RRegu64:i64:$d, ADDRii32:i32:$a)
/*4177*/          0, /*End of Scope*/
/*4178*/        0, /*End of Scope*/
/*4179*/      /*Scope*/ 99|128,1/*227*/, /*->4408*/
/*4181*/        OPC_CheckChild2Type, MVT::i64,
/*4183*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*4185*/        OPC_CheckPredicate, 7, // Predicate_store
/*4187*/        OPC_Scope, 72, /*->4261*/ // 3 children in Scope
/*4189*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*4191*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4193*/          OPC_Scope, 21, /*->4216*/ // 3 children in Scope
/*4195*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4198*/            OPC_EmitMergeInputChains1_0,
/*4199*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4202*/            OPC_EmitInteger, MVT::i32, 0, 
/*4205*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64rr64 RRegu64:i64:$d, ADDRrr64:i64:$a)
/*4216*/          /*Scope*/ 21, /*->4238*/
/*4217*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4220*/            OPC_EmitMergeInputChains1_0,
/*4221*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4224*/            OPC_EmitInteger, MVT::i32, 0, 
/*4227*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64ri64 RRegu64:i64:$d, ADDRri64:i64:$a)
/*4238*/          /*Scope*/ 21, /*->4260*/
/*4239*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4242*/            OPC_EmitMergeInputChains1_0,
/*4243*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4246*/            OPC_EmitInteger, MVT::i32, 0, 
/*4249*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64ii64 RRegu64:i64:$d, ADDRii64:i64:$a)
/*4260*/          0, /*End of Scope*/
/*4261*/        /*Scope*/ 72, /*->4334*/
/*4262*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4264*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4266*/          OPC_Scope, 21, /*->4289*/ // 3 children in Scope
/*4268*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4271*/            OPC_EmitMergeInputChains1_0,
/*4272*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4275*/            OPC_EmitInteger, MVT::i32, 0, 
/*4278*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64rr64 RRegu64:i64:$d, ADDRrr64:i64:$a)
/*4289*/          /*Scope*/ 21, /*->4311*/
/*4290*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4293*/            OPC_EmitMergeInputChains1_0,
/*4294*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4297*/            OPC_EmitInteger, MVT::i32, 0, 
/*4300*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64ri64 RRegu64:i64:$d, ADDRri64:i64:$a)
/*4311*/          /*Scope*/ 21, /*->4333*/
/*4312*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4315*/            OPC_EmitMergeInputChains1_0,
/*4316*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4319*/            OPC_EmitInteger, MVT::i32, 0, 
/*4322*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64ii64 RRegu64:i64:$d, ADDRii64:i64:$a)
/*4333*/          0, /*End of Scope*/
/*4334*/        /*Scope*/ 72, /*->4407*/
/*4335*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*4337*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4339*/          OPC_Scope, 21, /*->4362*/ // 3 children in Scope
/*4341*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4344*/            OPC_EmitMergeInputChains1_0,
/*4345*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4348*/            OPC_EmitInteger, MVT::i32, 0, 
/*4351*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64rr64 RRegu64:i64:$d, ADDRrr64:i64:$a)
/*4362*/          /*Scope*/ 21, /*->4384*/
/*4363*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4366*/            OPC_EmitMergeInputChains1_0,
/*4367*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4370*/            OPC_EmitInteger, MVT::i32, 0, 
/*4373*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64ri64 RRegu64:i64:$d, ADDRri64:i64:$a)
/*4384*/          /*Scope*/ 21, /*->4406*/
/*4385*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4388*/            OPC_EmitMergeInputChains1_0,
/*4389*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4392*/            OPC_EmitInteger, MVT::i32, 0, 
/*4395*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64ii64 RRegu64:i64:$d, ADDRii64:i64:$a)
/*4406*/          0, /*End of Scope*/
/*4407*/        0, /*End of Scope*/
/*4408*/      0, /*End of Scope*/
/*4409*/    /*Scope*/ 79|128,3/*463*/, /*->4874*/
/*4411*/      OPC_CheckChild1Type, MVT::f32,
/*4413*/      OPC_RecordChild2, // #2 = $a
/*4414*/      OPC_Scope, 99|128,1/*227*/, /*->4644*/ // 2 children in Scope
/*4417*/        OPC_CheckChild2Type, MVT::i32,
/*4419*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*4421*/        OPC_CheckPredicate, 7, // Predicate_store
/*4423*/        OPC_Scope, 72, /*->4497*/ // 3 children in Scope
/*4425*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*4427*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4429*/          OPC_Scope, 21, /*->4452*/ // 3 children in Scope
/*4431*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4434*/            OPC_EmitMergeInputChains1_0,
/*4435*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4438*/            OPC_EmitInteger, MVT::i32, 0, 
/*4441*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32rr32 RRegf32:f32:$d, ADDRrr32:i32:$a)
/*4452*/          /*Scope*/ 21, /*->4474*/
/*4453*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4456*/            OPC_EmitMergeInputChains1_0,
/*4457*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4460*/            OPC_EmitInteger, MVT::i32, 0, 
/*4463*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32ri32 RRegf32:f32:$d, ADDRri32:i32:$a)
/*4474*/          /*Scope*/ 21, /*->4496*/
/*4475*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4478*/            OPC_EmitMergeInputChains1_0,
/*4479*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4482*/            OPC_EmitInteger, MVT::i32, 0, 
/*4485*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32ii32 RRegf32:f32:$d, ADDRii32:i32:$a)
/*4496*/          0, /*End of Scope*/
/*4497*/        /*Scope*/ 72, /*->4570*/
/*4498*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4500*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4502*/          OPC_Scope, 21, /*->4525*/ // 3 children in Scope
/*4504*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4507*/            OPC_EmitMergeInputChains1_0,
/*4508*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4511*/            OPC_EmitInteger, MVT::i32, 0, 
/*4514*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32rr32 RRegf32:f32:$d, ADDRrr32:i32:$a)
/*4525*/          /*Scope*/ 21, /*->4547*/
/*4526*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4529*/            OPC_EmitMergeInputChains1_0,
/*4530*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4533*/            OPC_EmitInteger, MVT::i32, 0, 
/*4536*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32ri32 RRegf32:f32:$d, ADDRri32:i32:$a)
/*4547*/          /*Scope*/ 21, /*->4569*/
/*4548*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4551*/            OPC_EmitMergeInputChains1_0,
/*4552*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4555*/            OPC_EmitInteger, MVT::i32, 0, 
/*4558*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32ii32 RRegf32:f32:$d, ADDRii32:i32:$a)
/*4569*/          0, /*End of Scope*/
/*4570*/        /*Scope*/ 72, /*->4643*/
/*4571*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*4573*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4575*/          OPC_Scope, 21, /*->4598*/ // 3 children in Scope
/*4577*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4580*/            OPC_EmitMergeInputChains1_0,
/*4581*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4584*/            OPC_EmitInteger, MVT::i32, 0, 
/*4587*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32rr32 RRegf32:f32:$d, ADDRrr32:i32:$a)
/*4598*/          /*Scope*/ 21, /*->4620*/
/*4599*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4602*/            OPC_EmitMergeInputChains1_0,
/*4603*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4606*/            OPC_EmitInteger, MVT::i32, 0, 
/*4609*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32ri32 RRegf32:f32:$d, ADDRri32:i32:$a)
/*4620*/          /*Scope*/ 21, /*->4642*/
/*4621*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4624*/            OPC_EmitMergeInputChains1_0,
/*4625*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4628*/            OPC_EmitInteger, MVT::i32, 0, 
/*4631*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32ii32 RRegf32:f32:$d, ADDRii32:i32:$a)
/*4642*/          0, /*End of Scope*/
/*4643*/        0, /*End of Scope*/
/*4644*/      /*Scope*/ 99|128,1/*227*/, /*->4873*/
/*4646*/        OPC_CheckChild2Type, MVT::i64,
/*4648*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*4650*/        OPC_CheckPredicate, 7, // Predicate_store
/*4652*/        OPC_Scope, 72, /*->4726*/ // 3 children in Scope
/*4654*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*4656*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4658*/          OPC_Scope, 21, /*->4681*/ // 3 children in Scope
/*4660*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4663*/            OPC_EmitMergeInputChains1_0,
/*4664*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4667*/            OPC_EmitInteger, MVT::i32, 0, 
/*4670*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32rr64 RRegf32:f32:$d, ADDRrr64:i64:$a)
/*4681*/          /*Scope*/ 21, /*->4703*/
/*4682*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4685*/            OPC_EmitMergeInputChains1_0,
/*4686*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4689*/            OPC_EmitInteger, MVT::i32, 0, 
/*4692*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32ri64 RRegf32:f32:$d, ADDRri64:i64:$a)
/*4703*/          /*Scope*/ 21, /*->4725*/
/*4704*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4707*/            OPC_EmitMergeInputChains1_0,
/*4708*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4711*/            OPC_EmitInteger, MVT::i32, 0, 
/*4714*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32ii64 RRegf32:f32:$d, ADDRii64:i64:$a)
/*4725*/          0, /*End of Scope*/
/*4726*/        /*Scope*/ 72, /*->4799*/
/*4727*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4729*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4731*/          OPC_Scope, 21, /*->4754*/ // 3 children in Scope
/*4733*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4736*/            OPC_EmitMergeInputChains1_0,
/*4737*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4740*/            OPC_EmitInteger, MVT::i32, 0, 
/*4743*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32rr64 RRegf32:f32:$d, ADDRrr64:i64:$a)
/*4754*/          /*Scope*/ 21, /*->4776*/
/*4755*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4758*/            OPC_EmitMergeInputChains1_0,
/*4759*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4762*/            OPC_EmitInteger, MVT::i32, 0, 
/*4765*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32ri64 RRegf32:f32:$d, ADDRri64:i64:$a)
/*4776*/          /*Scope*/ 21, /*->4798*/
/*4777*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4780*/            OPC_EmitMergeInputChains1_0,
/*4781*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4784*/            OPC_EmitInteger, MVT::i32, 0, 
/*4787*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32ii64 RRegf32:f32:$d, ADDRii64:i64:$a)
/*4798*/          0, /*End of Scope*/
/*4799*/        /*Scope*/ 72, /*->4872*/
/*4800*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*4802*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4804*/          OPC_Scope, 21, /*->4827*/ // 3 children in Scope
/*4806*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4809*/            OPC_EmitMergeInputChains1_0,
/*4810*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4813*/            OPC_EmitInteger, MVT::i32, 0, 
/*4816*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32rr64 RRegf32:f32:$d, ADDRrr64:i64:$a)
/*4827*/          /*Scope*/ 21, /*->4849*/
/*4828*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4831*/            OPC_EmitMergeInputChains1_0,
/*4832*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4835*/            OPC_EmitInteger, MVT::i32, 0, 
/*4838*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32ri64 RRegf32:f32:$d, ADDRri64:i64:$a)
/*4849*/          /*Scope*/ 21, /*->4871*/
/*4850*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4853*/            OPC_EmitMergeInputChains1_0,
/*4854*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4857*/            OPC_EmitInteger, MVT::i32, 0, 
/*4860*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32ii64 RRegf32:f32:$d, ADDRii64:i64:$a)
/*4871*/          0, /*End of Scope*/
/*4872*/        0, /*End of Scope*/
/*4873*/      0, /*End of Scope*/
/*4874*/    /*Scope*/ 79|128,3/*463*/, /*->5339*/
/*4876*/      OPC_CheckChild1Type, MVT::f64,
/*4878*/      OPC_RecordChild2, // #2 = $a
/*4879*/      OPC_Scope, 99|128,1/*227*/, /*->5109*/ // 2 children in Scope
/*4882*/        OPC_CheckChild2Type, MVT::i32,
/*4884*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*4886*/        OPC_CheckPredicate, 7, // Predicate_store
/*4888*/        OPC_Scope, 72, /*->4962*/ // 3 children in Scope
/*4890*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*4892*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4894*/          OPC_Scope, 21, /*->4917*/ // 3 children in Scope
/*4896*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4899*/            OPC_EmitMergeInputChains1_0,
/*4900*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4903*/            OPC_EmitInteger, MVT::i32, 0, 
/*4906*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64rr32 RRegf64:f64:$d, ADDRrr32:i32:$a)
/*4917*/          /*Scope*/ 21, /*->4939*/
/*4918*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4921*/            OPC_EmitMergeInputChains1_0,
/*4922*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4925*/            OPC_EmitInteger, MVT::i32, 0, 
/*4928*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64ri32 RRegf64:f64:$d, ADDRri32:i32:$a)
/*4939*/          /*Scope*/ 21, /*->4961*/
/*4940*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4943*/            OPC_EmitMergeInputChains1_0,
/*4944*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4947*/            OPC_EmitInteger, MVT::i32, 0, 
/*4950*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64ii32 RRegf64:f64:$d, ADDRii32:i32:$a)
/*4961*/          0, /*End of Scope*/
/*4962*/        /*Scope*/ 72, /*->5035*/
/*4963*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4965*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4967*/          OPC_Scope, 21, /*->4990*/ // 3 children in Scope
/*4969*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4972*/            OPC_EmitMergeInputChains1_0,
/*4973*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4976*/            OPC_EmitInteger, MVT::i32, 0, 
/*4979*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64rr32 RRegf64:f64:$d, ADDRrr32:i32:$a)
/*4990*/          /*Scope*/ 21, /*->5012*/
/*4991*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4994*/            OPC_EmitMergeInputChains1_0,
/*4995*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4998*/            OPC_EmitInteger, MVT::i32, 0, 
/*5001*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64ri32 RRegf64:f64:$d, ADDRri32:i32:$a)
/*5012*/          /*Scope*/ 21, /*->5034*/
/*5013*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*5016*/            OPC_EmitMergeInputChains1_0,
/*5017*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5020*/            OPC_EmitInteger, MVT::i32, 0, 
/*5023*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64ii32 RRegf64:f64:$d, ADDRii32:i32:$a)
/*5034*/          0, /*End of Scope*/
/*5035*/        /*Scope*/ 72, /*->5108*/
/*5036*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*5038*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*5040*/          OPC_Scope, 21, /*->5063*/ // 3 children in Scope
/*5042*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*5045*/            OPC_EmitMergeInputChains1_0,
/*5046*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5049*/            OPC_EmitInteger, MVT::i32, 0, 
/*5052*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64rr32 RRegf64:f64:$d, ADDRrr32:i32:$a)
/*5063*/          /*Scope*/ 21, /*->5085*/
/*5064*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*5067*/            OPC_EmitMergeInputChains1_0,
/*5068*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5071*/            OPC_EmitInteger, MVT::i32, 0, 
/*5074*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64ri32 RRegf64:f64:$d, ADDRri32:i32:$a)
/*5085*/          /*Scope*/ 21, /*->5107*/
/*5086*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*5089*/            OPC_EmitMergeInputChains1_0,
/*5090*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5093*/            OPC_EmitInteger, MVT::i32, 0, 
/*5096*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64ii32 RRegf64:f64:$d, ADDRii32:i32:$a)
/*5107*/          0, /*End of Scope*/
/*5108*/        0, /*End of Scope*/
/*5109*/      /*Scope*/ 99|128,1/*227*/, /*->5338*/
/*5111*/        OPC_CheckChild2Type, MVT::i64,
/*5113*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*5115*/        OPC_CheckPredicate, 7, // Predicate_store
/*5117*/        OPC_Scope, 72, /*->5191*/ // 3 children in Scope
/*5119*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*5121*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5123*/          OPC_Scope, 21, /*->5146*/ // 3 children in Scope
/*5125*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5128*/            OPC_EmitMergeInputChains1_0,
/*5129*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5132*/            OPC_EmitInteger, MVT::i32, 0, 
/*5135*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64rr64 RRegf64:f64:$d, ADDRrr64:i64:$a)
/*5146*/          /*Scope*/ 21, /*->5168*/
/*5147*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5150*/            OPC_EmitMergeInputChains1_0,
/*5151*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5154*/            OPC_EmitInteger, MVT::i32, 0, 
/*5157*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64ri64 RRegf64:f64:$d, ADDRri64:i64:$a)
/*5168*/          /*Scope*/ 21, /*->5190*/
/*5169*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5172*/            OPC_EmitMergeInputChains1_0,
/*5173*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5176*/            OPC_EmitInteger, MVT::i32, 0, 
/*5179*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64ii64 RRegf64:f64:$d, ADDRii64:i64:$a)
/*5190*/          0, /*End of Scope*/
/*5191*/        /*Scope*/ 72, /*->5264*/
/*5192*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*5194*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5196*/          OPC_Scope, 21, /*->5219*/ // 3 children in Scope
/*5198*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5201*/            OPC_EmitMergeInputChains1_0,
/*5202*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5205*/            OPC_EmitInteger, MVT::i32, 0, 
/*5208*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64rr64 RRegf64:f64:$d, ADDRrr64:i64:$a)
/*5219*/          /*Scope*/ 21, /*->5241*/
/*5220*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5223*/            OPC_EmitMergeInputChains1_0,
/*5224*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5227*/            OPC_EmitInteger, MVT::i32, 0, 
/*5230*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64ri64 RRegf64:f64:$d, ADDRri64:i64:$a)
/*5241*/          /*Scope*/ 21, /*->5263*/
/*5242*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5245*/            OPC_EmitMergeInputChains1_0,
/*5246*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5249*/            OPC_EmitInteger, MVT::i32, 0, 
/*5252*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64ii64 RRegf64:f64:$d, ADDRii64:i64:$a)
/*5263*/          0, /*End of Scope*/
/*5264*/        /*Scope*/ 72, /*->5337*/
/*5265*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*5267*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5269*/          OPC_Scope, 21, /*->5292*/ // 3 children in Scope
/*5271*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5274*/            OPC_EmitMergeInputChains1_0,
/*5275*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5278*/            OPC_EmitInteger, MVT::i32, 0, 
/*5281*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64rr64 RRegf64:f64:$d, ADDRrr64:i64:$a)
/*5292*/          /*Scope*/ 21, /*->5314*/
/*5293*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5296*/            OPC_EmitMergeInputChains1_0,
/*5297*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5300*/            OPC_EmitInteger, MVT::i32, 0, 
/*5303*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64ri64 RRegf64:f64:$d, ADDRri64:i64:$a)
/*5314*/          /*Scope*/ 21, /*->5336*/
/*5315*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5318*/            OPC_EmitMergeInputChains1_0,
/*5319*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5322*/            OPC_EmitInteger, MVT::i32, 0, 
/*5325*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64ii64 RRegf64:f64:$d, ADDRii64:i64:$a)
/*5336*/          0, /*End of Scope*/
/*5337*/        0, /*End of Scope*/
/*5338*/      0, /*End of Scope*/
/*5339*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->5375
/*5343*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*5344*/    OPC_MoveChild, 1,
/*5346*/    OPC_CheckInteger, 81|128,2/*337*/, 
/*5349*/    OPC_MoveParent,
/*5350*/    OPC_RecordChild2, // #1 = $i
/*5351*/    OPC_MoveChild, 2,
/*5353*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5356*/    OPC_MoveParent,
/*5357*/    OPC_EmitMergeInputChains1_0,
/*5358*/    OPC_EmitConvertToTarget, 1,
/*5360*/    OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5363*/    OPC_EmitInteger, MVT::i32, 0, 
/*5366*/    OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_BAR_SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
            // Src: (intrinsic_void 337:iPTR, (imm:i32):$i) - Complexity = 11
            // Dst: (PTX_BAR_SYNC (imm:i32):$i)
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->5482
/*5378*/    OPC_MoveChild, 0,
/*5380*/    OPC_Scope, 19, /*->5401*/ // 5 children in Scope
/*5382*/      OPC_CheckInteger, 82|128,2/*338*/, 
/*5385*/      OPC_MoveParent,
/*5386*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5389*/      OPC_EmitInteger, MVT::i32, 0, 
/*5392*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_R64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 338:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_R64:i64)
/*5401*/    /*Scope*/ 19, /*->5421*/
/*5402*/      OPC_CheckInteger, 85|128,2/*341*/, 
/*5405*/      OPC_MoveParent,
/*5406*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5409*/      OPC_EmitInteger, MVT::i32, 0, 
/*5412*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_X), 0,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i16 341:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_X:i16)
/*5421*/    /*Scope*/ 19, /*->5441*/
/*5422*/      OPC_CheckInteger, 86|128,2/*342*/, 
/*5425*/      OPC_MoveParent,
/*5426*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5429*/      OPC_EmitInteger, MVT::i32, 0, 
/*5432*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_Y), 0,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i16 342:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_Y:i16)
/*5441*/    /*Scope*/ 19, /*->5461*/
/*5442*/      OPC_CheckInteger, 87|128,2/*343*/, 
/*5445*/      OPC_MoveParent,
/*5446*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5449*/      OPC_EmitInteger, MVT::i32, 0, 
/*5452*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_Z), 0,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i16 343:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_Z:i16)
/*5461*/    /*Scope*/ 19, /*->5481*/
/*5462*/      OPC_CheckInteger, 84|128,2/*340*/, 
/*5465*/      OPC_MoveParent,
/*5466*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5469*/      OPC_EmitInteger, MVT::i32, 0, 
/*5472*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_W), 0,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i16 340:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_W:i16)
/*5481*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 8|128,1/*136*/,  TARGET_VAL(ISD::ADD),// ->5622
/*5486*/    OPC_RecordChild0, // #0 = $a
/*5487*/    OPC_RecordChild1, // #1 = $b
/*5488*/    OPC_Scope, 71, /*->5561*/ // 4 children in Scope
/*5490*/      OPC_MoveChild, 1,
/*5492*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5495*/      OPC_MoveParent,
/*5496*/      OPC_SwitchType /*3 cases */, 19,  MVT::i16,// ->5518
/*5499*/        OPC_EmitConvertToTarget, 1,
/*5501*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5504*/        OPC_EmitInteger, MVT::i32, 0, 
/*5507*/        OPC_MorphNodeTo, TARGET_VAL(PTX::ADDri16), 0,
                    1/*#VTs*/, MVT::i16, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (add:i16 RRegu16:i16:$a, (imm:i16):$b) - Complexity = 6
                // Dst: (ADDri16:i16 RRegu16:i16:$a, (imm:i16):$b)
              /*SwitchType*/ 19,  MVT::i32,// ->5539
/*5520*/        OPC_EmitConvertToTarget, 1,
/*5522*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5525*/        OPC_EmitInteger, MVT::i32, 0, 
/*5528*/        OPC_MorphNodeTo, TARGET_VAL(PTX::ADDri32), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (add:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
                // Dst: (ADDri32:i32 RRegu32:i32:$a, (imm:i32):$b)
              /*SwitchType*/ 19,  MVT::i64,// ->5560
/*5541*/        OPC_EmitConvertToTarget, 1,
/*5543*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5546*/        OPC_EmitInteger, MVT::i32, 0, 
/*5549*/        OPC_MorphNodeTo, TARGET_VAL(PTX::ADDri64), 0,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (add:i64 RRegu64:i64:$a, (imm:i64):$b) - Complexity = 6
                // Dst: (ADDri64:i64 RRegu64:i64:$a, (imm:i64):$b)
              0, // EndSwitchType
/*5561*/    /*Scope*/ 19, /*->5581*/
/*5562*/      OPC_CheckType, MVT::i16,
/*5564*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5567*/      OPC_EmitInteger, MVT::i32, 0, 
/*5570*/      OPC_MorphNodeTo, TARGET_VAL(PTX::ADDrr16), 0,
                  1/*#VTs*/, MVT::i16, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (add:i16 RRegu16:i16:$a, RRegu16:i16:$b) - Complexity = 3
              // Dst: (ADDrr16:i16 RRegu16:i16:$a, RRegu16:i16:$b)
/*5581*/    /*Scope*/ 19, /*->5601*/
/*5582*/      OPC_CheckType, MVT::i32,
/*5584*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5587*/      OPC_EmitInteger, MVT::i32, 0, 
/*5590*/      OPC_MorphNodeTo, TARGET_VAL(PTX::ADDrr32), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (add:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (ADDrr32:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*5601*/    /*Scope*/ 19, /*->5621*/
/*5602*/      OPC_CheckType, MVT::i64,
/*5604*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5607*/      OPC_EmitInteger, MVT::i32, 0, 
/*5610*/      OPC_MorphNodeTo, TARGET_VAL(PTX::ADDrr64), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (add:i64 RRegu64:i64:$a, RRegu64:i64:$b) - Complexity = 3
              // Dst: (ADDrr64:i64 RRegu64:i64:$a, RRegu64:i64:$b)
/*5621*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 8|128,1/*136*/,  TARGET_VAL(ISD::SUB),// ->5762
/*5626*/    OPC_RecordChild0, // #0 = $a
/*5627*/    OPC_RecordChild1, // #1 = $b
/*5628*/    OPC_Scope, 71, /*->5701*/ // 4 children in Scope
/*5630*/      OPC_MoveChild, 1,
/*5632*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5635*/      OPC_MoveParent,
/*5636*/      OPC_SwitchType /*3 cases */, 19,  MVT::i16,// ->5658
/*5639*/        OPC_EmitConvertToTarget, 1,
/*5641*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5644*/        OPC_EmitInteger, MVT::i32, 0, 
/*5647*/        OPC_MorphNodeTo, TARGET_VAL(PTX::SUBri16), 0,
                    1/*#VTs*/, MVT::i16, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (sub:i16 RRegu16:i16:$a, (imm:i16):$b) - Complexity = 6
                // Dst: (SUBri16:i16 RRegu16:i16:$a, (imm:i16):$b)
              /*SwitchType*/ 19,  MVT::i32,// ->5679
/*5660*/        OPC_EmitConvertToTarget, 1,
/*5662*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5665*/        OPC_EmitInteger, MVT::i32, 0, 
/*5668*/        OPC_MorphNodeTo, TARGET_VAL(PTX::SUBri32), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (sub:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
                // Dst: (SUBri32:i32 RRegu32:i32:$a, (imm:i32):$b)
              /*SwitchType*/ 19,  MVT::i64,// ->5700
/*5681*/        OPC_EmitConvertToTarget, 1,
/*5683*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5686*/        OPC_EmitInteger, MVT::i32, 0, 
/*5689*/        OPC_MorphNodeTo, TARGET_VAL(PTX::SUBri64), 0,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (sub:i64 RRegu64:i64:$a, (imm:i64):$b) - Complexity = 6
                // Dst: (SUBri64:i64 RRegu64:i64:$a, (imm:i64):$b)
              0, // EndSwitchType
/*5701*/    /*Scope*/ 19, /*->5721*/
/*5702*/      OPC_CheckType, MVT::i16,
/*5704*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5707*/      OPC_EmitInteger, MVT::i32, 0, 
/*5710*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SUBrr16), 0,
                  1/*#VTs*/, MVT::i16, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (sub:i16 RRegu16:i16:$a, RRegu16:i16:$b) - Complexity = 3
              // Dst: (SUBrr16:i16 RRegu16:i16:$a, RRegu16:i16:$b)
/*5721*/    /*Scope*/ 19, /*->5741*/
/*5722*/      OPC_CheckType, MVT::i32,
/*5724*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5727*/      OPC_EmitInteger, MVT::i32, 0, 
/*5730*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SUBrr32), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (sub:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (SUBrr32:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*5741*/    /*Scope*/ 19, /*->5761*/
/*5742*/      OPC_CheckType, MVT::i64,
/*5744*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5747*/      OPC_EmitInteger, MVT::i32, 0, 
/*5750*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SUBrr64), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (sub:i64 RRegu64:i64:$a, RRegu64:i64:$b) - Complexity = 3
              // Dst: (SUBrr64:i64 RRegu64:i64:$a, RRegu64:i64:$b)
/*5761*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::SHL),// ->5847
/*5765*/    OPC_RecordChild0, // #0 = $a
/*5766*/    OPC_Scope, 28, /*->5796*/ // 3 children in Scope
/*5768*/      OPC_RecordChild1, // #1 = $b
/*5769*/      OPC_MoveChild, 1,
/*5771*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5774*/      OPC_MoveParent,
/*5775*/      OPC_CheckType, MVT::i32,
/*5777*/      OPC_EmitConvertToTarget, 1,
/*5779*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5782*/      OPC_EmitInteger, MVT::i32, 0, 
/*5785*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SHLri), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
              // Src: (PTXshl:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
              // Dst: (SHLri:i32 RRegu32:i32:$a, (imm:i32):$b)
/*5796*/    /*Scope*/ 28, /*->5825*/
/*5797*/      OPC_MoveChild, 0,
/*5799*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5802*/      OPC_MoveParent,
/*5803*/      OPC_RecordChild1, // #1 = $b
/*5804*/      OPC_CheckType, MVT::i32,
/*5806*/      OPC_EmitConvertToTarget, 0,
/*5808*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5811*/      OPC_EmitInteger, MVT::i32, 0, 
/*5814*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SHLir), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 1, 3, 4, 
              // Src: (PTXshl:i32 (imm:i32):$a, RRegu32:i32:$b) - Complexity = 6
              // Dst: (SHLir:i32 (imm:i32):$a, RRegu32:i32:$b)
/*5825*/    /*Scope*/ 20, /*->5846*/
/*5826*/      OPC_RecordChild1, // #1 = $b
/*5827*/      OPC_CheckType, MVT::i32,
/*5829*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5832*/      OPC_EmitInteger, MVT::i32, 0, 
/*5835*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SHLrr), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (PTXshl:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (SHLrr:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*5846*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::SRL),// ->5932
/*5850*/    OPC_RecordChild0, // #0 = $a
/*5851*/    OPC_Scope, 28, /*->5881*/ // 3 children in Scope
/*5853*/      OPC_RecordChild1, // #1 = $b
/*5854*/      OPC_MoveChild, 1,
/*5856*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5859*/      OPC_MoveParent,
/*5860*/      OPC_CheckType, MVT::i32,
/*5862*/      OPC_EmitConvertToTarget, 1,
/*5864*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5867*/      OPC_EmitInteger, MVT::i32, 0, 
/*5870*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRLri), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
              // Src: (PTXsrl:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
              // Dst: (SRLri:i32 RRegu32:i32:$a, (imm:i32):$b)
/*5881*/    /*Scope*/ 28, /*->5910*/
/*5882*/      OPC_MoveChild, 0,
/*5884*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5887*/      OPC_MoveParent,
/*5888*/      OPC_RecordChild1, // #1 = $b
/*5889*/      OPC_CheckType, MVT::i32,
/*5891*/      OPC_EmitConvertToTarget, 0,
/*5893*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5896*/      OPC_EmitInteger, MVT::i32, 0, 
/*5899*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRLir), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 1, 3, 4, 
              // Src: (PTXsrl:i32 (imm:i32):$a, RRegu32:i32:$b) - Complexity = 6
              // Dst: (SRLir:i32 (imm:i32):$a, RRegu32:i32:$b)
/*5910*/    /*Scope*/ 20, /*->5931*/
/*5911*/      OPC_RecordChild1, // #1 = $b
/*5912*/      OPC_CheckType, MVT::i32,
/*5914*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5917*/      OPC_EmitInteger, MVT::i32, 0, 
/*5920*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRLrr), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (PTXsrl:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (SRLrr:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*5931*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::SRA),// ->6017
/*5935*/    OPC_RecordChild0, // #0 = $a
/*5936*/    OPC_Scope, 28, /*->5966*/ // 3 children in Scope
/*5938*/      OPC_RecordChild1, // #1 = $b
/*5939*/      OPC_MoveChild, 1,
/*5941*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5944*/      OPC_MoveParent,
/*5945*/      OPC_CheckType, MVT::i32,
/*5947*/      OPC_EmitConvertToTarget, 1,
/*5949*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5952*/      OPC_EmitInteger, MVT::i32, 0, 
/*5955*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRAri), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
              // Src: (PTXsra:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
              // Dst: (SRAri:i32 RRegu32:i32:$a, (imm:i32):$b)
/*5966*/    /*Scope*/ 28, /*->5995*/
/*5967*/      OPC_MoveChild, 0,
/*5969*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5972*/      OPC_MoveParent,
/*5973*/      OPC_RecordChild1, // #1 = $b
/*5974*/      OPC_CheckType, MVT::i32,
/*5976*/      OPC_EmitConvertToTarget, 0,
/*5978*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5981*/      OPC_EmitInteger, MVT::i32, 0, 
/*5984*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRAir), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 1, 3, 4, 
              // Src: (PTXsra:i32 (imm:i32):$a, RRegu32:i32:$b) - Complexity = 6
              // Dst: (SRAir:i32 (imm:i32):$a, RRegu32:i32:$b)
/*5995*/    /*Scope*/ 20, /*->6016*/
/*5996*/      OPC_RecordChild1, // #1 = $b
/*5997*/      OPC_CheckType, MVT::i32,
/*5999*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6002*/      OPC_EmitInteger, MVT::i32, 0, 
/*6005*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRArr), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (PTXsra:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (SRArr:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*6016*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::Constant),// ->6103
/*6020*/    OPC_RecordNode,   // #0 = $a
/*6021*/    OPC_SwitchType /*4 cases */, 18,  MVT::i1,// ->6042
/*6024*/      OPC_EmitConvertToTarget, 0,
/*6026*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6029*/      OPC_EmitInteger, MVT::i32, 0, 
/*6032*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVPREDri), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 1, 2, 3, 
              // Src: (imm:i1):$a - Complexity = 3
              // Dst: (MOVPREDri:i1 (imm:i1):$a)
            /*SwitchType*/ 18,  MVT::i16,// ->6062
/*6044*/      OPC_EmitConvertToTarget, 0,
/*6046*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6049*/      OPC_EmitInteger, MVT::i32, 0, 
/*6052*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVU16ri), 0,
                  1/*#VTs*/, MVT::i16, 3/*#Ops*/, 1, 2, 3, 
              // Src: (imm:i16):$a - Complexity = 3
              // Dst: (MOVU16ri:i16 (imm:i16):$a)
            /*SwitchType*/ 18,  MVT::i32,// ->6082
/*6064*/      OPC_EmitConvertToTarget, 0,
/*6066*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6069*/      OPC_EmitInteger, MVT::i32, 0, 
/*6072*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVU32ri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (imm:i32):$a - Complexity = 3
              // Dst: (MOVU32ri:i32 (imm:i32):$a)
            /*SwitchType*/ 18,  MVT::i64,// ->6102
/*6084*/      OPC_EmitConvertToTarget, 0,
/*6086*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6089*/      OPC_EmitInteger, MVT::i32, 0, 
/*6092*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVU164ri), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: (imm:i64):$a - Complexity = 3
              // Dst: (MOVU164ri:i64 (imm:i64):$a)
            0, // EndSwitchType
          /*SwitchOpcode*/ 21|128,1/*149*/,  TARGET_VAL(ISD::FADD),// ->6256
/*6107*/    OPC_RecordChild0, // #0 = $a
/*6108*/    OPC_Scope, 51, /*->6161*/ // 3 children in Scope
/*6110*/      OPC_RecordChild1, // #1 = $b
/*6111*/      OPC_MoveChild, 1,
/*6113*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6116*/      OPC_MoveParent,
/*6117*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6139
/*6120*/        OPC_EmitConvertToTarget, 1,
/*6122*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6125*/        OPC_EmitInteger, MVT::i32, 0, 
/*6128*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fadd:f32 RRegf32:f32:$a, (fpimm:f32):$b) - Complexity = 6
                // Dst: (FADDri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6160
/*6141*/        OPC_EmitConvertToTarget, 1,
/*6143*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6146*/        OPC_EmitInteger, MVT::i32, 0, 
/*6149*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fadd:f64 RRegf64:f64:$a, (fpimm:f64):$b) - Complexity = 6
                // Dst: (FADDri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6161*/    /*Scope*/ 51, /*->6213*/
/*6162*/      OPC_MoveChild, 0,
/*6164*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6167*/      OPC_MoveParent,
/*6168*/      OPC_RecordChild1, // #1 = $a
/*6169*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6191
/*6172*/        OPC_EmitConvertToTarget, 0,
/*6174*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6177*/        OPC_EmitInteger, MVT::i32, 0, 
/*6180*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 1, 2, 3, 4, 
                // Src: (fadd:f32 (fpimm:f32):$b, RRegf32:f32:$a) - Complexity = 6
                // Dst: (FADDri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6212
/*6193*/        OPC_EmitConvertToTarget, 0,
/*6195*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6198*/        OPC_EmitInteger, MVT::i32, 0, 
/*6201*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 1, 2, 3, 4, 
                // Src: (fadd:f64 (fpimm:f64):$b, RRegf64:f64:$a) - Complexity = 6
                // Dst: (FADDri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6213*/    /*Scope*/ 41, /*->6255*/
/*6214*/      OPC_RecordChild1, // #1 = $b
/*6215*/      OPC_SwitchType /*2 cases */, 17,  MVT::f32,// ->6235
/*6218*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6221*/        OPC_EmitInteger, MVT::i32, 0, 
/*6224*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDrr32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (fadd:f32 RRegf32:f32:$a, RRegf32:f32:$b) - Complexity = 3
                // Dst: (FADDrr32:f32 RRegf32:f32:$a, RRegf32:f32:$b)
              /*SwitchType*/ 17,  MVT::f64,// ->6254
/*6237*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6240*/        OPC_EmitInteger, MVT::i32, 0, 
/*6243*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDrr64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (fadd:f64 RRegf64:f64:$a, RRegf64:f64:$b) - Complexity = 3
                // Dst: (FADDrr64:f64 RRegf64:f64:$a, RRegf64:f64:$b)
              0, // EndSwitchType
/*6255*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 95,  TARGET_VAL(ISD::FSUB),// ->6354
/*6259*/    OPC_RecordChild0, // #0 = $a
/*6260*/    OPC_RecordChild1, // #1 = $b
/*6261*/    OPC_Scope, 50, /*->6313*/ // 3 children in Scope
/*6263*/      OPC_MoveChild, 1,
/*6265*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6268*/      OPC_MoveParent,
/*6269*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6291
/*6272*/        OPC_EmitConvertToTarget, 1,
/*6274*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6277*/        OPC_EmitInteger, MVT::i32, 0, 
/*6280*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FSUBri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fsub:f32 RRegf32:f32:$a, (fpimm:f32):$b) - Complexity = 6
                // Dst: (FSUBri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6312
/*6293*/        OPC_EmitConvertToTarget, 1,
/*6295*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6298*/        OPC_EmitInteger, MVT::i32, 0, 
/*6301*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FSUBri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fsub:f64 RRegf64:f64:$a, (fpimm:f64):$b) - Complexity = 6
                // Dst: (FSUBri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6313*/    /*Scope*/ 19, /*->6333*/
/*6314*/      OPC_CheckType, MVT::f32,
/*6316*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6319*/      OPC_EmitInteger, MVT::i32, 0, 
/*6322*/      OPC_MorphNodeTo, TARGET_VAL(PTX::FSUBrr32), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (fsub:f32 RRegf32:f32:$a, RRegf32:f32:$b) - Complexity = 3
              // Dst: (FSUBrr32:f32 RRegf32:f32:$a, RRegf32:f32:$b)
/*6333*/    /*Scope*/ 19, /*->6353*/
/*6334*/      OPC_CheckType, MVT::f64,
/*6336*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6339*/      OPC_EmitInteger, MVT::i32, 0, 
/*6342*/      OPC_MorphNodeTo, TARGET_VAL(PTX::FSUBrr64), 0,
                  1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (fsub:f64 RRegf64:f64:$a, RRegf64:f64:$b) - Complexity = 3
              // Dst: (FSUBrr64:f64 RRegf64:f64:$a, RRegf64:f64:$b)
/*6353*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21|128,1/*149*/,  TARGET_VAL(ISD::FMUL),// ->6507
/*6358*/    OPC_RecordChild0, // #0 = $a
/*6359*/    OPC_Scope, 51, /*->6412*/ // 3 children in Scope
/*6361*/      OPC_RecordChild1, // #1 = $b
/*6362*/      OPC_MoveChild, 1,
/*6364*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6367*/      OPC_MoveParent,
/*6368*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6390
/*6371*/        OPC_EmitConvertToTarget, 1,
/*6373*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6376*/        OPC_EmitInteger, MVT::i32, 0, 
/*6379*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fmul:f32 RRegf32:f32:$a, (fpimm:f32):$b) - Complexity = 6
                // Dst: (FMULri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6411
/*6392*/        OPC_EmitConvertToTarget, 1,
/*6394*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6397*/        OPC_EmitInteger, MVT::i32, 0, 
/*6400*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fmul:f64 RRegf64:f64:$a, (fpimm:f64):$b) - Complexity = 6
                // Dst: (FMULri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6412*/    /*Scope*/ 51, /*->6464*/
/*6413*/      OPC_MoveChild, 0,
/*6415*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6418*/      OPC_MoveParent,
/*6419*/      OPC_RecordChild1, // #1 = $a
/*6420*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6442
/*6423*/        OPC_EmitConvertToTarget, 0,
/*6425*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6428*/        OPC_EmitInteger, MVT::i32, 0, 
/*6431*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 1, 2, 3, 4, 
                // Src: (fmul:f32 (fpimm:f32):$b, RRegf32:f32:$a) - Complexity = 6
                // Dst: (FMULri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6463
/*6444*/        OPC_EmitConvertToTarget, 0,
/*6446*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6449*/        OPC_EmitInteger, MVT::i32, 0, 
/*6452*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 1, 2, 3, 4, 
                // Src: (fmul:f64 (fpimm:f64):$b, RRegf64:f64:$a) - Complexity = 6
                // Dst: (FMULri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6464*/    /*Scope*/ 41, /*->6506*/
/*6465*/      OPC_RecordChild1, // #1 = $b
/*6466*/      OPC_SwitchType /*2 cases */, 17,  MVT::f32,// ->6486
/*6469*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6472*/        OPC_EmitInteger, MVT::i32, 0, 
/*6475*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULrr32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (fmul:f32 RRegf32:f32:$a, RRegf32:f32:$b) - Complexity = 3
                // Dst: (FMULrr32:f32 RRegf32:f32:$a, RRegf32:f32:$b)
              /*SwitchType*/ 17,  MVT::f64,// ->6505
/*6488*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6491*/        OPC_EmitInteger, MVT::i32, 0, 
/*6494*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULrr64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (fmul:f64 RRegf64:f64:$a, RRegf64:f64:$b) - Complexity = 3
                // Dst: (FMULrr64:f64 RRegf64:f64:$a, RRegf64:f64:$b)
              0, // EndSwitchType
/*6506*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::ConstantFP),// ->6553
/*6510*/    OPC_RecordNode,   // #0 = $a
/*6511*/    OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->6532
/*6514*/      OPC_EmitConvertToTarget, 0,
/*6516*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6519*/      OPC_EmitInteger, MVT::i32, 0, 
/*6522*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVF32ri), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (fpimm:f32):$a - Complexity = 3
              // Dst: (MOVF32ri:f32 (fpimm:f32):$a)
            /*SwitchType*/ 18,  MVT::f64,// ->6552
/*6534*/      OPC_EmitConvertToTarget, 0,
/*6536*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6539*/      OPC_EmitInteger, MVT::i32, 0, 
/*6542*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVF64ri), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 3, 
              // Src: (fpimm:f64):$a - Complexity = 3
              // Dst: (MOVF64ri:f64 (fpimm:f64):$a)
            0, // EndSwitchType
          /*SwitchOpcode*/ 16,  TARGET_VAL(PTXISD::EXIT),// ->6572
/*6556*/    OPC_RecordNode,   // #0 = 'PTXexit' chained node
/*6557*/    OPC_EmitMergeInputChains1_0,
/*6558*/    OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6561*/    OPC_EmitInteger, MVT::i32, 0, 
/*6564*/    OPC_MorphNodeTo, TARGET_VAL(PTX::EXIT), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (PTXexit) - Complexity = 3
            // Dst: (EXIT)
          /*SwitchOpcode*/ 16,  TARGET_VAL(PTXISD::RET),// ->6591
/*6575*/    OPC_RecordNode,   // #0 = 'PTXret' chained node
/*6576*/    OPC_EmitMergeInputChains1_0,
/*6577*/    OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6580*/    OPC_EmitInteger, MVT::i32, 0, 
/*6583*/    OPC_MorphNodeTo, TARGET_VAL(PTX::RET), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (PTXret) - Complexity = 3
            // Dst: (RET)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 6593 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 98
  // #OPC_RecordNode                     = 7
  // #OPC_RecordChild                    = 34
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 0
  // #OPC_MoveChild                      = 16
  // #OPC_MoveParent                     = 20
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 70
  // #OPC_CheckPredicate                 = 70
  // #OPC_CheckOpcode                    = 14
  // #OPC_SwitchOpcode                   = 1
  // #OPC_CheckType                      = 17
  // #OPC_SwitchType                     = 27
  // #OPC_CheckChildType                 = 17
  // #OPC_CheckInteger                   = 6
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 210
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 261
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 261
  // #OPC_EmitConvertToTarget            = 29
  // #OPC_EmitMergeInputChains           = 213
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 0
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 261

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (!getSubtarget().use64BitAddresses());
  case 1: return (getSubtarget().use64BitAddresses());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_load_global
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<LoadSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::GLOBAL;
  return false;

  }
  case 3: { // Predicate_load_constant
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<LoadSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::CONSTANT;
  return false;

  }
  case 4: { // Predicate_load_local
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<LoadSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::LOCAL;
  return false;

  }
  case 5: { // Predicate_load_shared
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<LoadSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::SHARED;
  return false;

  }
  case 6: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 7: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 8: { // Predicate_store_global
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<StoreSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::GLOBAL;
  return false;

  }
  case 9: { // Predicate_store_local
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<StoreSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::LOCAL;
  return false;

  }
  case 10: { // Predicate_store_shared
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<StoreSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::SHARED;
  return false;

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
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+2);
    return SelectADDRii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

