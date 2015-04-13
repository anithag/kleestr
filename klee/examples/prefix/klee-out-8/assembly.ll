; ModuleID = 'prefix_pointer.o'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [12 x i8] c"Hello World\00", align 1
@.str1 = private unnamed_addr constant [2 x i8] c"a\00", align 1
@.str2 = private constant [22 x i8] c"klee_div_zero_check.c\00", align 1
@.str13 = private constant [15 x i8] c"divide by zero\00", align 1
@.str24 = private constant [8 x i8] c"div.err\00", align 1
@.str3 = private constant [8 x i8] c"IGNORED\00", align 1
@.str14 = private constant [16 x i8] c"overshift error\00", align 1
@.str25 = private constant [14 x i8] c"overshift.err\00", align 1
@.str6 = private constant [13 x i8] c"klee_range.c\00", align 1
@.str17 = private constant [14 x i8] c"invalid range\00", align 1
@.str28 = private constant [5 x i8] c"user\00", align 1

define i32 @prefix(i8* %x) nounwind {
entry:
  %x_addr = alloca i8*, align 8
  %retval = alloca i32
  %0 = alloca i32
  %i = alloca i32
  %dictionary = alloca i8*
  %"alloca point" = bitcast i32 0 to i32
  store i8* %x, i8** %x_addr
  store i32 0, i32* %i, align 4, !dbg !127
  store i8* getelementptr inbounds ([12 x i8]* @.str, i64 0, i64 0), i8** %dictionary, align 8, !dbg !129
  br label %bb3, !dbg !129

bb:                                               ; preds = %bb3
  %1 = load i8** %dictionary, align 8, !dbg !130
  %2 = load i32* %i, align 4, !dbg !130
  %3 = sext i32 %2 to i64, !dbg !130
  %4 = getelementptr inbounds i8* %1, i64 %3, !dbg !130
  %5 = load i8* %4, align 1, !dbg !130
  %6 = load i8** %x_addr, align 8, !dbg !130
  %7 = load i32* %i, align 4, !dbg !130
  %8 = sext i32 %7 to i64, !dbg !130
  %9 = getelementptr inbounds i8* %6, i64 %8, !dbg !130
  %10 = load i8* %9, align 1, !dbg !130
  %11 = icmp eq i8 %5, %10, !dbg !130
  br i1 %11, label %bb2, label %bb1, !dbg !130

bb1:                                              ; preds = %bb
  store i32 -1, i32* %0, align 4, !dbg !131
  br label %bb5, !dbg !131

bb2:                                              ; preds = %bb
  %12 = load i32* %i, align 4, !dbg !132
  %13 = add nsw i32 %12, 1, !dbg !132
  store i32 %13, i32* %i, align 4, !dbg !132
  br label %bb3, !dbg !132

bb3:                                              ; preds = %bb2, %entry
  %14 = load i8** %x_addr, align 8, !dbg !132
  %15 = load i32* %i, align 4, !dbg !132
  %16 = sext i32 %15 to i64, !dbg !132
  %17 = getelementptr inbounds i8* %14, i64 %16, !dbg !132
  %18 = load i8* %17, align 1, !dbg !132
  %19 = icmp ne i8 %18, 0, !dbg !132
  br i1 %19, label %bb, label %bb4, !dbg !132

bb4:                                              ; preds = %bb3
  store i32 1, i32* %0, align 4, !dbg !133
  br label %bb5, !dbg !133

bb5:                                              ; preds = %bb4, %bb1
  %20 = load i32* %0, align 4, !dbg !131
  store i32 %20, i32* %retval, align 4, !dbg !131
  %retval6 = load i32* %retval, !dbg !131
  ret i32 %retval6, !dbg !131
}

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define i32 @main() nounwind {
entry:
  %retval = alloca i32
  %0 = alloca i32
  %a = alloca i8*
  %"alloca point" = bitcast i32 0 to i32
  %1 = load i8** %a, align 8, !dbg !134
  call void @klee_make_symbolic(i8* %1, i64 8, i8* getelementptr inbounds ([2 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !134
  %2 = load i8** %a, align 8, !dbg !136
  %3 = getelementptr inbounds i8* %2, i64 9, !dbg !136
  store i8 0, i8* %3, align 1, !dbg !136
  call void @klee_assume(i64 0) nounwind, !dbg !136
  %4 = load i8** %a, align 8, !dbg !137
  %5 = call i32 @prefix(i8* %4) nounwind, !dbg !137
  store i32 %5, i32* %0, align 4, !dbg !137
  %6 = load i32* %0, align 4, !dbg !137
  store i32 %6, i32* %retval, align 4, !dbg !137
  %retval1 = load i32* %retval, !dbg !137
  ret i32 %retval1, !dbg !137
}

declare void @klee_make_symbolic(i8*, i64, i8*)

declare void @klee_assume(i64)

define void @klee_div_zero_check(i64 %z) nounwind {
entry:
  %0 = icmp eq i64 %z, 0, !dbg !138
  br i1 %0, label %bb, label %return, !dbg !138

bb:                                               ; preds = %entry
  tail call void @klee_report_error(i8* getelementptr inbounds ([22 x i8]* @.str2, i64 0, i64 0), i32 14, i8* getelementptr inbounds ([15 x i8]* @.str13, i64 0, i64 0), i8* getelementptr inbounds ([8 x i8]* @.str24, i64 0, i64 0)) noreturn nounwind, !dbg
  unreachable, !dbg !140

return:                                           ; preds = %entry
  ret void, !dbg !141
}

declare void @klee_report_error(i8*, i32, i8*, i8*) noreturn

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define i32 @klee_int(i8* %name) nounwind {
entry:
  %x = alloca i32, align 4
  %x1 = bitcast i32* %x to i8*, !dbg !142
  call void @klee_make_symbolic(i8* %x1, i64 4, i8* %name) nounwind, !dbg !142
  %0 = load i32* %x, align 4, !dbg !143
  ret i32 %0, !dbg !143
}

define void @klee_overshift_check(i64 %bitWidth, i64 %shift) nounwind {
entry:
  %0 = icmp ult i64 %shift, %bitWidth, !dbg !144
  br i1 %0, label %return, label %bb, !dbg !144

bb:                                               ; preds = %entry
  tail call void @klee_report_error(i8* getelementptr inbounds ([8 x i8]* @.str3, i64 0, i64 0), i32 0, i8* getelementptr inbounds ([16 x i8]* @.str14, i64 0, i64 0), i8* getelementptr inbounds ([14 x i8]* @.str25, i64 0, i64 0)) noreturn nounwind, !dbg 
  unreachable, !dbg !146

return:                                           ; preds = %entry
  ret void, !dbg !147
}

define i32 @klee_range(i32 %start, i32 %end, i8* %name) nounwind {
entry:
  %x = alloca i32, align 4
  %0 = icmp slt i32 %start, %end, !dbg !148
  br i1 %0, label %bb1, label %bb, !dbg !148

bb:                                               ; preds = %entry
  call void @klee_report_error(i8* getelementptr inbounds ([13 x i8]* @.str6, i64 0, i64 0), i32 17, i8* getelementptr inbounds ([14 x i8]* @.str17, i64 0, i64 0), i8* getelementptr inbounds ([5 x i8]* @.str28, i64 0, i64 0)) noreturn nounwind, !dbg !149
  unreachable, !dbg !149

bb1:                                              ; preds = %entry
  %1 = add nsw i32 %start, 1, !dbg !150
  %2 = icmp eq i32 %1, %end, !dbg !150
  br i1 %2, label %bb8, label %bb3, !dbg !150

bb3:                                              ; preds = %bb1
  %x4 = bitcast i32* %x to i8*, !dbg !151
  call void @klee_make_symbolic(i8* %x4, i64 4, i8* %name) nounwind, !dbg !151
  %3 = icmp eq i32 %start, 0, !dbg !152
  %4 = load i32* %x, align 4, !dbg !153
  br i1 %3, label %bb5, label %bb6, !dbg !152

bb5:                                              ; preds = %bb3
  %5 = icmp ult i32 %4, %end, !dbg !153
  %6 = zext i1 %5 to i64, !dbg !153
  call void @klee_assume(i64 %6) nounwind, !dbg !153
  br label %bb7, !dbg !153

bb6:                                              ; preds = %bb3
  %7 = icmp sge i32 %4, %start, !dbg !154
  %8 = zext i1 %7 to i64, !dbg !154
  call void @klee_assume(i64 %8) nounwind, !dbg !154
  %9 = load i32* %x, align 4, !dbg !155
  %10 = icmp slt i32 %9, %end, !dbg !155
  %11 = zext i1 %10 to i64, !dbg !155
  call void @klee_assume(i64 %11) nounwind, !dbg !155
  br label %bb7, !dbg !155

bb7:                                              ; preds = %bb6, %bb5
  %12 = load i32* %x, align 4, !dbg !156
  br label %bb8, !dbg !156

bb8:                                              ; preds = %bb7, %bb1
  %.0 = phi i32 [ %12, %bb7 ], [ %start, %bb1 ]
  ret i32 %.0, !dbg !157
}

define weak i8* @mempcpy(i8* %destaddr, i8* %srcaddr, i64 %len) nounwind {
entry:
  %0 = icmp eq i64 %len, 0, !dbg !158
  br i1 %0, label %bb2, label %bb, !dbg !158

bb:                                               ; preds = %bb, %entry
  %indvar = phi i64 [ %indvar.next, %bb ], [ 0, %entry ]
  %dest.05 = getelementptr i8* %destaddr, i64 %indvar
  %src.06 = getelementptr i8* %srcaddr, i64 %indvar
  %1 = load i8* %src.06, align 1, !dbg !159
  store i8 %1, i8* %dest.05, align 1, !dbg !159
  %indvar.next = add i64 %indvar, 1
  %exitcond1 = icmp eq i64 %indvar.next, %len
  br i1 %exitcond1, label %bb1.bb2_crit_edge, label %bb, !dbg !158

bb1.bb2_crit_edge:                                ; preds = %bb
  %scevgep = getelementptr i8* %destaddr, i64 %len
  br label %bb2

bb2:                                              ; preds = %bb1.bb2_crit_edge, %entry
  %dest.0.lcssa = phi i8* [ %scevgep, %bb1.bb2_crit_edge ], [ %destaddr, %entry ]
  ret i8* %dest.0.lcssa, !dbg !160
}

!llvm.dbg.sp = !{!0, !8, !11, !17, !26, !32, !41, !50, !59, !68}
!llvm.dbg.lv.klee_div_zero_check = !{!78}
!llvm.dbg.lv.klee_int = !{!79, !80}
!llvm.dbg.lv.klee_overshift_check = !{!82, !83}
!llvm.dbg.lv.klee_range = !{!84, !85, !86, !87}
!llvm.dbg.lv.memcpy = !{!89, !90, !91, !92, !96}
!llvm.dbg.lv.memmove = !{!99, !100, !101, !102, !106}
!llvm.dbg.lv.mempcpy = !{!109, !110, !111, !112, !116}
!llvm.dbg.lv.memset = !{!119, !120, !121, !122}

!0 = metadata !{i32 589870, i32 0, metadata !1, metadata !"prefix", metadata !"prefix", metadata !"prefix", metadata !1, i32 7, metadata !3, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i8*)* @prefix} ; [ DW_TAG_subprogram ]
!1 = metadata !{i32 589865, metadata !"prefix_pointer.c", metadata !"/home/anitha/klee/examples/prefix/", metadata !2} ; [ DW_TAG_file_type ]
!2 = metadata !{i32 589841, i32 0, i32 1, metadata !"prefix_pointer.c", metadata !"/home/anitha/klee/examples/prefix/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!3 = metadata !{i32 589845, metadata !1, metadata !"", metadata !1, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !4, i32 0, null} ; [ DW_TAG_subroutine_type ]
!4 = metadata !{metadata !5, metadata !6}
!5 = metadata !{i32 589860, metadata !1, metadata !"int", metadata !1, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!6 = metadata !{i32 589839, metadata !1, metadata !"", metadata !1, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !7} ; [ DW_TAG_pointer_type ]
!7 = metadata !{i32 589860, metadata !1, metadata !"char", metadata !1, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!8 = metadata !{i32 589870, i32 0, metadata !1, metadata !"main", metadata !"main", metadata !"main", metadata !1, i32 22, metadata !9, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 ()* @main} ; [ DW_TAG_subprogram ]
!9 = metadata !{i32 589845, metadata !1, metadata !"", metadata !1, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !10, i32 0, null} ; [ DW_TAG_subroutine_type ]
!10 = metadata !{metadata !5}
!11 = metadata !{i32 589870, i32 0, metadata !12, metadata !"klee_div_zero_check", metadata !"klee_div_zero_check", metadata !"klee_div_zero_check", metadata !12, i32 12, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, void (i64)* 
!12 = metadata !{i32 589865, metadata !"klee_div_zero_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !13} ; [ DW_TAG_file_type ]
!13 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_div_zero_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile
!14 = metadata !{i32 589845, metadata !12, metadata !"", metadata !12, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !15, i32 0, null} ; [ DW_TAG_subroutine_type ]
!15 = metadata !{null, metadata !16}
!16 = metadata !{i32 589860, metadata !12, metadata !"long long int", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!17 = metadata !{i32 589870, i32 0, metadata !18, metadata !"klee_int", metadata !"klee_int", metadata !"klee_int", metadata !18, i32 13, metadata !20, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i32 (i8*)* @klee_int} ; [ DW_TAG_subprogram ]
!18 = metadata !{i32 589865, metadata !"klee_int.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !19} ; [ DW_TAG_file_type ]
!19 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_int.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!20 = metadata !{i32 589845, metadata !18, metadata !"", metadata !18, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !21, i32 0, null} ; [ DW_TAG_subroutine_type ]
!21 = metadata !{metadata !22, metadata !23}
!22 = metadata !{i32 589860, metadata !18, metadata !"int", metadata !18, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!23 = metadata !{i32 589839, metadata !18, metadata !"", metadata !18, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !24} ; [ DW_TAG_pointer_type ]
!24 = metadata !{i32 589862, metadata !18, metadata !"", metadata !18, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !25} ; [ DW_TAG_const_type ]
!25 = metadata !{i32 589860, metadata !18, metadata !"char", metadata !18, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!26 = metadata !{i32 589870, i32 0, metadata !27, metadata !"klee_overshift_check", metadata !"klee_overshift_check", metadata !"klee_overshift_check", metadata !27, i32 20, metadata !29, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, void (i64
!27 = metadata !{i32 589865, metadata !"klee_overshift_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !28} ; [ DW_TAG_file_type ]
!28 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_overshift_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compil
!29 = metadata !{i32 589845, metadata !27, metadata !"", metadata !27, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !30, i32 0, null} ; [ DW_TAG_subroutine_type ]
!30 = metadata !{null, metadata !31, metadata !31}
!31 = metadata !{i32 589860, metadata !27, metadata !"long long unsigned int", metadata !27, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!32 = metadata !{i32 589870, i32 0, metadata !33, metadata !"klee_range", metadata !"klee_range", metadata !"klee_range", metadata !33, i32 13, metadata !35, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i32 (i32, i32, i8*)* @klee_range} ; [ D
!33 = metadata !{i32 589865, metadata !"klee_range.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !34} ; [ DW_TAG_file_type ]
!34 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_range.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!35 = metadata !{i32 589845, metadata !33, metadata !"", metadata !33, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !36, i32 0, null} ; [ DW_TAG_subroutine_type ]
!36 = metadata !{metadata !37, metadata !37, metadata !37, metadata !38}
!37 = metadata !{i32 589860, metadata !33, metadata !"int", metadata !33, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!38 = metadata !{i32 589839, metadata !33, metadata !"", metadata !33, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !39} ; [ DW_TAG_pointer_type ]
!39 = metadata !{i32 589862, metadata !33, metadata !"", metadata !33, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !40} ; [ DW_TAG_const_type ]
!40 = metadata !{i32 589860, metadata !33, metadata !"char", metadata !33, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!41 = metadata !{i32 589870, i32 0, metadata !42, metadata !"memcpy", metadata !"memcpy", metadata !"memcpy", metadata !42, i32 12, metadata !44, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, null} ; [ DW_TAG_subprogram ]
!42 = metadata !{i32 589865, metadata !"memcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !43} ; [ DW_TAG_file_type ]
!43 = metadata !{i32 589841, i32 0, i32 1, metadata !"memcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!44 = metadata !{i32 589845, metadata !42, metadata !"", metadata !42, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !45, i32 0, null} ; [ DW_TAG_subroutine_type ]
!45 = metadata !{metadata !46, metadata !46, metadata !46, metadata !47}
!46 = metadata !{i32 589839, metadata !42, metadata !"", metadata !42, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!47 = metadata !{i32 589846, metadata !48, metadata !"size_t", metadata !48, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !49} ; [ DW_TAG_typedef ]
!48 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !43} ; [ DW_TAG_file_type ]
!49 = metadata !{i32 589860, metadata !42, metadata !"long unsigned int", metadata !42, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!50 = metadata !{i32 589870, i32 0, metadata !51, metadata !"memmove", metadata !"memmove", metadata !"memmove", metadata !51, i32 12, metadata !53, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, null} ; [ DW_TAG_subprogram ]
!51 = metadata !{i32 589865, metadata !"memmove.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !52} ; [ DW_TAG_file_type ]
!52 = metadata !{i32 589841, i32 0, i32 1, metadata !"memmove.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!53 = metadata !{i32 589845, metadata !51, metadata !"", metadata !51, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !54, i32 0, null} ; [ DW_TAG_subroutine_type ]
!54 = metadata !{metadata !55, metadata !55, metadata !55, metadata !56}
!55 = metadata !{i32 589839, metadata !51, metadata !"", metadata !51, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!56 = metadata !{i32 589846, metadata !57, metadata !"size_t", metadata !57, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !58} ; [ DW_TAG_typedef ]
!57 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !52} ; [ DW_TAG_file_type ]
!58 = metadata !{i32 589860, metadata !51, metadata !"long unsigned int", metadata !51, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!59 = metadata !{i32 589870, i32 0, metadata !60, metadata !"mempcpy", metadata !"mempcpy", metadata !"mempcpy", metadata !60, i32 11, metadata !62, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i8* (i8*, i8*, i64)* @mempcpy} ; [ DW_TAG_subpro
!60 = metadata !{i32 589865, metadata !"mempcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !61} ; [ DW_TAG_file_type ]
!61 = metadata !{i32 589841, i32 0, i32 1, metadata !"mempcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!62 = metadata !{i32 589845, metadata !60, metadata !"", metadata !60, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !63, i32 0, null} ; [ DW_TAG_subroutine_type ]
!63 = metadata !{metadata !64, metadata !64, metadata !64, metadata !65}
!64 = metadata !{i32 589839, metadata !60, metadata !"", metadata !60, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!65 = metadata !{i32 589846, metadata !66, metadata !"size_t", metadata !66, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !67} ; [ DW_TAG_typedef ]
!66 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !61} ; [ DW_TAG_file_type ]
!67 = metadata !{i32 589860, metadata !60, metadata !"long unsigned int", metadata !60, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!68 = metadata !{i32 589870, i32 0, metadata !69, metadata !"memset", metadata !"memset", metadata !"memset", metadata !69, i32 11, metadata !71, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, null} ; [ DW_TAG_subprogram ]
!69 = metadata !{i32 589865, metadata !"memset.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !70} ; [ DW_TAG_file_type ]
!70 = metadata !{i32 589841, i32 0, i32 1, metadata !"memset.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!71 = metadata !{i32 589845, metadata !69, metadata !"", metadata !69, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !72, i32 0, null} ; [ DW_TAG_subroutine_type ]
!72 = metadata !{metadata !73, metadata !73, metadata !74, metadata !75}
!73 = metadata !{i32 589839, metadata !69, metadata !"", metadata !69, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!74 = metadata !{i32 589860, metadata !69, metadata !"int", metadata !69, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!75 = metadata !{i32 589846, metadata !76, metadata !"size_t", metadata !76, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !77} ; [ DW_TAG_typedef ]
!76 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !70} ; [ DW_TAG_file_type ]
!77 = metadata !{i32 589860, metadata !69, metadata !"long unsigned int", metadata !69, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!78 = metadata !{i32 590081, metadata !11, metadata !"z", metadata !12, i32 12, metadata !16, i32 0} ; [ DW_TAG_arg_variable ]
!79 = metadata !{i32 590081, metadata !17, metadata !"name", metadata !18, i32 13, metadata !23, i32 0} ; [ DW_TAG_arg_variable ]
!80 = metadata !{i32 590080, metadata !81, metadata !"x", metadata !18, i32 14, metadata !22, i32 0} ; [ DW_TAG_auto_variable ]
!81 = metadata !{i32 589835, metadata !17, i32 13, i32 0, metadata !18, i32 0} ; [ DW_TAG_lexical_block ]
!82 = metadata !{i32 590081, metadata !26, metadata !"bitWidth", metadata !27, i32 20, metadata !31, i32 0} ; [ DW_TAG_arg_variable ]
!83 = metadata !{i32 590081, metadata !26, metadata !"shift", metadata !27, i32 20, metadata !31, i32 0} ; [ DW_TAG_arg_variable ]
!84 = metadata !{i32 590081, metadata !32, metadata !"start", metadata !33, i32 13, metadata !37, i32 0} ; [ DW_TAG_arg_variable ]
!85 = metadata !{i32 590081, metadata !32, metadata !"end", metadata !33, i32 13, metadata !37, i32 0} ; [ DW_TAG_arg_variable ]
!86 = metadata !{i32 590081, metadata !32, metadata !"name", metadata !33, i32 13, metadata !38, i32 0} ; [ DW_TAG_arg_variable ]
!87 = metadata !{i32 590080, metadata !88, metadata !"x", metadata !33, i32 14, metadata !37, i32 0} ; [ DW_TAG_auto_variable ]
!88 = metadata !{i32 589835, metadata !32, i32 13, i32 0, metadata !33, i32 0} ; [ DW_TAG_lexical_block ]
!89 = metadata !{i32 590081, metadata !41, metadata !"destaddr", metadata !42, i32 12, metadata !46, i32 0} ; [ DW_TAG_arg_variable ]
!90 = metadata !{i32 590081, metadata !41, metadata !"srcaddr", metadata !42, i32 12, metadata !46, i32 0} ; [ DW_TAG_arg_variable ]
!91 = metadata !{i32 590081, metadata !41, metadata !"len", metadata !42, i32 12, metadata !47, i32 0} ; [ DW_TAG_arg_variable ]
!92 = metadata !{i32 590080, metadata !93, metadata !"dest", metadata !42, i32 13, metadata !94, i32 0} ; [ DW_TAG_auto_variable ]
!93 = metadata !{i32 589835, metadata !41, i32 12, i32 0, metadata !42, i32 0} ; [ DW_TAG_lexical_block ]
!94 = metadata !{i32 589839, metadata !42, metadata !"", metadata !42, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !95} ; [ DW_TAG_pointer_type ]
!95 = metadata !{i32 589860, metadata !42, metadata !"char", metadata !42, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!96 = metadata !{i32 590080, metadata !93, metadata !"src", metadata !42, i32 14, metadata !97, i32 0} ; [ DW_TAG_auto_variable ]
!97 = metadata !{i32 589839, metadata !42, metadata !"", metadata !42, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !98} ; [ DW_TAG_pointer_type ]
!98 = metadata !{i32 589862, metadata !42, metadata !"", metadata !42, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !95} ; [ DW_TAG_const_type ]
!99 = metadata !{i32 590081, metadata !50, metadata !"dst", metadata !51, i32 12, metadata !55, i32 0} ; [ DW_TAG_arg_variable ]
!100 = metadata !{i32 590081, metadata !50, metadata !"src", metadata !51, i32 12, metadata !55, i32 0} ; [ DW_TAG_arg_variable ]
!101 = metadata !{i32 590081, metadata !50, metadata !"count", metadata !51, i32 12, metadata !56, i32 0} ; [ DW_TAG_arg_variable ]
!102 = metadata !{i32 590080, metadata !103, metadata !"a", metadata !51, i32 13, metadata !104, i32 0} ; [ DW_TAG_auto_variable ]
!103 = metadata !{i32 589835, metadata !50, i32 12, i32 0, metadata !51, i32 0} ; [ DW_TAG_lexical_block ]
!104 = metadata !{i32 589839, metadata !51, metadata !"", metadata !51, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !105} ; [ DW_TAG_pointer_type ]
!105 = metadata !{i32 589860, metadata !51, metadata !"char", metadata !51, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!106 = metadata !{i32 590080, metadata !103, metadata !"b", metadata !51, i32 14, metadata !107, i32 0} ; [ DW_TAG_auto_variable ]
!107 = metadata !{i32 589839, metadata !51, metadata !"", metadata !51, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !108} ; [ DW_TAG_pointer_type ]
!108 = metadata !{i32 589862, metadata !51, metadata !"", metadata !51, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !105} ; [ DW_TAG_const_type ]
!109 = metadata !{i32 590081, metadata !59, metadata !"destaddr", metadata !60, i32 11, metadata !64, i32 0} ; [ DW_TAG_arg_variable ]
!110 = metadata !{i32 590081, metadata !59, metadata !"srcaddr", metadata !60, i32 11, metadata !64, i32 0} ; [ DW_TAG_arg_variable ]
!111 = metadata !{i32 590081, metadata !59, metadata !"len", metadata !60, i32 11, metadata !65, i32 0} ; [ DW_TAG_arg_variable ]
!112 = metadata !{i32 590080, metadata !113, metadata !"dest", metadata !60, i32 12, metadata !114, i32 0} ; [ DW_TAG_auto_variable ]
!113 = metadata !{i32 589835, metadata !59, i32 11, i32 0, metadata !60, i32 0} ; [ DW_TAG_lexical_block ]
!114 = metadata !{i32 589839, metadata !60, metadata !"", metadata !60, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !115} ; [ DW_TAG_pointer_type ]
!115 = metadata !{i32 589860, metadata !60, metadata !"char", metadata !60, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!116 = metadata !{i32 590080, metadata !113, metadata !"src", metadata !60, i32 13, metadata !117, i32 0} ; [ DW_TAG_auto_variable ]
!117 = metadata !{i32 589839, metadata !60, metadata !"", metadata !60, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !118} ; [ DW_TAG_pointer_type ]
!118 = metadata !{i32 589862, metadata !60, metadata !"", metadata !60, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !115} ; [ DW_TAG_const_type ]
!119 = metadata !{i32 590081, metadata !68, metadata !"dst", metadata !69, i32 11, metadata !73, i32 0} ; [ DW_TAG_arg_variable ]
!120 = metadata !{i32 590081, metadata !68, metadata !"s", metadata !69, i32 11, metadata !74, i32 0} ; [ DW_TAG_arg_variable ]
!121 = metadata !{i32 590081, metadata !68, metadata !"count", metadata !69, i32 11, metadata !75, i32 0} ; [ DW_TAG_arg_variable ]
!122 = metadata !{i32 590080, metadata !123, metadata !"a", metadata !69, i32 12, metadata !124, i32 0} ; [ DW_TAG_auto_variable ]
!123 = metadata !{i32 589835, metadata !68, i32 11, i32 0, metadata !69, i32 0} ; [ DW_TAG_lexical_block ]
!124 = metadata !{i32 589839, metadata !69, metadata !"", metadata !69, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !125} ; [ DW_TAG_pointer_type ]
!125 = metadata !{i32 589877, metadata !69, metadata !"", metadata !69, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !126} ; [ DW_TAG_volatile_type ]
!126 = metadata !{i32 589860, metadata !69, metadata !"char", metadata !69, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!127 = metadata !{i32 9, i32 0, metadata !128, null}
!128 = metadata !{i32 589835, metadata !0, i32 7, i32 0, metadata !1, i32 0} ; [ DW_TAG_lexical_block ]
!129 = metadata !{i32 10, i32 0, metadata !128, null}
!130 = metadata !{i32 12, i32 0, metadata !128, null}
!131 = metadata !{i32 15, i32 0, metadata !128, null}
!132 = metadata !{i32 11, i32 0, metadata !128, null}
!133 = metadata !{i32 18, i32 0, metadata !128, null}
!134 = metadata !{i32 24, i32 0, metadata !135, null}
!135 = metadata !{i32 589835, metadata !8, i32 22, i32 0, metadata !1, i32 1} ; [ DW_TAG_lexical_block ]
!136 = metadata !{i32 25, i32 0, metadata !135, null}
!137 = metadata !{i32 26, i32 0, metadata !135, null}
!138 = metadata !{i32 13, i32 0, metadata !139, null}
!139 = metadata !{i32 589835, metadata !11, i32 12, i32 0, metadata !12, i32 0} ; [ DW_TAG_lexical_block ]
!140 = metadata !{i32 14, i32 0, metadata !139, null}
!141 = metadata !{i32 15, i32 0, metadata !139, null}
!142 = metadata !{i32 15, i32 0, metadata !81, null}
!143 = metadata !{i32 16, i32 0, metadata !81, null}
!144 = metadata !{i32 21, i32 0, metadata !145, null}
!145 = metadata !{i32 589835, metadata !26, i32 20, i32 0, metadata !27, i32 0} ; [ DW_TAG_lexical_block ]
!146 = metadata !{i32 27, i32 0, metadata !145, null}
!147 = metadata !{i32 29, i32 0, metadata !145, null}
!148 = metadata !{i32 16, i32 0, metadata !88, null}
!149 = metadata !{i32 17, i32 0, metadata !88, null}
!150 = metadata !{i32 19, i32 0, metadata !88, null}
!151 = metadata !{i32 22, i32 0, metadata !88, null}
!152 = metadata !{i32 25, i32 0, metadata !88, null}
!153 = metadata !{i32 26, i32 0, metadata !88, null}
!154 = metadata !{i32 28, i32 0, metadata !88, null}
!155 = metadata !{i32 29, i32 0, metadata !88, null}
!156 = metadata !{i32 32, i32 0, metadata !88, null}
!157 = metadata !{i32 20, i32 0, metadata !88, null}
!158 = metadata !{i32 15, i32 0, metadata !113, null}
!159 = metadata !{i32 16, i32 0, metadata !113, null}
!160 = metadata !{i32 17, i32 0, metadata !113, null}
