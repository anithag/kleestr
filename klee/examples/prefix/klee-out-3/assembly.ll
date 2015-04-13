; ModuleID = 'prefix_lib.o'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

%0 = type { void (i32)* }
%1 = type { %2, [20 x i32] }
%2 = type { i32, i32, i32, i64, i64 }
%struct.Elf64_auxv_t = type { i64, %union.anon }
%struct.FILE = type { i16, [2 x i8], i32, i8*, i8*, i8*, i8*, i8*, i8*, %struct.FILE*, [2 x i32], %struct.__mbstate_t }
%struct.__kernel_termios = type { i32, i32, i32, i32, i8, [19 x i8] }
%struct.__mbstate_t = type { i32, i32 }
%struct.__sigset_t = type { [16 x i64] }
%struct.anon = type { i32, i32 }
%struct.kernel_sigaction = type { void (i32)*, i64, void ()*, %struct.__sigset_t }
%struct.sigaction = type { %0, %struct.__sigset_t, i32, void ()* }
%struct.siginfo_t = type { i32, i32, i32, %1 }
%struct.sigset_t = type { [16 x i64] }
%struct.stat = type { i64, i64, i64, i32, i32, i32, i32, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, [3 x i64] }
%struct.termios = type { i32, i32, i32, i32, i8, [32 x i8], i32, i32 }
%union.anon = type { i64 }
%union.sigval_t = type { i8* }

@.str = private unnamed_addr constant [6 x i8] c"Hello\00", align 1
@.str1 = private unnamed_addr constant [2 x i8] c"a\00", align 1
@__libc_stack_end = global i8* null
@__uclibc_progname = hidden global i8* getelementptr inbounds ([1 x i8]* @.str2, i64 0, i64 0)
@.str2 = private constant [1 x i8] zeroinitializer, align 1
@__environ = global i8** null
@__pagesize = global i64 0
@.str13 = private constant [10 x i8] c"/dev/null\00", align 1
@been_there_done_that.2848 = internal global i32 0
@__app_fini = hidden global void ()* null
@__rtld_fini = hidden global void ()* null
@_stdio_streams = internal global [3 x %struct.FILE] [%struct.FILE { i16 544, [2 x i8] zeroinitializer, i32 0, i8* null, i8* null, i8* null, i8* null, i8* null, i8* null, %struct.FILE* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i
@stdin = global %struct.FILE* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 0)
@stdout = global %struct.FILE* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 1)
@stderr = global %struct.FILE* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 2)
@__stdin = global %struct.FILE* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 0)
@__stdout = global %struct.FILE* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 1)
@_stdio_openlist = global %struct.FILE* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 0)
@been_there_done_that = internal global i32 0
@__exit_cleanup = hidden global void (i32)* null
@errno = global i32 0
@h_errno = global i32 0
@.str24 = private constant [22 x i8] c"klee_div_zero_check.c\00", align 1
@.str125 = private constant [15 x i8] c"divide by zero\00", align 1
@.str226 = private constant [8 x i8] c"div.err\00", align 1
@.str3 = private constant [8 x i8] c"IGNORED\00", align 1
@.str14 = private constant [16 x i8] c"overshift error\00", align 1
@.str25 = private constant [14 x i8] c"overshift.err\00", align 1
@.str6 = private constant [13 x i8] c"klee_range.c\00", align 1
@.str17 = private constant [14 x i8] c"invalid range\00", align 1
@.str28 = private constant [5 x i8] c"user\00", align 1

@environ = alias weak i8*** @__environ
@raise = alias weak i32 (i32)* @__raise
@sigaction = alias weak i32 (i32, %struct.sigaction*, %struct.sigaction*)* @__libc_sigaction

define i32 @prefix(i8* %x) nounwind {
entry:
  %x_addr = alloca i8*, align 8
  %retval = alloca i32
  %0 = alloca i32
  %dictionary = alloca i8*
  %len = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  store i8* %x, i8** %x_addr
  store i8* getelementptr inbounds ([6 x i8]* @.str, i64 0, i64 0), i8** %dictionary, align 8, !dbg !540
  %1 = load i8** %dictionary, align 8, !dbg !542
  %2 = call i64 @strlen(i8* %1) nounwind readonly, !dbg !542
  %3 = trunc i64 %2 to i32, !dbg !542
  store i32 %3, i32* %len, align 4, !dbg !542
  %4 = load i32* %len, align 4, !dbg !543
  %5 = sext i32 %4 to i64, !dbg !543
  %6 = load i8** %x_addr, align 8, !dbg !543
  %7 = load i8** %dictionary, align 8, !dbg !543
  %8 = call i32 @strncmp(i8* %6, i8* %7, i64 %5) nounwind readonly, !dbg !543
  store i32 %8, i32* %0, align 4, !dbg !543
  %9 = load i32* %0, align 4, !dbg !543
  store i32 %9, i32* %retval, align 4, !dbg !543
  %retval1 = load i32* %retval, !dbg !543
  ret i32 %retval1, !dbg !543
}

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define i32 @__user_main() nounwind {
entry:
  %retval = alloca i32
  %0 = alloca i32
  %a = alloca [10 x i8]
  %"alloca point" = bitcast i32 0 to i32
  %a1 = bitcast [10 x i8]* %a to i8*, !dbg !544
  call void @klee_make_symbolic(i8* %a1, i64 10, i8* getelementptr inbounds ([2 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !544
  %1 = getelementptr inbounds [10 x i8]* %a, i64 0, i64 9, !dbg !546
  %2 = load i8* %1, align 1, !dbg !546
  %3 = icmp eq i8 %2, 0, !dbg !546
  %4 = zext i1 %3 to i64, !dbg !546
  call void @klee_assume(i64 %4) nounwind, !dbg !546
  %a2 = bitcast [10 x i8]* %a to i8*, !dbg !547
  %5 = call i32 @prefix(i8* %a2) nounwind, !dbg !547
  store i32 %5, i32* %0, align 4, !dbg !547
  %6 = load i32* %0, align 4, !dbg !547
  store i32 %6, i32* %retval, align 4, !dbg !547
  %retval3 = load i32* %retval, !dbg !547
  ret i32 %retval3, !dbg !547
}

declare void @klee_make_symbolic(i8*, i64, i8*)

declare void @klee_assume(i64)

define internal void @__check_one_fd(i32 %fd, i32 %mode) nounwind {
entry:
  %fd_addr = alloca i32, align 4
  %mode_addr = alloca i32, align 4
  %iftmp.0 = alloca i32
  %st = alloca %struct.stat
  %nullfd = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  store i32 %fd, i32* %fd_addr
  store i32 %mode, i32* %mode_addr
  %0 = load i32* %fd_addr, align 4, !dbg !548
  %1 = call i32 (i32, i32, ...)* @fcntl(i32 %0, i32 1) nounwind, !dbg !548
  %2 = icmp ne i32 %1, -1, !dbg !548
  br i1 %2, label %bb2, label %bb, !dbg !548

bb:                                               ; preds = %entry
  %3 = call i32* @__errno_location() nounwind readnone, !dbg !548
  %4 = load i32* %3, align 4, !dbg !548
  %5 = icmp ne i32 %4, 9, !dbg !548
  br i1 %5, label %bb2, label %bb1, !dbg !548

bb1:                                              ; preds = %bb
  store i32 1, i32* %iftmp.0, align 4, !dbg !548
  br label %bb3, !dbg !548

bb2:                                              ; preds = %bb, %entry
  store i32 0, i32* %iftmp.0, align 4, !dbg !548
  br label %bb3, !dbg !548

bb3:                                              ; preds = %bb2, %bb1
  %6 = load i32* %iftmp.0, align 4, !dbg !548
  %7 = sext i32 %6 to i64, !dbg !548
  %8 = icmp ne i64 %7, 0, !dbg !548
  br i1 %8, label %bb4, label %return, !dbg !548

bb4:                                              ; preds = %bb3
  %9 = load i32* %mode_addr, align 4, !dbg !550
  %10 = call i32 (i8*, i32, ...)* @open(i8* getelementptr inbounds ([10 x i8]* @.str13, i64 0, i64 0), i32 %9) nounwind, !dbg !550
  store i32 %10, i32* %nullfd, align 4, !dbg !550
  %11 = load i32* %nullfd, align 4, !dbg !552
  %12 = load i32* %fd_addr, align 4, !dbg !552
  %13 = icmp ne i32 %11, %12, !dbg !552
  br i1 %13, label %bb8, label %bb5, !dbg !552

bb5:                                              ; preds = %bb4
  %14 = load i32* %fd_addr, align 4, !dbg !552
  %15 = call i32 @fstat(i32 %14, %struct.stat* %st) nounwind, !dbg !552
  %16 = icmp ne i32 %15, 0, !dbg !552
  br i1 %16, label %bb8, label %bb6, !dbg !552

bb6:                                              ; preds = %bb5
  %17 = getelementptr inbounds %struct.stat* %st, i32 0, i32 3, !dbg !552
  %18 = load i32* %17, align 8, !dbg !552
  %19 = and i32 %18, 61440, !dbg !552
  %20 = icmp ne i32 %19, 8192, !dbg !552
  br i1 %20, label %bb8, label %bb7, !dbg !552

bb7:                                              ; preds = %bb6
  %21 = getelementptr inbounds %struct.stat* %st, i32 0, i32 7, !dbg !552
  %22 = load i64* %21, align 8, !dbg !552
  %23 = call i64 @gnu_dev_makedev(i32 1, i32 3) nounwind, !dbg !552
  %24 = icmp ne i64 %22, %23, !dbg !552
  br i1 %24, label %bb8, label %return, !dbg !552

bb8:                                              ; preds = %bb7, %bb6, %bb5, %bb4
  call void @abort() noreturn nounwind, !dbg !553
  unreachable, !dbg !553

return:                                           ; preds = %bb3, %bb7
  ret void, !dbg !554
}

declare i32 @fcntl(i32, i32, ...)

declare i32 @open(i8*, i32, ...)

declare i32 @fstat(i32, %struct.stat*) nounwind

define internal i64 @gnu_dev_makedev(i32 %__major, i32 %__minor) nounwind inlinehint {
entry:
  %__major_addr = alloca i32, align 4
  %__minor_addr = alloca i32, align 4
  %retval = alloca i64
  %0 = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  store i32 %__major, i32* %__major_addr
  store i32 %__minor, i32* %__minor_addr
  %1 = load i32* %__minor_addr, align 4, !dbg !555
  %2 = and i32 %1, 255, !dbg !555
  %3 = load i32* %__major_addr, align 4, !dbg !555
  %4 = and i32 %3, 4095, !dbg !555
  %int_cast_to_i64 = zext i32 8 to i64
  call void @klee_overshift_check(i64 32, i64 %int_cast_to_i64), !dbg !555
  %5 = shl i32 %4, 8, !dbg !555
  %6 = or i32 %2, %5, !dbg !555
  %7 = zext i32 %6 to i64, !dbg !555
  %8 = load i32* %__minor_addr, align 4, !dbg !555
  %9 = zext i32 %8 to i64, !dbg !555
  %10 = and i64 %9, 4294967040, !dbg !555
  %int_cast_to_i641 = bitcast i64 12 to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i641), !dbg !555
  %11 = shl i64 %10, 12, !dbg !555
  %12 = or i64 %7, %11, !dbg !555
  %13 = load i32* %__major_addr, align 4, !dbg !555
  %14 = zext i32 %13 to i64, !dbg !555
  %15 = and i64 %14, 4294963200, !dbg !555
  %int_cast_to_i642 = bitcast i64 32 to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i642), !dbg !555
  %16 = shl i64 %15, 32, !dbg !555
  %17 = or i64 %12, %16, !dbg !555
  store i64 %17, i64* %0, align 8, !dbg !555
  %18 = load i64* %0, align 8, !dbg !555
  store i64 %18, i64* %retval, align 8, !dbg !555
  %retval1 = load i64* %retval, !dbg !555
  ret i64 %retval1, !dbg !555
}

define internal i32 @__check_suid() nounwind {
entry:
  %retval = alloca i32
  %0 = alloca i32
  %uid = alloca i32
  %euid = alloca i32
  %gid = alloca i32
  %egid = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  %1 = call i32 @getuid() nounwind, !dbg !557
  store i32 %1, i32* %uid, align 4, !dbg !557
  %2 = call i32 @geteuid() nounwind, !dbg !559
  store i32 %2, i32* %euid, align 4, !dbg !559
  %3 = call i32 @getgid() nounwind, !dbg !560
  store i32 %3, i32* %gid, align 4, !dbg !560
  %4 = call i32 @getegid() nounwind, !dbg !561
  store i32 %4, i32* %egid, align 4, !dbg !561
  %5 = load i32* %uid, align 4, !dbg !562
  %6 = load i32* %euid, align 4, !dbg !562
  %7 = icmp eq i32 %5, %6, !dbg !562
  br i1 %7, label %bb, label %bb2, !dbg !562

bb:                                               ; preds = %entry
  %8 = load i32* %gid, align 4, !dbg !562
  %9 = load i32* %egid, align 4, !dbg !562
  %10 = icmp eq i32 %8, %9, !dbg !562
  br i1 %10, label %bb1, label %bb2, !dbg !562

bb1:                                              ; preds = %bb
  store i32 0, i32* %0, align 4, !dbg !563
  br label %bb3, !dbg !563

bb2:                                              ; preds = %bb, %entry
  store i32 1, i32* %0, align 4, !dbg !564
  br label %bb3, !dbg !564

bb3:                                              ; preds = %bb2, %bb1
  %11 = load i32* %0, align 4, !dbg !563
  store i32 %11, i32* %retval, align 4, !dbg !563
  %retval4 = load i32* %retval, !dbg !563
  ret i32 %retval4, !dbg !563
}

declare i32 @getuid() nounwind

declare i32 @geteuid() nounwind

declare i32 @getgid() nounwind

declare i32 @getegid() nounwind

define void @__uClibc_init() nounwind {
entry:
  %0 = load i32* @been_there_done_that.2848, align 4, !dbg !565
  %1 = icmp ne i32 %0, 0, !dbg !565
  br i1 %1, label %return, label %bb, !dbg !565

bb:                                               ; preds = %entry
  %2 = load i32* @been_there_done_that.2848, align 4, !dbg !567
  %3 = add nsw i32 %2, 1, !dbg !567
  store i32 %3, i32* @been_there_done_that.2848, align 4, !dbg !567
  store i64 4096, i64* @__pagesize, align 8, !dbg !568
  call void @_stdio_init() nounwind, !dbg !569
  br label %return, !dbg !569

return:                                           ; preds = %entry, %bb
  ret void, !dbg !570
}

define void @__uClibc_fini() nounwind {
entry:
  %0 = load void ()** @__app_fini, align 8, !dbg !571
  %1 = icmp ne void ()* %0, null, !dbg !571
  br i1 %1, label %bb, label %bb1, !dbg !571

bb:                                               ; preds = %entry
  %2 = load void ()** @__app_fini, align 8, !dbg !573
  call void %2() nounwind, !dbg !573
  br label %bb1, !dbg !573

bb1:                                              ; preds = %bb, %entry
  %3 = load void ()** @__rtld_fini, align 8, !dbg !574
  %4 = icmp ne void ()* %3, null, !dbg !574
  br i1 %4, label %bb2, label %return, !dbg !574

bb2:                                              ; preds = %bb1
  %5 = load void ()** @__rtld_fini, align 8, !dbg !575
  call void %5() nounwind, !dbg !575
  br label %return, !dbg !575

return:                                           ; preds = %bb1, %bb2
  ret void, !dbg !576
}

define void @__uClibc_main(i32 (i32, i8**, i8**)* %main, i32 %argc, i8** %argv, void ()* %app_init, void ()* %app_fini, void ()* %rtld_fini, i8* %stack_end) noreturn nounwind {
entry:
  %main_addr = alloca i32 (i32, i8**, i8**)*, align 8
  %argc_addr = alloca i32, align 4
  %argv_addr = alloca i8**, align 8
  %app_init_addr = alloca void ()*, align 8
  %app_fini_addr = alloca void ()*, align 8
  %rtld_fini_addr = alloca void ()*, align 8
  %stack_end_addr = alloca i8*, align 8
  %iftmp.10 = alloca i64
  %aux_dat = alloca i64*
  %auxvt = alloca [15 x %struct.Elf64_auxv_t]
  %auxv_entry = alloca %struct.Elf64_auxv_t*
  %"alloca point" = bitcast i32 0 to i32
  store i32 (i32, i8**, i8**)* %main, i32 (i32, i8**, i8**)** %main_addr
  store i32 %argc, i32* %argc_addr
  store i8** %argv, i8*** %argv_addr
  store void ()* %app_init, void ()** %app_init_addr
  store void ()* %app_fini, void ()** %app_fini_addr
  store void ()* %rtld_fini, void ()** %rtld_fini_addr
  store i8* %stack_end, i8** %stack_end_addr
  %0 = load i8** %stack_end_addr, align 8, !dbg !577
  store i8* %0, i8** @__libc_stack_end, align 8, !dbg !577
  %1 = load void ()** %rtld_fini_addr, align 8, !dbg !579
  store void ()* %1, void ()** @__rtld_fini, align 8, !dbg !579
  %2 = load i32* %argc_addr, align 4, !dbg !580
  %3 = add nsw i32 %2, 1, !dbg !580
  %4 = load i8*** %argv_addr, align 8, !dbg !580
  %5 = sext i32 %3 to i64, !dbg !580
  %6 = getelementptr inbounds i8** %4, i64 %5, !dbg !580
  store i8** %6, i8*** @__environ, align 8, !dbg !580
  %7 = load i8*** %argv_addr, align 8, !dbg !581
  %8 = load i8** %7, align 8, !dbg !581
  %9 = load i8*** @__environ, align 8, !dbg !581
  %10 = bitcast i8** %9 to i8*, !dbg !581
  %11 = icmp eq i8* %8, %10, !dbg !581
  br i1 %11, label %bb, label %bb1, !dbg !581

bb:                                               ; preds = %entry
  %12 = load i8*** %argv_addr, align 8, !dbg !582
  %13 = load i32* %argc_addr, align 4, !dbg !582
  %14 = sext i32 %13 to i64, !dbg !582
  %15 = getelementptr inbounds i8** %12, i64 %14, !dbg !582
  store i8** %15, i8*** @__environ, align 8, !dbg !582
  br label %bb1, !dbg !582

bb1:                                              ; preds = %bb, %entry
  %auxvt2 = bitcast [15 x %struct.Elf64_auxv_t]* %auxvt to %struct.Elf64_auxv_t*, !dbg !583
  %auxvt23 = bitcast %struct.Elf64_auxv_t* %auxvt2 to i8*, !dbg !583
  %16 = call i8* @memset(i8* %auxvt23, i32 0, i64 240) nounwind, !dbg !583
  %17 = load i8*** @__environ, align 8, !dbg !584
  %18 = bitcast i8** %17 to i64*, !dbg !584
  store i64* %18, i64** %aux_dat, align 8, !dbg !584
  br label %bb5, !dbg !584

bb5:                                              ; preds = %bb5, %bb1
  %19 = load i64** %aux_dat, align 8, !dbg !585
  %20 = load i64* %19, align 8, !dbg !585
  %21 = icmp ne i64 %20, 0, !dbg !585
  %22 = load i64** %aux_dat, align 8, !dbg !586
  %23 = getelementptr inbounds i64* %22, i64 1, !dbg !586
  store i64* %23, i64** %aux_dat, align 8, !dbg !586
  br i1 %21, label %bb5, label %bb10, !dbg !585

bb7:                                              ; preds = %bb10
  %24 = load i64** %aux_dat, align 8, !dbg !587
  %25 = bitcast i64* %24 to %struct.Elf64_auxv_t*, !dbg !587
  store %struct.Elf64_auxv_t* %25, %struct.Elf64_auxv_t** %auxv_entry, align 8, !dbg !587
  %26 = load %struct.Elf64_auxv_t** %auxv_entry, align 8, !dbg !589
  %27 = getelementptr inbounds %struct.Elf64_auxv_t* %26, i32 0, i32 0, !dbg !589
  %28 = load i64* %27, align 8, !dbg !589
  %29 = icmp ule i64 %28, 14, !dbg !589
  br i1 %29, label %bb8, label %bb9, !dbg !589

bb8:                                              ; preds = %bb7
  %30 = load %struct.Elf64_auxv_t** %auxv_entry, align 8, !dbg !590
  %31 = getelementptr inbounds %struct.Elf64_auxv_t* %30, i32 0, i32 0, !dbg !590
  %32 = load i64* %31, align 8, !dbg !590
  %33 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 %32, !dbg !590
  %34 = bitcast %struct.Elf64_auxv_t* %33 to i8*, !dbg !590
  %35 = load %struct.Elf64_auxv_t** %auxv_entry, align 8, !dbg !590
  %36 = bitcast %struct.Elf64_auxv_t* %35 to i8*, !dbg !590
  %37 = call i8* @memcpy(i8* noalias %34, i8* noalias %36, i64 16) nounwind, !dbg !590
  br label %bb9, !dbg !590

bb9:                                              ; preds = %bb8, %bb7
  %38 = load i64** %aux_dat, align 8, !dbg !591
  %39 = getelementptr inbounds i64* %38, i64 2, !dbg !591
  store i64* %39, i64** %aux_dat, align 8, !dbg !591
  br label %bb10, !dbg !591

bb10:                                             ; preds = %bb5, %bb9
  %40 = load i64** %aux_dat, align 8, !dbg !592
  %41 = load i64* %40, align 8, !dbg !592
  %42 = icmp ne i64 %41, 0, !dbg !592
  br i1 %42, label %bb7, label %bb11, !dbg !592

bb11:                                             ; preds = %bb10
  call void @__uClibc_init() nounwind, !dbg !593
  %43 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 6, !dbg !594
  %44 = getelementptr inbounds %struct.Elf64_auxv_t* %43, i32 0, i32 1, !dbg !594
  %45 = getelementptr inbounds %union.anon* %44, i32 0, i32 0, !dbg !594
  %46 = load i64* %45, align 8, !dbg !594
  %47 = icmp ne i64 %46, 0, !dbg !594
  br i1 %47, label %bb12, label %bb13, !dbg !594

bb12:                                             ; preds = %bb11
  %48 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 6, !dbg !594
  %49 = getelementptr inbounds %struct.Elf64_auxv_t* %48, i32 0, i32 1, !dbg !594
  %50 = getelementptr inbounds %union.anon* %49, i32 0, i32 0, !dbg !594
  %51 = load i64* %50, align 8, !dbg !594
  store i64 %51, i64* %iftmp.10, align 8, !dbg !594
  br label %bb14, !dbg !594

bb13:                                             ; preds = %bb11
  store i64 4096, i64* %iftmp.10, align 8, !dbg !594
  br label %bb14, !dbg !594

bb14:                                             ; preds = %bb13, %bb12
  %52 = load i64* %iftmp.10, align 8, !dbg !594
  store i64 %52, i64* @__pagesize, align 8, !dbg !594
  %53 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 11, !dbg !595
  %54 = getelementptr inbounds %struct.Elf64_auxv_t* %53, i32 0, i32 1, !dbg !595
  %55 = getelementptr inbounds %union.anon* %54, i32 0, i32 0, !dbg !595
  %56 = load i64* %55, align 8, !dbg !595
  %57 = icmp ne i64 %56, -1, !dbg !595
  br i1 %57, label %bb16, label %bb15, !dbg !595

bb15:                                             ; preds = %bb14
  %58 = call i32 @__check_suid() nounwind, !dbg !595
  %59 = icmp ne i32 %58, 0, !dbg !595
  br i1 %59, label %bb19, label %bb16, !dbg !595

bb16:                                             ; preds = %bb15, %bb14
  %60 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 11, !dbg !595
  %61 = getelementptr inbounds %struct.Elf64_auxv_t* %60, i32 0, i32 1, !dbg !595
  %62 = getelementptr inbounds %union.anon* %61, i32 0, i32 0, !dbg !595
  %63 = load i64* %62, align 8, !dbg !595
  %64 = icmp eq i64 %63, -1, !dbg !595
  br i1 %64, label %bb20, label %bb17, !dbg !595

bb17:                                             ; preds = %bb16
  %65 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 11, !dbg !595
  %66 = getelementptr inbounds %struct.Elf64_auxv_t* %65, i32 0, i32 1, !dbg !595
  %67 = getelementptr inbounds %union.anon* %66, i32 0, i32 0, !dbg !595
  %68 = load i64* %67, align 8, !dbg !595
  %69 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 12, !dbg !595
  %70 = getelementptr inbounds %struct.Elf64_auxv_t* %69, i32 0, i32 1, !dbg !595
  %71 = getelementptr inbounds %union.anon* %70, i32 0, i32 0, !dbg !595
  %72 = load i64* %71, align 8, !dbg !595
  %73 = icmp ne i64 %68, %72, !dbg !595
  br i1 %73, label %bb19, label %bb18, !dbg !595

bb18:                                             ; preds = %bb17
  %74 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 13, !dbg !595
  %75 = getelementptr inbounds %struct.Elf64_auxv_t* %74, i32 0, i32 1, !dbg !595
  %76 = getelementptr inbounds %union.anon* %75, i32 0, i32 0, !dbg !595
  %77 = load i64* %76, align 8, !dbg !595
  %78 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 14, !dbg !595
  %79 = getelementptr inbounds %struct.Elf64_auxv_t* %78, i32 0, i32 1, !dbg !595
  %80 = getelementptr inbounds %union.anon* %79, i32 0, i32 0, !dbg !595
  %81 = load i64* %80, align 8, !dbg !595
  %82 = icmp ne i64 %77, %81, !dbg !595
  br i1 %82, label %bb19, label %bb20, !dbg !595

bb19:                                             ; preds = %bb18, %bb17, %bb15
  call void @__check_one_fd(i32 0, i32 131072) nounwind, !dbg !596
  call void @__check_one_fd(i32 1, i32 131074) nounwind, !dbg !597
  call void @__check_one_fd(i32 2, i32 131074) nounwind, !dbg !598
  br label %bb20, !dbg !598

bb20:                                             ; preds = %bb19, %bb18, %bb16
  %83 = load i8*** %argv_addr, align 8, !dbg !599
  %84 = load i8** %83, align 8, !dbg !599
  store i8* %84, i8** @__uclibc_progname, align 8, !dbg !599
  %85 = load void ()** %app_fini_addr, align 8, !dbg !600
  store void ()* %85, void ()** @__app_fini, align 8, !dbg !600
  %86 = load void ()** %app_init_addr, align 8, !dbg !601
  %87 = icmp ne void ()* %86, null, !dbg !601
  br i1 %87, label %bb21, label %bb22, !dbg !601

bb21:                                             ; preds = %bb20
  %88 = load void ()** %app_init_addr, align 8, !dbg !602
  call void %88() nounwind, !dbg !602
  br label %bb22, !dbg !602

bb22:                                             ; preds = %bb21, %bb20
  %89 = icmp ne i8* bitcast (i32* ()* @__errno_location to i8*), null, !dbg !603
  br i1 %89, label %bb23, label %bb24, !dbg !603

bb23:                                             ; preds = %bb22
  %90 = call i32* @__errno_location() nounwind readnone, !dbg !604
  store i32 0, i32* %90, align 4, !dbg !604
  br label %bb24, !dbg !604

bb24:                                             ; preds = %bb23, %bb22
  %91 = icmp ne i8* bitcast (i32* ()* @__h_errno_location to i8*), null, !dbg !605
  br i1 %91, label %bb25, label %bb26, !dbg !605

bb25:                                             ; preds = %bb24
  %92 = call i32* @__h_errno_location() nounwind readnone, !dbg !606
  store i32 0, i32* %92, align 4, !dbg !606
  br label %bb26, !dbg !606

bb26:                                             ; preds = %bb25, %bb24
  %93 = load i8*** @__environ, align 8, !dbg !607
  %94 = load i32 (i32, i8**, i8**)** %main_addr, align 8, !dbg !607
  %95 = load i32* %argc_addr, align 4, !dbg !607
  %96 = load i8*** %argv_addr, align 8, !dbg !607
  %97 = call i32 %94(i32 %95, i8** %96, i8** %93) nounwind, !dbg !607
  call void @exit(i32 %97) noreturn nounwind, !dbg !607
  unreachable, !dbg !607
}

define i64 @strlen(i8* %s) nounwind readonly {
entry:
  %s_addr = alloca i8*, align 8
  %retval = alloca i64
  %0 = alloca i64
  %p = alloca i8*
  %"alloca point" = bitcast i32 0 to i32
  store i8* %s, i8** %s_addr
  %1 = load i8** %s_addr, align 8, !dbg !608
  store i8* %1, i8** %p, align 8, !dbg !608
  br label %bb1, !dbg !608

bb:                                               ; preds = %bb1
  %2 = getelementptr inbounds i8* %6, i64 1, !dbg !608
  store i8* %2, i8** %p, align 8, !dbg !608
  br label %bb1, !dbg !608

bb1:                                              ; preds = %bb, %entry
  %3 = load i8** %p, align 8, !dbg !608
  %4 = load i8* %3, align 1, !dbg !608
  %5 = icmp ne i8 %4, 0, !dbg !608
  %6 = load i8** %p, align 8, !dbg !608
  br i1 %5, label %bb, label %bb2, !dbg !608

bb2:                                              ; preds = %bb1
  %7 = ptrtoint i8* %6 to i64, !dbg !610
  %8 = load i8** %s_addr, align 8, !dbg !610
  %9 = ptrtoint i8* %8 to i64, !dbg !610
  %10 = sub nsw i64 %7, %9, !dbg !610
  store i64 %10, i64* %0, align 8, !dbg !610
  %11 = load i64* %0, align 8, !dbg !610
  store i64 %11, i64* %retval, align 8, !dbg !610
  %retval3 = load i64* %retval, !dbg !610
  ret i64 %retval3, !dbg !610
}

define i32 @strncmp(i8* %s1, i8* %s2, i64 %n) nounwind readonly {
entry:
  %s1_addr = alloca i8*, align 8
  %s2_addr = alloca i8*, align 8
  %n_addr = alloca i64, align 8
  %retval = alloca i32
  %0 = alloca i32
  %r = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  store i8* %s1, i8** %s1_addr
  store i8* %s2, i8** %s2_addr
  store i64 %n, i64* %n_addr
  store i32 0, i32* %r, align 4, !dbg !611
  br label %bb, !dbg !611

bb:                                               ; preds = %bb5, %entry
  %1 = load i64* %n_addr, align 8, !dbg !613
  %2 = sub i64 %1, 1, !dbg !613
  store i64 %2, i64* %n_addr, align 8, !dbg !613
  %3 = load i64* %n_addr, align 8, !dbg !613
  %4 = icmp eq i64 %3, -1, !dbg !613
  br i1 %4, label %bb7, label %bb1, !dbg !613

bb1:                                              ; preds = %bb
  %5 = load i8** %s1_addr, align 8, !dbg !613
  %6 = load i8* %5, align 1, !dbg !613
  %7 = zext i8 %6 to i32, !dbg !613
  %8 = load i8** %s2_addr, align 8, !dbg !613
  %9 = load i8* %8, align 1, !dbg !613
  %10 = zext i8 %9 to i32, !dbg !613
  %11 = sub nsw i32 %7, %10, !dbg !613
  store i32 %11, i32* %r, align 4, !dbg !613
  %12 = load i32* %r, align 4, !dbg !613
  %13 = icmp eq i32 %12, 0, !dbg !613
  %14 = zext i1 %13 to i8, !dbg !613
  %15 = load i8** %s2_addr, align 8, !dbg !613
  %16 = getelementptr inbounds i8* %15, i64 1, !dbg !613
  store i8* %16, i8** %s2_addr, align 8, !dbg !613
  %toBool = icmp ne i8 %14, 0, !dbg !613
  %toBoolnot = xor i1 %toBool, true, !dbg !613
  %toBoolnot2 = zext i1 %toBoolnot to i8, !dbg !613
  %toBool4 = icmp ne i8 %toBoolnot2, 0, !dbg !613
  br i1 %toBool4, label %bb7, label %bb5, !dbg !613

bb5:                                              ; preds = %bb1
  %17 = load i8** %s1_addr, align 8, !dbg !613
  %18 = load i8* %17, align 1, !dbg !613
  %19 = icmp ne i8 %18, 0, !dbg !613
  %20 = zext i1 %19 to i8, !dbg !613
  %21 = load i8** %s1_addr, align 8, !dbg !613
  %22 = getelementptr inbounds i8* %21, i64 1, !dbg !613
  store i8* %22, i8** %s1_addr, align 8, !dbg !613
  %toBool6 = icmp ne i8 %20, 0, !dbg !613
  br i1 %toBool6, label %bb, label %bb7, !dbg !613

bb7:                                              ; preds = %bb5, %bb1, %bb
  %23 = load i32* %r, align 4, !dbg !614
  store i32 %23, i32* %0, align 4, !dbg !614
  %24 = load i32* %0, align 4, !dbg !614
  store i32 %24, i32* %retval, align 4, !dbg !614
  %retval8 = load i32* %retval, !dbg !614
  ret i32 %retval8, !dbg !614
}

define weak i32* @__errno_location() nounwind readnone {
entry:
  %retval = alloca i32*
  %0 = alloca i32*
  %"alloca point" = bitcast i32 0 to i32
  store i32* @errno, i32** %0, align 8, !dbg !615
  %1 = load i32** %0, align 8, !dbg !615
  store i32* %1, i32** %retval, align 8, !dbg !615
  %retval1 = load i32** %retval, !dbg !615
  ret i32* %retval1, !dbg !615
}

define weak i32* @__h_errno_location() nounwind readnone {
entry:
  %retval = alloca i32*
  %0 = alloca i32*
  %"alloca point" = bitcast i32 0 to i32
  store i32* @h_errno, i32** %0, align 8, !dbg !617
  %1 = load i32** %0, align 8, !dbg !617
  store i32* %1, i32** %retval, align 8, !dbg !617
  %retval1 = load i32** %retval, !dbg !617
  ret i32* %retval1, !dbg !617
}

define hidden void @_stdio_term() nounwind {
entry:
  %ptr = alloca %struct.FILE*
  %"alloca point" = bitcast i32 0 to i32
  %0 = load %struct.FILE** @_stdio_openlist, align 8, !dbg !619
  store %struct.FILE* %0, %struct.FILE** %ptr, align 8, !dbg !619
  br label %bb3, !dbg !619

bb:                                               ; preds = %bb3
  %1 = load %struct.FILE** %ptr, align 8, !dbg !621
  %2 = getelementptr inbounds %struct.FILE* %1, i32 0, i32 0, !dbg !621
  %3 = load i16* %2, align 8, !dbg !621
  %4 = zext i16 %3 to i32, !dbg !621
  %5 = and i32 %4, 64, !dbg !621
  %6 = icmp ne i32 %5, 0, !dbg !621
  br i1 %6, label %bb1, label %bb2, !dbg !621

bb1:                                              ; preds = %bb
  %7 = load %struct.FILE** %ptr, align 8, !dbg !622
  %8 = call i64 @__stdio_wcommit(%struct.FILE* noalias %7) nounwind, !dbg !622
  br label %bb2, !dbg !622

bb2:                                              ; preds = %bb1, %bb
  %9 = load %struct.FILE** %ptr, align 8, !dbg !619
  %10 = getelementptr inbounds %struct.FILE* %9, i32 0, i32 9, !dbg !619
  %11 = load %struct.FILE** %10, align 8, !dbg !619
  store %struct.FILE* %11, %struct.FILE** %ptr, align 8, !dbg !619
  br label %bb3, !dbg !619

bb3:                                              ; preds = %bb2, %entry
  %12 = load %struct.FILE** %ptr, align 8, !dbg !619
  %13 = icmp ne %struct.FILE* %12, null, !dbg !619
  br i1 %13, label %bb, label %return, !dbg !619

return:                                           ; preds = %bb3
  ret void, !dbg !623
}

define hidden void @_stdio_init() nounwind {
entry:
  %old_errno = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  %0 = load i32* @errno, align 4, !dbg !624
  store i32 %0, i32* %old_errno, align 4, !dbg !624
  %1 = load i16* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 0, i32 0), align 8, !dbg !626
  %2 = call i32 @isatty(i32 0) nounwind, !dbg !626
  %3 = sub nsw i32 1, %2, !dbg !626
  %4 = mul i32 %3, 256, !dbg !626
  %5 = trunc i32 %4 to i16, !dbg !626
  %6 = xor i16 %1, %5, !dbg !626
  store i16 %6, i16* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 0, i32 0), align 8, !dbg !626
  %7 = load i16* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 1, i32 0), align 8, !dbg !627
  %8 = call i32 @isatty(i32 1) nounwind, !dbg !627
  %9 = sub nsw i32 1, %8, !dbg !627
  %10 = mul i32 %9, 256, !dbg !627
  %11 = trunc i32 %10 to i16, !dbg !627
  %12 = xor i16 %7, %11, !dbg !627
  store i16 %12, i16* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 1, i32 0), align 8, !dbg !627
  %13 = load i32* %old_errno, align 4, !dbg !628
  store i32 %13, i32* @errno, align 4, !dbg !628
  ret void, !dbg !629
}

declare void @abort() noreturn nounwind

declare i32 @sigprocmask(i32, %struct.__sigset_t* noalias, %struct.__sigset_t* noalias) nounwind

declare void @_exit(i32) noreturn

define void @exit(i32 %rv) noreturn nounwind {
entry:
  %rv_addr = alloca i32, align 4
  %"alloca point" = bitcast i32 0 to i32
  store i32 %rv, i32* %rv_addr
  %0 = load void (i32)** @__exit_cleanup, align 8, !dbg !630
  %1 = icmp ne void (i32)* %0, null, !dbg !630
  br i1 %1, label %bb, label %bb1, !dbg !630

bb:                                               ; preds = %entry
  %2 = load void (i32)** @__exit_cleanup, align 8, !dbg !632
  %3 = load i32* %rv_addr, align 4, !dbg !632
  call void %2(i32 %3) nounwind, !dbg !632
  br label %bb1, !dbg !632

bb1:                                              ; preds = %bb, %entry
  call void @__uClibc_fini() nounwind, !dbg !633
  call void @_stdio_term() nounwind, !dbg !634
  %4 = load i32* %rv_addr, align 4, !dbg !635
  call void @_exit(i32 %4) noreturn nounwind, !dbg !635
  unreachable, !dbg !635
}

define i8* @memcpy(i8* noalias %s1, i8* noalias %s2, i64 %n) nounwind {
entry:
  %s1_addr = alloca i8*, align 8
  %s2_addr = alloca i8*, align 8
  %n_addr = alloca i64, align 8
  %retval = alloca i8*
  %0 = alloca i8*
  %r1 = alloca i8*
  %r2 = alloca i8*
  %"alloca point" = bitcast i32 0 to i32
  store i8* %s1, i8** %s1_addr
  store i8* %s2, i8** %s2_addr
  store i64 %n, i64* %n_addr
  %1 = load i8** %s1_addr, align 8, !dbg !636
  store i8* %1, i8** %r1, align 8, !dbg !636
  %2 = load i8** %s2_addr, align 8, !dbg !638
  store i8* %2, i8** %r2, align 8, !dbg !638
  br label %bb1, !dbg !638

bb:                                               ; preds = %bb1
  %3 = load i8** %r2, align 8, !dbg !639
  %4 = load i8* %3, align 1, !dbg !639
  %5 = load i8** %r1, align 8, !dbg !639
  store i8 %4, i8* %5, align 1, !dbg !639
  %6 = load i8** %r1, align 8, !dbg !639
  %7 = getelementptr inbounds i8* %6, i64 1, !dbg !639
  store i8* %7, i8** %r1, align 8, !dbg !639
  %8 = load i8** %r2, align 8, !dbg !639
  %9 = getelementptr inbounds i8* %8, i64 1, !dbg !639
  store i8* %9, i8** %r2, align 8, !dbg !639
  %10 = load i64* %n_addr, align 8, !dbg !640
  %11 = sub i64 %10, 1, !dbg !640
  store i64 %11, i64* %n_addr, align 8, !dbg !640
  br label %bb1, !dbg !640

bb1:                                              ; preds = %bb, %entry
  %12 = load i64* %n_addr, align 8, !dbg !641
  %13 = icmp ne i64 %12, 0, !dbg !641
  br i1 %13, label %bb, label %bb2, !dbg !641

bb2:                                              ; preds = %bb1
  %14 = load i8** %s1_addr, align 8, !dbg !642
  store i8* %14, i8** %0, align 8, !dbg !642
  %15 = load i8** %0, align 8, !dbg !642
  store i8* %15, i8** %retval, align 8, !dbg !642
  %retval3 = load i8** %retval, !dbg !642
  ret i8* %retval3, !dbg !642
}

define i8* @memset(i8* %s, i32 %c, i64 %n) nounwind {
entry:
  %s_addr = alloca i8*, align 8
  %c_addr = alloca i32, align 4
  %n_addr = alloca i64, align 8
  %retval = alloca i8*
  %0 = alloca i8*
  %p = alloca i8*
  %"alloca point" = bitcast i32 0 to i32
  store i8* %s, i8** %s_addr
  store i32 %c, i32* %c_addr
  store i64 %n, i64* %n_addr
  %1 = load i8** %s_addr, align 8, !dbg !643
  store i8* %1, i8** %p, align 8, !dbg !643
  br label %bb1, !dbg !643

bb:                                               ; preds = %bb1
  %2 = load i32* %c_addr, align 4, !dbg !645
  %3 = trunc i32 %2 to i8, !dbg !645
  %4 = load i8** %p, align 8, !dbg !645
  store i8 %3, i8* %4, align 1, !dbg !645
  %5 = load i8** %p, align 8, !dbg !645
  %6 = getelementptr inbounds i8* %5, i64 1, !dbg !645
  store i8* %6, i8** %p, align 8, !dbg !645
  %7 = load i64* %n_addr, align 8, !dbg !646
  %8 = sub i64 %7, 1, !dbg !646
  store i64 %8, i64* %n_addr, align 8, !dbg !646
  br label %bb1, !dbg !646

bb1:                                              ; preds = %bb, %entry
  %9 = load i64* %n_addr, align 8, !dbg !647
  %10 = icmp ne i64 %9, 0, !dbg !647
  br i1 %10, label %bb, label %bb2, !dbg !647

bb2:                                              ; preds = %bb1
  %11 = load i8** %s_addr, align 8, !dbg !648
  store i8* %11, i8** %0, align 8, !dbg !648
  %12 = load i8** %0, align 8, !dbg !648
  store i8* %12, i8** %retval, align 8, !dbg !648
  %retval3 = load i8** %retval, !dbg !648
  ret i8* %retval3, !dbg !648
}

define i32 @__sigismember(%struct.__sigset_t* %__set, i32 %__sig) nounwind {
entry:
  %__set_addr = alloca %struct.__sigset_t*, align 8
  %__sig_addr = alloca i32, align 4
  %retval = alloca i32
  %0 = alloca i32
  %__mask = alloca i64
  %__word = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  store %struct.__sigset_t* %__set, %struct.__sigset_t** %__set_addr
  store i32 %__sig, i32* %__sig_addr
  %1 = load i32* %__sig_addr, align 4, !dbg !649
  %2 = sub nsw i32 %1, 1, !dbg !649
  %3 = and i32 %2, 63, !dbg !649
  %.cast = zext i32 %3 to i64, !dbg !649
  %int_cast_to_i641 = bitcast i64 %.cast to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i641), !dbg !649
  %4 = shl i64 1, %.cast, !dbg !649
  store i64 %4, i64* %__mask, align 8, !dbg !649
  %5 = load i32* %__sig_addr, align 4, !dbg !649
  %6 = sub nsw i32 %5, 1, !dbg !649
  %7 = sext i32 %6 to i64, !dbg !649
  %int_cast_to_i64 = bitcast i64 64 to i64
  call void @klee_div_zero_check(i64 %int_cast_to_i64), !dbg !649
  %8 = udiv i64 %7, 64, !dbg !649
  store i64 %8, i64* %__word, align 8, !dbg !649
  %9 = load i64* %__word, align 8, !dbg !649
  %10 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !649
  %11 = getelementptr inbounds %struct.__sigset_t* %10, i32 0, i32 0, !dbg !649
  %12 = getelementptr inbounds [16 x i64]* %11, i64 0, i64 %9, !dbg !649
  %13 = load i64* %12, align 8, !dbg !649
  %14 = load i64* %__mask, align 8, !dbg !649
  %15 = and i64 %13, %14, !dbg !649
  %16 = icmp ne i64 %15, 0, !dbg !649
  %17 = zext i1 %16 to i32, !dbg !649
  store i32 %17, i32* %0, align 4, !dbg !649
  %18 = load i32* %0, align 4, !dbg !649
  store i32 %18, i32* %retval, align 4, !dbg !649
  %retval1 = load i32* %retval, !dbg !649
  ret i32 %retval1, !dbg !650
}

define i32 @__sigaddset(%struct.__sigset_t* %__set, i32 %__sig) nounwind {
entry:
  %__set_addr = alloca %struct.__sigset_t*, align 8
  %__sig_addr = alloca i32, align 4
  %retval = alloca i32
  %0 = alloca i32
  %__mask = alloca i64
  %__word = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  store %struct.__sigset_t* %__set, %struct.__sigset_t** %__set_addr
  store i32 %__sig, i32* %__sig_addr
  %1 = load i32* %__sig_addr, align 4, !dbg !652
  %2 = sub nsw i32 %1, 1, !dbg !652
  %3 = and i32 %2, 63, !dbg !652
  %.cast = zext i32 %3 to i64, !dbg !652
  %int_cast_to_i641 = bitcast i64 %.cast to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i641), !dbg !652
  %4 = shl i64 1, %.cast, !dbg !652
  store i64 %4, i64* %__mask, align 8, !dbg !652
  %5 = load i32* %__sig_addr, align 4, !dbg !652
  %6 = sub nsw i32 %5, 1, !dbg !652
  %7 = sext i32 %6 to i64, !dbg !652
  %int_cast_to_i64 = bitcast i64 64 to i64
  call void @klee_div_zero_check(i64 %int_cast_to_i64), !dbg !652
  %8 = udiv i64 %7, 64, !dbg !652
  store i64 %8, i64* %__word, align 8, !dbg !652
  %9 = load i64* %__word, align 8, !dbg !652
  %10 = load i64* %__word, align 8, !dbg !652
  %11 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !652
  %12 = getelementptr inbounds %struct.__sigset_t* %11, i32 0, i32 0, !dbg !652
  %13 = getelementptr inbounds [16 x i64]* %12, i64 0, i64 %10, !dbg !652
  %14 = load i64* %13, align 8, !dbg !652
  %15 = load i64* %__mask, align 8, !dbg !652
  %16 = or i64 %14, %15, !dbg !652
  %17 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !652
  %18 = getelementptr inbounds %struct.__sigset_t* %17, i32 0, i32 0, !dbg !652
  %19 = getelementptr inbounds [16 x i64]* %18, i64 0, i64 %9, !dbg !652
  store i64 %16, i64* %19, align 8, !dbg !652
  store i32 0, i32* %0, align 4, !dbg !652
  %20 = load i32* %0, align 4, !dbg !652
  store i32 %20, i32* %retval, align 4, !dbg !652
  %retval1 = load i32* %retval, !dbg !652
  ret i32 %retval1, !dbg !653
}

define i32 @__sigdelset(%struct.__sigset_t* %__set, i32 %__sig) nounwind {
entry:
  %__set_addr = alloca %struct.__sigset_t*, align 8
  %__sig_addr = alloca i32, align 4
  %retval = alloca i32
  %0 = alloca i32
  %__mask = alloca i64
  %__word = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  store %struct.__sigset_t* %__set, %struct.__sigset_t** %__set_addr
  store i32 %__sig, i32* %__sig_addr
  %1 = load i32* %__sig_addr, align 4, !dbg !655
  %2 = sub nsw i32 %1, 1, !dbg !655
  %3 = and i32 %2, 63, !dbg !655
  %.cast = zext i32 %3 to i64, !dbg !655
  %int_cast_to_i641 = bitcast i64 %.cast to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i641), !dbg !655
  %4 = shl i64 1, %.cast, !dbg !655
  store i64 %4, i64* %__mask, align 8, !dbg !655
  %5 = load i32* %__sig_addr, align 4, !dbg !655
  %6 = sub nsw i32 %5, 1, !dbg !655
  %7 = sext i32 %6 to i64, !dbg !655
  %int_cast_to_i64 = bitcast i64 64 to i64
  call void @klee_div_zero_check(i64 %int_cast_to_i64), !dbg !655
  %8 = udiv i64 %7, 64, !dbg !655
  store i64 %8, i64* %__word, align 8, !dbg !655
  %9 = load i64* %__word, align 8, !dbg !655
  %10 = load i64* %__word, align 8, !dbg !655
  %11 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !655
  %12 = getelementptr inbounds %struct.__sigset_t* %11, i32 0, i32 0, !dbg !655
  %13 = getelementptr inbounds [16 x i64]* %12, i64 0, i64 %10, !dbg !655
  %14 = load i64* %13, align 8, !dbg !655
  %15 = load i64* %__mask, align 8, !dbg !655
  %not = xor i64 %15, -1, !dbg !655
  %16 = and i64 %14, %not, !dbg !655
  %17 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !655
  %18 = getelementptr inbounds %struct.__sigset_t* %17, i32 0, i32 0, !dbg !655
  %19 = getelementptr inbounds [16 x i64]* %18, i64 0, i64 %9, !dbg !655
  store i64 %16, i64* %19, align 8, !dbg !655
  store i32 0, i32* %0, align 4, !dbg !655
  %20 = load i32* %0, align 4, !dbg !655
  store i32 %20, i32* %retval, align 4, !dbg !655
  %retval2 = load i32* %retval, !dbg !655
  ret i32 %retval2, !dbg !656
}

define hidden i64 @__stdio_wcommit(%struct.FILE* noalias %stream) nounwind {
entry:
  %stream_addr = alloca %struct.FILE*, align 8
  %retval = alloca i64
  %0 = alloca i64
  %bufsize = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  store %struct.FILE* %stream, %struct.FILE** %stream_addr
  %1 = load %struct.FILE** %stream_addr, align 8, !dbg !658
  %2 = getelementptr inbounds %struct.FILE* %1, i32 0, i32 5, !dbg !658
  %3 = load i8** %2, align 8, !dbg !658
  %4 = ptrtoint i8* %3 to i64, !dbg !658
  %5 = load %struct.FILE** %stream_addr, align 8, !dbg !658
  %6 = getelementptr inbounds %struct.FILE* %5, i32 0, i32 3, !dbg !658
  %7 = load i8** %6, align 8, !dbg !658
  %8 = ptrtoint i8* %7 to i64, !dbg !658
  %9 = sub nsw i64 %4, %8, !dbg !658
  store i64 %9, i64* %bufsize, align 8, !dbg !658
  %10 = load i64* %bufsize, align 8, !dbg !658
  %11 = icmp ne i64 %10, 0, !dbg !658
  br i1 %11, label %bb, label %bb1, !dbg !658

bb:                                               ; preds = %entry
  %12 = load %struct.FILE** %stream_addr, align 8, !dbg !660
  %13 = getelementptr inbounds %struct.FILE* %12, i32 0, i32 3, !dbg !660
  %14 = load i8** %13, align 8, !dbg !660
  %15 = load %struct.FILE** %stream_addr, align 8, !dbg !660
  %16 = getelementptr inbounds %struct.FILE* %15, i32 0, i32 5, !dbg !660
  store i8* %14, i8** %16, align 8, !dbg !660
  %17 = load %struct.FILE** %stream_addr, align 8, !dbg !661
  %18 = getelementptr inbounds %struct.FILE* %17, i32 0, i32 3, !dbg !661
  %19 = load i8** %18, align 8, !dbg !661
  %20 = load %struct.FILE** %stream_addr, align 8, !dbg !661
  %21 = load i64* %bufsize, align 8, !dbg !661
  %22 = call i64 @__stdio_WRITE(%struct.FILE* %20, i8* %19, i64 %21) nounwind, !dbg !661
  br label %bb1, !dbg !661

bb1:                                              ; preds = %bb, %entry
  %23 = load %struct.FILE** %stream_addr, align 8, !dbg !662
  %24 = getelementptr inbounds %struct.FILE* %23, i32 0, i32 5, !dbg !662
  %25 = load i8** %24, align 8, !dbg !662
  %26 = ptrtoint i8* %25 to i64, !dbg !662
  %27 = load %struct.FILE** %stream_addr, align 8, !dbg !662
  %28 = getelementptr inbounds %struct.FILE* %27, i32 0, i32 3, !dbg !662
  %29 = load i8** %28, align 8, !dbg !662
  %30 = ptrtoint i8* %29 to i64, !dbg !662
  %31 = sub nsw i64 %26, %30, !dbg !662
  store i64 %31, i64* %0, align 8, !dbg !662
  %32 = load i64* %0, align 8, !dbg !662
  store i64 %32, i64* %retval, align 8, !dbg !662
  %retval2 = load i64* %retval, !dbg !662
  ret i64 %retval2, !dbg !662
}

define i32 @isatty(i32 %fd) nounwind {
entry:
  %fd_addr = alloca i32, align 4
  %retval = alloca i32
  %0 = alloca i32
  %term = alloca %struct.termios
  %"alloca point" = bitcast i32 0 to i32
  store i32 %fd, i32* %fd_addr
  %1 = load i32* %fd_addr, align 4, !dbg !663
  %2 = call i32 @tcgetattr(i32 %1, %struct.termios* %term) nounwind, !dbg !663
  %3 = icmp eq i32 %2, 0, !dbg !663
  %4 = zext i1 %3 to i32, !dbg !663
  store i32 %4, i32* %0, align 4, !dbg !663
  %5 = load i32* %0, align 4, !dbg !663
  store i32 %5, i32* %retval, align 4, !dbg !663
  %retval1 = load i32* %retval, !dbg !663
  ret i32 %retval1, !dbg !663
}

define hidden i32 @__raise(i32 %signo) nounwind {
entry:
  %signo_addr = alloca i32, align 4
  %retval = alloca i32
  %0 = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  store i32 %signo, i32* %signo_addr
  %1 = call i32 @getpid() nounwind, !dbg !665
  %2 = load i32* %signo_addr, align 4, !dbg !665
  %3 = call i32 @kill(i32 %1, i32 %2) nounwind, !dbg !665
  store i32 %3, i32* %0, align 4, !dbg !665
  %4 = load i32* %0, align 4, !dbg !665
  store i32 %4, i32* %retval, align 4, !dbg !665
  %retval1 = load i32* %retval, !dbg !665
  ret i32 %retval1, !dbg !665
}

declare i32 @getpid() nounwind

declare i32 @kill(i32, i32) nounwind

define i32 @__libc_sigaction(i32 %sig, %struct.sigaction* %act, %struct.sigaction* %oact) nounwind {
entry:
  %sig_addr = alloca i32, align 4
  %act_addr = alloca %struct.sigaction*, align 8
  %oact_addr = alloca %struct.sigaction*, align 8
  %retval = alloca i32
  %0 = alloca i32
  %iftmp.1 = alloca %struct.kernel_sigaction*
  %iftmp.0 = alloca %struct.kernel_sigaction*
  %result = alloca i32
  %kact = alloca %struct.kernel_sigaction
  %koact = alloca %struct.kernel_sigaction
  %"alloca point" = bitcast i32 0 to i32
  store i32 %sig, i32* %sig_addr
  store %struct.sigaction* %act, %struct.sigaction** %act_addr
  store %struct.sigaction* %oact, %struct.sigaction** %oact_addr
  %1 = load %struct.sigaction** %act_addr, align 8, !dbg !667
  %2 = icmp ne %struct.sigaction* %1, null, !dbg !667
  br i1 %2, label %bb, label %bb1, !dbg !667

bb:                                               ; preds = %entry
  %3 = load %struct.sigaction** %act_addr, align 8, !dbg !669
  %4 = getelementptr inbounds %struct.sigaction* %3, i32 0, i32 0, !dbg !669
  %5 = getelementptr inbounds %0* %4, i32 0, i32 0, !dbg !669
  %6 = load void (i32)** %5, align 8, !dbg !669
  %7 = getelementptr inbounds %struct.kernel_sigaction* %kact, i32 0, i32 0, !dbg !669
  store void (i32)* %6, void (i32)** %7, align 8, !dbg !669
  %8 = load %struct.sigaction** %act_addr, align 8, !dbg !670
  %9 = getelementptr inbounds %struct.sigaction* %8, i32 0, i32 1, !dbg !670
  %10 = getelementptr inbounds %struct.kernel_sigaction* %kact, i32 0, i32 3, !dbg !670
  %11 = bitcast %struct.__sigset_t* %10 to i8*, !dbg !670
  %12 = bitcast %struct.__sigset_t* %9 to i8*, !dbg !670
  %13 = call i8* @memcpy(i8* noalias %11, i8* noalias %12, i64 128) nounwind, !dbg !670
  %14 = load %struct.sigaction** %act_addr, align 8, !dbg !671
  %15 = getelementptr inbounds %struct.sigaction* %14, i32 0, i32 2, !dbg !671
  %16 = load i32* %15, align 8, !dbg !671
  %17 = sext i32 %16 to i64, !dbg !671
  %18 = getelementptr inbounds %struct.kernel_sigaction* %kact, i32 0, i32 1, !dbg !671
  store i64 %17, i64* %18, align 8, !dbg !671
  %19 = load %struct.sigaction** %act_addr, align 8, !dbg !672
  %20 = getelementptr inbounds %struct.sigaction* %19, i32 0, i32 3, !dbg !672
  %21 = load void ()** %20, align 8, !dbg !672
  %22 = getelementptr inbounds %struct.kernel_sigaction* %kact, i32 0, i32 2, !dbg !672
  store void ()* %21, void ()** %22, align 8, !dbg !672
  br label %bb1, !dbg !672

bb1:                                              ; preds = %bb, %entry
  %23 = load %struct.sigaction** %oact_addr, align 8, !dbg !673
  %24 = icmp ne %struct.sigaction* %23, null, !dbg !673
  br i1 %24, label %bb2, label %bb3, !dbg !673

bb2:                                              ; preds = %bb1
  store %struct.kernel_sigaction* %koact, %struct.kernel_sigaction** %iftmp.0, align 8, !dbg !673
  br label %bb4, !dbg !673

bb3:                                              ; preds = %bb1
  store %struct.kernel_sigaction* null, %struct.kernel_sigaction** %iftmp.0, align 8, !dbg !673
  br label %bb4, !dbg !673

bb4:                                              ; preds = %bb3, %bb2
  %25 = load %struct.sigaction** %act_addr, align 8, !dbg !673
  %26 = icmp ne %struct.sigaction* %25, null, !dbg !673
  br i1 %26, label %bb5, label %bb6, !dbg !673

bb5:                                              ; preds = %bb4
  store %struct.kernel_sigaction* %kact, %struct.kernel_sigaction** %iftmp.1, align 8, !dbg !673
  br label %bb7, !dbg !673

bb6:                                              ; preds = %bb4
  store %struct.kernel_sigaction* null, %struct.kernel_sigaction** %iftmp.1, align 8, !dbg !673
  br label %bb7, !dbg !673

bb7:                                              ; preds = %bb6, %bb5
  %27 = load i32* %sig_addr, align 4, !dbg !673
  %28 = load %struct.kernel_sigaction** %iftmp.1, align 8, !dbg !673
  %29 = load %struct.kernel_sigaction** %iftmp.0, align 8, !dbg !673
  %30 = call i32 @__syscall_rt_sigaction(i32 %27, %struct.kernel_sigaction* %28, %struct.kernel_sigaction* %29, i64 8) nounwind, !dbg !673
  store i32 %30, i32* %result, align 4, !dbg !673
  %31 = load %struct.sigaction** %oact_addr, align 8, !dbg !674
  %32 = icmp ne %struct.sigaction* %31, null, !dbg !674
  br i1 %32, label %bb8, label %bb10, !dbg !674

bb8:                                              ; preds = %bb7
  %33 = load i32* %result, align 4, !dbg !674
  %34 = icmp sge i32 %33, 0, !dbg !674
  br i1 %34, label %bb9, label %bb10, !dbg !674

bb9:                                              ; preds = %bb8
  %35 = getelementptr inbounds %struct.kernel_sigaction* %koact, i32 0, i32 0, !dbg !675
  %36 = load void (i32)** %35, align 8, !dbg !675
  %37 = load %struct.sigaction** %oact_addr, align 8, !dbg !675
  %38 = getelementptr inbounds %struct.sigaction* %37, i32 0, i32 0, !dbg !675
  %39 = getelementptr inbounds %0* %38, i32 0, i32 0, !dbg !675
  store void (i32)* %36, void (i32)** %39, align 8, !dbg !675
  %40 = load %struct.sigaction** %oact_addr, align 8, !dbg !676
  %41 = getelementptr inbounds %struct.sigaction* %40, i32 0, i32 1, !dbg !676
  %42 = bitcast %struct.__sigset_t* %41 to i8*, !dbg !676
  %43 = getelementptr inbounds %struct.kernel_sigaction* %koact, i32 0, i32 3, !dbg !676
  %44 = bitcast %struct.__sigset_t* %43 to i8*, !dbg !676
  %45 = call i8* @memcpy(i8* noalias %42, i8* noalias %44, i64 128) nounwind, !dbg !676
  %46 = getelementptr inbounds %struct.kernel_sigaction* %koact, i32 0, i32 1, !dbg !677
  %47 = load i64* %46, align 8, !dbg !677
  %48 = trunc i64 %47 to i32, !dbg !677
  %49 = load %struct.sigaction** %oact_addr, align 8, !dbg !677
  %50 = getelementptr inbounds %struct.sigaction* %49, i32 0, i32 2, !dbg !677
  store i32 %48, i32* %50, align 8, !dbg !677
  %51 = getelementptr inbounds %struct.kernel_sigaction* %koact, i32 0, i32 2, !dbg !678
  %52 = load void ()** %51, align 8, !dbg !678
  %53 = load %struct.sigaction** %oact_addr, align 8, !dbg !678
  %54 = getelementptr inbounds %struct.sigaction* %53, i32 0, i32 3, !dbg !678
  store void ()* %52, void ()** %54, align 8, !dbg !678
  br label %bb10, !dbg !678

bb10:                                             ; preds = %bb9, %bb8, %bb7
  %55 = load i32* %result, align 4, !dbg !679
  store i32 %55, i32* %0, align 4, !dbg !679
  %56 = load i32* %0, align 4, !dbg !679
  store i32 %56, i32* %retval, align 4, !dbg !679
  %retval11 = load i32* %retval, !dbg !679
  ret i32 %retval11, !dbg !679
}

declare hidden i32 @__syscall_rt_sigaction(i32, %struct.kernel_sigaction*, %struct.kernel_sigaction*, i64)

define hidden i64 @__stdio_WRITE(%struct.FILE* %stream, i8* %buf, i64 %bufsize) nounwind {
entry:
  %stream_addr = alloca %struct.FILE*, align 8
  %buf_addr = alloca i8*, align 8
  %bufsize_addr = alloca i64, align 8
  %retval = alloca i64
  %iftmp.0 = alloca i64
  %0 = alloca i64
  %todo = alloca i64
  %rv = alloca i64
  %stodo = alloca i64
  %s = alloca i8*
  %"alloca point" = bitcast i32 0 to i32
  store %struct.FILE* %stream, %struct.FILE** %stream_addr
  store i8* %buf, i8** %buf_addr
  store i64 %bufsize, i64* %bufsize_addr
  %1 = load i64* %bufsize_addr, align 8, !dbg !680
  store i64 %1, i64* %todo, align 8, !dbg !680
  br label %bb, !dbg !680

bb:                                               ; preds = %bb6, %entry
  %2 = load i64* %todo, align 8, !dbg !682
  %3 = icmp eq i64 %2, 0, !dbg !682
  br i1 %3, label %bb1, label %bb2, !dbg !682

bb1:                                              ; preds = %bb
  %4 = load i64* %bufsize_addr, align 8, !dbg !683
  store i64 %4, i64* %0, align 8, !dbg !683
  br label %bb16, !dbg !683

bb2:                                              ; preds = %bb
  %5 = load i64* %todo, align 8, !dbg !684
  %6 = icmp sge i64 %5, 0, !dbg !684
  br i1 %6, label %bb3, label %bb4, !dbg !684

bb3:                                              ; preds = %bb2
  %7 = load i64* %todo, align 8, !dbg !684
  store i64 %7, i64* %iftmp.0, align 8, !dbg !684
  br label %bb5, !dbg !684

bb4:                                              ; preds = %bb2
  store i64 9223372036854775807, i64* %iftmp.0, align 8, !dbg !684
  br label %bb5, !dbg !684

bb5:                                              ; preds = %bb4, %bb3
  %8 = load i64* %iftmp.0, align 8, !dbg !684
  store i64 %8, i64* %stodo, align 8, !dbg !684
  %9 = load i64* %stodo, align 8, !dbg !685
  %10 = load %struct.FILE** %stream_addr, align 8, !dbg !685
  %11 = getelementptr inbounds %struct.FILE* %10, i32 0, i32 2, !dbg !685
  %12 = load i32* %11, align 4, !dbg !685
  %13 = load i8** %buf_addr, align 8, !dbg !685
  %14 = call i64 @write(i32 %12, i8* %13, i64 %9) nounwind, !dbg !685
  store i64 %14, i64* %rv, align 8, !dbg !685
  %15 = load i64* %rv, align 8, !dbg !685
  %16 = icmp sge i64 %15, 0, !dbg !685
  br i1 %16, label %bb6, label %bb7, !dbg !685

bb6:                                              ; preds = %bb5
  %17 = load i64* %rv, align 8, !dbg !686
  %18 = load i64* %todo, align 8, !dbg !686
  %19 = sub i64 %18, %17, !dbg !686
  store i64 %19, i64* %todo, align 8, !dbg !686
  %20 = load i8** %buf_addr, align 8, !dbg !687
  %21 = load i64* %rv, align 8, !dbg !687
  %22 = getelementptr inbounds i8* %20, i64 %21, !dbg !687
  store i8* %22, i8** %buf_addr, align 8, !dbg !687
  br label %bb, !dbg !687

bb7:                                              ; preds = %bb5
  %23 = load %struct.FILE** %stream_addr, align 8, !dbg !688
  %24 = getelementptr inbounds %struct.FILE* %23, i32 0, i32 0, !dbg !688
  %25 = load i16* %24, align 8, !dbg !688
  %26 = or i16 %25, 8, !dbg !688
  %27 = load %struct.FILE** %stream_addr, align 8, !dbg !688
  %28 = getelementptr inbounds %struct.FILE* %27, i32 0, i32 0, !dbg !688
  store i16 %26, i16* %28, align 8, !dbg !688
  %29 = load %struct.FILE** %stream_addr, align 8, !dbg !689
  %30 = getelementptr inbounds %struct.FILE* %29, i32 0, i32 4, !dbg !689
  %31 = load i8** %30, align 8, !dbg !689
  %32 = ptrtoint i8* %31 to i64, !dbg !689
  %33 = load %struct.FILE** %stream_addr, align 8, !dbg !689
  %34 = getelementptr inbounds %struct.FILE* %33, i32 0, i32 3, !dbg !689
  %35 = load i8** %34, align 8, !dbg !689
  %36 = ptrtoint i8* %35 to i64, !dbg !689
  %37 = sub nsw i64 %32, %36, !dbg !689
  store i64 %37, i64* %stodo, align 8, !dbg !689
  %38 = load i64* %stodo, align 8, !dbg !689
  %39 = icmp ne i64 %38, 0, !dbg !689
  br i1 %39, label %bb8, label %bb15, !dbg !689

bb8:                                              ; preds = %bb7
  %40 = load i64* %stodo, align 8, !dbg !690
  %41 = load i64* %todo, align 8, !dbg !690
  %42 = icmp ugt i64 %40, %41, !dbg !690
  br i1 %42, label %bb9, label %bb10, !dbg !690

bb9:                                              ; preds = %bb8
  %43 = load i64* %todo, align 8, !dbg !692
  store i64 %43, i64* %stodo, align 8, !dbg !692
  br label %bb10, !dbg !692

bb10:                                             ; preds = %bb9, %bb8
  %44 = load %struct.FILE** %stream_addr, align 8, !dbg !693
  %45 = getelementptr inbounds %struct.FILE* %44, i32 0, i32 3, !dbg !693
  %46 = load i8** %45, align 8, !dbg !693
  store i8* %46, i8** %s, align 8, !dbg !693
  br label %bb11, !dbg !693

bb11:                                             ; preds = %bb13, %bb10
  %47 = load i8** %buf_addr, align 8, !dbg !694
  %48 = load i8* %47, align 1, !dbg !694
  %49 = load i8** %s, align 8, !dbg !694
  store i8 %48, i8* %49, align 1, !dbg !694
  %50 = load i8** %s, align 8, !dbg !694
  %51 = load i8* %50, align 1, !dbg !694
  %52 = icmp eq i8 %51, 10, !dbg !694
  br i1 %52, label %bb12, label %bb13, !dbg !694

bb12:                                             ; preds = %bb11
  %53 = load %struct.FILE** %stream_addr, align 8, !dbg !694
  %54 = getelementptr inbounds %struct.FILE* %53, i32 0, i32 0, !dbg !694
  %55 = load i16* %54, align 8, !dbg !694
  %56 = zext i16 %55 to i32, !dbg !694
  %57 = and i32 %56, 256, !dbg !694
  %58 = icmp ne i32 %57, 0, !dbg !694
  br i1 %58, label %bb14, label %bb13, !dbg !694

bb13:                                             ; preds = %bb12, %bb11
  %59 = load i8** %s, align 8, !dbg !695
  %60 = getelementptr inbounds i8* %59, i64 1, !dbg !695
  store i8* %60, i8** %s, align 8, !dbg !695
  %61 = load i8** %buf_addr, align 8, !dbg !696
  %62 = getelementptr inbounds i8* %61, i64 1, !dbg !696
  store i8* %62, i8** %buf_addr, align 8, !dbg !696
  %63 = load i64* %stodo, align 8, !dbg !697
  %64 = sub nsw i64 %63, 1, !dbg !697
  store i64 %64, i64* %stodo, align 8, !dbg !697
  %65 = load i64* %stodo, align 8, !dbg !697
  %66 = icmp ne i64 %65, 0, !dbg !697
  br i1 %66, label %bb11, label %bb14, !dbg !697

bb14:                                             ; preds = %bb13, %bb12
  %67 = load %struct.FILE** %stream_addr, align 8, !dbg !698
  %68 = getelementptr inbounds %struct.FILE* %67, i32 0, i32 5, !dbg !698
  %69 = load i8** %s, align 8, !dbg !698
  store i8* %69, i8** %68, align 8, !dbg !698
  %70 = load i8** %s, align 8, !dbg !699
  %71 = ptrtoint i8* %70 to i64, !dbg !699
  %72 = load %struct.FILE** %stream_addr, align 8, !dbg !699
  %73 = getelementptr inbounds %struct.FILE* %72, i32 0, i32 3, !dbg !699
  %74 = load i8** %73, align 8, !dbg !699
  %75 = ptrtoint i8* %74 to i64, !dbg !699
  %76 = sub nsw i64 %71, %75, !dbg !699
  %77 = load i64* %todo, align 8, !dbg !699
  %78 = sub i64 %77, %76, !dbg !699
  store i64 %78, i64* %todo, align 8, !dbg !699
  br label %bb15, !dbg !699

bb15:                                             ; preds = %bb14, %bb7
  %79 = load i64* %bufsize_addr, align 8, !dbg !700
  %80 = load i64* %todo, align 8, !dbg !700
  %81 = sub i64 %79, %80, !dbg !700
  store i64 %81, i64* %0, align 8, !dbg !700
  br label %bb16, !dbg !700

bb16:                                             ; preds = %bb15, %bb1
  %82 = load i64* %0, align 8, !dbg !683
  store i64 %82, i64* %retval, align 8, !dbg !683
  %retval17 = load i64* %retval, !dbg !683
  ret i64 %retval17, !dbg !683
}

declare i64 @write(i32, i8*, i64)

define i32 @tcgetattr(i32 %fd, %struct.termios* %termios_p) nounwind {
entry:
  %fd_addr = alloca i32, align 4
  %termios_p_addr = alloca %struct.termios*, align 8
  %retval = alloca i32
  %0 = alloca i32
  %k_termios = alloca %struct.__kernel_termios
  %retval1 = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  store i32 %fd, i32* %fd_addr
  store %struct.termios* %termios_p, %struct.termios** %termios_p_addr
  %1 = load i32* %fd_addr, align 4, !dbg !701
  %2 = call i32 (i32, i64, ...)* @ioctl(i32 %1, i64 21505, %struct.__kernel_termios* %k_termios) nounwind, !dbg !701
  store i32 %2, i32* %retval1, align 4, !dbg !701
  %3 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 0, !dbg !703
  %4 = load i32* %3, align 4, !dbg !703
  %5 = load %struct.termios** %termios_p_addr, align 8, !dbg !703
  %6 = getelementptr inbounds %struct.termios* %5, i32 0, i32 0, !dbg !703
  store i32 %4, i32* %6, align 4, !dbg !703
  %7 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 1, !dbg !704
  %8 = load i32* %7, align 4, !dbg !704
  %9 = load %struct.termios** %termios_p_addr, align 8, !dbg !704
  %10 = getelementptr inbounds %struct.termios* %9, i32 0, i32 1, !dbg !704
  store i32 %8, i32* %10, align 4, !dbg !704
  %11 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 2, !dbg !705
  %12 = load i32* %11, align 4, !dbg !705
  %13 = load %struct.termios** %termios_p_addr, align 8, !dbg !705
  %14 = getelementptr inbounds %struct.termios* %13, i32 0, i32 2, !dbg !705
  store i32 %12, i32* %14, align 4, !dbg !705
  %15 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 3, !dbg !706
  %16 = load i32* %15, align 4, !dbg !706
  %17 = load %struct.termios** %termios_p_addr, align 8, !dbg !706
  %18 = getelementptr inbounds %struct.termios* %17, i32 0, i32 3, !dbg !706
  store i32 %16, i32* %18, align 4, !dbg !706
  %19 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 4, !dbg !707
  %20 = load i8* %19, align 4, !dbg !707
  %21 = load %struct.termios** %termios_p_addr, align 8, !dbg !707
  %22 = getelementptr inbounds %struct.termios* %21, i32 0, i32 4, !dbg !707
  store i8 %20, i8* %22, align 4, !dbg !707
  %23 = load %struct.termios** %termios_p_addr, align 8, !dbg !708
  %24 = getelementptr inbounds %struct.termios* %23, i32 0, i32 5, !dbg !708
  %25 = getelementptr inbounds [32 x i8]* %24, i64 0, i64 0, !dbg !708
  %26 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 5, !dbg !708
  %27 = getelementptr inbounds [19 x i8]* %26, i64 0, i64 0, !dbg !708
  %28 = call i8* @mempcpy(i8* noalias %25, i8* noalias %27, i64 19) nounwind, !dbg !708
  %29 = call i8* @memset(i8* %28, i32 0, i64 13) nounwind, !dbg !708
  %30 = load i32* %retval1, align 4, !dbg !709
  store i32 %30, i32* %0, align 4, !dbg !709
  %31 = load i32* %0, align 4, !dbg !709
  store i32 %31, i32* %retval, align 4, !dbg !709
  %retval2 = load i32* %retval, !dbg !709
  ret i32 %retval2, !dbg !709
}

declare i32 @ioctl(i32, i64, ...) nounwind

define i8* @mempcpy(i8* noalias %s1, i8* noalias %s2, i64 %n) nounwind {
entry:
  %s1_addr = alloca i8*, align 8
  %s2_addr = alloca i8*, align 8
  %n_addr = alloca i64, align 8
  %retval = alloca i8*
  %0 = alloca i8*
  %r1 = alloca i8*
  %r2 = alloca i8*
  %"alloca point" = bitcast i32 0 to i32
  store i8* %s1, i8** %s1_addr
  store i8* %s2, i8** %s2_addr
  store i64 %n, i64* %n_addr
  %1 = load i8** %s1_addr, align 8, !dbg !710
  store i8* %1, i8** %r1, align 8, !dbg !710
  %2 = load i8** %s2_addr, align 8, !dbg !712
  store i8* %2, i8** %r2, align 8, !dbg !712
  br label %bb1, !dbg !712

bb:                                               ; preds = %bb1
  %3 = load i8** %r2, align 8, !dbg !713
  %4 = load i8* %3, align 1, !dbg !713
  %5 = load i8** %r1, align 8, !dbg !713
  store i8 %4, i8* %5, align 1, !dbg !713
  %6 = load i8** %r1, align 8, !dbg !713
  %7 = getelementptr inbounds i8* %6, i64 1, !dbg !713
  store i8* %7, i8** %r1, align 8, !dbg !713
  %8 = load i8** %r2, align 8, !dbg !713
  %9 = getelementptr inbounds i8* %8, i64 1, !dbg !713
  store i8* %9, i8** %r2, align 8, !dbg !713
  %10 = load i64* %n_addr, align 8, !dbg !714
  %11 = sub i64 %10, 1, !dbg !714
  store i64 %11, i64* %n_addr, align 8, !dbg !714
  br label %bb1, !dbg !714

bb1:                                              ; preds = %bb, %entry
  %12 = load i64* %n_addr, align 8, !dbg !715
  %13 = icmp ne i64 %12, 0, !dbg !715
  br i1 %13, label %bb, label %bb2, !dbg !715

bb2:                                              ; preds = %bb1
  %14 = load i8** %r1, align 8, !dbg !716
  store i8* %14, i8** %0, align 8, !dbg !716
  %15 = load i8** %0, align 8, !dbg !716
  store i8* %15, i8** %retval, align 8, !dbg !716
  %retval3 = load i8** %retval, !dbg !716
  ret i8* %retval3, !dbg !716
}

define i32 @main(i32, i8**) {
entry:
  call void @__uClibc_main(i32 (i32, i8**, i8**)* bitcast (i32 ()* @__user_main to i32 (i32, i8**, i8**)*), i32 %0, i8** %1, void ()* null, void ()* null, void ()* null, i8* null)
  unreachable
}

define void @klee_div_zero_check(i64 %z) nounwind {
entry:
  %0 = icmp eq i64 %z, 0, !dbg !717
  br i1 %0, label %bb, label %return, !dbg !717

bb:                                               ; preds = %entry
  tail call void @klee_report_error(i8* getelementptr inbounds ([22 x i8]* @.str24, i64 0, i64 0), i32 14, i8* getelementptr inbounds ([15 x i8]* @.str125, i64 0, i64 0), i8* getelementptr inbounds ([8 x i8]* @.str226, i64 0, i64 0)) noreturn nounwind, !
  unreachable, !dbg !719

return:                                           ; preds = %entry
  ret void, !dbg !720
}

declare void @klee_report_error(i8*, i32, i8*, i8*) noreturn

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define i32 @klee_int(i8* %name) nounwind {
entry:
  %x = alloca i32, align 4
  %x1 = bitcast i32* %x to i8*, !dbg !721
  call void @klee_make_symbolic(i8* %x1, i64 4, i8* %name) nounwind, !dbg !721
  %0 = load i32* %x, align 4, !dbg !722
  ret i32 %0, !dbg !722
}

define void @klee_overshift_check(i64 %bitWidth, i64 %shift) nounwind {
entry:
  %0 = icmp ult i64 %shift, %bitWidth, !dbg !723
  br i1 %0, label %return, label %bb, !dbg !723

bb:                                               ; preds = %entry
  tail call void @klee_report_error(i8* getelementptr inbounds ([8 x i8]* @.str3, i64 0, i64 0), i32 0, i8* getelementptr inbounds ([16 x i8]* @.str14, i64 0, i64 0), i8* getelementptr inbounds ([14 x i8]* @.str25, i64 0, i64 0)) noreturn nounwind, !dbg 
  unreachable, !dbg !725

return:                                           ; preds = %entry
  ret void, !dbg !726
}

define i32 @klee_range(i32 %start, i32 %end, i8* %name) nounwind {
entry:
  %x = alloca i32, align 4
  %0 = icmp slt i32 %start, %end, !dbg !727
  br i1 %0, label %bb1, label %bb, !dbg !727

bb:                                               ; preds = %entry
  call void @klee_report_error(i8* getelementptr inbounds ([13 x i8]* @.str6, i64 0, i64 0), i32 17, i8* getelementptr inbounds ([14 x i8]* @.str17, i64 0, i64 0), i8* getelementptr inbounds ([5 x i8]* @.str28, i64 0, i64 0)) noreturn nounwind, !dbg !728
  unreachable, !dbg !728

bb1:                                              ; preds = %entry
  %1 = add nsw i32 %start, 1, !dbg !729
  %2 = icmp eq i32 %1, %end, !dbg !729
  br i1 %2, label %bb8, label %bb3, !dbg !729

bb3:                                              ; preds = %bb1
  %x4 = bitcast i32* %x to i8*, !dbg !730
  call void @klee_make_symbolic(i8* %x4, i64 4, i8* %name) nounwind, !dbg !730
  %3 = icmp eq i32 %start, 0, !dbg !731
  %4 = load i32* %x, align 4, !dbg !732
  br i1 %3, label %bb5, label %bb6, !dbg !731

bb5:                                              ; preds = %bb3
  %5 = icmp ult i32 %4, %end, !dbg !732
  %6 = zext i1 %5 to i64, !dbg !732
  call void @klee_assume(i64 %6) nounwind, !dbg !732
  br label %bb7, !dbg !732

bb6:                                              ; preds = %bb3
  %7 = icmp sge i32 %4, %start, !dbg !733
  %8 = zext i1 %7 to i64, !dbg !733
  call void @klee_assume(i64 %8) nounwind, !dbg !733
  %9 = load i32* %x, align 4, !dbg !734
  %10 = icmp slt i32 %9, %end, !dbg !734
  %11 = zext i1 %10 to i64, !dbg !734
  call void @klee_assume(i64 %11) nounwind, !dbg !734
  br label %bb7, !dbg !734

bb7:                                              ; preds = %bb6, %bb5
  %12 = load i32* %x, align 4, !dbg !735
  br label %bb8, !dbg !735

bb8:                                              ; preds = %bb7, %bb1
  %.0 = phi i32 [ %12, %bb7 ], [ %start, %bb1 ]
  ret i32 %.0, !dbg !736
}

!llvm.dbg.sp = !{!0, !8, !11, !17, !23, !26, !29, !30, !41, !52, !64, !71, !78, !82, !83, !87, !94, !103, !113, !129, !130, !131, !173, !179, !185, !283, !325, !351, !360, !366, !375, !381, !390, !399, !408, !417}
!llvm.dbg.gv = !{!427, !428, !431, !432, !436, !437, !438, !439, !475, !477, !478, !479, !480, !481, !482, !484, !486, !490}
!llvm.dbg.lv.klee_div_zero_check = !{!491}
!llvm.dbg.lv.klee_int = !{!492, !493}
!llvm.dbg.lv.klee_overshift_check = !{!495, !496}
!llvm.dbg.lv.klee_range = !{!497, !498, !499, !500}
!llvm.dbg.lv.memcpy = !{!502, !503, !504, !505, !509}
!llvm.dbg.lv.memmove = !{!512, !513, !514, !515, !519}
!llvm.dbg.lv.mempcpy = !{!522, !523, !524, !525, !529}
!llvm.dbg.lv.memset = !{!532, !533, !534, !535}

!0 = metadata !{i32 589870, i32 0, metadata !1, metadata !"prefix", metadata !"prefix", metadata !"prefix", metadata !1, i32 4, metadata !3, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i8*)* @prefix} ; [ DW_TAG_subprogram ]
!1 = metadata !{i32 589865, metadata !"prefix_lib.c", metadata !"/home/anitha/klee/examples/prefix/", metadata !2} ; [ DW_TAG_file_type ]
!2 = metadata !{i32 589841, i32 0, i32 1, metadata !"prefix_lib.c", metadata !"/home/anitha/klee/examples/prefix/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!3 = metadata !{i32 589845, metadata !1, metadata !"", metadata !1, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !4, i32 0, null} ; [ DW_TAG_subroutine_type ]
!4 = metadata !{metadata !5, metadata !6}
!5 = metadata !{i32 589860, metadata !1, metadata !"int", metadata !1, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!6 = metadata !{i32 589839, metadata !1, metadata !"", metadata !1, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !7} ; [ DW_TAG_pointer_type ]
!7 = metadata !{i32 589860, metadata !1, metadata !"char", metadata !1, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!8 = metadata !{i32 589870, i32 0, metadata !1, metadata !"main", metadata !"main", metadata !"main", metadata !1, i32 13, metadata !9, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 ()* @__user_main} ; [ DW_TAG_subprogram ]
!9 = metadata !{i32 589845, metadata !1, metadata !"", metadata !1, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !10, i32 0, null} ; [ DW_TAG_subroutine_type ]
!10 = metadata !{metadata !5}
!11 = metadata !{i32 589870, i32 0, metadata !12, metadata !"__check_one_fd", metadata !"__check_one_fd", metadata !"", metadata !12, i32 137, metadata !14, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i32, i32)* @__check_one_fd} ; [ DW
!12 = metadata !{i32 589865, metadata !"__uClibc_main.c", metadata !"/home/anitha/klee-uclibc/libc/misc/internals", metadata !13} ; [ DW_TAG_file_type ]
!13 = metadata !{i32 589841, i32 0, i32 1, metadata !"__uClibc_main.c", metadata !"/home/anitha/klee-uclibc/libc/misc/internals", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_comp
!14 = metadata !{i32 589845, metadata !12, metadata !"", metadata !12, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !15, i32 0, null} ; [ DW_TAG_subroutine_type ]
!15 = metadata !{null, metadata !16, metadata !16}
!16 = metadata !{i32 589860, metadata !12, metadata !"int", metadata !12, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!17 = metadata !{i32 589870, i32 0, metadata !12, metadata !"gnu_dev_makedev", metadata !"gnu_dev_makedev", metadata !"", metadata !18, i32 55, metadata !19, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, i64 (i32, i32)* @gnu_dev_makedev} ; [ D
!18 = metadata !{i32 589865, metadata !"sysmacros.h", metadata !"/home/anitha/klee-uclibc/./include/sys", metadata !13} ; [ DW_TAG_file_type ]
!19 = metadata !{i32 589845, metadata !12, metadata !"", metadata !12, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !20, i32 0, null} ; [ DW_TAG_subroutine_type ]
!20 = metadata !{metadata !21, metadata !22, metadata !22}
!21 = metadata !{i32 589860, metadata !12, metadata !"long long unsigned int", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!22 = metadata !{i32 589860, metadata !12, metadata !"unsigned int", metadata !12, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!23 = metadata !{i32 589870, i32 0, metadata !12, metadata !"__check_suid", metadata !"__check_suid", metadata !"", metadata !12, i32 156, metadata !24, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 ()* @__check_suid} ; [ DW_TAG_subprogram
!24 = metadata !{i32 589845, metadata !12, metadata !"", metadata !12, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !25, i32 0, null} ; [ DW_TAG_subroutine_type ]
!25 = metadata !{metadata !16}
!26 = metadata !{i32 589870, i32 0, metadata !12, metadata !"__uClibc_init", metadata !"__uClibc_init", metadata !"__uClibc_init", metadata !12, i32 188, metadata !27, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ()* @__uClibc_init} ; [
!27 = metadata !{i32 589845, metadata !12, metadata !"", metadata !12, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !28, i32 0, null} ; [ DW_TAG_subroutine_type ]
!28 = metadata !{null}
!29 = metadata !{i32 589870, i32 0, metadata !12, metadata !"__uClibc_fini", metadata !"__uClibc_fini", metadata !"__uClibc_fini", metadata !12, i32 252, metadata !27, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ()* @__uClibc_fini} ; [
!30 = metadata !{i32 589870, i32 0, metadata !12, metadata !"__uClibc_main", metadata !"__uClibc_main", metadata !"__uClibc_main", metadata !12, i32 281, metadata !31, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i32 (i32, i8**, i8**)*
!31 = metadata !{i32 589845, metadata !12, metadata !"", metadata !12, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !32, i32 0, null} ; [ DW_TAG_subroutine_type ]
!32 = metadata !{null, metadata !33, metadata !16, metadata !36, metadata !39, metadata !39, metadata !39, metadata !40}
!33 = metadata !{i32 589839, metadata !12, metadata !"", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !34} ; [ DW_TAG_pointer_type ]
!34 = metadata !{i32 589845, metadata !12, metadata !"", metadata !12, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !35, i32 0, null} ; [ DW_TAG_subroutine_type ]
!35 = metadata !{metadata !16, metadata !16, metadata !36, metadata !36}
!36 = metadata !{i32 589839, metadata !12, metadata !"", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !37} ; [ DW_TAG_pointer_type ]
!37 = metadata !{i32 589839, metadata !12, metadata !"", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !38} ; [ DW_TAG_pointer_type ]
!38 = metadata !{i32 589860, metadata !12, metadata !"char", metadata !12, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!39 = metadata !{i32 589839, metadata !12, metadata !"", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !27} ; [ DW_TAG_pointer_type ]
!40 = metadata !{i32 589839, metadata !12, metadata !"", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!41 = metadata !{i32 589870, i32 0, metadata !42, metadata !"strlen", metadata !"strlen", metadata !"strlen", metadata !42, i32 19, metadata !44, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i64 (i8*)* @strlen} ; [ DW_TAG_subprogram ]
!42 = metadata !{i32 589865, metadata !"strlen.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !43} ; [ DW_TAG_file_type ]
!43 = metadata !{i32 589841, i32 0, i32 1, metadata !"strlen.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!44 = metadata !{i32 589845, metadata !42, metadata !"", metadata !42, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !45, i32 0, null} ; [ DW_TAG_subroutine_type ]
!45 = metadata !{metadata !46, metadata !49}
!46 = metadata !{i32 589846, metadata !47, metadata !"size_t", metadata !47, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !48} ; [ DW_TAG_typedef ]
!47 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !43} ; [ DW_TAG_file_type ]
!48 = metadata !{i32 589860, metadata !42, metadata !"long unsigned int", metadata !42, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!49 = metadata !{i32 589839, metadata !42, metadata !"", metadata !42, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !50} ; [ DW_TAG_pointer_type ]
!50 = metadata !{i32 589862, metadata !42, metadata !"", metadata !42, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !51} ; [ DW_TAG_const_type ]
!51 = metadata !{i32 589860, metadata !42, metadata !"char", metadata !42, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!52 = metadata !{i32 589870, i32 0, metadata !53, metadata !"strncmp", metadata !"strncmp", metadata !"strncmp", metadata !53, i32 18, metadata !55, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i8*, i8*, i64)* @strncmp} ; [ DW_TAG_subpr
!53 = metadata !{i32 589865, metadata !"strncmp.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !54} ; [ DW_TAG_file_type ]
!54 = metadata !{i32 589841, i32 0, i32 1, metadata !"strncmp.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!55 = metadata !{i32 589845, metadata !53, metadata !"", metadata !53, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !56, i32 0, null} ; [ DW_TAG_subroutine_type ]
!56 = metadata !{metadata !57, metadata !58, metadata !58, metadata !61}
!57 = metadata !{i32 589860, metadata !53, metadata !"int", metadata !53, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!58 = metadata !{i32 589839, metadata !53, metadata !"", metadata !53, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !59} ; [ DW_TAG_pointer_type ]
!59 = metadata !{i32 589862, metadata !53, metadata !"", metadata !53, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !60} ; [ DW_TAG_const_type ]
!60 = metadata !{i32 589860, metadata !53, metadata !"char", metadata !53, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!61 = metadata !{i32 589846, metadata !62, metadata !"size_t", metadata !62, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !63} ; [ DW_TAG_typedef ]
!62 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !54} ; [ DW_TAG_file_type ]
!63 = metadata !{i32 589860, metadata !53, metadata !"long unsigned int", metadata !53, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!64 = metadata !{i32 589870, i32 0, metadata !65, metadata !"__errno_location", metadata !"__errno_location", metadata !"__errno_location", metadata !65, i32 12, metadata !67, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32* ()* @__errno_lo
!65 = metadata !{i32 589865, metadata !"__errno_location.c", metadata !"/home/anitha/klee-uclibc/libc/misc/internals", metadata !66} ; [ DW_TAG_file_type ]
!66 = metadata !{i32 589841, i32 0, i32 1, metadata !"__errno_location.c", metadata !"/home/anitha/klee-uclibc/libc/misc/internals", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_c
!67 = metadata !{i32 589845, metadata !65, metadata !"", metadata !65, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !68, i32 0, null} ; [ DW_TAG_subroutine_type ]
!68 = metadata !{metadata !69}
!69 = metadata !{i32 589839, metadata !65, metadata !"", metadata !65, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !70} ; [ DW_TAG_pointer_type ]
!70 = metadata !{i32 589860, metadata !65, metadata !"int", metadata !65, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!71 = metadata !{i32 589870, i32 0, metadata !72, metadata !"__h_errno_location", metadata !"__h_errno_location", metadata !"__h_errno_location", metadata !72, i32 11, metadata !74, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32* ()* @__h_
!72 = metadata !{i32 589865, metadata !"__h_errno_location.c", metadata !"/home/anitha/klee-uclibc/libc/misc/internals", metadata !73} ; [ DW_TAG_file_type ]
!73 = metadata !{i32 589841, i32 0, i32 1, metadata !"__h_errno_location.c", metadata !"/home/anitha/klee-uclibc/libc/misc/internals", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG
!74 = metadata !{i32 589845, metadata !72, metadata !"", metadata !72, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !75, i32 0, null} ; [ DW_TAG_subroutine_type ]
!75 = metadata !{metadata !76}
!76 = metadata !{i32 589839, metadata !72, metadata !"", metadata !72, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !77} ; [ DW_TAG_pointer_type ]
!77 = metadata !{i32 589860, metadata !72, metadata !"int", metadata !72, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!78 = metadata !{i32 589870, i32 0, metadata !79, metadata !"_stdio_term", metadata !"_stdio_term", metadata !"_stdio_term", metadata !79, i32 211, metadata !81, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ()* @_stdio_term} ; [ DW_TAG_
!79 = metadata !{i32 589865, metadata !"_stdio.c", metadata !"/home/anitha/klee-uclibc/libc/stdio", metadata !80} ; [ DW_TAG_file_type ]
!80 = metadata !{i32 589841, i32 0, i32 1, metadata !"_stdio.c", metadata !"/home/anitha/klee-uclibc/libc/stdio", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!81 = metadata !{i32 589845, metadata !79, metadata !"", metadata !79, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !28, i32 0, null} ; [ DW_TAG_subroutine_type ]
!82 = metadata !{i32 589870, i32 0, metadata !79, metadata !"_stdio_init", metadata !"_stdio_init", metadata !"_stdio_init", metadata !79, i32 278, metadata !81, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ()* @_stdio_init} ; [ DW_TAG_
!83 = metadata !{i32 589870, i32 0, metadata !84, metadata !"abort", metadata !"abort", metadata !"abort", metadata !84, i32 57, metadata !86, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ()* @abort} ; [ DW_TAG_subprogram ]
!84 = metadata !{i32 589865, metadata !"abort.c", metadata !"/home/anitha/klee-uclibc/libc/stdlib", metadata !85} ; [ DW_TAG_file_type ]
!85 = metadata !{i32 589841, i32 0, i32 1, metadata !"abort.c", metadata !"/home/anitha/klee-uclibc/libc/stdlib", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!86 = metadata !{i32 589845, metadata !84, metadata !"", metadata !84, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !28, i32 0, null} ; [ DW_TAG_subroutine_type ]
!87 = metadata !{i32 589870, i32 0, metadata !88, metadata !"exit", metadata !"exit", metadata !"exit", metadata !90, i32 319, metadata !91, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i32)* @exit} ; [ DW_TAG_subprogram ]
!88 = metadata !{i32 589865, metadata !"exit.c", metadata !"/home/anitha/klee-uclibc/libc/stdlib", metadata !89} ; [ DW_TAG_file_type ]
!89 = metadata !{i32 589841, i32 0, i32 1, metadata !"exit.c", metadata !"/home/anitha/klee-uclibc/libc/stdlib", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!90 = metadata !{i32 589865, metadata !"_atexit.c", metadata !"/home/anitha/klee-uclibc/libc/stdlib", metadata !89} ; [ DW_TAG_file_type ]
!91 = metadata !{i32 589845, metadata !88, metadata !"", metadata !88, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !92, i32 0, null} ; [ DW_TAG_subroutine_type ]
!92 = metadata !{null, metadata !93}
!93 = metadata !{i32 589860, metadata !88, metadata !"int", metadata !88, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!94 = metadata !{i32 589870, i32 0, metadata !95, metadata !"memcpy", metadata !"memcpy", metadata !"memcpy", metadata !95, i32 19, metadata !97, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i8* (i8*, i8*, i64)* @memcpy} ; [ DW_TAG_subprogra
!95 = metadata !{i32 589865, metadata !"memcpy.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !96} ; [ DW_TAG_file_type ]
!96 = metadata !{i32 589841, i32 0, i32 1, metadata !"memcpy.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!97 = metadata !{i32 589845, metadata !95, metadata !"", metadata !95, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !98, i32 0, null} ; [ DW_TAG_subroutine_type ]
!98 = metadata !{metadata !99, metadata !99, metadata !99, metadata !100}
!99 = metadata !{i32 589839, metadata !95, metadata !"", metadata !95, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!100 = metadata !{i32 589846, metadata !101, metadata !"size_t", metadata !101, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !102} ; [ DW_TAG_typedef ]
!101 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !96} ; [ DW_TAG_file_type ]
!102 = metadata !{i32 589860, metadata !95, metadata !"long unsigned int", metadata !95, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!103 = metadata !{i32 589870, i32 0, metadata !104, metadata !"memset", metadata !"memset", metadata !"memset", metadata !104, i32 18, metadata !106, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i8* (i8*, i32, i64)* @memset} ; [ DW_TAG_subpr
!104 = metadata !{i32 589865, metadata !"memset.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !105} ; [ DW_TAG_file_type ]
!105 = metadata !{i32 589841, i32 0, i32 1, metadata !"memset.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!106 = metadata !{i32 589845, metadata !104, metadata !"", metadata !104, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !107, i32 0, null} ; [ DW_TAG_subroutine_type ]
!107 = metadata !{metadata !108, metadata !108, metadata !109, metadata !110}
!108 = metadata !{i32 589839, metadata !104, metadata !"", metadata !104, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!109 = metadata !{i32 589860, metadata !104, metadata !"int", metadata !104, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!110 = metadata !{i32 589846, metadata !111, metadata !"size_t", metadata !111, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !112} ; [ DW_TAG_typedef ]
!111 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !105} ; [ DW_TAG_file_type ]
!112 = metadata !{i32 589860, metadata !104, metadata !"long unsigned int", metadata !104, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!113 = metadata !{i32 589870, i32 0, metadata !114, metadata !"__sigismember", metadata !"__sigismember", metadata !"__sigismember", metadata !116, i32 117, metadata !117, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (%struct.__sigset_t*
!114 = metadata !{i32 589865, metadata !"sigsetops.c", metadata !"/home/anitha/klee-uclibc/libc/signal", metadata !115} ; [ DW_TAG_file_type ]
!115 = metadata !{i32 589841, i32 0, i32 1, metadata !"sigsetops.c", metadata !"/home/anitha/klee-uclibc/libc/signal", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!116 = metadata !{i32 589865, metadata !"sigset.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !115} ; [ DW_TAG_file_type ]
!117 = metadata !{i32 589845, metadata !114, metadata !"", metadata !114, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !118, i32 0, null} ; [ DW_TAG_subroutine_type ]
!118 = metadata !{metadata !119, metadata !120, metadata !119}
!119 = metadata !{i32 589860, metadata !114, metadata !"int", metadata !114, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!120 = metadata !{i32 589839, metadata !114, metadata !"", metadata !114, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !121} ; [ DW_TAG_pointer_type ]
!121 = metadata !{i32 589846, metadata !116, metadata !"__sigset_t", metadata !116, i32 31, i64 0, i64 0, i64 0, i32 0, metadata !122} ; [ DW_TAG_typedef ]
!122 = metadata !{i32 589843, metadata !114, metadata !"", metadata !116, i32 29, i64 1024, i64 64, i64 0, i32 0, null, metadata !123, i32 0, null} ; [ DW_TAG_structure_type ]
!123 = metadata !{metadata !124}
!124 = metadata !{i32 589837, metadata !122, metadata !"__val", metadata !116, i32 30, i64 1024, i64 64, i64 0, i32 0, metadata !125} ; [ DW_TAG_member ]
!125 = metadata !{i32 589825, metadata !114, metadata !"", metadata !114, i32 0, i64 1024, i64 64, i64 0, i32 0, metadata !126, metadata !127, i32 0, null} ; [ DW_TAG_array_type ]
!126 = metadata !{i32 589860, metadata !114, metadata !"long unsigned int", metadata !114, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!127 = metadata !{metadata !128}
!128 = metadata !{i32 589857, i64 0, i64 15}      ; [ DW_TAG_subrange_type ]
!129 = metadata !{i32 589870, i32 0, metadata !114, metadata !"__sigaddset", metadata !"__sigaddset", metadata !"__sigaddset", metadata !116, i32 118, metadata !117, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (%struct.__sigset_t*, i32)
!130 = metadata !{i32 589870, i32 0, metadata !114, metadata !"__sigdelset", metadata !"__sigdelset", metadata !"__sigdelset", metadata !116, i32 119, metadata !117, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (%struct.__sigset_t*, i32)
!131 = metadata !{i32 589870, i32 0, metadata !132, metadata !"__stdio_wcommit", metadata !"__stdio_wcommit", metadata !"__stdio_wcommit", metadata !132, i32 18, metadata !134, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i64 (%struct.FILE*)
!132 = metadata !{i32 589865, metadata !"_wcommit.c", metadata !"/home/anitha/klee-uclibc/libc/stdio", metadata !133} ; [ DW_TAG_file_type ]
!133 = metadata !{i32 589841, i32 0, i32 1, metadata !"_wcommit.c", metadata !"/home/anitha/klee-uclibc/libc/stdio", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!134 = metadata !{i32 589845, metadata !132, metadata !"", metadata !132, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !135, i32 0, null} ; [ DW_TAG_subroutine_type ]
!135 = metadata !{metadata !136, metadata !139}
!136 = metadata !{i32 589846, metadata !137, metadata !"size_t", metadata !137, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !138} ; [ DW_TAG_typedef ]
!137 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !133} ; [ DW_TAG_file_type ]
!138 = metadata !{i32 589860, metadata !132, metadata !"long unsigned int", metadata !132, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!139 = metadata !{i32 589839, metadata !132, metadata !"", metadata !132, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !140} ; [ DW_TAG_pointer_type ]
!140 = metadata !{i32 589846, metadata !141, metadata !"FILE", metadata !141, i32 46, i64 0, i64 0, i64 0, i32 0, metadata !142} ; [ DW_TAG_typedef ]
!141 = metadata !{i32 589865, metadata !"stdio.h", metadata !"/home/anitha/klee-uclibc/./include", metadata !133} ; [ DW_TAG_file_type ]
!142 = metadata !{i32 589843, metadata !132, metadata !"__STDIO_FILE_STRUCT", metadata !141, i32 46, i64 640, i64 64, i64 0, i32 0, null, metadata !143, i32 0, null} ; [ DW_TAG_structure_type ]
!143 = metadata !{metadata !144, metadata !147, metadata !152, metadata !154, metadata !156, metadata !157, metadata !158, metadata !159, metadata !160, metadata !161, metadata !163, metadata !166}
!144 = metadata !{i32 589837, metadata !142, metadata !"__modeflags", metadata !145, i32 234, i64 16, i64 16, i64 0, i32 0, metadata !146} ; [ DW_TAG_member ]
!145 = metadata !{i32 589865, metadata !"uClibc_stdio.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !133} ; [ DW_TAG_file_type ]
!146 = metadata !{i32 589860, metadata !132, metadata !"short unsigned int", metadata !132, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!147 = metadata !{i32 589837, metadata !142, metadata !"__ungot_width", metadata !145, i32 237, i64 16, i64 8, i64 16, i32 0, metadata !148} ; [ DW_TAG_member ]
!148 = metadata !{i32 589825, metadata !132, metadata !"", metadata !132, i32 0, i64 16, i64 8, i64 0, i32 0, metadata !149, metadata !150, i32 0, null} ; [ DW_TAG_array_type ]
!149 = metadata !{i32 589860, metadata !132, metadata !"unsigned char", metadata !132, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!150 = metadata !{metadata !151}
!151 = metadata !{i32 589857, i64 0, i64 1}       ; [ DW_TAG_subrange_type ]
!152 = metadata !{i32 589837, metadata !142, metadata !"__filedes", metadata !145, i32 244, i64 32, i64 32, i64 32, i32 0, metadata !153} ; [ DW_TAG_member ]
!153 = metadata !{i32 589860, metadata !132, metadata !"int", metadata !132, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!154 = metadata !{i32 589837, metadata !142, metadata !"__bufstart", metadata !145, i32 246, i64 64, i64 64, i64 64, i32 0, metadata !155} ; [ DW_TAG_member ]
!155 = metadata !{i32 589839, metadata !132, metadata !"", metadata !132, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !149} ; [ DW_TAG_pointer_type ]
!156 = metadata !{i32 589837, metadata !142, metadata !"__bufend", metadata !145, i32 247, i64 64, i64 64, i64 128, i32 0, metadata !155} ; [ DW_TAG_member ]
!157 = metadata !{i32 589837, metadata !142, metadata !"__bufpos", metadata !145, i32 248, i64 64, i64 64, i64 192, i32 0, metadata !155} ; [ DW_TAG_member ]
!158 = metadata !{i32 589837, metadata !142, metadata !"__bufread", metadata !145, i32 249, i64 64, i64 64, i64 256, i32 0, metadata !155} ; [ DW_TAG_member ]
!159 = metadata !{i32 589837, metadata !142, metadata !"__bufgetc_u", metadata !145, i32 252, i64 64, i64 64, i64 320, i32 0, metadata !155} ; [ DW_TAG_member ]
!160 = metadata !{i32 589837, metadata !142, metadata !"__bufputc_u", metadata !145, i32 255, i64 64, i64 64, i64 384, i32 0, metadata !155} ; [ DW_TAG_member ]
!161 = metadata !{i32 589837, metadata !142, metadata !"__nextopen", metadata !145, i32 261, i64 64, i64 64, i64 448, i32 0, metadata !162} ; [ DW_TAG_member ]
!162 = metadata !{i32 589839, metadata !132, metadata !"", metadata !132, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !142} ; [ DW_TAG_pointer_type ]
!163 = metadata !{i32 589837, metadata !142, metadata !"__ungot", metadata !145, i32 268, i64 64, i64 32, i64 512, i32 0, metadata !164} ; [ DW_TAG_member ]
!164 = metadata !{i32 589825, metadata !132, metadata !"", metadata !132, i32 0, i64 64, i64 32, i64 0, i32 0, metadata !165, metadata !150, i32 0, null} ; [ DW_TAG_array_type ]
!165 = metadata !{i32 589846, metadata !137, metadata !"wchar_t", metadata !137, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !153} ; [ DW_TAG_typedef ]
!166 = metadata !{i32 589837, metadata !142, metadata !"__state", metadata !145, i32 271, i64 64, i64 32, i64 576, i32 0, metadata !167} ; [ DW_TAG_member ]
!167 = metadata !{i32 589846, metadata !168, metadata !"__mbstate_t", metadata !168, i32 85, i64 0, i64 0, i64 0, i32 0, metadata !169} ; [ DW_TAG_typedef ]
!168 = metadata !{i32 589865, metadata !"wchar.h", metadata !"/home/anitha/klee-uclibc/./include", metadata !133} ; [ DW_TAG_file_type ]
!169 = metadata !{i32 589843, metadata !132, metadata !"", metadata !168, i32 82, i64 64, i64 32, i64 0, i32 0, null, metadata !170, i32 0, null} ; [ DW_TAG_structure_type ]
!170 = metadata !{metadata !171, metadata !172}
!171 = metadata !{i32 589837, metadata !169, metadata !"__mask", metadata !168, i32 83, i64 32, i64 32, i64 0, i32 0, metadata !165} ; [ DW_TAG_member ]
!172 = metadata !{i32 589837, metadata !169, metadata !"__wc", metadata !168, i32 84, i64 32, i64 32, i64 32, i32 0, metadata !165} ; [ DW_TAG_member ]
!173 = metadata !{i32 589870, i32 0, metadata !174, metadata !"isatty", metadata !"isatty", metadata !"isatty", metadata !174, i32 27, metadata !176, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32)* @isatty} ; [ DW_TAG_subprogram ]
!174 = metadata !{i32 589865, metadata !"isatty.c", metadata !"/home/anitha/klee-uclibc/libc/termios", metadata !175} ; [ DW_TAG_file_type ]
!175 = metadata !{i32 589841, i32 0, i32 1, metadata !"isatty.c", metadata !"/home/anitha/klee-uclibc/libc/termios", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!176 = metadata !{i32 589845, metadata !174, metadata !"", metadata !174, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !177, i32 0, null} ; [ DW_TAG_subroutine_type ]
!177 = metadata !{metadata !178, metadata !178}
!178 = metadata !{i32 589860, metadata !174, metadata !"int", metadata !174, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!179 = metadata !{i32 589870, i32 0, metadata !180, metadata !"__raise", metadata !"__raise", metadata !"__raise", metadata !180, i32 16, metadata !182, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32)* @__raise} ; [ DW_TAG_subprogram 
!180 = metadata !{i32 589865, metadata !"raise.c", metadata !"/home/anitha/klee-uclibc/libc/signal", metadata !181} ; [ DW_TAG_file_type ]
!181 = metadata !{i32 589841, i32 0, i32 1, metadata !"raise.c", metadata !"/home/anitha/klee-uclibc/libc/signal", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!182 = metadata !{i32 589845, metadata !180, metadata !"", metadata !180, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !183, i32 0, null} ; [ DW_TAG_subroutine_type ]
!183 = metadata !{metadata !184, metadata !184}
!184 = metadata !{i32 589860, metadata !180, metadata !"int", metadata !180, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!185 = metadata !{i32 589870, i32 0, metadata !186, metadata !"__libc_sigaction", metadata !"__libc_sigaction", metadata !"__libc_sigaction", metadata !186, i32 43, metadata !188, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32, %struc
!186 = metadata !{i32 589865, metadata !"sigaction.c", metadata !"/home/anitha/klee-uclibc/libc/signal", metadata !187} ; [ DW_TAG_file_type ]
!187 = metadata !{i32 589841, i32 0, i32 1, metadata !"sigaction.c", metadata !"/home/anitha/klee-uclibc/libc/signal", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!188 = metadata !{i32 589845, metadata !186, metadata !"", metadata !186, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !189, i32 0, null} ; [ DW_TAG_subroutine_type ]
!189 = metadata !{metadata !190, metadata !190, metadata !191, metadata !282}
!190 = metadata !{i32 589860, metadata !186, metadata !"int", metadata !186, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!191 = metadata !{i32 589839, metadata !186, metadata !"", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !192} ; [ DW_TAG_pointer_type ]
!192 = metadata !{i32 589862, metadata !186, metadata !"", metadata !186, i32 0, i64 1216, i64 64, i64 0, i32 0, metadata !193} ; [ DW_TAG_const_type ]
!193 = metadata !{i32 589843, metadata !186, metadata !"sigaction", metadata !194, i32 26, i64 1216, i64 64, i64 0, i32 0, null, metadata !195, i32 0, null} ; [ DW_TAG_structure_type ]
!194 = metadata !{i32 589865, metadata !"sigaction.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !187} ; [ DW_TAG_file_type ]
!195 = metadata !{metadata !196, metadata !270, metadata !278, metadata !279}
!196 = metadata !{i32 589837, metadata !193, metadata !"__sigaction_handler", metadata !194, i32 36, i64 64, i64 64, i64 0, i32 0, metadata !197} ; [ DW_TAG_member ]
!197 = metadata !{i32 589847, metadata !186, metadata !"", metadata !194, i32 30, i64 64, i64 64, i64 0, i32 0, null, metadata !198, i32 0, null} ; [ DW_TAG_union_type ]
!198 = metadata !{metadata !199, metadata !205}
!199 = metadata !{i32 589837, metadata !197, metadata !"sa_handler", metadata !194, i32 32, i64 64, i64 64, i64 0, i32 0, metadata !200} ; [ DW_TAG_member ]
!200 = metadata !{i32 589846, metadata !201, metadata !"__sighandler_t", metadata !201, i32 75, i64 0, i64 0, i64 0, i32 0, metadata !202} ; [ DW_TAG_typedef ]
!201 = metadata !{i32 589865, metadata !"signal.h", metadata !"/home/anitha/klee-uclibc/./include", metadata !187} ; [ DW_TAG_file_type ]
!202 = metadata !{i32 589839, metadata !186, metadata !"", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !203} ; [ DW_TAG_pointer_type ]
!203 = metadata !{i32 589845, metadata !186, metadata !"", metadata !186, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !204, i32 0, null} ; [ DW_TAG_subroutine_type ]
!204 = metadata !{null, metadata !190}
!205 = metadata !{i32 589837, metadata !197, metadata !"sa_sigaction", metadata !194, i32 34, i64 64, i64 64, i64 0, i32 0, metadata !206} ; [ DW_TAG_member ]
!206 = metadata !{i32 589839, metadata !186, metadata !"", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !207} ; [ DW_TAG_pointer_type ]
!207 = metadata !{i32 589845, metadata !186, metadata !"", metadata !186, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !208, i32 0, null} ; [ DW_TAG_subroutine_type ]
!208 = metadata !{null, metadata !190, metadata !209, metadata !244}
!209 = metadata !{i32 589839, metadata !186, metadata !"", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !210} ; [ DW_TAG_pointer_type ]
!210 = metadata !{i32 589846, metadata !211, metadata !"siginfo_t", metadata !211, i32 108, i64 0, i64 0, i64 0, i32 0, metadata !212} ; [ DW_TAG_typedef ]
!211 = metadata !{i32 589865, metadata !"siginfo.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !187} ; [ DW_TAG_file_type ]
!212 = metadata !{i32 589843, metadata !186, metadata !"siginfo", metadata !211, i32 52, i64 1024, i64 64, i64 0, i32 0, null, metadata !213, i32 0, null} ; [ DW_TAG_structure_type ]
!213 = metadata !{metadata !214, metadata !215, metadata !216, metadata !217}
!214 = metadata !{i32 589837, metadata !212, metadata !"si_signo", metadata !211, i32 53, i64 32, i64 32, i64 0, i32 0, metadata !190} ; [ DW_TAG_member ]
!215 = metadata !{i32 589837, metadata !212, metadata !"si_errno", metadata !211, i32 54, i64 32, i64 32, i64 32, i32 0, metadata !190} ; [ DW_TAG_member ]
!216 = metadata !{i32 589837, metadata !212, metadata !"si_code", metadata !211, i32 56, i64 32, i64 32, i64 64, i32 0, metadata !190} ; [ DW_TAG_member ]
!217 = metadata !{i32 589837, metadata !212, metadata !"_sifields", metadata !211, i32 107, i64 896, i64 64, i64 128, i32 0, metadata !218} ; [ DW_TAG_member ]
!218 = metadata !{i32 589847, metadata !186, metadata !"", metadata !211, i32 59, i64 896, i64 64, i64 0, i32 0, null, metadata !219, i32 0, null} ; [ DW_TAG_union_type ]
!219 = metadata !{metadata !220, metadata !224, metadata !233, metadata !245, metadata !251, metadata !261, metadata !265}
!220 = metadata !{i32 589837, metadata !218, metadata !"_pad", metadata !211, i32 60, i64 896, i64 32, i64 0, i32 0, metadata !221} ; [ DW_TAG_member ]
!221 = metadata !{i32 589825, metadata !186, metadata !"", metadata !186, i32 0, i64 896, i64 32, i64 0, i32 0, metadata !190, metadata !222, i32 0, null} ; [ DW_TAG_array_type ]
!222 = metadata !{metadata !223}
!223 = metadata !{i32 589857, i64 0, i64 27}      ; [ DW_TAG_subrange_type ]
!224 = metadata !{i32 589837, metadata !218, metadata !"_kill", metadata !211, i32 67, i64 64, i64 32, i64 0, i32 0, metadata !225} ; [ DW_TAG_member ]
!225 = metadata !{i32 589843, metadata !186, metadata !"", metadata !211, i32 64, i64 64, i64 32, i64 0, i32 0, null, metadata !226, i32 0, null} ; [ DW_TAG_structure_type ]
!226 = metadata !{metadata !227, metadata !230}
!227 = metadata !{i32 589837, metadata !225, metadata !"si_pid", metadata !211, i32 65, i64 32, i64 32, i64 0, i32 0, metadata !228} ; [ DW_TAG_member ]
!228 = metadata !{i32 589846, metadata !229, metadata !"__pid_t", metadata !229, i32 147, i64 0, i64 0, i64 0, i32 0, metadata !190} ; [ DW_TAG_typedef ]
!229 = metadata !{i32 589865, metadata !"types.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !187} ; [ DW_TAG_file_type ]
!230 = metadata !{i32 589837, metadata !225, metadata !"si_uid", metadata !211, i32 66, i64 32, i64 32, i64 32, i32 0, metadata !231} ; [ DW_TAG_member ]
!231 = metadata !{i32 589846, metadata !229, metadata !"__uid_t", metadata !229, i32 139, i64 0, i64 0, i64 0, i32 0, metadata !232} ; [ DW_TAG_typedef ]
!232 = metadata !{i32 589860, metadata !186, metadata !"unsigned int", metadata !186, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!233 = metadata !{i32 589837, metadata !218, metadata !"_timer", metadata !211, i32 75, i64 128, i64 64, i64 0, i32 0, metadata !234} ; [ DW_TAG_member ]
!234 = metadata !{i32 589843, metadata !186, metadata !"", metadata !211, i32 71, i64 128, i64 64, i64 0, i32 0, null, metadata !235, i32 0, null} ; [ DW_TAG_structure_type ]
!235 = metadata !{metadata !236, metadata !237, metadata !238}
!236 = metadata !{i32 589837, metadata !234, metadata !"si_tid", metadata !211, i32 72, i64 32, i64 32, i64 0, i32 0, metadata !190} ; [ DW_TAG_member ]
!237 = metadata !{i32 589837, metadata !234, metadata !"si_overrun", metadata !211, i32 73, i64 32, i64 32, i64 32, i32 0, metadata !190} ; [ DW_TAG_member ]
!238 = metadata !{i32 589837, metadata !234, metadata !"si_sigval", metadata !211, i32 74, i64 64, i64 64, i64 64, i32 0, metadata !239} ; [ DW_TAG_member ]
!239 = metadata !{i32 589846, metadata !211, metadata !"sigval_t", metadata !211, i32 37, i64 0, i64 0, i64 0, i32 0, metadata !240} ; [ DW_TAG_typedef ]
!240 = metadata !{i32 589847, metadata !186, metadata !"sigval", metadata !211, i32 34, i64 64, i64 64, i64 0, i32 0, null, metadata !241, i32 0, null} ; [ DW_TAG_union_type ]
!241 = metadata !{metadata !242, metadata !243}
!242 = metadata !{i32 589837, metadata !240, metadata !"sival_int", metadata !211, i32 35, i64 32, i64 32, i64 0, i32 0, metadata !190} ; [ DW_TAG_member ]
!243 = metadata !{i32 589837, metadata !240, metadata !"sival_ptr", metadata !211, i32 36, i64 64, i64 64, i64 0, i32 0, metadata !244} ; [ DW_TAG_member ]
!244 = metadata !{i32 589839, metadata !186, metadata !"", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!245 = metadata !{i32 589837, metadata !218, metadata !"_rt", metadata !211, i32 83, i64 128, i64 64, i64 0, i32 0, metadata !246} ; [ DW_TAG_member ]
!246 = metadata !{i32 589843, metadata !186, metadata !"", metadata !211, i32 79, i64 128, i64 64, i64 0, i32 0, null, metadata !247, i32 0, null} ; [ DW_TAG_structure_type ]
!247 = metadata !{metadata !248, metadata !249, metadata !250}
!248 = metadata !{i32 589837, metadata !246, metadata !"si_pid", metadata !211, i32 80, i64 32, i64 32, i64 0, i32 0, metadata !228} ; [ DW_TAG_member ]
!249 = metadata !{i32 589837, metadata !246, metadata !"si_uid", metadata !211, i32 81, i64 32, i64 32, i64 32, i32 0, metadata !231} ; [ DW_TAG_member ]
!250 = metadata !{i32 589837, metadata !246, metadata !"si_sigval", metadata !211, i32 82, i64 64, i64 64, i64 64, i32 0, metadata !239} ; [ DW_TAG_member ]
!251 = metadata !{i32 589837, metadata !218, metadata !"_sigchld", metadata !211, i32 93, i64 256, i64 64, i64 0, i32 0, metadata !252} ; [ DW_TAG_member ]
!252 = metadata !{i32 589843, metadata !186, metadata !"", metadata !211, i32 87, i64 256, i64 64, i64 0, i32 0, null, metadata !253, i32 0, null} ; [ DW_TAG_structure_type ]
!253 = metadata !{metadata !254, metadata !255, metadata !256, metadata !257, metadata !260}
!254 = metadata !{i32 589837, metadata !252, metadata !"si_pid", metadata !211, i32 88, i64 32, i64 32, i64 0, i32 0, metadata !228} ; [ DW_TAG_member ]
!255 = metadata !{i32 589837, metadata !252, metadata !"si_uid", metadata !211, i32 89, i64 32, i64 32, i64 32, i32 0, metadata !231} ; [ DW_TAG_member ]
!256 = metadata !{i32 589837, metadata !252, metadata !"si_status", metadata !211, i32 90, i64 32, i64 32, i64 64, i32 0, metadata !190} ; [ DW_TAG_member ]
!257 = metadata !{i32 589837, metadata !252, metadata !"si_utime", metadata !211, i32 91, i64 64, i64 64, i64 128, i32 0, metadata !258} ; [ DW_TAG_member ]
!258 = metadata !{i32 589846, metadata !229, metadata !"__clock_t", metadata !229, i32 149, i64 0, i64 0, i64 0, i32 0, metadata !259} ; [ DW_TAG_typedef ]
!259 = metadata !{i32 589860, metadata !186, metadata !"long int", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!260 = metadata !{i32 589837, metadata !252, metadata !"si_stime", metadata !211, i32 92, i64 64, i64 64, i64 192, i32 0, metadata !258} ; [ DW_TAG_member ]
!261 = metadata !{i32 589837, metadata !218, metadata !"_sigfault", metadata !211, i32 99, i64 64, i64 64, i64 0, i32 0, metadata !262} ; [ DW_TAG_member ]
!262 = metadata !{i32 589843, metadata !186, metadata !"", metadata !211, i32 97, i64 64, i64 64, i64 0, i32 0, null, metadata !263, i32 0, null} ; [ DW_TAG_structure_type ]
!263 = metadata !{metadata !264}
!264 = metadata !{i32 589837, metadata !262, metadata !"si_addr", metadata !211, i32 98, i64 64, i64 64, i64 0, i32 0, metadata !244} ; [ DW_TAG_member ]
!265 = metadata !{i32 589837, metadata !218, metadata !"_sigpoll", metadata !211, i32 106, i64 128, i64 64, i64 0, i32 0, metadata !266} ; [ DW_TAG_member ]
!266 = metadata !{i32 589843, metadata !186, metadata !"", metadata !211, i32 103, i64 128, i64 64, i64 0, i32 0, null, metadata !267, i32 0, null} ; [ DW_TAG_structure_type ]
!267 = metadata !{metadata !268, metadata !269}
!268 = metadata !{i32 589837, metadata !266, metadata !"si_band", metadata !211, i32 104, i64 64, i64 64, i64 0, i32 0, metadata !259} ; [ DW_TAG_member ]
!269 = metadata !{i32 589837, metadata !266, metadata !"si_fd", metadata !211, i32 105, i64 32, i64 32, i64 64, i32 0, metadata !190} ; [ DW_TAG_member ]
!270 = metadata !{i32 589837, metadata !193, metadata !"sa_mask", metadata !194, i32 44, i64 1024, i64 64, i64 64, i32 0, metadata !271} ; [ DW_TAG_member ]
!271 = metadata !{i32 589846, metadata !272, metadata !"__sigset_t", metadata !272, i32 31, i64 0, i64 0, i64 0, i32 0, metadata !273} ; [ DW_TAG_typedef ]
!272 = metadata !{i32 589865, metadata !"sigset.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !187} ; [ DW_TAG_file_type ]
!273 = metadata !{i32 589843, metadata !186, metadata !"", metadata !272, i32 29, i64 1024, i64 64, i64 0, i32 0, null, metadata !274, i32 0, null} ; [ DW_TAG_structure_type ]
!274 = metadata !{metadata !275}
!275 = metadata !{i32 589837, metadata !273, metadata !"__val", metadata !272, i32 30, i64 1024, i64 64, i64 0, i32 0, metadata !276} ; [ DW_TAG_member ]
!276 = metadata !{i32 589825, metadata !186, metadata !"", metadata !186, i32 0, i64 1024, i64 64, i64 0, i32 0, metadata !277, metadata !127, i32 0, null} ; [ DW_TAG_array_type ]
!277 = metadata !{i32 589860, metadata !186, metadata !"long unsigned int", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!278 = metadata !{i32 589837, metadata !193, metadata !"sa_flags", metadata !194, i32 47, i64 32, i64 32, i64 1088, i32 0, metadata !190} ; [ DW_TAG_member ]
!279 = metadata !{i32 589837, metadata !193, metadata !"sa_restorer", metadata !194, i32 50, i64 64, i64 64, i64 1152, i32 0, metadata !280} ; [ DW_TAG_member ]
!280 = metadata !{i32 589839, metadata !186, metadata !"", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !281} ; [ DW_TAG_pointer_type ]
!281 = metadata !{i32 589845, metadata !186, metadata !"", metadata !186, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !28, i32 0, null} ; [ DW_TAG_subroutine_type ]
!282 = metadata !{i32 589839, metadata !186, metadata !"", metadata !186, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !193} ; [ DW_TAG_pointer_type ]
!283 = metadata !{i32 589870, i32 0, metadata !284, metadata !"__stdio_WRITE", metadata !"__stdio_WRITE", metadata !"__stdio_WRITE", metadata !284, i32 35, metadata !286, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i64 (%struct.FILE*, i8*, 
!284 = metadata !{i32 589865, metadata !"_WRITE.c", metadata !"/home/anitha/klee-uclibc/libc/stdio", metadata !285} ; [ DW_TAG_file_type ]
!285 = metadata !{i32 589841, i32 0, i32 1, metadata !"_WRITE.c", metadata !"/home/anitha/klee-uclibc/libc/stdio", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!286 = metadata !{i32 589845, metadata !284, metadata !"", metadata !284, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !287, i32 0, null} ; [ DW_TAG_subroutine_type ]
!287 = metadata !{metadata !288, metadata !291, metadata !323, metadata !288}
!288 = metadata !{i32 589846, metadata !289, metadata !"size_t", metadata !289, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !290} ; [ DW_TAG_typedef ]
!289 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !285} ; [ DW_TAG_file_type ]
!290 = metadata !{i32 589860, metadata !284, metadata !"long unsigned int", metadata !284, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!291 = metadata !{i32 589839, metadata !284, metadata !"", metadata !284, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !292} ; [ DW_TAG_pointer_type ]
!292 = metadata !{i32 589846, metadata !293, metadata !"FILE", metadata !293, i32 46, i64 0, i64 0, i64 0, i32 0, metadata !294} ; [ DW_TAG_typedef ]
!293 = metadata !{i32 589865, metadata !"stdio.h", metadata !"/home/anitha/klee-uclibc/./include", metadata !285} ; [ DW_TAG_file_type ]
!294 = metadata !{i32 589843, metadata !284, metadata !"__STDIO_FILE_STRUCT", metadata !293, i32 46, i64 640, i64 64, i64 0, i32 0, null, metadata !295, i32 0, null} ; [ DW_TAG_structure_type ]
!295 = metadata !{metadata !296, metadata !299, metadata !302, metadata !304, metadata !306, metadata !307, metadata !308, metadata !309, metadata !310, metadata !311, metadata !313, metadata !316}
!296 = metadata !{i32 589837, metadata !294, metadata !"__modeflags", metadata !297, i32 234, i64 16, i64 16, i64 0, i32 0, metadata !298} ; [ DW_TAG_member ]
!297 = metadata !{i32 589865, metadata !"uClibc_stdio.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !285} ; [ DW_TAG_file_type ]
!298 = metadata !{i32 589860, metadata !284, metadata !"short unsigned int", metadata !284, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!299 = metadata !{i32 589837, metadata !294, metadata !"__ungot_width", metadata !297, i32 237, i64 16, i64 8, i64 16, i32 0, metadata !300} ; [ DW_TAG_member ]
!300 = metadata !{i32 589825, metadata !284, metadata !"", metadata !284, i32 0, i64 16, i64 8, i64 0, i32 0, metadata !301, metadata !150, i32 0, null} ; [ DW_TAG_array_type ]
!301 = metadata !{i32 589860, metadata !284, metadata !"unsigned char", metadata !284, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!302 = metadata !{i32 589837, metadata !294, metadata !"__filedes", metadata !297, i32 244, i64 32, i64 32, i64 32, i32 0, metadata !303} ; [ DW_TAG_member ]
!303 = metadata !{i32 589860, metadata !284, metadata !"int", metadata !284, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!304 = metadata !{i32 589837, metadata !294, metadata !"__bufstart", metadata !297, i32 246, i64 64, i64 64, i64 64, i32 0, metadata !305} ; [ DW_TAG_member ]
!305 = metadata !{i32 589839, metadata !284, metadata !"", metadata !284, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !301} ; [ DW_TAG_pointer_type ]
!306 = metadata !{i32 589837, metadata !294, metadata !"__bufend", metadata !297, i32 247, i64 64, i64 64, i64 128, i32 0, metadata !305} ; [ DW_TAG_member ]
!307 = metadata !{i32 589837, metadata !294, metadata !"__bufpos", metadata !297, i32 248, i64 64, i64 64, i64 192, i32 0, metadata !305} ; [ DW_TAG_member ]
!308 = metadata !{i32 589837, metadata !294, metadata !"__bufread", metadata !297, i32 249, i64 64, i64 64, i64 256, i32 0, metadata !305} ; [ DW_TAG_member ]
!309 = metadata !{i32 589837, metadata !294, metadata !"__bufgetc_u", metadata !297, i32 252, i64 64, i64 64, i64 320, i32 0, metadata !305} ; [ DW_TAG_member ]
!310 = metadata !{i32 589837, metadata !294, metadata !"__bufputc_u", metadata !297, i32 255, i64 64, i64 64, i64 384, i32 0, metadata !305} ; [ DW_TAG_member ]
!311 = metadata !{i32 589837, metadata !294, metadata !"__nextopen", metadata !297, i32 261, i64 64, i64 64, i64 448, i32 0, metadata !312} ; [ DW_TAG_member ]
!312 = metadata !{i32 589839, metadata !284, metadata !"", metadata !284, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !294} ; [ DW_TAG_pointer_type ]
!313 = metadata !{i32 589837, metadata !294, metadata !"__ungot", metadata !297, i32 268, i64 64, i64 32, i64 512, i32 0, metadata !314} ; [ DW_TAG_member ]
!314 = metadata !{i32 589825, metadata !284, metadata !"", metadata !284, i32 0, i64 64, i64 32, i64 0, i32 0, metadata !315, metadata !150, i32 0, null} ; [ DW_TAG_array_type ]
!315 = metadata !{i32 589846, metadata !289, metadata !"wchar_t", metadata !289, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !303} ; [ DW_TAG_typedef ]
!316 = metadata !{i32 589837, metadata !294, metadata !"__state", metadata !297, i32 271, i64 64, i64 32, i64 576, i32 0, metadata !317} ; [ DW_TAG_member ]
!317 = metadata !{i32 589846, metadata !318, metadata !"__mbstate_t", metadata !318, i32 85, i64 0, i64 0, i64 0, i32 0, metadata !319} ; [ DW_TAG_typedef ]
!318 = metadata !{i32 589865, metadata !"wchar.h", metadata !"/home/anitha/klee-uclibc/./include", metadata !285} ; [ DW_TAG_file_type ]
!319 = metadata !{i32 589843, metadata !284, metadata !"", metadata !318, i32 82, i64 64, i64 32, i64 0, i32 0, null, metadata !320, i32 0, null} ; [ DW_TAG_structure_type ]
!320 = metadata !{metadata !321, metadata !322}
!321 = metadata !{i32 589837, metadata !319, metadata !"__mask", metadata !318, i32 83, i64 32, i64 32, i64 0, i32 0, metadata !315} ; [ DW_TAG_member ]
!322 = metadata !{i32 589837, metadata !319, metadata !"__wc", metadata !318, i32 84, i64 32, i64 32, i64 32, i32 0, metadata !315} ; [ DW_TAG_member ]
!323 = metadata !{i32 589839, metadata !284, metadata !"", metadata !284, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !324} ; [ DW_TAG_pointer_type ]
!324 = metadata !{i32 589862, metadata !284, metadata !"", metadata !284, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !301} ; [ DW_TAG_const_type ]
!325 = metadata !{i32 589870, i32 0, metadata !326, metadata !"tcgetattr", metadata !"tcgetattr", metadata !"tcgetattr", metadata !326, i32 39, metadata !328, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32, %struct.termios*)* @tcgetat
!326 = metadata !{i32 589865, metadata !"tcgetattr.c", metadata !"/home/anitha/klee-uclibc/libc/termios", metadata !327} ; [ DW_TAG_file_type ]
!327 = metadata !{i32 589841, i32 0, i32 1, metadata !"tcgetattr.c", metadata !"/home/anitha/klee-uclibc/libc/termios", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!328 = metadata !{i32 589845, metadata !326, metadata !"", metadata !326, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !329, i32 0, null} ; [ DW_TAG_subroutine_type ]
!329 = metadata !{metadata !330, metadata !330, metadata !331}
!330 = metadata !{i32 589860, metadata !326, metadata !"int", metadata !326, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!331 = metadata !{i32 589839, metadata !326, metadata !"", metadata !326, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !332} ; [ DW_TAG_pointer_type ]
!332 = metadata !{i32 589843, metadata !326, metadata !"termios", metadata !333, i32 31, i64 480, i64 32, i64 0, i32 0, null, metadata !334, i32 0, null} ; [ DW_TAG_structure_type ]
!333 = metadata !{i32 589865, metadata !"termios.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !327} ; [ DW_TAG_file_type ]
!334 = metadata !{metadata !335, metadata !338, metadata !339, metadata !340, metadata !341, metadata !344, metadata !348, metadata !350}
!335 = metadata !{i32 589837, metadata !332, metadata !"c_iflag", metadata !333, i32 32, i64 32, i64 32, i64 0, i32 0, metadata !336} ; [ DW_TAG_member ]
!336 = metadata !{i32 589846, metadata !333, metadata !"tcflag_t", metadata !333, i32 27, i64 0, i64 0, i64 0, i32 0, metadata !337} ; [ DW_TAG_typedef ]
!337 = metadata !{i32 589860, metadata !326, metadata !"unsigned int", metadata !326, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!338 = metadata !{i32 589837, metadata !332, metadata !"c_oflag", metadata !333, i32 33, i64 32, i64 32, i64 32, i32 0, metadata !336} ; [ DW_TAG_member ]
!339 = metadata !{i32 589837, metadata !332, metadata !"c_cflag", metadata !333, i32 34, i64 32, i64 32, i64 64, i32 0, metadata !336} ; [ DW_TAG_member ]
!340 = metadata !{i32 589837, metadata !332, metadata !"c_lflag", metadata !333, i32 35, i64 32, i64 32, i64 96, i32 0, metadata !336} ; [ DW_TAG_member ]
!341 = metadata !{i32 589837, metadata !332, metadata !"c_line", metadata !333, i32 36, i64 8, i64 8, i64 128, i32 0, metadata !342} ; [ DW_TAG_member ]
!342 = metadata !{i32 589846, metadata !333, metadata !"cc_t", metadata !333, i32 25, i64 0, i64 0, i64 0, i32 0, metadata !343} ; [ DW_TAG_typedef ]
!343 = metadata !{i32 589860, metadata !326, metadata !"unsigned char", metadata !326, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!344 = metadata !{i32 589837, metadata !332, metadata !"c_cc", metadata !333, i32 37, i64 256, i64 8, i64 136, i32 0, metadata !345} ; [ DW_TAG_member ]
!345 = metadata !{i32 589825, metadata !326, metadata !"", metadata !326, i32 0, i64 256, i64 8, i64 0, i32 0, metadata !342, metadata !346, i32 0, null} ; [ DW_TAG_array_type ]
!346 = metadata !{metadata !347}
!347 = metadata !{i32 589857, i64 0, i64 31}      ; [ DW_TAG_subrange_type ]
!348 = metadata !{i32 589837, metadata !332, metadata !"c_ispeed", metadata !333, i32 38, i64 32, i64 32, i64 416, i32 0, metadata !349} ; [ DW_TAG_member ]
!349 = metadata !{i32 589846, metadata !333, metadata !"speed_t", metadata !333, i32 26, i64 0, i64 0, i64 0, i32 0, metadata !337} ; [ DW_TAG_typedef ]
!350 = metadata !{i32 589837, metadata !332, metadata !"c_ospeed", metadata !333, i32 39, i64 32, i64 32, i64 448, i32 0, metadata !349} ; [ DW_TAG_member ]
!351 = metadata !{i32 589870, i32 0, metadata !352, metadata !"mempcpy", metadata !"mempcpy", metadata !"mempcpy", metadata !352, i32 21, metadata !354, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i8* (i8*, i8*, i64)* @mempcpy} ; [ DW_TAG_s
!352 = metadata !{i32 589865, metadata !"mempcpy.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !353} ; [ DW_TAG_file_type ]
!353 = metadata !{i32 589841, i32 0, i32 1, metadata !"mempcpy.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!354 = metadata !{i32 589845, metadata !352, metadata !"", metadata !352, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !355, i32 0, null} ; [ DW_TAG_subroutine_type ]
!355 = metadata !{metadata !356, metadata !356, metadata !356, metadata !357}
!356 = metadata !{i32 589839, metadata !352, metadata !"", metadata !352, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!357 = metadata !{i32 589846, metadata !358, metadata !"size_t", metadata !358, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !359} ; [ DW_TAG_typedef ]
!358 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !353} ; [ DW_TAG_file_type ]
!359 = metadata !{i32 589860, metadata !352, metadata !"long unsigned int", metadata !352, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!360 = metadata !{i32 589870, i32 0, metadata !361, metadata !"klee_div_zero_check", metadata !"klee_div_zero_check", metadata !"klee_div_zero_check", metadata !361, i32 12, metadata !363, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, void (i6
!361 = metadata !{i32 589865, metadata !"klee_div_zero_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !362} ; [ DW_TAG_file_type ]
!362 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_div_zero_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compil
!363 = metadata !{i32 589845, metadata !361, metadata !"", metadata !361, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !364, i32 0, null} ; [ DW_TAG_subroutine_type ]
!364 = metadata !{null, metadata !365}
!365 = metadata !{i32 589860, metadata !361, metadata !"long long int", metadata !361, i32 0, i64 64, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!366 = metadata !{i32 589870, i32 0, metadata !367, metadata !"klee_int", metadata !"klee_int", metadata !"klee_int", metadata !367, i32 13, metadata !369, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i32 (i8*)* @klee_int} ; [ DW_TAG_subprogr
!367 = metadata !{i32 589865, metadata !"klee_int.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !368} ; [ DW_TAG_file_type ]
!368 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_int.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!369 = metadata !{i32 589845, metadata !367, metadata !"", metadata !367, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !370, i32 0, null} ; [ DW_TAG_subroutine_type ]
!370 = metadata !{metadata !371, metadata !372}
!371 = metadata !{i32 589860, metadata !367, metadata !"int", metadata !367, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!372 = metadata !{i32 589839, metadata !367, metadata !"", metadata !367, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !373} ; [ DW_TAG_pointer_type ]
!373 = metadata !{i32 589862, metadata !367, metadata !"", metadata !367, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !374} ; [ DW_TAG_const_type ]
!374 = metadata !{i32 589860, metadata !367, metadata !"char", metadata !367, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!375 = metadata !{i32 589870, i32 0, metadata !376, metadata !"klee_overshift_check", metadata !"klee_overshift_check", metadata !"klee_overshift_check", metadata !376, i32 20, metadata !378, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, void 
!376 = metadata !{i32 589865, metadata !"klee_overshift_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !377} ; [ DW_TAG_file_type ]
!377 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_overshift_check.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compi
!378 = metadata !{i32 589845, metadata !376, metadata !"", metadata !376, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !379, i32 0, null} ; [ DW_TAG_subroutine_type ]
!379 = metadata !{null, metadata !380, metadata !380}
!380 = metadata !{i32 589860, metadata !376, metadata !"long long unsigned int", metadata !376, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!381 = metadata !{i32 589870, i32 0, metadata !382, metadata !"klee_range", metadata !"klee_range", metadata !"klee_range", metadata !382, i32 13, metadata !384, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i32 (i32, i32, i8*)* @klee_range} ;
!382 = metadata !{i32 589865, metadata !"klee_range.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !383} ; [ DW_TAG_file_type ]
!383 = metadata !{i32 589841, i32 0, i32 1, metadata !"klee_range.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!384 = metadata !{i32 589845, metadata !382, metadata !"", metadata !382, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !385, i32 0, null} ; [ DW_TAG_subroutine_type ]
!385 = metadata !{metadata !386, metadata !386, metadata !386, metadata !387}
!386 = metadata !{i32 589860, metadata !382, metadata !"int", metadata !382, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!387 = metadata !{i32 589839, metadata !382, metadata !"", metadata !382, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !388} ; [ DW_TAG_pointer_type ]
!388 = metadata !{i32 589862, metadata !382, metadata !"", metadata !382, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !389} ; [ DW_TAG_const_type ]
!389 = metadata !{i32 589860, metadata !382, metadata !"char", metadata !382, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!390 = metadata !{i32 589870, i32 0, metadata !391, metadata !"memcpy", metadata !"memcpy", metadata !"memcpy", metadata !391, i32 12, metadata !393, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i8* (i8*, i8*, i64)* @memcpy} ; [ DW_TAG_subpro
!391 = metadata !{i32 589865, metadata !"memcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !392} ; [ DW_TAG_file_type ]
!392 = metadata !{i32 589841, i32 0, i32 1, metadata !"memcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!393 = metadata !{i32 589845, metadata !391, metadata !"", metadata !391, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !394, i32 0, null} ; [ DW_TAG_subroutine_type ]
!394 = metadata !{metadata !395, metadata !395, metadata !395, metadata !396}
!395 = metadata !{i32 589839, metadata !391, metadata !"", metadata !391, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!396 = metadata !{i32 589846, metadata !397, metadata !"size_t", metadata !397, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !398} ; [ DW_TAG_typedef ]
!397 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !392} ; [ DW_TAG_file_type ]
!398 = metadata !{i32 589860, metadata !391, metadata !"long unsigned int", metadata !391, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!399 = metadata !{i32 589870, i32 0, metadata !400, metadata !"memmove", metadata !"memmove", metadata !"memmove", metadata !400, i32 12, metadata !402, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, null} ; [ DW_TAG_subprogram ]
!400 = metadata !{i32 589865, metadata !"memmove.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !401} ; [ DW_TAG_file_type ]
!401 = metadata !{i32 589841, i32 0, i32 1, metadata !"memmove.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!402 = metadata !{i32 589845, metadata !400, metadata !"", metadata !400, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !403, i32 0, null} ; [ DW_TAG_subroutine_type ]
!403 = metadata !{metadata !404, metadata !404, metadata !404, metadata !405}
!404 = metadata !{i32 589839, metadata !400, metadata !"", metadata !400, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!405 = metadata !{i32 589846, metadata !406, metadata !"size_t", metadata !406, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !407} ; [ DW_TAG_typedef ]
!406 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !401} ; [ DW_TAG_file_type ]
!407 = metadata !{i32 589860, metadata !400, metadata !"long unsigned int", metadata !400, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!408 = metadata !{i32 589870, i32 0, metadata !409, metadata !"mempcpy", metadata !"mempcpy", metadata !"mempcpy", metadata !409, i32 11, metadata !411, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i8* (i8*, i8*, i64)* @mempcpy} ; [ DW_TAG_su
!409 = metadata !{i32 589865, metadata !"mempcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !410} ; [ DW_TAG_file_type ]
!410 = metadata !{i32 589841, i32 0, i32 1, metadata !"mempcpy.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!411 = metadata !{i32 589845, metadata !409, metadata !"", metadata !409, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !412, i32 0, null} ; [ DW_TAG_subroutine_type ]
!412 = metadata !{metadata !413, metadata !413, metadata !413, metadata !414}
!413 = metadata !{i32 589839, metadata !409, metadata !"", metadata !409, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!414 = metadata !{i32 589846, metadata !415, metadata !"size_t", metadata !415, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !416} ; [ DW_TAG_typedef ]
!415 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !410} ; [ DW_TAG_file_type ]
!416 = metadata !{i32 589860, metadata !409, metadata !"long unsigned int", metadata !409, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!417 = metadata !{i32 589870, i32 0, metadata !418, metadata !"memset", metadata !"memset", metadata !"memset", metadata !418, i32 11, metadata !420, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 true, i8* (i8*, i32, i64)* @memset} ; [ DW_TAG_subpro
!418 = metadata !{i32 589865, metadata !"memset.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !419} ; [ DW_TAG_file_type ]
!419 = metadata !{i32 589841, i32 0, i32 1, metadata !"memset.c", metadata !"/home/anitha/klee/runtime/Intrinsic/", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 true, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!420 = metadata !{i32 589845, metadata !418, metadata !"", metadata !418, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !421, i32 0, null} ; [ DW_TAG_subroutine_type ]
!421 = metadata !{metadata !422, metadata !422, metadata !423, metadata !424}
!422 = metadata !{i32 589839, metadata !418, metadata !"", metadata !418, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!423 = metadata !{i32 589860, metadata !418, metadata !"int", metadata !418, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!424 = metadata !{i32 589846, metadata !425, metadata !"size_t", metadata !425, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !426} ; [ DW_TAG_typedef ]
!425 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !419} ; [ DW_TAG_file_type ]
!426 = metadata !{i32 589860, metadata !418, metadata !"long unsigned int", metadata !418, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!427 = metadata !{i32 589876, i32 0, metadata !12, metadata !"__libc_stack_end", metadata !"__libc_stack_end", metadata !"", metadata !12, i32 52, metadata !40, i1 false, i1 true, i8** @__libc_stack_end} ; [ DW_TAG_variable ]
!428 = metadata !{i32 589876, i32 0, metadata !12, metadata !"__uclibc_progname", metadata !"__uclibc_progname", metadata !"", metadata !12, i32 110, metadata !429, i1 false, i1 true, i8** @__uclibc_progname} ; [ DW_TAG_variable ]
!429 = metadata !{i32 589839, metadata !12, metadata !"", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !430} ; [ DW_TAG_pointer_type ]
!430 = metadata !{i32 589862, metadata !12, metadata !"", metadata !12, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !38} ; [ DW_TAG_const_type ]
!431 = metadata !{i32 589876, i32 0, metadata !12, metadata !"__environ", metadata !"__environ", metadata !"", metadata !12, i32 125, metadata !36, i1 false, i1 true, i8*** @__environ} ; [ DW_TAG_variable ]
!432 = metadata !{i32 589876, i32 0, metadata !12, metadata !"__pagesize", metadata !"__pagesize", metadata !"", metadata !12, i32 129, metadata !433, i1 false, i1 true, i64* @__pagesize} ; [ DW_TAG_variable ]
!433 = metadata !{i32 589846, metadata !434, metadata !"size_t", metadata !434, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !435} ; [ DW_TAG_typedef ]
!434 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !13} ; [ DW_TAG_file_type ]
!435 = metadata !{i32 589860, metadata !12, metadata !"long unsigned int", metadata !12, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!436 = metadata !{i32 589876, i32 0, metadata !26, metadata !"been_there_done_that", metadata !"been_there_done_that", metadata !"", metadata !12, i32 189, metadata !16, i1 true, i1 true, i32* @been_there_done_that.2848} ; [ DW_TAG_variable ]
!437 = metadata !{i32 589876, i32 0, metadata !12, metadata !"__app_fini", metadata !"__app_fini", metadata !"", metadata !12, i32 244, metadata !39, i1 false, i1 true, void ()** @__app_fini} ; [ DW_TAG_variable ]
!438 = metadata !{i32 589876, i32 0, metadata !12, metadata !"__rtld_fini", metadata !"__rtld_fini", metadata !"", metadata !12, i32 247, metadata !39, i1 false, i1 true, void ()** @__rtld_fini} ; [ DW_TAG_variable ]
!439 = metadata !{i32 589876, i32 0, metadata !79, metadata !"_stdio_streams", metadata !"_stdio_streams", metadata !"", metadata !79, i32 131, metadata !440, i1 true, i1 true, [3 x %struct.FILE]* @_stdio_streams} ; [ DW_TAG_variable ]
!440 = metadata !{i32 589825, metadata !79, metadata !"", metadata !79, i32 0, i64 1920, i64 64, i64 0, i32 0, metadata !441, metadata !473, i32 0, null} ; [ DW_TAG_array_type ]
!441 = metadata !{i32 589846, metadata !442, metadata !"FILE", metadata !442, i32 46, i64 0, i64 0, i64 0, i32 0, metadata !443} ; [ DW_TAG_typedef ]
!442 = metadata !{i32 589865, metadata !"stdio.h", metadata !"/home/anitha/klee-uclibc/./include", metadata !80} ; [ DW_TAG_file_type ]
!443 = metadata !{i32 589843, metadata !79, metadata !"__STDIO_FILE_STRUCT", metadata !442, i32 46, i64 640, i64 64, i64 0, i32 0, null, metadata !444, i32 0, null} ; [ DW_TAG_structure_type ]
!444 = metadata !{metadata !445, metadata !448, metadata !451, metadata !453, metadata !455, metadata !456, metadata !457, metadata !458, metadata !459, metadata !460, metadata !462, metadata !466}
!445 = metadata !{i32 589837, metadata !443, metadata !"__modeflags", metadata !446, i32 234, i64 16, i64 16, i64 0, i32 0, metadata !447} ; [ DW_TAG_member ]
!446 = metadata !{i32 589865, metadata !"uClibc_stdio.h", metadata !"/home/anitha/klee-uclibc/./include/bits", metadata !80} ; [ DW_TAG_file_type ]
!447 = metadata !{i32 589860, metadata !79, metadata !"short unsigned int", metadata !79, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!448 = metadata !{i32 589837, metadata !443, metadata !"__ungot_width", metadata !446, i32 237, i64 16, i64 8, i64 16, i32 0, metadata !449} ; [ DW_TAG_member ]
!449 = metadata !{i32 589825, metadata !79, metadata !"", metadata !79, i32 0, i64 16, i64 8, i64 0, i32 0, metadata !450, metadata !150, i32 0, null} ; [ DW_TAG_array_type ]
!450 = metadata !{i32 589860, metadata !79, metadata !"unsigned char", metadata !79, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!451 = metadata !{i32 589837, metadata !443, metadata !"__filedes", metadata !446, i32 244, i64 32, i64 32, i64 32, i32 0, metadata !452} ; [ DW_TAG_member ]
!452 = metadata !{i32 589860, metadata !79, metadata !"int", metadata !79, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!453 = metadata !{i32 589837, metadata !443, metadata !"__bufstart", metadata !446, i32 246, i64 64, i64 64, i64 64, i32 0, metadata !454} ; [ DW_TAG_member ]
!454 = metadata !{i32 589839, metadata !79, metadata !"", metadata !79, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !450} ; [ DW_TAG_pointer_type ]
!455 = metadata !{i32 589837, metadata !443, metadata !"__bufend", metadata !446, i32 247, i64 64, i64 64, i64 128, i32 0, metadata !454} ; [ DW_TAG_member ]
!456 = metadata !{i32 589837, metadata !443, metadata !"__bufpos", metadata !446, i32 248, i64 64, i64 64, i64 192, i32 0, metadata !454} ; [ DW_TAG_member ]
!457 = metadata !{i32 589837, metadata !443, metadata !"__bufread", metadata !446, i32 249, i64 64, i64 64, i64 256, i32 0, metadata !454} ; [ DW_TAG_member ]
!458 = metadata !{i32 589837, metadata !443, metadata !"__bufgetc_u", metadata !446, i32 252, i64 64, i64 64, i64 320, i32 0, metadata !454} ; [ DW_TAG_member ]
!459 = metadata !{i32 589837, metadata !443, metadata !"__bufputc_u", metadata !446, i32 255, i64 64, i64 64, i64 384, i32 0, metadata !454} ; [ DW_TAG_member ]
!460 = metadata !{i32 589837, metadata !443, metadata !"__nextopen", metadata !446, i32 261, i64 64, i64 64, i64 448, i32 0, metadata !461} ; [ DW_TAG_member ]
!461 = metadata !{i32 589839, metadata !79, metadata !"", metadata !79, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !443} ; [ DW_TAG_pointer_type ]
!462 = metadata !{i32 589837, metadata !443, metadata !"__ungot", metadata !446, i32 268, i64 64, i64 32, i64 512, i32 0, metadata !463} ; [ DW_TAG_member ]
!463 = metadata !{i32 589825, metadata !79, metadata !"", metadata !79, i32 0, i64 64, i64 32, i64 0, i32 0, metadata !464, metadata !150, i32 0, null} ; [ DW_TAG_array_type ]
!464 = metadata !{i32 589846, metadata !465, metadata !"wchar_t", metadata !465, i32 326, i64 0, i64 0, i64 0, i32 0, metadata !452} ; [ DW_TAG_typedef ]
!465 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !80} ; [ DW_TAG_file_type ]
!466 = metadata !{i32 589837, metadata !443, metadata !"__state", metadata !446, i32 271, i64 64, i64 32, i64 576, i32 0, metadata !467} ; [ DW_TAG_member ]
!467 = metadata !{i32 589846, metadata !468, metadata !"__mbstate_t", metadata !468, i32 85, i64 0, i64 0, i64 0, i32 0, metadata !469} ; [ DW_TAG_typedef ]
!468 = metadata !{i32 589865, metadata !"wchar.h", metadata !"/home/anitha/klee-uclibc/./include", metadata !80} ; [ DW_TAG_file_type ]
!469 = metadata !{i32 589843, metadata !79, metadata !"", metadata !468, i32 82, i64 64, i64 32, i64 0, i32 0, null, metadata !470, i32 0, null} ; [ DW_TAG_structure_type ]
!470 = metadata !{metadata !471, metadata !472}
!471 = metadata !{i32 589837, metadata !469, metadata !"__mask", metadata !468, i32 83, i64 32, i64 32, i64 0, i32 0, metadata !464} ; [ DW_TAG_member ]
!472 = metadata !{i32 589837, metadata !469, metadata !"__wc", metadata !468, i32 84, i64 32, i64 32, i64 32, i32 0, metadata !464} ; [ DW_TAG_member ]
!473 = metadata !{metadata !474}
!474 = metadata !{i32 589857, i64 0, i64 2}       ; [ DW_TAG_subrange_type ]
!475 = metadata !{i32 589876, i32 0, metadata !79, metadata !"stdin", metadata !"stdin", metadata !"", metadata !79, i32 154, metadata !476, i1 false, i1 true, %struct.FILE** @stdin} ; [ DW_TAG_variable ]
!476 = metadata !{i32 589839, metadata !79, metadata !"", metadata !79, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !441} ; [ DW_TAG_pointer_type ]
!477 = metadata !{i32 589876, i32 0, metadata !79, metadata !"stdout", metadata !"stdout", metadata !"", metadata !79, i32 155, metadata !476, i1 false, i1 true, %struct.FILE** @stdout} ; [ DW_TAG_variable ]
!478 = metadata !{i32 589876, i32 0, metadata !79, metadata !"stderr", metadata !"stderr", metadata !"", metadata !79, i32 156, metadata !476, i1 false, i1 true, %struct.FILE** @stderr} ; [ DW_TAG_variable ]
!479 = metadata !{i32 589876, i32 0, metadata !79, metadata !"__stdin", metadata !"__stdin", metadata !"", metadata !79, i32 159, metadata !476, i1 false, i1 true, %struct.FILE** @__stdin} ; [ DW_TAG_variable ]
!480 = metadata !{i32 589876, i32 0, metadata !79, metadata !"__stdout", metadata !"__stdout", metadata !"", metadata !79, i32 162, metadata !476, i1 false, i1 true, %struct.FILE** @__stdout} ; [ DW_TAG_variable ]
!481 = metadata !{i32 589876, i32 0, metadata !79, metadata !"_stdio_openlist", metadata !"_stdio_openlist", metadata !"", metadata !79, i32 180, metadata !461, i1 false, i1 true, %struct.FILE** @_stdio_openlist} ; [ DW_TAG_variable ]
!482 = metadata !{i32 589876, i32 0, metadata !84, metadata !"been_there_done_that", metadata !"been_there_done_that", metadata !"", metadata !84, i32 49, metadata !483, i1 true, i1 true, i32* @been_there_done_that} ; [ DW_TAG_variable ]
!483 = metadata !{i32 589860, metadata !84, metadata !"int", metadata !84, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!484 = metadata !{i32 589876, i32 0, metadata !90, metadata !"__exit_cleanup", metadata !"__exit_cleanup", metadata !"", metadata !90, i32 309, metadata !485, i1 false, i1 true, void (i32)** @__exit_cleanup} ; [ DW_TAG_variable ]
!485 = metadata !{i32 589839, metadata !88, metadata !"", metadata !88, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !91} ; [ DW_TAG_pointer_type ]
!486 = metadata !{i32 589876, i32 0, metadata !487, metadata !"errno", metadata !"errno", metadata !"", metadata !487, i32 7, metadata !489, i1 false, i1 true, i32* @errno} ; [ DW_TAG_variable ]
!487 = metadata !{i32 589865, metadata !"errno.c", metadata !"/home/anitha/klee-uclibc/libc/misc/internals", metadata !488} ; [ DW_TAG_file_type ]
!488 = metadata !{i32 589841, i32 0, i32 1, metadata !"errno.c", metadata !"/home/anitha/klee-uclibc/libc/misc/internals", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_uni
!489 = metadata !{i32 589860, metadata !487, metadata !"int", metadata !487, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!490 = metadata !{i32 589876, i32 0, metadata !487, metadata !"h_errno", metadata !"h_errno", metadata !"", metadata !487, i32 8, metadata !489, i1 false, i1 true, i32* @h_errno} ; [ DW_TAG_variable ]
!491 = metadata !{i32 590081, metadata !360, metadata !"z", metadata !361, i32 12, metadata !365, i32 0} ; [ DW_TAG_arg_variable ]
!492 = metadata !{i32 590081, metadata !366, metadata !"name", metadata !367, i32 13, metadata !372, i32 0} ; [ DW_TAG_arg_variable ]
!493 = metadata !{i32 590080, metadata !494, metadata !"x", metadata !367, i32 14, metadata !371, i32 0} ; [ DW_TAG_auto_variable ]
!494 = metadata !{i32 589835, metadata !366, i32 13, i32 0, metadata !367, i32 0} ; [ DW_TAG_lexical_block ]
!495 = metadata !{i32 590081, metadata !375, metadata !"bitWidth", metadata !376, i32 20, metadata !380, i32 0} ; [ DW_TAG_arg_variable ]
!496 = metadata !{i32 590081, metadata !375, metadata !"shift", metadata !376, i32 20, metadata !380, i32 0} ; [ DW_TAG_arg_variable ]
!497 = metadata !{i32 590081, metadata !381, metadata !"start", metadata !382, i32 13, metadata !386, i32 0} ; [ DW_TAG_arg_variable ]
!498 = metadata !{i32 590081, metadata !381, metadata !"end", metadata !382, i32 13, metadata !386, i32 0} ; [ DW_TAG_arg_variable ]
!499 = metadata !{i32 590081, metadata !381, metadata !"name", metadata !382, i32 13, metadata !387, i32 0} ; [ DW_TAG_arg_variable ]
!500 = metadata !{i32 590080, metadata !501, metadata !"x", metadata !382, i32 14, metadata !386, i32 0} ; [ DW_TAG_auto_variable ]
!501 = metadata !{i32 589835, metadata !381, i32 13, i32 0, metadata !382, i32 0} ; [ DW_TAG_lexical_block ]
!502 = metadata !{i32 590081, metadata !390, metadata !"destaddr", metadata !391, i32 12, metadata !395, i32 0} ; [ DW_TAG_arg_variable ]
!503 = metadata !{i32 590081, metadata !390, metadata !"srcaddr", metadata !391, i32 12, metadata !395, i32 0} ; [ DW_TAG_arg_variable ]
!504 = metadata !{i32 590081, metadata !390, metadata !"len", metadata !391, i32 12, metadata !396, i32 0} ; [ DW_TAG_arg_variable ]
!505 = metadata !{i32 590080, metadata !506, metadata !"dest", metadata !391, i32 13, metadata !507, i32 0} ; [ DW_TAG_auto_variable ]
!506 = metadata !{i32 589835, metadata !390, i32 12, i32 0, metadata !391, i32 0} ; [ DW_TAG_lexical_block ]
!507 = metadata !{i32 589839, metadata !391, metadata !"", metadata !391, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !508} ; [ DW_TAG_pointer_type ]
!508 = metadata !{i32 589860, metadata !391, metadata !"char", metadata !391, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!509 = metadata !{i32 590080, metadata !506, metadata !"src", metadata !391, i32 14, metadata !510, i32 0} ; [ DW_TAG_auto_variable ]
!510 = metadata !{i32 589839, metadata !391, metadata !"", metadata !391, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !511} ; [ DW_TAG_pointer_type ]
!511 = metadata !{i32 589862, metadata !391, metadata !"", metadata !391, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !508} ; [ DW_TAG_const_type ]
!512 = metadata !{i32 590081, metadata !399, metadata !"dst", metadata !400, i32 12, metadata !404, i32 0} ; [ DW_TAG_arg_variable ]
!513 = metadata !{i32 590081, metadata !399, metadata !"src", metadata !400, i32 12, metadata !404, i32 0} ; [ DW_TAG_arg_variable ]
!514 = metadata !{i32 590081, metadata !399, metadata !"count", metadata !400, i32 12, metadata !405, i32 0} ; [ DW_TAG_arg_variable ]
!515 = metadata !{i32 590080, metadata !516, metadata !"a", metadata !400, i32 13, metadata !517, i32 0} ; [ DW_TAG_auto_variable ]
!516 = metadata !{i32 589835, metadata !399, i32 12, i32 0, metadata !400, i32 0} ; [ DW_TAG_lexical_block ]
!517 = metadata !{i32 589839, metadata !400, metadata !"", metadata !400, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !518} ; [ DW_TAG_pointer_type ]
!518 = metadata !{i32 589860, metadata !400, metadata !"char", metadata !400, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!519 = metadata !{i32 590080, metadata !516, metadata !"b", metadata !400, i32 14, metadata !520, i32 0} ; [ DW_TAG_auto_variable ]
!520 = metadata !{i32 589839, metadata !400, metadata !"", metadata !400, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !521} ; [ DW_TAG_pointer_type ]
!521 = metadata !{i32 589862, metadata !400, metadata !"", metadata !400, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !518} ; [ DW_TAG_const_type ]
!522 = metadata !{i32 590081, metadata !408, metadata !"destaddr", metadata !409, i32 11, metadata !413, i32 0} ; [ DW_TAG_arg_variable ]
!523 = metadata !{i32 590081, metadata !408, metadata !"srcaddr", metadata !409, i32 11, metadata !413, i32 0} ; [ DW_TAG_arg_variable ]
!524 = metadata !{i32 590081, metadata !408, metadata !"len", metadata !409, i32 11, metadata !414, i32 0} ; [ DW_TAG_arg_variable ]
!525 = metadata !{i32 590080, metadata !526, metadata !"dest", metadata !409, i32 12, metadata !527, i32 0} ; [ DW_TAG_auto_variable ]
!526 = metadata !{i32 589835, metadata !408, i32 11, i32 0, metadata !409, i32 0} ; [ DW_TAG_lexical_block ]
!527 = metadata !{i32 589839, metadata !409, metadata !"", metadata !409, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !528} ; [ DW_TAG_pointer_type ]
!528 = metadata !{i32 589860, metadata !409, metadata !"char", metadata !409, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!529 = metadata !{i32 590080, metadata !526, metadata !"src", metadata !409, i32 13, metadata !530, i32 0} ; [ DW_TAG_auto_variable ]
!530 = metadata !{i32 589839, metadata !409, metadata !"", metadata !409, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !531} ; [ DW_TAG_pointer_type ]
!531 = metadata !{i32 589862, metadata !409, metadata !"", metadata !409, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !528} ; [ DW_TAG_const_type ]
!532 = metadata !{i32 590081, metadata !417, metadata !"dst", metadata !418, i32 11, metadata !422, i32 0} ; [ DW_TAG_arg_variable ]
!533 = metadata !{i32 590081, metadata !417, metadata !"s", metadata !418, i32 11, metadata !423, i32 0} ; [ DW_TAG_arg_variable ]
!534 = metadata !{i32 590081, metadata !417, metadata !"count", metadata !418, i32 11, metadata !424, i32 0} ; [ DW_TAG_arg_variable ]
!535 = metadata !{i32 590080, metadata !536, metadata !"a", metadata !418, i32 12, metadata !537, i32 0} ; [ DW_TAG_auto_variable ]
!536 = metadata !{i32 589835, metadata !417, i32 11, i32 0, metadata !418, i32 0} ; [ DW_TAG_lexical_block ]
!537 = metadata !{i32 589839, metadata !418, metadata !"", metadata !418, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !538} ; [ DW_TAG_pointer_type ]
!538 = metadata !{i32 589877, metadata !418, metadata !"", metadata !418, i32 0, i64 8, i64 8, i64 0, i32 0, metadata !539} ; [ DW_TAG_volatile_type ]
!539 = metadata !{i32 589860, metadata !418, metadata !"char", metadata !418, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!540 = metadata !{i32 6, i32 0, metadata !541, null}
!541 = metadata !{i32 589835, metadata !0, i32 4, i32 0, metadata !1, i32 0} ; [ DW_TAG_lexical_block ]
!542 = metadata !{i32 7, i32 0, metadata !541, null}
!543 = metadata !{i32 9, i32 0, metadata !541, null}
!544 = metadata !{i32 15, i32 0, metadata !545, null}
!545 = metadata !{i32 589835, metadata !8, i32 13, i32 0, metadata !1, i32 1} ; [ DW_TAG_lexical_block ]
!546 = metadata !{i32 16, i32 0, metadata !545, null}
!547 = metadata !{i32 17, i32 0, metadata !545, null}
!548 = metadata !{i32 139, i32 0, metadata !549, null}
!549 = metadata !{i32 589835, metadata !11, i32 137, i32 0, metadata !12, i32 0} ; [ DW_TAG_lexical_block ]
!550 = metadata !{i32 143, i32 0, metadata !551, null}
!551 = metadata !{i32 589835, metadata !549, i32 137, i32 0, metadata !12, i32 1} ; [ DW_TAG_lexical_block ]
!552 = metadata !{i32 147, i32 0, metadata !551, null}
!553 = metadata !{i32 150, i32 0, metadata !551, null}
!554 = metadata !{i32 153, i32 0, metadata !551, null}
!555 = metadata !{i32 56, i32 0, metadata !556, null}
!556 = metadata !{i32 589835, metadata !17, i32 55, i32 0, metadata !18, i32 2} ; [ DW_TAG_lexical_block ]
!557 = metadata !{i32 160, i32 0, metadata !558, null}
!558 = metadata !{i32 589835, metadata !23, i32 156, i32 0, metadata !12, i32 3} ; [ DW_TAG_lexical_block ]
!559 = metadata !{i32 161, i32 0, metadata !558, null}
!560 = metadata !{i32 162, i32 0, metadata !558, null}
!561 = metadata !{i32 163, i32 0, metadata !558, null}
!562 = metadata !{i32 165, i32 0, metadata !558, null}
!563 = metadata !{i32 166, i32 0, metadata !558, null}
!564 = metadata !{i32 168, i32 0, metadata !558, null}
!565 = metadata !{i32 191, i32 0, metadata !566, null}
!566 = metadata !{i32 589835, metadata !26, i32 188, i32 0, metadata !12, i32 4} ; [ DW_TAG_lexical_block ]
!567 = metadata !{i32 193, i32 0, metadata !566, null}
!568 = metadata !{i32 197, i32 0, metadata !566, null}
!569 = metadata !{i32 239, i32 0, metadata !566, null}
!570 = metadata !{i32 192, i32 0, metadata !566, null}
!571 = metadata !{i32 263, i32 0, metadata !572, null}
!572 = metadata !{i32 589835, metadata !29, i32 252, i32 0, metadata !12, i32 5} ; [ DW_TAG_lexical_block ]
!573 = metadata !{i32 264, i32 0, metadata !572, null}
!574 = metadata !{i32 266, i32 0, metadata !572, null}
!575 = metadata !{i32 267, i32 0, metadata !572, null}
!576 = metadata !{i32 268, i32 0, metadata !572, null}
!577 = metadata !{i32 288, i32 0, metadata !578, null}
!578 = metadata !{i32 589835, metadata !30, i32 281, i32 0, metadata !12, i32 6} ; [ DW_TAG_lexical_block ]
!579 = metadata !{i32 291, i32 0, metadata !578, null}
!580 = metadata !{i32 294, i32 0, metadata !578, null}
!581 = metadata !{i32 298, i32 0, metadata !578, null}
!582 = metadata !{i32 300, i32 0, metadata !578, null}
!583 = metadata !{i32 305, i32 0, metadata !578, null}
!584 = metadata !{i32 306, i32 0, metadata !578, null}
!585 = metadata !{i32 307, i32 0, metadata !578, null}
!586 = metadata !{i32 308, i32 0, metadata !578, null}
!587 = metadata !{i32 312, i32 0, metadata !588, null}
!588 = metadata !{i32 589835, metadata !578, i32 312, i32 0, metadata !12, i32 7} ; [ DW_TAG_lexical_block ]
!589 = metadata !{i32 313, i32 0, metadata !588, null}
!590 = metadata !{i32 314, i32 0, metadata !588, null}
!591 = metadata !{i32 316, i32 0, metadata !588, null}
!592 = metadata !{i32 311, i32 0, metadata !578, null}
!593 = metadata !{i32 323, i32 0, metadata !578, null}
!594 = metadata !{i32 327, i32 0, metadata !578, null}
!595 = metadata !{i32 331, i32 0, metadata !578, null}
!596 = metadata !{i32 336, i32 0, metadata !578, null}
!597 = metadata !{i32 337, i32 0, metadata !578, null}
!598 = metadata !{i32 338, i32 0, metadata !578, null}
!599 = metadata !{i32 342, i32 0, metadata !578, null}
!600 = metadata !{i32 354, i32 0, metadata !578, null}
!601 = metadata !{i32 370, i32 0, metadata !578, null}
!602 = metadata !{i32 371, i32 0, metadata !578, null}
!603 = metadata !{i32 391, i32 0, metadata !578, null}
!604 = metadata !{i32 392, i32 0, metadata !578, null}
!605 = metadata !{i32 395, i32 0, metadata !578, null}
!606 = metadata !{i32 396, i32 0, metadata !578, null}
!607 = metadata !{i32 401, i32 0, metadata !578, null}
!608 = metadata !{i32 22, i32 0, metadata !609, null}
!609 = metadata !{i32 589835, metadata !41, i32 19, i32 0, metadata !42, i32 0} ; [ DW_TAG_lexical_block ]
!610 = metadata !{i32 24, i32 0, metadata !609, null}
!611 = metadata !{i32 30, i32 0, metadata !612, null}
!612 = metadata !{i32 589835, metadata !52, i32 18, i32 0, metadata !53, i32 0} ; [ DW_TAG_lexical_block ]
!613 = metadata !{i32 32, i32 0, metadata !612, null}
!614 = metadata !{i32 37, i32 0, metadata !612, null}
!615 = metadata !{i32 13, i32 0, metadata !616, null}
!616 = metadata !{i32 589835, metadata !64, i32 12, i32 0, metadata !65, i32 0} ; [ DW_TAG_lexical_block ]
!617 = metadata !{i32 12, i32 0, metadata !618, null}
!618 = metadata !{i32 589835, metadata !71, i32 11, i32 0, metadata !72, i32 0} ; [ DW_TAG_lexical_block ]
!619 = metadata !{i32 258, i32 0, metadata !620, null}
!620 = metadata !{i32 589835, metadata !78, i32 211, i32 0, metadata !79, i32 0} ; [ DW_TAG_lexical_block ]
!621 = metadata !{i32 261, i32 0, metadata !620, null}
!622 = metadata !{i32 262, i32 0, metadata !620, null}
!623 = metadata !{i32 274, i32 0, metadata !620, null}
!624 = metadata !{i32 280, i32 0, metadata !625, null}
!625 = metadata !{i32 589835, metadata !82, i32 278, i32 0, metadata !79, i32 1} ; [ DW_TAG_lexical_block ]
!626 = metadata !{i32 282, i32 0, metadata !625, null}
!627 = metadata !{i32 283, i32 0, metadata !625, null}
!628 = metadata !{i32 284, i32 0, metadata !625, null}
!629 = metadata !{i32 291, i32 0, metadata !625, null}
!630 = metadata !{i32 322, i32 0, metadata !631, null}
!631 = metadata !{i32 589835, metadata !87, i32 319, i32 0, metadata !90, i32 0} ; [ DW_TAG_lexical_block ]
!632 = metadata !{i32 323, i32 0, metadata !631, null}
!633 = metadata !{i32 327, i32 0, metadata !631, null}
!634 = metadata !{i32 334, i32 0, metadata !631, null}
!635 = metadata !{i32 336, i32 0, metadata !631, null}
!636 = metadata !{i32 20, i32 0, metadata !637, null}
!637 = metadata !{i32 589835, metadata !94, i32 19, i32 0, metadata !95, i32 0} ; [ DW_TAG_lexical_block ]
!638 = metadata !{i32 21, i32 0, metadata !637, null}
!639 = metadata !{i32 29, i32 0, metadata !637, null}
!640 = metadata !{i32 30, i32 0, metadata !637, null}
!641 = metadata !{i32 28, i32 0, metadata !637, null}
!642 = metadata !{i32 34, i32 0, metadata !637, null}
!643 = metadata !{i32 19, i32 0, metadata !644, null}
!644 = metadata !{i32 589835, metadata !103, i32 18, i32 0, metadata !104, i32 0} ; [ DW_TAG_lexical_block ]
!645 = metadata !{i32 28, i32 0, metadata !644, null}
!646 = metadata !{i32 29, i32 0, metadata !644, null}
!647 = metadata !{i32 27, i32 0, metadata !644, null}
!648 = metadata !{i32 32, i32 0, metadata !644, null}
!649 = metadata !{i32 117, i32 0, metadata !113, null}
!650 = metadata !{i32 117, i32 0, metadata !651, null}
!651 = metadata !{i32 589835, metadata !113, i32 117, i32 0, metadata !116, i32 0} ; [ DW_TAG_lexical_block ]
!652 = metadata !{i32 118, i32 0, metadata !129, null}
!653 = metadata !{i32 118, i32 0, metadata !654, null}
!654 = metadata !{i32 589835, metadata !129, i32 118, i32 0, metadata !116, i32 1} ; [ DW_TAG_lexical_block ]
!655 = metadata !{i32 119, i32 0, metadata !130, null}
!656 = metadata !{i32 119, i32 0, metadata !657, null}
!657 = metadata !{i32 589835, metadata !130, i32 119, i32 0, metadata !116, i32 2} ; [ DW_TAG_lexical_block ]
!658 = metadata !{i32 23, i32 0, metadata !659, null}
!659 = metadata !{i32 589835, metadata !131, i32 18, i32 0, metadata !132, i32 0} ; [ DW_TAG_lexical_block ]
!660 = metadata !{i32 24, i32 0, metadata !659, null}
!661 = metadata !{i32 25, i32 0, metadata !659, null}
!662 = metadata !{i32 28, i32 0, metadata !659, null}
!663 = metadata !{i32 30, i32 0, metadata !664, null}
!664 = metadata !{i32 589835, metadata !173, i32 27, i32 0, metadata !174, i32 0} ; [ DW_TAG_lexical_block ]
!665 = metadata !{i32 17, i32 0, metadata !666, null}
!666 = metadata !{i32 589835, metadata !179, i32 16, i32 0, metadata !180, i32 0} ; [ DW_TAG_lexical_block ]
!667 = metadata !{i32 47, i32 0, metadata !668, null}
!668 = metadata !{i32 589835, metadata !185, i32 43, i32 0, metadata !186, i32 0} ; [ DW_TAG_lexical_block ]
!669 = metadata !{i32 48, i32 0, metadata !668, null}
!670 = metadata !{i32 49, i32 0, metadata !668, null}
!671 = metadata !{i32 50, i32 0, metadata !668, null}
!672 = metadata !{i32 52, i32 0, metadata !668, null}
!673 = metadata !{i32 58, i32 0, metadata !668, null}
!674 = metadata !{i32 62, i32 0, metadata !668, null}
!675 = metadata !{i32 63, i32 0, metadata !668, null}
!676 = metadata !{i32 64, i32 0, metadata !668, null}
!677 = metadata !{i32 65, i32 0, metadata !668, null}
!678 = metadata !{i32 67, i32 0, metadata !668, null}
!679 = metadata !{i32 71, i32 0, metadata !668, null}
!680 = metadata !{i32 44, i32 0, metadata !681, null}
!681 = metadata !{i32 589835, metadata !283, i32 35, i32 0, metadata !284, i32 0} ; [ DW_TAG_lexical_block ]
!682 = metadata !{i32 47, i32 0, metadata !681, null}
!683 = metadata !{i32 49, i32 0, metadata !681, null}
!684 = metadata !{i32 51, i32 0, metadata !681, null}
!685 = metadata !{i32 52, i32 0, metadata !681, null}
!686 = metadata !{i32 62, i32 0, metadata !681, null}
!687 = metadata !{i32 63, i32 0, metadata !681, null}
!688 = metadata !{i32 70, i32 0, metadata !681, null}
!689 = metadata !{i32 73, i32 0, metadata !681, null}
!690 = metadata !{i32 76, i32 0, metadata !691, null}
!691 = metadata !{i32 589835, metadata !681, i32 76, i32 0, metadata !284, i32 1} ; [ DW_TAG_lexical_block ]
!692 = metadata !{i32 77, i32 0, metadata !691, null}
!693 = metadata !{i32 80, i32 0, metadata !691, null}
!694 = metadata !{i32 83, i32 0, metadata !691, null}
!695 = metadata !{i32 88, i32 0, metadata !691, null}
!696 = metadata !{i32 89, i32 0, metadata !691, null}
!697 = metadata !{i32 90, i32 0, metadata !691, null}
!698 = metadata !{i32 92, i32 0, metadata !691, null}
!699 = metadata !{i32 94, i32 0, metadata !691, null}
!700 = metadata !{i32 99, i32 0, metadata !681, null}
!701 = metadata !{i32 43, i32 0, metadata !702, null}
!702 = metadata !{i32 589835, metadata !325, i32 39, i32 0, metadata !326, i32 0} ; [ DW_TAG_lexical_block ]
!703 = metadata !{i32 45, i32 0, metadata !702, null}
!704 = metadata !{i32 46, i32 0, metadata !702, null}
!705 = metadata !{i32 47, i32 0, metadata !702, null}
!706 = metadata !{i32 48, i32 0, metadata !702, null}
!707 = metadata !{i32 49, i32 0, metadata !702, null}
!708 = metadata !{i32 61, i32 0, metadata !702, null}
!709 = metadata !{i32 79, i32 0, metadata !702, null}
!710 = metadata !{i32 22, i32 0, metadata !711, null}
!711 = metadata !{i32 589835, metadata !351, i32 21, i32 0, metadata !352, i32 0} ; [ DW_TAG_lexical_block ]
!712 = metadata !{i32 23, i32 0, metadata !711, null}
!713 = metadata !{i32 31, i32 0, metadata !711, null}
!714 = metadata !{i32 32, i32 0, metadata !711, null}
!715 = metadata !{i32 30, i32 0, metadata !711, null}
!716 = metadata !{i32 36, i32 0, metadata !711, null}
!717 = metadata !{i32 13, i32 0, metadata !718, null}
!718 = metadata !{i32 589835, metadata !360, i32 12, i32 0, metadata !361, i32 0} ; [ DW_TAG_lexical_block ]
!719 = metadata !{i32 14, i32 0, metadata !718, null}
!720 = metadata !{i32 15, i32 0, metadata !718, null}
!721 = metadata !{i32 15, i32 0, metadata !494, null}
!722 = metadata !{i32 16, i32 0, metadata !494, null}
!723 = metadata !{i32 21, i32 0, metadata !724, null}
!724 = metadata !{i32 589835, metadata !375, i32 20, i32 0, metadata !376, i32 0} ; [ DW_TAG_lexical_block ]
!725 = metadata !{i32 27, i32 0, metadata !724, null}
!726 = metadata !{i32 29, i32 0, metadata !724, null}
!727 = metadata !{i32 16, i32 0, metadata !501, null}
!728 = metadata !{i32 17, i32 0, metadata !501, null}
!729 = metadata !{i32 19, i32 0, metadata !501, null}
!730 = metadata !{i32 22, i32 0, metadata !501, null}
!731 = metadata !{i32 25, i32 0, metadata !501, null}
!732 = metadata !{i32 26, i32 0, metadata !501, null}
!733 = metadata !{i32 28, i32 0, metadata !501, null}
!734 = metadata !{i32 29, i32 0, metadata !501, null}
!735 = metadata !{i32 32, i32 0, metadata !501, null}
!736 = metadata !{i32 20, i32 0, metadata !501, null}
