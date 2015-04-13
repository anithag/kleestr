; ModuleID = 'get_sign.o'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [2 x i8] c"a\00", align 1
@.str1 = private constant [22 x i8] c"klee_div_zero_check.c\00", align 1
@.str12 = private constant [15 x i8] c"divide by zero\00", align 1
@.str2 = private constant [8 x i8] c"div.err\00", align 1
@.str3 = private constant [8 x i8] c"IGNORED\00", align 1
@.str14 = private constant [16 x i8] c"overshift error\00", align 1
@.str25 = private constant [14 x i8] c"overshift.err\00", align 1
@.str6 = private constant [13 x i8] c"klee_range.c\00", align 1
@.str17 = private constant [14 x i8] c"invalid range\00", align 1
@.str28 = private constant [5 x i8] c"user\00", align 1

define i32 @get_sign(i32 %x) nounwind {
entry:
  %x_addr = alloca i32, align 4
  %retval = alloca i32
  %0 = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  store i32 %x, i32* %x_addr
  %1 = load i32* %x_addr, align 4, !dbg !125
  %2 = icmp eq i32 %1, 0, !dbg !125
  br i1 %2, label %bb, label %bb1, !dbg !125

bb:                                               ; preds = %entry
  store i32 0, i32* %0, align 4, !dbg !127
  br label %bb4, !dbg !127

bb1:                                              ; preds = %entry
  %3 = load i32* %x_addr, align 4, !dbg !128
  %4 = icmp slt i32 %3, 0, !dbg !128
  br i1 %4, label %bb2, label %bb3, !dbg !128

bb2:                                              ; preds = %bb1
  store i32 -1, i32* %0, align 4, !dbg !129
  br label %bb4, !dbg !129

bb3:                                              ; preds = %bb1
  store i32 1, i32* %0, align 4, !dbg !130
  br label %bb4, !dbg !130

bb4:                                              ; preds = %bb3, %bb2, %bb
  %5 = load i32* %0, align 4, !dbg !127
  store i32 %5, i32* %retval, align 4, !dbg !127
  %retval5 = load i32* %retval, !dbg !127
  ret i32 %retval5, !dbg !127
}

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define i32 @main() nounwind {
entry:
  %retval = alloca i32
  %0 = alloca i32
  %a = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  %a1 = bitcast i32* %a to i8*, !dbg !131
  call void @klee_make_symbolic(i8* %a1, i64 4, i8* getelementptr inbounds ([2 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !131
  %1 = load i32* %a, align 4, !dbg !133
  %2 = call i32 @get_sign(i32 %1) nounwind, !dbg !133
  store i32 %2, i32* %0, align 4, !dbg !133
  %3 = load i32* %0, align 4, !dbg !133
  store i32 %3, i32* %retval, align 4, !dbg !133
  %retval2 = load i32* %retval, !dbg !133
  ret i32 %retval2, !dbg !133
}

declare void @klee_make_symbolic(i8*, i64, i8*)

define void @klee_div_zero_check(i64 %z) nounwind {
entry:
  %0 = icmp eq i64 %z, 0, !dbg !134
  br i1 %0, label %bb, label %return, !dbg !134

bb:                                               ; preds = %entry
  tail call void @klee_report_error(i8* getelementptr inbounds ([22 x i8]* @.str1, i64 0, i64 0), i32 14, i8* getelementptr inbounds ([15 x i8]* @.str12, i64 0, i64 0), i8* getelementptr inbounds ([8 x i8]* @.str2, i64 0, i64 0)) noreturn nounwind, !dbg 
  unreachable, !dbg !136

return:                                           ; preds = %entry
  ret void, !dbg !137
}

declare void @klee_report_error(i8*, i32, i8*, i8*) noreturn

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define i32 @klee_int(i8* %name) nounwind {
entry:
  %x = alloca i32, align 4
  %x1 = bitcast i32* %x to i8*, !dbg !138
  call void @klee_make_symbolic(i8* %x1, i64 4, i8* %name) nounwind, !dbg !138
  %0 = load i32* %x, align 4, !dbg !139
  ret i32 %0, !dbg !139
}

define void @klee_overshift_check(i64 %bitWidth, i64 %shift) nounwind {
entry:
  %0 = icmp ult i64 %shift, %bitWidth, !dbg !140
  br i1 %0, label %return, label %bb, !dbg !140

bb:                                               ; preds = %entry
  tail call void @klee_report_error(i8* getelementptr inbounds ([8 x i8]* @.str3, i64 0, i64 0), i32 0, i8* getelementptr inbounds ([16 x i8]* @.str14, i64 0, i64 0), i8* getelementptr inbounds ([14 x i8]* @.str25, i64 0, i64 0)) noreturn nounwind, !dbg 
  unreachable, !dbg !142

return:                                           ; preds = %entry
  ret void, !dbg !143
}

define i32 @klee_range(i32 %start, i32 %end, i8* %name) nounwind {
entry:
  %x = alloca i32, align 4
  %0 = icmp slt i32 %start, %end, !dbg !144
  br i1 %0, label %bb1, label %bb, !dbg !144

bb:                                               ; preds = %entry
  call void @klee_report_error(i8* getelementptr inbounds ([13 x i8]* @.str6, i64 0, i64 0), i32 17, i8* getelementptr inbounds ([14 x i8]* @.str17, i64 0, i64 0), i8* getelementptr inbounds ([5 x i8]* @.str28, i64 0, i64 0)) noreturn nounwind, !dbg !145
  unreachable, !dbg !145

bb1:                                              ; preds = %entry
  %1 = add nsw i32 %start, 1, !dbg !146
  %2 = icmp eq i32 %1, %end, !dbg !146
  br i1 %2, label %bb8, label %bb3, !dbg !146

bb3:                                              ; preds = %bb1
  %x4 = bitcast i32* %x to i8*, !dbg !147
  call void @klee_make_symbolic(i8* %x4, i64 4, i8* %name) nounwind, !dbg !147
  %3 = icmp eq i32 %start, 0, !dbg !148
  %4 = load i32* %x, align 4, !dbg !149
  br i1 %3, label %bb5, label %bb6, !dbg !148

bb5:                                              ; preds = %bb3
  %5 = icmp ult i32 %4, %end, !dbg !149
  %6 = zext i1 %5 to i64, !dbg !149
  call void @klee_assume(i64 %6) nounwind, !dbg !149
  br label %bb7, !dbg !149

bb6:                                              ; preds = %bb3
  %7 = icmp sge i32 %4, %start, !dbg !150
  %8 = zext i1 %7 to i64, !dbg !150
  call void @klee_assume(i64 %8) nounwind, !dbg !150
  %9 = load i32* %x, align 4, !dbg !151
  %10 = icmp slt i32 %9, %end, !dbg !151
  %11 = zext i1 %10 to i64, !dbg !151
  call void @klee_assume(i64 %11) nounwind, !dbg !151
  br label %bb7, !dbg !151

bb7:                                              ; preds = %bb6, %bb5
  %12 = load i32* %x, align 4, !dbg !152
  br label %bb8, !dbg !152

bb8:                                              ; preds = %bb7, %bb1
  %.0 = phi i32 [ %12, %bb7 ], [ %start, %bb1 ]
  ret i32 %.0, !dbg !153
}

declare void @klee_assume(i64)

define weak i8* @mempcpy(i8* %destaddr, i8* %srcaddr, i64 %len) nounwind {
entry:
  %0 = icmp eq i64 %len, 0, !dbg !154
  br i1 %0, label %bb2, label %bb, !dbg !154

bb:                                               ; preds = %bb, %entry
  %indvar = phi i64 [ %indvar.next, %bb ], [ 0, %entry ]
  %dest.05 = getelementptr i8* %destaddr, i64 %indvar
  %src.06 = getelementptr i8* %srcaddr, i64 %indvar
  %1 = load i8* %src.06, align 1, !dbg !155
  store i8 %1, i8* %dest.05, align 1, !dbg !155
  %indvar.next = add i64 %indvar, 1
  %exitcond1 = icmp eq i64 %indvar.next, %len
  br i1 %exitcond1, label %bb1.bb2_crit_edge, label %bb, !dbg !154

bb1.bb2_crit_edge:                                ; preds = %bb
  %scevgep = getelementptr i8* %destaddr, i64 %len
  br label %bb2

bb2:                                              ; preds = %bb1.bb2_crit_edge, %entry
  %dest.0.lcssa = phi i8* [ %scevgep, %bb1.bb2_crit_edge ], [ %destaddr, %entry ]
  ret i8* %dest.0.lcssa, !dbg !156
}

!llvm.dbg.sp = !{!0, !6, !9, !15, !24, !30, !39, !48, !57, !66}
!llvm.dbg.lv.klee_div_zero_check = !{!76}
!llvm.dbg.lv.klee_int = !{!77, !78}
!llvm.dbg.lv.klee_overshift_check = !{!80, !81}
!llvm.dbg.lv.klee_range = !{!82, !83, !84, !85}
!llvm.dbg.lv.memcpy = !{!87, !88, !89, !90, !94}
!llvm.dbg.lv.memmove = !{!97, !98, !99, !100, !104}
!llvm.dbg.lv.mempcpy = !{!107, !108, !109, !110, !114}
!llvm.dbg.lv.memset = !{!117, !118, !119, !120}

!0 = metadata !{i32 589870, i32 0, metadata !1, metadata !"get_sign", metadata !"get_sign", metadata !"get_sign", metadata !1, i32 7, metadata !3, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32)* @get_sign} ; [ DW_TAG_subprogram ]
!1 = metadata !{i32 589865, metadata !"get_sign.c", metadata !"/home/anitha/klee/examples/get_sign/", metadata !2} ; [ DW_TAG_file_type ]
!2 = metadata !{i32 589841, i32 0, i32 1, metadata !"get_sign.c", metadata !"/home/anitha/klee/examples/get_sign/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!3 = metadata !{i32 589845, metadata !1, metadata !"", metadata !1, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !4, i32 0, null} ; [ DW_TAG_subroutine_type ]
!4 = metadata !{metadata !5, metadata !5}
!5 = metadata !{i32 589860, metadata !1, metadata !"int", metadata !1, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!6 = metadata !{i32 589870, i32 0, metadata !1, metadata !"main", metadata !"main", metadata !"main", metadata !1, i32 17, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 ()* @main} ; [ DW_TAG_subprogram ]
!7 = metadata !{i32 589845, metadata !1, metadata !"", metadata !1, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, null} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !5}
!9 = metadata !{i32 589870, i32 0, metadata !10, metadata !"klee_div_zero_check", metadata !"klee_div_zero_check", metadata !"klee_div_zero_check", metadata !10, i32 12, metadata !12, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, void (i64)* @
!10 = metadata !{i32 589865, metadata !"klee_div_zero_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !11} ; [ DW_TAG_file_type ]
!11 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_div_zero_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile
!12 = metadata !{i32 589845, metadata !10, metadata !"", metadata !10, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !13, i32 0, null} ; [ DW_TAG_subroutine_type ]
!13 = metadata !{null, metadata !14}
!14 = metadata !{i32 589860, metadata !10, metadata !"long long int", metadata !10, i32 0, i64 64, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!15 = metadata !{i32 589870, i32 0, metadata !16, metadata !"klee_int", metadata !"klee_int", metadata !"klee_int", metadata !16, i32 13, metadata !18, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i32 (i8*)* @klee_int} ; [ DW_TAG_subprogram ]
!16 = metadata !{i32 589865, metadata !"klee_int.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !17} ; [ DW_TAG_file_type ]
!17 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_int.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!18 = metadata !{i32 589845, metadata !16, metadata !"", metadata !16, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !19, i32 0, null} ; [ DW_TAG_subroutine_type ]
!19 = metadata !{metadata !20, metadata !21}
!20 = metadata !{i32 589860, metadata !16, metadata !"int", metadata !16, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!21 = metadata !{i32 589839, metadata !16, metadata !"", metadata !16, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !22} ; [ DW_TAG_pointer_type ]
!22 = metadata !{i32 589862, metadata !16, metadata !"", metadata !16, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !23} ; [ DW_TAG_const_type ]
!23 = metadata !{i32 589860, metadata !16, metadata !"char", metadata !16, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!24 = metadata !{i32 589870, i32 0, metadata !25, metadata !"klee_overshift_check", metadata !"klee_overshift_check", metadata !"klee_overshift_check", metadata !25, i32 20, metadata !27, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, void (i64
!25 = metadata !{i32 589865, metadata !"klee_overshift_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !26} ; [ DW_TAG_file_type ]
!26 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_overshift_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compil
!27 = metadata !{i32 589845, metadata !25, metadata !"", metadata !25, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !28, i32 0, null} ; [ DW_TAG_subroutine_type ]
!28 = metadata !{null, metadata !29, metadata !29}
!29 = metadata !{i32 589860, metadata !25, metadata !"long long unsigned int", metadata !25, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!30 = metadata !{i32 589870, i32 0, metadata !31, metadata !"klee_range", metadata !"klee_range", metadata !"klee_range", metadata !31, i32 13, metadata !33, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i32 (i32, i32, i8*)* @klee_range} ; [ D
!31 = metadata !{i32 589865, metadata !"klee_range.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !32} ; [ DW_TAG_file_type ]
!32 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_range.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!33 = metadata !{i32 589845, metadata !31, metadata !"", metadata !31, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !34, i32 0, null} ; [ DW_TAG_subroutine_type ]
!34 = metadata !{metadata !35, metadata !35, metadata !35, metadata !36}
!35 = metadata !{i32 589860, metadata !31, metadata !"int", metadata !31, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!36 = metadata !{i32 589839, metadata !31, metadata !"", metadata !31, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !37} ; [ DW_TAG_pointer_type ]
!37 = metadata !{i32 589862, metadata !31, metadata !"", metadata !31, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !38} ; [ DW_TAG_const_type ]
!38 = metadata !{i32 589860, metadata !31, metadata !"char", metadata !31, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!39 = metadata !{i32 589870, i32 0, metadata !40, metadata !"memcpy", metadata !"memcpy", metadata !"memcpy", metadata !40, i32 12, metadata !42, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, null} ; [ DW_TAG_subprogram ]
!40 = metadata !{i32 589865, metadata !"memcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !41} ; [ DW_TAG_file_type ]
!41 = metadata !{i32 589841, i32 0, i32 1, metadata !"memcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!42 = metadata !{i32 589845, metadata !40, metadata !"", metadata !40, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !43, i32 0, null} ; [ DW_TAG_subroutine_type ]
!43 = metadata !{metadata !44, metadata !44, metadata !44, metadata !45}
!44 = metadata !{i32 589839, metadata !40, metadata !"", metadata !40, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!45 = metadata !{i32 589846, metadata !46, metadata !"size_t", metadata !46, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !47} ; [ DW_TAG_typedef ]
!46 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !41} ; [ DW_TAG_file_type ]
!47 = metadata !{i32 589860, metadata !40, metadata !"long unsigned int", metadata !40, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!48 = metadata !{i32 589870, i32 0, metadata !49, metadata !"memmove", metadata !"memmove", metadata !"memmove", metadata !49, i32 12, metadata !51, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, null} ; [ DW_TAG_subprogram ]
!49 = metadata !{i32 589865, metadata !"memmove.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !50} ; [ DW_TAG_file_type ]
!50 = metadata !{i32 589841, i32 0, i32 1, metadata !"memmove.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!51 = metadata !{i32 589845, metadata !49, metadata !"", metadata !49, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !52, i32 0, null} ; [ DW_TAG_subroutine_type ]
!52 = metadata !{metadata !53, metadata !53, metadata !53, metadata !54}
!53 = metadata !{i32 589839, metadata !49, metadata !"", metadata !49, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!54 = metadata !{i32 589846, metadata !55, metadata !"size_t", metadata !55, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !56} ; [ DW_TAG_typedef ]
!55 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !50} ; [ DW_TAG_file_type ]
!56 = metadata !{i32 589860, metadata !49, metadata !"long unsigned int", metadata !49, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!57 = metadata !{i32 589870, i32 0, metadata !58, metadata !"mempcpy", metadata !"mempcpy", metadata !"mempcpy", metadata !58, i32 11, metadata !60, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i8* (i8*, i8*, i64)* @mempcpy} ; [ DW_TAG_subpro
!58 = metadata !{i32 589865, metadata !"mempcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !59} ; [ DW_TAG_file_type ]
!59 = metadata !{i32 589841, i32 0, i32 1, metadata !"mempcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!60 = metadata !{i32 589845, metadata !58, metadata !"", metadata !58, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !61, i32 0, null} ; [ DW_TAG_subroutine_type ]
!61 = metadata !{metadata !62, metadata !62, metadata !62, metadata !63}
!62 = metadata !{i32 589839, metadata !58, metadata !"", metadata !58, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!63 = metadata !{i32 589846, metadata !64, metadata !"size_t", metadata !64, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !65} ; [ DW_TAG_typedef ]
!64 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !59} ; [ DW_TAG_file_type ]
!65 = metadata !{i32 589860, metadata !58, metadata !"long unsigned int", metadata !58, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!66 = metadata !{i32 589870, i32 0, metadata !67, metadata !"memset", metadata !"memset", metadata !"memset", metadata !67, i32 11, metadata !69, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, null} ; [ DW_TAG_subprogram ]
!67 = metadata !{i32 589865, metadata !"memset.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !68} ; [ DW_TAG_file_type ]
!68 = metadata !{i32 589841, i32 0, i32 1, metadata !"memset.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!69 = metadata !{i32 589845, metadata !67, metadata !"", metadata !67, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !70, i32 0, null} ; [ DW_TAG_subroutine_type ]
!70 = metadata !{metadata !71, metadata !71, metadata !72, metadata !73}
!71 = metadata !{i32 589839, metadata !67, metadata !"", metadata !67, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!72 = metadata !{i32 589860, metadata !67, metadata !"int", metadata !67, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!73 = metadata !{i32 589846, metadata !74, metadata !"size_t", metadata !74, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !75} ; [ DW_TAG_typedef ]
!74 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !68} ; [ DW_TAG_file_type ]
!75 = metadata !{i32 589860, metadata !67, metadata !"long unsigned int", metadata !67, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!76 = metadata !{i32 590081, metadata !9, metadata !"z", metadata !10, i32 12, metadata !14, i32 0} ; [ DW_TAG_arg_variable ]
!77 = metadata !{i32 590081, metadata !15, metadata !"name", metadata !16, i32 13, metadata !21, i32 0} ; [ DW_TAG_arg_variable ]
!78 = metadata !{i32 590080, metadata !79, metadata !"x", metadata !16, i32 14, metadata !20, i32 0} ; [ DW_TAG_auto_variable ]
!79 = metadata !{i32 589835, metadata !15, i32 13, i32 0, metadata !16, i32 0} ; [ DW_TAG_lexical_block ]
!80 = metadata !{i32 590081, metadata !24, metadata !"bitWidth", metadata !25, i32 20, metadata !29, i32 0} ; [ DW_TAG_arg_variable ]
!81 = metadata !{i32 590081, metadata !24, metadata !"shift", metadata !25, i32 20, metadata !29, i32 0} ; [ DW_TAG_arg_variable ]
!82 = metadata !{i32 590081, metadata !30, metadata !"start", metadata !31, i32 13, metadata !35, i32 0} ; [ DW_TAG_arg_variable ]
!83 = metadata !{i32 590081, metadata !30, metadata !"end", metadata !31, i32 13, metadata !35, i32 0} ; [ DW_TAG_arg_variable ]
!84 = metadata !{i32 590081, metadata !30, metadata !"name", metadata !31, i32 13, metadata !36, i32 0} ; [ DW_TAG_arg_variable ]
!85 = metadata !{i32 590080, metadata !86, metadata !"x", metadata !31, i32 14, metadata !35, i32 0} ; [ DW_TAG_auto_variable ]
!86 = metadata !{i32 589835, metadata !30, i32 13, i32 0, metadata !31, i32 0} ; [ DW_TAG_lexical_block ]
!87 = metadata !{i32 590081, metadata !39, metadata !"destaddr", metadata !40, i32 12, metadata !44, i32 0} ; [ DW_TAG_arg_variable ]
!88 = metadata !{i32 590081, metadata !39, metadata !"srcaddr", metadata !40, i32 12, metadata !44, i32 0} ; [ DW_TAG_arg_variable ]
!89 = metadata !{i32 590081, metadata !39, metadata !"len", metadata !40, i32 12, metadata !45, i32 0} ; [ DW_TAG_arg_variable ]
!90 = metadata !{i32 590080, metadata !91, metadata !"dest", metadata !40, i32 13, metadata !92, i32 0} ; [ DW_TAG_auto_variable ]
!91 = metadata !{i32 589835, metadata !39, i32 12, i32 0, metadata !40, i32 0} ; [ DW_TAG_lexical_block ]
!92 = metadata !{i32 589839, metadata !40, metadata !"", metadata !40, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !93} ; [ DW_TAG_pointer_type ]
!93 = metadata !{i32 589860, metadata !40, metadata !"char", metadata !40, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!94 = metadata !{i32 590080, metadata !91, metadata !"src", metadata !40, i32 14, metadata !95, i32 0} ; [ DW_TAG_auto_variable ]
!95 = metadata !{i32 589839, metadata !40, metadata !"", metadata !40, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !96} ; [ DW_TAG_pointer_type ]
!96 = metadata !{i32 589862, metadata !40, metadata !"", metadata !40, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !93} ; [ DW_TAG_const_type ]
!97 = metadata !{i32 590081, metadata !48, metadata !"dst", metadata !49, i32 12, metadata !53, i32 0} ; [ DW_TAG_arg_variable ]
!98 = metadata !{i32 590081, metadata !48, metadata !"src", metadata !49, i32 12, metadata !53, i32 0} ; [ DW_TAG_arg_variable ]
!99 = metadata !{i32 590081, metadata !48, metadata !"count", metadata !49, i32 12, metadata !54, i32 0} ; [ DW_TAG_arg_variable ]
!100 = metadata !{i32 590080, metadata !101, metadata !"a", metadata !49, i32 13, metadata !102, i32 0} ; [ DW_TAG_auto_variable ]
!101 = metadata !{i32 589835, metadata !48, i32 12, i32 0, metadata !49, i32 0} ; [ DW_TAG_lexical_block ]
!102 = metadata !{i32 589839, metadata !49, metadata !"", metadata !49, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !103} ; [ DW_TAG_pointer_type ]
!103 = metadata !{i32 589860, metadata !49, metadata !"char", metadata !49, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!104 = metadata !{i32 590080, metadata !101, metadata !"b", metadata !49, i32 14, metadata !105, i32 0} ; [ DW_TAG_auto_variable ]
!105 = metadata !{i32 589839, metadata !49, metadata !"", metadata !49, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !106} ; [ DW_TAG_pointer_type ]
!106 = metadata !{i32 589862, metadata !49, metadata !"", metadata !49, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !103} ; [ DW_TAG_const_type ]
!107 = metadata !{i32 590081, metadata !57, metadata !"destaddr", metadata !58, i32 11, metadata !62, i32 0} ; [ DW_TAG_arg_variable ]
!108 = metadata !{i32 590081, metadata !57, metadata !"srcaddr", metadata !58, i32 11, metadata !62, i32 0} ; [ DW_TAG_arg_variable ]
!109 = metadata !{i32 590081, metadata !57, metadata !"len", metadata !58, i32 11, metadata !63, i32 0} ; [ DW_TAG_arg_variable ]
!110 = metadata !{i32 590080, metadata !111, metadata !"dest", metadata !58, i32 12, metadata !112, i32 0} ; [ DW_TAG_auto_variable ]
!111 = metadata !{i32 589835, metadata !57, i32 11, i32 0, metadata !58, i32 0} ; [ DW_TAG_lexical_block ]
!112 = metadata !{i32 589839, metadata !58, metadata !"", metadata !58, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !113} ; [ DW_TAG_pointer_type ]
!113 = metadata !{i32 589860, metadata !58, metadata !"char", metadata !58, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!114 = metadata !{i32 590080, metadata !111, metadata !"src", metadata !58, i32 13, metadata !115, i32 0} ; [ DW_TAG_auto_variable ]
!115 = metadata !{i32 589839, metadata !58, metadata !"", metadata !58, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !116} ; [ DW_TAG_pointer_type ]
!116 = metadata !{i32 589862, metadata !58, metadata !"", metadata !58, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !113} ; [ DW_TAG_const_type ]
!117 = metadata !{i32 590081, metadata !66, metadata !"dst", metadata !67, i32 11, metadata !71, i32 0} ; [ DW_TAG_arg_variable ]
!118 = metadata !{i32 590081, metadata !66, metadata !"s", metadata !67, i32 11, metadata !72, i32 0} ; [ DW_TAG_arg_variable ]
!119 = metadata !{i32 590081, metadata !66, metadata !"count", metadata !67, i32 11, metadata !73, i32 0} ; [ DW_TAG_arg_variable ]
!120 = metadata !{i32 590080, metadata !121, metadata !"a", metadata !67, i32 12, metadata !122, i32 0} ; [ DW_TAG_auto_variable ]
!121 = metadata !{i32 589835, metadata !66, i32 11, i32 0, metadata !67, i32 0} ; [ DW_TAG_lexical_block ]
!122 = metadata !{i32 589839, metadata !67, metadata !"", metadata !67, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !123} ; [ DW_TAG_pointer_type ]
!123 = metadata !{i32 589877, metadata !67, metadata !"", metadata !67, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !124} ; [ DW_TAG_volatile_type ]
!124 = metadata !{i32 589860, metadata !67, metadata !"char", metadata !67, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!125 = metadata !{i32 8, i32 0, metadata !126, null}
!126 = metadata !{i32 589835, metadata !0, i32 7, i32 0, metadata !1, i32 0} ; [ DW_TAG_lexical_block ]
!127 = metadata !{i32 9, i32 0, metadata !126, null}
!128 = metadata !{i32 11, i32 0, metadata !126, null}
!129 = metadata !{i32 12, i32 0, metadata !126, null}
!130 = metadata !{i32 14, i32 0, metadata !126, null}
!131 = metadata !{i32 19, i32 0, metadata !132, null}
!132 = metadata !{i32 589835, metadata !6, i32 17, i32 0, metadata !1, i32 1} ; [ DW_TAG_lexical_block ]
!133 = metadata !{i32 20, i32 0, metadata !132, null}
!134 = metadata !{i32 13, i32 0, metadata !135, null}
!135 = metadata !{i32 589835, metadata !9, i32 12, i32 0, metadata !10, i32 0} ; [ DW_TAG_lexical_block ]
!136 = metadata !{i32 14, i32 0, metadata !135, null}
!137 = metadata !{i32 15, i32 0, metadata !135, null}
!138 = metadata !{i32 15, i32 0, metadata !79, null}
!139 = metadata !{i32 16, i32 0, metadata !79, null}
!140 = metadata !{i32 21, i32 0, metadata !141, null}
!141 = metadata !{i32 589835, metadata !24, i32 20, i32 0, metadata !25, i32 0} ; [ DW_TAG_lexical_block ]
!142 = metadata !{i32 27, i32 0, metadata !141, null}
!143 = metadata !{i32 29, i32 0, metadata !141, null}
!144 = metadata !{i32 16, i32 0, metadata !86, null}
!145 = metadata !{i32 17, i32 0, metadata !86, null}
!146 = metadata !{i32 19, i32 0, metadata !86, null}
!147 = metadata !{i32 22, i32 0, metadata !86, null}
!148 = metadata !{i32 25, i32 0, metadata !86, null}
!149 = metadata !{i32 26, i32 0, metadata !86, null}
!150 = metadata !{i32 28, i32 0, metadata !86, null}
!151 = metadata !{i32 29, i32 0, metadata !86, null}
!152 = metadata !{i32 32, i32 0, metadata !86, null}
!153 = metadata !{i32 20, i32 0, metadata !86, null}
!154 = metadata !{i32 15, i32 0, metadata !111, null}
!155 = metadata !{i32 16, i32 0, metadata !111, null}
!156 = metadata !{i32 17, i32 0, metadata !111, null}
