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
@.str2 = private unnamed_addr constant [12 x i8] c"a[3] == 'l'\00", align 1
@.str3 = private unnamed_addr constant [13 x i8] c"prefix_lib.c\00", align 1
@__PRETTY_FUNCTION__.1720 = internal unnamed_addr constant [5 x i8] c"main\00"
@__libc_stack_end = global i8* null
@__uclibc_progname = hidden global i8* getelementptr inbounds ([1 x i8]* @.str4, i64 0, i64 0)
@.str4 = private constant [1 x i8] zeroinitializer, align 1
@__environ = global i8** null
@__pagesize = global i64 0
@.str15 = private constant [10 x i8] c"/dev/null\00", align 1
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
@.str26 = private constant [22 x i8] c"klee_div_zero_check.c\00", align 1
@.str127 = private constant [15 x i8] c"divide by zero\00", align 1
@.str228 = private constant [8 x i8] c"div.err\00", align 1
@.str329 = private constant [8 x i8] c"IGNORED\00", align 1
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
  %5 = getelementptr inbounds [10 x i8]* %a, i64 0, i64 3, !dbg !547
  %6 = load i8* %5, align 1, !dbg !547
  %7 = icmp ne i8 %6, 108, !dbg !547
  br i1 %7, label %bb, label %bb2, !dbg !547

bb:                                               ; preds = %entry
  %8 = call i32 (...)* @__assert_fail(i8* getelementptr inbounds ([12 x i8]* @.str2, i64 0, i64 0), i8* getelementptr inbounds ([13 x i8]* @.str3, i64 0, i64 0), i32 17, i8* getelementptr inbounds ([5 x i8]* @__PRETTY_FUNCTION__.1720, i64 0, i64 0)) noun
  unreachable

bb2:                                              ; preds = %entry
  %a3 = bitcast [10 x i8]* %a to i8*, !dbg !548
  %9 = call i32 @prefix(i8* %a3) nounwind, !dbg !548
  store i32 %9, i32* %0, align 4, !dbg !548
  %10 = load i32* %0, align 4, !dbg !548
  store i32 %10, i32* %retval, align 4, !dbg !548
  %retval4 = load i32* %retval, !dbg !548
  ret i32 %retval4, !dbg !548
}

declare void @klee_make_symbolic(i8*, i64, i8*)

declare void @klee_assume(i64)

declare i32 @__assert_fail(...) noreturn

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
  %0 = load i32* %fd_addr, align 4, !dbg !549
  %1 = call i32 (i32, i32, ...)* @fcntl(i32 %0, i32 1) nounwind, !dbg !549
  %2 = icmp ne i32 %1, -1, !dbg !549
  br i1 %2, label %bb2, label %bb, !dbg !549

bb:                                               ; preds = %entry
  %3 = call i32* @__errno_location() nounwind readnone, !dbg !549
  %4 = load i32* %3, align 4, !dbg !549
  %5 = icmp ne i32 %4, 9, !dbg !549
  br i1 %5, label %bb2, label %bb1, !dbg !549

bb1:                                              ; preds = %bb
  store i32 1, i32* %iftmp.0, align 4, !dbg !549
  br label %bb3, !dbg !549

bb2:                                              ; preds = %bb, %entry
  store i32 0, i32* %iftmp.0, align 4, !dbg !549
  br label %bb3, !dbg !549

bb3:                                              ; preds = %bb2, %bb1
  %6 = load i32* %iftmp.0, align 4, !dbg !549
  %7 = sext i32 %6 to i64, !dbg !549
  %8 = icmp ne i64 %7, 0, !dbg !549
  br i1 %8, label %bb4, label %return, !dbg !549

bb4:                                              ; preds = %bb3
  %9 = load i32* %mode_addr, align 4, !dbg !551
  %10 = call i32 (i8*, i32, ...)* @open(i8* getelementptr inbounds ([10 x i8]* @.str15, i64 0, i64 0), i32 %9) nounwind, !dbg !551
  store i32 %10, i32* %nullfd, align 4, !dbg !551
  %11 = load i32* %nullfd, align 4, !dbg !553
  %12 = load i32* %fd_addr, align 4, !dbg !553
  %13 = icmp ne i32 %11, %12, !dbg !553
  br i1 %13, label %bb8, label %bb5, !dbg !553

bb5:                                              ; preds = %bb4
  %14 = load i32* %fd_addr, align 4, !dbg !553
  %15 = call i32 @fstat(i32 %14, %struct.stat* %st) nounwind, !dbg !553
  %16 = icmp ne i32 %15, 0, !dbg !553
  br i1 %16, label %bb8, label %bb6, !dbg !553

bb6:                                              ; preds = %bb5
  %17 = getelementptr inbounds %struct.stat* %st, i32 0, i32 3, !dbg !553
  %18 = load i32* %17, align 8, !dbg !553
  %19 = and i32 %18, 61440, !dbg !553
  %20 = icmp ne i32 %19, 8192, !dbg !553
  br i1 %20, label %bb8, label %bb7, !dbg !553

bb7:                                              ; preds = %bb6
  %21 = getelementptr inbounds %struct.stat* %st, i32 0, i32 7, !dbg !553
  %22 = load i64* %21, align 8, !dbg !553
  %23 = call i64 @gnu_dev_makedev(i32 1, i32 3) nounwind, !dbg !553
  %24 = icmp ne i64 %22, %23, !dbg !553
  br i1 %24, label %bb8, label %return, !dbg !553

bb8:                                              ; preds = %bb7, %bb6, %bb5, %bb4
  call void @abort() noreturn nounwind, !dbg !554
  unreachable, !dbg !554

return:                                           ; preds = %bb3, %bb7
  ret void, !dbg !555
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
  %1 = load i32* %__minor_addr, align 4, !dbg !556
  %2 = and i32 %1, 255, !dbg !556
  %3 = load i32* %__major_addr, align 4, !dbg !556
  %4 = and i32 %3, 4095, !dbg !556
  %int_cast_to_i64 = zext i32 8 to i64
  call void @klee_overshift_check(i64 32, i64 %int_cast_to_i64), !dbg !556
  %5 = shl i32 %4, 8, !dbg !556
  %6 = or i32 %2, %5, !dbg !556
  %7 = zext i32 %6 to i64, !dbg !556
  %8 = load i32* %__minor_addr, align 4, !dbg !556
  %9 = zext i32 %8 to i64, !dbg !556
  %10 = and i64 %9, 4294967040, !dbg !556
  %int_cast_to_i641 = bitcast i64 12 to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i641), !dbg !556
  %11 = shl i64 %10, 12, !dbg !556
  %12 = or i64 %7, %11, !dbg !556
  %13 = load i32* %__major_addr, align 4, !dbg !556
  %14 = zext i32 %13 to i64, !dbg !556
  %15 = and i64 %14, 4294963200, !dbg !556
  %int_cast_to_i642 = bitcast i64 32 to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i642), !dbg !556
  %16 = shl i64 %15, 32, !dbg !556
  %17 = or i64 %12, %16, !dbg !556
  store i64 %17, i64* %0, align 8, !dbg !556
  %18 = load i64* %0, align 8, !dbg !556
  store i64 %18, i64* %retval, align 8, !dbg !556
  %retval1 = load i64* %retval, !dbg !556
  ret i64 %retval1, !dbg !556
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
  %1 = call i32 @getuid() nounwind, !dbg !558
  store i32 %1, i32* %uid, align 4, !dbg !558
  %2 = call i32 @geteuid() nounwind, !dbg !560
  store i32 %2, i32* %euid, align 4, !dbg !560
  %3 = call i32 @getgid() nounwind, !dbg !561
  store i32 %3, i32* %gid, align 4, !dbg !561
  %4 = call i32 @getegid() nounwind, !dbg !562
  store i32 %4, i32* %egid, align 4, !dbg !562
  %5 = load i32* %uid, align 4, !dbg !563
  %6 = load i32* %euid, align 4, !dbg !563
  %7 = icmp eq i32 %5, %6, !dbg !563
  br i1 %7, label %bb, label %bb2, !dbg !563

bb:                                               ; preds = %entry
  %8 = load i32* %gid, align 4, !dbg !563
  %9 = load i32* %egid, align 4, !dbg !563
  %10 = icmp eq i32 %8, %9, !dbg !563
  br i1 %10, label %bb1, label %bb2, !dbg !563

bb1:                                              ; preds = %bb
  store i32 0, i32* %0, align 4, !dbg !564
  br label %bb3, !dbg !564

bb2:                                              ; preds = %bb, %entry
  store i32 1, i32* %0, align 4, !dbg !565
  br label %bb3, !dbg !565

bb3:                                              ; preds = %bb2, %bb1
  %11 = load i32* %0, align 4, !dbg !564
  store i32 %11, i32* %retval, align 4, !dbg !564
  %retval4 = load i32* %retval, !dbg !564
  ret i32 %retval4, !dbg !564
}

declare i32 @getuid() nounwind

declare i32 @geteuid() nounwind

declare i32 @getgid() nounwind

declare i32 @getegid() nounwind

define void @__uClibc_init() nounwind {
entry:
  %0 = load i32* @been_there_done_that.2848, align 4, !dbg !566
  %1 = icmp ne i32 %0, 0, !dbg !566
  br i1 %1, label %return, label %bb, !dbg !566

bb:                                               ; preds = %entry
  %2 = load i32* @been_there_done_that.2848, align 4, !dbg !568
  %3 = add nsw i32 %2, 1, !dbg !568
  store i32 %3, i32* @been_there_done_that.2848, align 4, !dbg !568
  store i64 4096, i64* @__pagesize, align 8, !dbg !569
  call void @_stdio_init() nounwind, !dbg !570
  br label %return, !dbg !570

return:                                           ; preds = %entry, %bb
  ret void, !dbg !571
}

define void @__uClibc_fini() nounwind {
entry:
  %0 = load void ()** @__app_fini, align 8, !dbg !572
  %1 = icmp ne void ()* %0, null, !dbg !572
  br i1 %1, label %bb, label %bb1, !dbg !572

bb:                                               ; preds = %entry
  %2 = load void ()** @__app_fini, align 8, !dbg !574
  call void %2() nounwind, !dbg !574
  br label %bb1, !dbg !574

bb1:                                              ; preds = %bb, %entry
  %3 = load void ()** @__rtld_fini, align 8, !dbg !575
  %4 = icmp ne void ()* %3, null, !dbg !575
  br i1 %4, label %bb2, label %return, !dbg !575

bb2:                                              ; preds = %bb1
  %5 = load void ()** @__rtld_fini, align 8, !dbg !576
  call void %5() nounwind, !dbg !576
  br label %return, !dbg !576

return:                                           ; preds = %bb1, %bb2
  ret void, !dbg !577
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
  %0 = load i8** %stack_end_addr, align 8, !dbg !578
  store i8* %0, i8** @__libc_stack_end, align 8, !dbg !578
  %1 = load void ()** %rtld_fini_addr, align 8, !dbg !580
  store void ()* %1, void ()** @__rtld_fini, align 8, !dbg !580
  %2 = load i32* %argc_addr, align 4, !dbg !581
  %3 = add nsw i32 %2, 1, !dbg !581
  %4 = load i8*** %argv_addr, align 8, !dbg !581
  %5 = sext i32 %3 to i64, !dbg !581
  %6 = getelementptr inbounds i8** %4, i64 %5, !dbg !581
  store i8** %6, i8*** @__environ, align 8, !dbg !581
  %7 = load i8*** %argv_addr, align 8, !dbg !582
  %8 = load i8** %7, align 8, !dbg !582
  %9 = load i8*** @__environ, align 8, !dbg !582
  %10 = bitcast i8** %9 to i8*, !dbg !582
  %11 = icmp eq i8* %8, %10, !dbg !582
  br i1 %11, label %bb, label %bb1, !dbg !582

bb:                                               ; preds = %entry
  %12 = load i8*** %argv_addr, align 8, !dbg !583
  %13 = load i32* %argc_addr, align 4, !dbg !583
  %14 = sext i32 %13 to i64, !dbg !583
  %15 = getelementptr inbounds i8** %12, i64 %14, !dbg !583
  store i8** %15, i8*** @__environ, align 8, !dbg !583
  br label %bb1, !dbg !583

bb1:                                              ; preds = %bb, %entry
  %auxvt2 = bitcast [15 x %struct.Elf64_auxv_t]* %auxvt to %struct.Elf64_auxv_t*, !dbg !584
  %auxvt23 = bitcast %struct.Elf64_auxv_t* %auxvt2 to i8*, !dbg !584
  %16 = call i8* @memset(i8* %auxvt23, i32 0, i64 240) nounwind, !dbg !584
  %17 = load i8*** @__environ, align 8, !dbg !585
  %18 = bitcast i8** %17 to i64*, !dbg !585
  store i64* %18, i64** %aux_dat, align 8, !dbg !585
  br label %bb5, !dbg !585

bb5:                                              ; preds = %bb5, %bb1
  %19 = load i64** %aux_dat, align 8, !dbg !586
  %20 = load i64* %19, align 8, !dbg !586
  %21 = icmp ne i64 %20, 0, !dbg !586
  %22 = load i64** %aux_dat, align 8, !dbg !587
  %23 = getelementptr inbounds i64* %22, i64 1, !dbg !587
  store i64* %23, i64** %aux_dat, align 8, !dbg !587
  br i1 %21, label %bb5, label %bb10, !dbg !586

bb7:                                              ; preds = %bb10
  %24 = load i64** %aux_dat, align 8, !dbg !588
  %25 = bitcast i64* %24 to %struct.Elf64_auxv_t*, !dbg !588
  store %struct.Elf64_auxv_t* %25, %struct.Elf64_auxv_t** %auxv_entry, align 8, !dbg !588
  %26 = load %struct.Elf64_auxv_t** %auxv_entry, align 8, !dbg !590
  %27 = getelementptr inbounds %struct.Elf64_auxv_t* %26, i32 0, i32 0, !dbg !590
  %28 = load i64* %27, align 8, !dbg !590
  %29 = icmp ule i64 %28, 14, !dbg !590
  br i1 %29, label %bb8, label %bb9, !dbg !590

bb8:                                              ; preds = %bb7
  %30 = load %struct.Elf64_auxv_t** %auxv_entry, align 8, !dbg !591
  %31 = getelementptr inbounds %struct.Elf64_auxv_t* %30, i32 0, i32 0, !dbg !591
  %32 = load i64* %31, align 8, !dbg !591
  %33 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 %32, !dbg !591
  %34 = bitcast %struct.Elf64_auxv_t* %33 to i8*, !dbg !591
  %35 = load %struct.Elf64_auxv_t** %auxv_entry, align 8, !dbg !591
  %36 = bitcast %struct.Elf64_auxv_t* %35 to i8*, !dbg !591
  %37 = call i8* @memcpy(i8* noalias %34, i8* noalias %36, i64 16) nounwind, !dbg !591
  br label %bb9, !dbg !591

bb9:                                              ; preds = %bb8, %bb7
  %38 = load i64** %aux_dat, align 8, !dbg !592
  %39 = getelementptr inbounds i64* %38, i64 2, !dbg !592
  store i64* %39, i64** %aux_dat, align 8, !dbg !592
  br label %bb10, !dbg !592

bb10:                                             ; preds = %bb5, %bb9
  %40 = load i64** %aux_dat, align 8, !dbg !593
  %41 = load i64* %40, align 8, !dbg !593
  %42 = icmp ne i64 %41, 0, !dbg !593
  br i1 %42, label %bb7, label %bb11, !dbg !593

bb11:                                             ; preds = %bb10
  call void @__uClibc_init() nounwind, !dbg !594
  %43 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 6, !dbg !595
  %44 = getelementptr inbounds %struct.Elf64_auxv_t* %43, i32 0, i32 1, !dbg !595
  %45 = getelementptr inbounds %union.anon* %44, i32 0, i32 0, !dbg !595
  %46 = load i64* %45, align 8, !dbg !595
  %47 = icmp ne i64 %46, 0, !dbg !595
  br i1 %47, label %bb12, label %bb13, !dbg !595

bb12:                                             ; preds = %bb11
  %48 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 6, !dbg !595
  %49 = getelementptr inbounds %struct.Elf64_auxv_t* %48, i32 0, i32 1, !dbg !595
  %50 = getelementptr inbounds %union.anon* %49, i32 0, i32 0, !dbg !595
  %51 = load i64* %50, align 8, !dbg !595
  store i64 %51, i64* %iftmp.10, align 8, !dbg !595
  br label %bb14, !dbg !595

bb13:                                             ; preds = %bb11
  store i64 4096, i64* %iftmp.10, align 8, !dbg !595
  br label %bb14, !dbg !595

bb14:                                             ; preds = %bb13, %bb12
  %52 = load i64* %iftmp.10, align 8, !dbg !595
  store i64 %52, i64* @__pagesize, align 8, !dbg !595
  %53 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 11, !dbg !596
  %54 = getelementptr inbounds %struct.Elf64_auxv_t* %53, i32 0, i32 1, !dbg !596
  %55 = getelementptr inbounds %union.anon* %54, i32 0, i32 0, !dbg !596
  %56 = load i64* %55, align 8, !dbg !596
  %57 = icmp ne i64 %56, -1, !dbg !596
  br i1 %57, label %bb16, label %bb15, !dbg !596

bb15:                                             ; preds = %bb14
  %58 = call i32 @__check_suid() nounwind, !dbg !596
  %59 = icmp ne i32 %58, 0, !dbg !596
  br i1 %59, label %bb19, label %bb16, !dbg !596

bb16:                                             ; preds = %bb15, %bb14
  %60 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 11, !dbg !596
  %61 = getelementptr inbounds %struct.Elf64_auxv_t* %60, i32 0, i32 1, !dbg !596
  %62 = getelementptr inbounds %union.anon* %61, i32 0, i32 0, !dbg !596
  %63 = load i64* %62, align 8, !dbg !596
  %64 = icmp eq i64 %63, -1, !dbg !596
  br i1 %64, label %bb20, label %bb17, !dbg !596

bb17:                                             ; preds = %bb16
  %65 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 11, !dbg !596
  %66 = getelementptr inbounds %struct.Elf64_auxv_t* %65, i32 0, i32 1, !dbg !596
  %67 = getelementptr inbounds %union.anon* %66, i32 0, i32 0, !dbg !596
  %68 = load i64* %67, align 8, !dbg !596
  %69 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 12, !dbg !596
  %70 = getelementptr inbounds %struct.Elf64_auxv_t* %69, i32 0, i32 1, !dbg !596
  %71 = getelementptr inbounds %union.anon* %70, i32 0, i32 0, !dbg !596
  %72 = load i64* %71, align 8, !dbg !596
  %73 = icmp ne i64 %68, %72, !dbg !596
  br i1 %73, label %bb19, label %bb18, !dbg !596

bb18:                                             ; preds = %bb17
  %74 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 13, !dbg !596
  %75 = getelementptr inbounds %struct.Elf64_auxv_t* %74, i32 0, i32 1, !dbg !596
  %76 = getelementptr inbounds %union.anon* %75, i32 0, i32 0, !dbg !596
  %77 = load i64* %76, align 8, !dbg !596
  %78 = getelementptr inbounds [15 x %struct.Elf64_auxv_t]* %auxvt, i64 0, i64 14, !dbg !596
  %79 = getelementptr inbounds %struct.Elf64_auxv_t* %78, i32 0, i32 1, !dbg !596
  %80 = getelementptr inbounds %union.anon* %79, i32 0, i32 0, !dbg !596
  %81 = load i64* %80, align 8, !dbg !596
  %82 = icmp ne i64 %77, %81, !dbg !596
  br i1 %82, label %bb19, label %bb20, !dbg !596

bb19:                                             ; preds = %bb18, %bb17, %bb15
  call void @__check_one_fd(i32 0, i32 131072) nounwind, !dbg !597
  call void @__check_one_fd(i32 1, i32 131074) nounwind, !dbg !598
  call void @__check_one_fd(i32 2, i32 131074) nounwind, !dbg !599
  br label %bb20, !dbg !599

bb20:                                             ; preds = %bb19, %bb18, %bb16
  %83 = load i8*** %argv_addr, align 8, !dbg !600
  %84 = load i8** %83, align 8, !dbg !600
  store i8* %84, i8** @__uclibc_progname, align 8, !dbg !600
  %85 = load void ()** %app_fini_addr, align 8, !dbg !601
  store void ()* %85, void ()** @__app_fini, align 8, !dbg !601
  %86 = load void ()** %app_init_addr, align 8, !dbg !602
  %87 = icmp ne void ()* %86, null, !dbg !602
  br i1 %87, label %bb21, label %bb22, !dbg !602

bb21:                                             ; preds = %bb20
  %88 = load void ()** %app_init_addr, align 8, !dbg !603
  call void %88() nounwind, !dbg !603
  br label %bb22, !dbg !603

bb22:                                             ; preds = %bb21, %bb20
  %89 = icmp ne i8* bitcast (i32* ()* @__errno_location to i8*), null, !dbg !604
  br i1 %89, label %bb23, label %bb24, !dbg !604

bb23:                                             ; preds = %bb22
  %90 = call i32* @__errno_location() nounwind readnone, !dbg !605
  store i32 0, i32* %90, align 4, !dbg !605
  br label %bb24, !dbg !605

bb24:                                             ; preds = %bb23, %bb22
  %91 = icmp ne i8* bitcast (i32* ()* @__h_errno_location to i8*), null, !dbg !606
  br i1 %91, label %bb25, label %bb26, !dbg !606

bb25:                                             ; preds = %bb24
  %92 = call i32* @__h_errno_location() nounwind readnone, !dbg !607
  store i32 0, i32* %92, align 4, !dbg !607
  br label %bb26, !dbg !607

bb26:                                             ; preds = %bb25, %bb24
  %93 = load i8*** @__environ, align 8, !dbg !608
  %94 = load i32 (i32, i8**, i8**)** %main_addr, align 8, !dbg !608
  %95 = load i32* %argc_addr, align 4, !dbg !608
  %96 = load i8*** %argv_addr, align 8, !dbg !608
  %97 = call i32 %94(i32 %95, i8** %96, i8** %93) nounwind, !dbg !608
  call void @exit(i32 %97) noreturn nounwind, !dbg !608
  unreachable, !dbg !608
}

define i64 @strlen(i8* %s) nounwind readonly {
entry:
  %s_addr = alloca i8*, align 8
  %retval = alloca i64
  %0 = alloca i64
  %p = alloca i8*
  %"alloca point" = bitcast i32 0 to i32
  store i8* %s, i8** %s_addr
  %1 = load i8** %s_addr, align 8, !dbg !609
  store i8* %1, i8** %p, align 8, !dbg !609
  br label %bb1, !dbg !609

bb:                                               ; preds = %bb1
  %2 = getelementptr inbounds i8* %6, i64 1, !dbg !609
  store i8* %2, i8** %p, align 8, !dbg !609
  br label %bb1, !dbg !609

bb1:                                              ; preds = %bb, %entry
  %3 = load i8** %p, align 8, !dbg !609
  %4 = load i8* %3, align 1, !dbg !609
  %5 = icmp ne i8 %4, 0, !dbg !609
  %6 = load i8** %p, align 8, !dbg !609
  br i1 %5, label %bb, label %bb2, !dbg !609

bb2:                                              ; preds = %bb1
  %7 = ptrtoint i8* %6 to i64, !dbg !611
  %8 = load i8** %s_addr, align 8, !dbg !611
  %9 = ptrtoint i8* %8 to i64, !dbg !611
  %10 = sub nsw i64 %7, %9, !dbg !611
  store i64 %10, i64* %0, align 8, !dbg !611
  %11 = load i64* %0, align 8, !dbg !611
  store i64 %11, i64* %retval, align 8, !dbg !611
  %retval3 = load i64* %retval, !dbg !611
  ret i64 %retval3, !dbg !611
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
  store i32 0, i32* %r, align 4, !dbg !612
  br label %bb, !dbg !612

bb:                                               ; preds = %bb5, %entry
  %1 = load i64* %n_addr, align 8, !dbg !614
  %2 = sub i64 %1, 1, !dbg !614
  store i64 %2, i64* %n_addr, align 8, !dbg !614
  %3 = load i64* %n_addr, align 8, !dbg !614
  %4 = icmp eq i64 %3, -1, !dbg !614
  br i1 %4, label %bb7, label %bb1, !dbg !614

bb1:                                              ; preds = %bb
  %5 = load i8** %s1_addr, align 8, !dbg !614
  %6 = load i8* %5, align 1, !dbg !614
  %7 = zext i8 %6 to i32, !dbg !614
  %8 = load i8** %s2_addr, align 8, !dbg !614
  %9 = load i8* %8, align 1, !dbg !614
  %10 = zext i8 %9 to i32, !dbg !614
  %11 = sub nsw i32 %7, %10, !dbg !614
  store i32 %11, i32* %r, align 4, !dbg !614
  %12 = load i32* %r, align 4, !dbg !614
  %13 = icmp eq i32 %12, 0, !dbg !614
  %14 = zext i1 %13 to i8, !dbg !614
  %15 = load i8** %s2_addr, align 8, !dbg !614
  %16 = getelementptr inbounds i8* %15, i64 1, !dbg !614
  store i8* %16, i8** %s2_addr, align 8, !dbg !614
  %toBool = icmp ne i8 %14, 0, !dbg !614
  %toBoolnot = xor i1 %toBool, true, !dbg !614
  %toBoolnot2 = zext i1 %toBoolnot to i8, !dbg !614
  %toBool4 = icmp ne i8 %toBoolnot2, 0, !dbg !614
  br i1 %toBool4, label %bb7, label %bb5, !dbg !614

bb5:                                              ; preds = %bb1
  %17 = load i8** %s1_addr, align 8, !dbg !614
  %18 = load i8* %17, align 1, !dbg !614
  %19 = icmp ne i8 %18, 0, !dbg !614
  %20 = zext i1 %19 to i8, !dbg !614
  %21 = load i8** %s1_addr, align 8, !dbg !614
  %22 = getelementptr inbounds i8* %21, i64 1, !dbg !614
  store i8* %22, i8** %s1_addr, align 8, !dbg !614
  %toBool6 = icmp ne i8 %20, 0, !dbg !614
  br i1 %toBool6, label %bb, label %bb7, !dbg !614

bb7:                                              ; preds = %bb5, %bb1, %bb
  %23 = load i32* %r, align 4, !dbg !615
  store i32 %23, i32* %0, align 4, !dbg !615
  %24 = load i32* %0, align 4, !dbg !615
  store i32 %24, i32* %retval, align 4, !dbg !615
  %retval8 = load i32* %retval, !dbg !615
  ret i32 %retval8, !dbg !615
}

define weak i32* @__errno_location() nounwind readnone {
entry:
  %retval = alloca i32*
  %0 = alloca i32*
  %"alloca point" = bitcast i32 0 to i32
  store i32* @errno, i32** %0, align 8, !dbg !616
  %1 = load i32** %0, align 8, !dbg !616
  store i32* %1, i32** %retval, align 8, !dbg !616
  %retval1 = load i32** %retval, !dbg !616
  ret i32* %retval1, !dbg !616
}

define weak i32* @__h_errno_location() nounwind readnone {
entry:
  %retval = alloca i32*
  %0 = alloca i32*
  %"alloca point" = bitcast i32 0 to i32
  store i32* @h_errno, i32** %0, align 8, !dbg !618
  %1 = load i32** %0, align 8, !dbg !618
  store i32* %1, i32** %retval, align 8, !dbg !618
  %retval1 = load i32** %retval, !dbg !618
  ret i32* %retval1, !dbg !618
}

define hidden void @_stdio_term() nounwind {
entry:
  %ptr = alloca %struct.FILE*
  %"alloca point" = bitcast i32 0 to i32
  %0 = load %struct.FILE** @_stdio_openlist, align 8, !dbg !620
  store %struct.FILE* %0, %struct.FILE** %ptr, align 8, !dbg !620
  br label %bb3, !dbg !620

bb:                                               ; preds = %bb3
  %1 = load %struct.FILE** %ptr, align 8, !dbg !622
  %2 = getelementptr inbounds %struct.FILE* %1, i32 0, i32 0, !dbg !622
  %3 = load i16* %2, align 8, !dbg !622
  %4 = zext i16 %3 to i32, !dbg !622
  %5 = and i32 %4, 64, !dbg !622
  %6 = icmp ne i32 %5, 0, !dbg !622
  br i1 %6, label %bb1, label %bb2, !dbg !622

bb1:                                              ; preds = %bb
  %7 = load %struct.FILE** %ptr, align 8, !dbg !623
  %8 = call i64 @__stdio_wcommit(%struct.FILE* noalias %7) nounwind, !dbg !623
  br label %bb2, !dbg !623

bb2:                                              ; preds = %bb1, %bb
  %9 = load %struct.FILE** %ptr, align 8, !dbg !620
  %10 = getelementptr inbounds %struct.FILE* %9, i32 0, i32 9, !dbg !620
  %11 = load %struct.FILE** %10, align 8, !dbg !620
  store %struct.FILE* %11, %struct.FILE** %ptr, align 8, !dbg !620
  br label %bb3, !dbg !620

bb3:                                              ; preds = %bb2, %entry
  %12 = load %struct.FILE** %ptr, align 8, !dbg !620
  %13 = icmp ne %struct.FILE* %12, null, !dbg !620
  br i1 %13, label %bb, label %return, !dbg !620

return:                                           ; preds = %bb3
  ret void, !dbg !624
}

define hidden void @_stdio_init() nounwind {
entry:
  %old_errno = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  %0 = load i32* @errno, align 4, !dbg !625
  store i32 %0, i32* %old_errno, align 4, !dbg !625
  %1 = load i16* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 0, i32 0), align 8, !dbg !627
  %2 = call i32 @isatty(i32 0) nounwind, !dbg !627
  %3 = sub nsw i32 1, %2, !dbg !627
  %4 = mul i32 %3, 256, !dbg !627
  %5 = trunc i32 %4 to i16, !dbg !627
  %6 = xor i16 %1, %5, !dbg !627
  store i16 %6, i16* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 0, i32 0), align 8, !dbg !627
  %7 = load i16* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 1, i32 0), align 8, !dbg !628
  %8 = call i32 @isatty(i32 1) nounwind, !dbg !628
  %9 = sub nsw i32 1, %8, !dbg !628
  %10 = mul i32 %9, 256, !dbg !628
  %11 = trunc i32 %10 to i16, !dbg !628
  %12 = xor i16 %7, %11, !dbg !628
  store i16 %12, i16* getelementptr inbounds ([3 x %struct.FILE]* @_stdio_streams, i64 0, i64 1, i32 0), align 8, !dbg !628
  %13 = load i32* %old_errno, align 4, !dbg !629
  store i32 %13, i32* @errno, align 4, !dbg !629
  ret void, !dbg !630
}

declare void @abort() noreturn nounwind

declare i32 @sigprocmask(i32, %struct.__sigset_t* noalias, %struct.__sigset_t* noalias) nounwind

declare void @_exit(i32) noreturn

define void @exit(i32 %rv) noreturn nounwind {
entry:
  %rv_addr = alloca i32, align 4
  %"alloca point" = bitcast i32 0 to i32
  store i32 %rv, i32* %rv_addr
  %0 = load void (i32)** @__exit_cleanup, align 8, !dbg !631
  %1 = icmp ne void (i32)* %0, null, !dbg !631
  br i1 %1, label %bb, label %bb1, !dbg !631

bb:                                               ; preds = %entry
  %2 = load void (i32)** @__exit_cleanup, align 8, !dbg !633
  %3 = load i32* %rv_addr, align 4, !dbg !633
  call void %2(i32 %3) nounwind, !dbg !633
  br label %bb1, !dbg !633

bb1:                                              ; preds = %bb, %entry
  call void @__uClibc_fini() nounwind, !dbg !634
  call void @_stdio_term() nounwind, !dbg !635
  %4 = load i32* %rv_addr, align 4, !dbg !636
  call void @_exit(i32 %4) noreturn nounwind, !dbg !636
  unreachable, !dbg !636
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
  %1 = load i8** %s_addr, align 8, !dbg !637
  store i8* %1, i8** %p, align 8, !dbg !637
  br label %bb1, !dbg !637

bb:                                               ; preds = %bb1
  %2 = load i32* %c_addr, align 4, !dbg !639
  %3 = trunc i32 %2 to i8, !dbg !639
  %4 = load i8** %p, align 8, !dbg !639
  store i8 %3, i8* %4, align 1, !dbg !639
  %5 = load i8** %p, align 8, !dbg !639
  %6 = getelementptr inbounds i8* %5, i64 1, !dbg !639
  store i8* %6, i8** %p, align 8, !dbg !639
  %7 = load i64* %n_addr, align 8, !dbg !640
  %8 = sub i64 %7, 1, !dbg !640
  store i64 %8, i64* %n_addr, align 8, !dbg !640
  br label %bb1, !dbg !640

bb1:                                              ; preds = %bb, %entry
  %9 = load i64* %n_addr, align 8, !dbg !641
  %10 = icmp ne i64 %9, 0, !dbg !641
  br i1 %10, label %bb, label %bb2, !dbg !641

bb2:                                              ; preds = %bb1
  %11 = load i8** %s_addr, align 8, !dbg !642
  store i8* %11, i8** %0, align 8, !dbg !642
  %12 = load i8** %0, align 8, !dbg !642
  store i8* %12, i8** %retval, align 8, !dbg !642
  %retval3 = load i8** %retval, !dbg !642
  ret i8* %retval3, !dbg !642
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
  %1 = load i8** %s1_addr, align 8, !dbg !643
  store i8* %1, i8** %r1, align 8, !dbg !643
  %2 = load i8** %s2_addr, align 8, !dbg !645
  store i8* %2, i8** %r2, align 8, !dbg !645
  br label %bb1, !dbg !645

bb:                                               ; preds = %bb1
  %3 = load i8** %r2, align 8, !dbg !646
  %4 = load i8* %3, align 1, !dbg !646
  %5 = load i8** %r1, align 8, !dbg !646
  store i8 %4, i8* %5, align 1, !dbg !646
  %6 = load i8** %r1, align 8, !dbg !646
  %7 = getelementptr inbounds i8* %6, i64 1, !dbg !646
  store i8* %7, i8** %r1, align 8, !dbg !646
  %8 = load i8** %r2, align 8, !dbg !646
  %9 = getelementptr inbounds i8* %8, i64 1, !dbg !646
  store i8* %9, i8** %r2, align 8, !dbg !646
  %10 = load i64* %n_addr, align 8, !dbg !647
  %11 = sub i64 %10, 1, !dbg !647
  store i64 %11, i64* %n_addr, align 8, !dbg !647
  br label %bb1, !dbg !647

bb1:                                              ; preds = %bb, %entry
  %12 = load i64* %n_addr, align 8, !dbg !648
  %13 = icmp ne i64 %12, 0, !dbg !648
  br i1 %13, label %bb, label %bb2, !dbg !648

bb2:                                              ; preds = %bb1
  %14 = load i8** %s1_addr, align 8, !dbg !649
  store i8* %14, i8** %0, align 8, !dbg !649
  %15 = load i8** %0, align 8, !dbg !649
  store i8* %15, i8** %retval, align 8, !dbg !649
  %retval3 = load i8** %retval, !dbg !649
  ret i8* %retval3, !dbg !649
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
  %1 = load i32* %__sig_addr, align 4, !dbg !650
  %2 = sub nsw i32 %1, 1, !dbg !650
  %3 = and i32 %2, 63, !dbg !650
  %.cast = zext i32 %3 to i64, !dbg !650
  %int_cast_to_i641 = bitcast i64 %.cast to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i641), !dbg !650
  %4 = shl i64 1, %.cast, !dbg !650
  store i64 %4, i64* %__mask, align 8, !dbg !650
  %5 = load i32* %__sig_addr, align 4, !dbg !650
  %6 = sub nsw i32 %5, 1, !dbg !650
  %7 = sext i32 %6 to i64, !dbg !650
  %int_cast_to_i64 = bitcast i64 64 to i64
  call void @klee_div_zero_check(i64 %int_cast_to_i64), !dbg !650
  %8 = udiv i64 %7, 64, !dbg !650
  store i64 %8, i64* %__word, align 8, !dbg !650
  %9 = load i64* %__word, align 8, !dbg !650
  %10 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !650
  %11 = getelementptr inbounds %struct.__sigset_t* %10, i32 0, i32 0, !dbg !650
  %12 = getelementptr inbounds [16 x i64]* %11, i64 0, i64 %9, !dbg !650
  %13 = load i64* %12, align 8, !dbg !650
  %14 = load i64* %__mask, align 8, !dbg !650
  %15 = and i64 %13, %14, !dbg !650
  %16 = icmp ne i64 %15, 0, !dbg !650
  %17 = zext i1 %16 to i32, !dbg !650
  store i32 %17, i32* %0, align 4, !dbg !650
  %18 = load i32* %0, align 4, !dbg !650
  store i32 %18, i32* %retval, align 4, !dbg !650
  %retval1 = load i32* %retval, !dbg !650
  ret i32 %retval1, !dbg !651
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
  %1 = load i32* %__sig_addr, align 4, !dbg !653
  %2 = sub nsw i32 %1, 1, !dbg !653
  %3 = and i32 %2, 63, !dbg !653
  %.cast = zext i32 %3 to i64, !dbg !653
  %int_cast_to_i641 = bitcast i64 %.cast to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i641), !dbg !653
  %4 = shl i64 1, %.cast, !dbg !653
  store i64 %4, i64* %__mask, align 8, !dbg !653
  %5 = load i32* %__sig_addr, align 4, !dbg !653
  %6 = sub nsw i32 %5, 1, !dbg !653
  %7 = sext i32 %6 to i64, !dbg !653
  %int_cast_to_i64 = bitcast i64 64 to i64
  call void @klee_div_zero_check(i64 %int_cast_to_i64), !dbg !653
  %8 = udiv i64 %7, 64, !dbg !653
  store i64 %8, i64* %__word, align 8, !dbg !653
  %9 = load i64* %__word, align 8, !dbg !653
  %10 = load i64* %__word, align 8, !dbg !653
  %11 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !653
  %12 = getelementptr inbounds %struct.__sigset_t* %11, i32 0, i32 0, !dbg !653
  %13 = getelementptr inbounds [16 x i64]* %12, i64 0, i64 %10, !dbg !653
  %14 = load i64* %13, align 8, !dbg !653
  %15 = load i64* %__mask, align 8, !dbg !653
  %16 = or i64 %14, %15, !dbg !653
  %17 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !653
  %18 = getelementptr inbounds %struct.__sigset_t* %17, i32 0, i32 0, !dbg !653
  %19 = getelementptr inbounds [16 x i64]* %18, i64 0, i64 %9, !dbg !653
  store i64 %16, i64* %19, align 8, !dbg !653
  store i32 0, i32* %0, align 4, !dbg !653
  %20 = load i32* %0, align 4, !dbg !653
  store i32 %20, i32* %retval, align 4, !dbg !653
  %retval1 = load i32* %retval, !dbg !653
  ret i32 %retval1, !dbg !654
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
  %1 = load i32* %__sig_addr, align 4, !dbg !656
  %2 = sub nsw i32 %1, 1, !dbg !656
  %3 = and i32 %2, 63, !dbg !656
  %.cast = zext i32 %3 to i64, !dbg !656
  %int_cast_to_i641 = bitcast i64 %.cast to i64
  call void @klee_overshift_check(i64 64, i64 %int_cast_to_i641), !dbg !656
  %4 = shl i64 1, %.cast, !dbg !656
  store i64 %4, i64* %__mask, align 8, !dbg !656
  %5 = load i32* %__sig_addr, align 4, !dbg !656
  %6 = sub nsw i32 %5, 1, !dbg !656
  %7 = sext i32 %6 to i64, !dbg !656
  %int_cast_to_i64 = bitcast i64 64 to i64
  call void @klee_div_zero_check(i64 %int_cast_to_i64), !dbg !656
  %8 = udiv i64 %7, 64, !dbg !656
  store i64 %8, i64* %__word, align 8, !dbg !656
  %9 = load i64* %__word, align 8, !dbg !656
  %10 = load i64* %__word, align 8, !dbg !656
  %11 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !656
  %12 = getelementptr inbounds %struct.__sigset_t* %11, i32 0, i32 0, !dbg !656
  %13 = getelementptr inbounds [16 x i64]* %12, i64 0, i64 %10, !dbg !656
  %14 = load i64* %13, align 8, !dbg !656
  %15 = load i64* %__mask, align 8, !dbg !656
  %not = xor i64 %15, -1, !dbg !656
  %16 = and i64 %14, %not, !dbg !656
  %17 = load %struct.__sigset_t** %__set_addr, align 8, !dbg !656
  %18 = getelementptr inbounds %struct.__sigset_t* %17, i32 0, i32 0, !dbg !656
  %19 = getelementptr inbounds [16 x i64]* %18, i64 0, i64 %9, !dbg !656
  store i64 %16, i64* %19, align 8, !dbg !656
  store i32 0, i32* %0, align 4, !dbg !656
  %20 = load i32* %0, align 4, !dbg !656
  store i32 %20, i32* %retval, align 4, !dbg !656
  %retval2 = load i32* %retval, !dbg !656
  ret i32 %retval2, !dbg !657
}

define hidden i64 @__stdio_wcommit(%struct.FILE* noalias %stream) nounwind {
entry:
  %stream_addr = alloca %struct.FILE*, align 8
  %retval = alloca i64
  %0 = alloca i64
  %bufsize = alloca i64
  %"alloca point" = bitcast i32 0 to i32
  store %struct.FILE* %stream, %struct.FILE** %stream_addr
  %1 = load %struct.FILE** %stream_addr, align 8, !dbg !659
  %2 = getelementptr inbounds %struct.FILE* %1, i32 0, i32 5, !dbg !659
  %3 = load i8** %2, align 8, !dbg !659
  %4 = ptrtoint i8* %3 to i64, !dbg !659
  %5 = load %struct.FILE** %stream_addr, align 8, !dbg !659
  %6 = getelementptr inbounds %struct.FILE* %5, i32 0, i32 3, !dbg !659
  %7 = load i8** %6, align 8, !dbg !659
  %8 = ptrtoint i8* %7 to i64, !dbg !659
  %9 = sub nsw i64 %4, %8, !dbg !659
  store i64 %9, i64* %bufsize, align 8, !dbg !659
  %10 = load i64* %bufsize, align 8, !dbg !659
  %11 = icmp ne i64 %10, 0, !dbg !659
  br i1 %11, label %bb, label %bb1, !dbg !659

bb:                                               ; preds = %entry
  %12 = load %struct.FILE** %stream_addr, align 8, !dbg !661
  %13 = getelementptr inbounds %struct.FILE* %12, i32 0, i32 3, !dbg !661
  %14 = load i8** %13, align 8, !dbg !661
  %15 = load %struct.FILE** %stream_addr, align 8, !dbg !661
  %16 = getelementptr inbounds %struct.FILE* %15, i32 0, i32 5, !dbg !661
  store i8* %14, i8** %16, align 8, !dbg !661
  %17 = load %struct.FILE** %stream_addr, align 8, !dbg !662
  %18 = getelementptr inbounds %struct.FILE* %17, i32 0, i32 3, !dbg !662
  %19 = load i8** %18, align 8, !dbg !662
  %20 = load %struct.FILE** %stream_addr, align 8, !dbg !662
  %21 = load i64* %bufsize, align 8, !dbg !662
  %22 = call i64 @__stdio_WRITE(%struct.FILE* %20, i8* %19, i64 %21) nounwind, !dbg !662
  br label %bb1, !dbg !662

bb1:                                              ; preds = %bb, %entry
  %23 = load %struct.FILE** %stream_addr, align 8, !dbg !663
  %24 = getelementptr inbounds %struct.FILE* %23, i32 0, i32 5, !dbg !663
  %25 = load i8** %24, align 8, !dbg !663
  %26 = ptrtoint i8* %25 to i64, !dbg !663
  %27 = load %struct.FILE** %stream_addr, align 8, !dbg !663
  %28 = getelementptr inbounds %struct.FILE* %27, i32 0, i32 3, !dbg !663
  %29 = load i8** %28, align 8, !dbg !663
  %30 = ptrtoint i8* %29 to i64, !dbg !663
  %31 = sub nsw i64 %26, %30, !dbg !663
  store i64 %31, i64* %0, align 8, !dbg !663
  %32 = load i64* %0, align 8, !dbg !663
  store i64 %32, i64* %retval, align 8, !dbg !663
  %retval2 = load i64* %retval, !dbg !663
  ret i64 %retval2, !dbg !663
}

define i32 @isatty(i32 %fd) nounwind {
entry:
  %fd_addr = alloca i32, align 4
  %retval = alloca i32
  %0 = alloca i32
  %term = alloca %struct.termios
  %"alloca point" = bitcast i32 0 to i32
  store i32 %fd, i32* %fd_addr
  %1 = load i32* %fd_addr, align 4, !dbg !664
  %2 = call i32 @tcgetattr(i32 %1, %struct.termios* %term) nounwind, !dbg !664
  %3 = icmp eq i32 %2, 0, !dbg !664
  %4 = zext i1 %3 to i32, !dbg !664
  store i32 %4, i32* %0, align 4, !dbg !664
  %5 = load i32* %0, align 4, !dbg !664
  store i32 %5, i32* %retval, align 4, !dbg !664
  %retval1 = load i32* %retval, !dbg !664
  ret i32 %retval1, !dbg !664
}

define hidden i32 @__raise(i32 %signo) nounwind {
entry:
  %signo_addr = alloca i32, align 4
  %retval = alloca i32
  %0 = alloca i32
  %"alloca point" = bitcast i32 0 to i32
  store i32 %signo, i32* %signo_addr
  %1 = call i32 @getpid() nounwind, !dbg !666
  %2 = load i32* %signo_addr, align 4, !dbg !666
  %3 = call i32 @kill(i32 %1, i32 %2) nounwind, !dbg !666
  store i32 %3, i32* %0, align 4, !dbg !666
  %4 = load i32* %0, align 4, !dbg !666
  store i32 %4, i32* %retval, align 4, !dbg !666
  %retval1 = load i32* %retval, !dbg !666
  ret i32 %retval1, !dbg !666
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
  %1 = load %struct.sigaction** %act_addr, align 8, !dbg !668
  %2 = icmp ne %struct.sigaction* %1, null, !dbg !668
  br i1 %2, label %bb, label %bb1, !dbg !668

bb:                                               ; preds = %entry
  %3 = load %struct.sigaction** %act_addr, align 8, !dbg !670
  %4 = getelementptr inbounds %struct.sigaction* %3, i32 0, i32 0, !dbg !670
  %5 = getelementptr inbounds %0* %4, i32 0, i32 0, !dbg !670
  %6 = load void (i32)** %5, align 8, !dbg !670
  %7 = getelementptr inbounds %struct.kernel_sigaction* %kact, i32 0, i32 0, !dbg !670
  store void (i32)* %6, void (i32)** %7, align 8, !dbg !670
  %8 = load %struct.sigaction** %act_addr, align 8, !dbg !671
  %9 = getelementptr inbounds %struct.sigaction* %8, i32 0, i32 1, !dbg !671
  %10 = getelementptr inbounds %struct.kernel_sigaction* %kact, i32 0, i32 3, !dbg !671
  %11 = bitcast %struct.__sigset_t* %10 to i8*, !dbg !671
  %12 = bitcast %struct.__sigset_t* %9 to i8*, !dbg !671
  %13 = call i8* @memcpy(i8* noalias %11, i8* noalias %12, i64 128) nounwind, !dbg !671
  %14 = load %struct.sigaction** %act_addr, align 8, !dbg !672
  %15 = getelementptr inbounds %struct.sigaction* %14, i32 0, i32 2, !dbg !672
  %16 = load i32* %15, align 8, !dbg !672
  %17 = sext i32 %16 to i64, !dbg !672
  %18 = getelementptr inbounds %struct.kernel_sigaction* %kact, i32 0, i32 1, !dbg !672
  store i64 %17, i64* %18, align 8, !dbg !672
  %19 = load %struct.sigaction** %act_addr, align 8, !dbg !673
  %20 = getelementptr inbounds %struct.sigaction* %19, i32 0, i32 3, !dbg !673
  %21 = load void ()** %20, align 8, !dbg !673
  %22 = getelementptr inbounds %struct.kernel_sigaction* %kact, i32 0, i32 2, !dbg !673
  store void ()* %21, void ()** %22, align 8, !dbg !673
  br label %bb1, !dbg !673

bb1:                                              ; preds = %bb, %entry
  %23 = load %struct.sigaction** %oact_addr, align 8, !dbg !674
  %24 = icmp ne %struct.sigaction* %23, null, !dbg !674
  br i1 %24, label %bb2, label %bb3, !dbg !674

bb2:                                              ; preds = %bb1
  store %struct.kernel_sigaction* %koact, %struct.kernel_sigaction** %iftmp.0, align 8, !dbg !674
  br label %bb4, !dbg !674

bb3:                                              ; preds = %bb1
  store %struct.kernel_sigaction* null, %struct.kernel_sigaction** %iftmp.0, align 8, !dbg !674
  br label %bb4, !dbg !674

bb4:                                              ; preds = %bb3, %bb2
  %25 = load %struct.sigaction** %act_addr, align 8, !dbg !674
  %26 = icmp ne %struct.sigaction* %25, null, !dbg !674
  br i1 %26, label %bb5, label %bb6, !dbg !674

bb5:                                              ; preds = %bb4
  store %struct.kernel_sigaction* %kact, %struct.kernel_sigaction** %iftmp.1, align 8, !dbg !674
  br label %bb7, !dbg !674

bb6:                                              ; preds = %bb4
  store %struct.kernel_sigaction* null, %struct.kernel_sigaction** %iftmp.1, align 8, !dbg !674
  br label %bb7, !dbg !674

bb7:                                              ; preds = %bb6, %bb5
  %27 = load i32* %sig_addr, align 4, !dbg !674
  %28 = load %struct.kernel_sigaction** %iftmp.1, align 8, !dbg !674
  %29 = load %struct.kernel_sigaction** %iftmp.0, align 8, !dbg !674
  %30 = call i32 @__syscall_rt_sigaction(i32 %27, %struct.kernel_sigaction* %28, %struct.kernel_sigaction* %29, i64 8) nounwind, !dbg !674
  store i32 %30, i32* %result, align 4, !dbg !674
  %31 = load %struct.sigaction** %oact_addr, align 8, !dbg !675
  %32 = icmp ne %struct.sigaction* %31, null, !dbg !675
  br i1 %32, label %bb8, label %bb10, !dbg !675

bb8:                                              ; preds = %bb7
  %33 = load i32* %result, align 4, !dbg !675
  %34 = icmp sge i32 %33, 0, !dbg !675
  br i1 %34, label %bb9, label %bb10, !dbg !675

bb9:                                              ; preds = %bb8
  %35 = getelementptr inbounds %struct.kernel_sigaction* %koact, i32 0, i32 0, !dbg !676
  %36 = load void (i32)** %35, align 8, !dbg !676
  %37 = load %struct.sigaction** %oact_addr, align 8, !dbg !676
  %38 = getelementptr inbounds %struct.sigaction* %37, i32 0, i32 0, !dbg !676
  %39 = getelementptr inbounds %0* %38, i32 0, i32 0, !dbg !676
  store void (i32)* %36, void (i32)** %39, align 8, !dbg !676
  %40 = load %struct.sigaction** %oact_addr, align 8, !dbg !677
  %41 = getelementptr inbounds %struct.sigaction* %40, i32 0, i32 1, !dbg !677
  %42 = bitcast %struct.__sigset_t* %41 to i8*, !dbg !677
  %43 = getelementptr inbounds %struct.kernel_sigaction* %koact, i32 0, i32 3, !dbg !677
  %44 = bitcast %struct.__sigset_t* %43 to i8*, !dbg !677
  %45 = call i8* @memcpy(i8* noalias %42, i8* noalias %44, i64 128) nounwind, !dbg !677
  %46 = getelementptr inbounds %struct.kernel_sigaction* %koact, i32 0, i32 1, !dbg !678
  %47 = load i64* %46, align 8, !dbg !678
  %48 = trunc i64 %47 to i32, !dbg !678
  %49 = load %struct.sigaction** %oact_addr, align 8, !dbg !678
  %50 = getelementptr inbounds %struct.sigaction* %49, i32 0, i32 2, !dbg !678
  store i32 %48, i32* %50, align 8, !dbg !678
  %51 = getelementptr inbounds %struct.kernel_sigaction* %koact, i32 0, i32 2, !dbg !679
  %52 = load void ()** %51, align 8, !dbg !679
  %53 = load %struct.sigaction** %oact_addr, align 8, !dbg !679
  %54 = getelementptr inbounds %struct.sigaction* %53, i32 0, i32 3, !dbg !679
  store void ()* %52, void ()** %54, align 8, !dbg !679
  br label %bb10, !dbg !679

bb10:                                             ; preds = %bb9, %bb8, %bb7
  %55 = load i32* %result, align 4, !dbg !680
  store i32 %55, i32* %0, align 4, !dbg !680
  %56 = load i32* %0, align 4, !dbg !680
  store i32 %56, i32* %retval, align 4, !dbg !680
  %retval11 = load i32* %retval, !dbg !680
  ret i32 %retval11, !dbg !680
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
  %1 = load i64* %bufsize_addr, align 8, !dbg !681
  store i64 %1, i64* %todo, align 8, !dbg !681
  br label %bb, !dbg !681

bb:                                               ; preds = %bb6, %entry
  %2 = load i64* %todo, align 8, !dbg !683
  %3 = icmp eq i64 %2, 0, !dbg !683
  br i1 %3, label %bb1, label %bb2, !dbg !683

bb1:                                              ; preds = %bb
  %4 = load i64* %bufsize_addr, align 8, !dbg !684
  store i64 %4, i64* %0, align 8, !dbg !684
  br label %bb16, !dbg !684

bb2:                                              ; preds = %bb
  %5 = load i64* %todo, align 8, !dbg !685
  %6 = icmp sge i64 %5, 0, !dbg !685
  br i1 %6, label %bb3, label %bb4, !dbg !685

bb3:                                              ; preds = %bb2
  %7 = load i64* %todo, align 8, !dbg !685
  store i64 %7, i64* %iftmp.0, align 8, !dbg !685
  br label %bb5, !dbg !685

bb4:                                              ; preds = %bb2
  store i64 9223372036854775807, i64* %iftmp.0, align 8, !dbg !685
  br label %bb5, !dbg !685

bb5:                                              ; preds = %bb4, %bb3
  %8 = load i64* %iftmp.0, align 8, !dbg !685
  store i64 %8, i64* %stodo, align 8, !dbg !685
  %9 = load i64* %stodo, align 8, !dbg !686
  %10 = load %struct.FILE** %stream_addr, align 8, !dbg !686
  %11 = getelementptr inbounds %struct.FILE* %10, i32 0, i32 2, !dbg !686
  %12 = load i32* %11, align 4, !dbg !686
  %13 = load i8** %buf_addr, align 8, !dbg !686
  %14 = call i64 @write(i32 %12, i8* %13, i64 %9) nounwind, !dbg !686
  store i64 %14, i64* %rv, align 8, !dbg !686
  %15 = load i64* %rv, align 8, !dbg !686
  %16 = icmp sge i64 %15, 0, !dbg !686
  br i1 %16, label %bb6, label %bb7, !dbg !686

bb6:                                              ; preds = %bb5
  %17 = load i64* %rv, align 8, !dbg !687
  %18 = load i64* %todo, align 8, !dbg !687
  %19 = sub i64 %18, %17, !dbg !687
  store i64 %19, i64* %todo, align 8, !dbg !687
  %20 = load i8** %buf_addr, align 8, !dbg !688
  %21 = load i64* %rv, align 8, !dbg !688
  %22 = getelementptr inbounds i8* %20, i64 %21, !dbg !688
  store i8* %22, i8** %buf_addr, align 8, !dbg !688
  br label %bb, !dbg !688

bb7:                                              ; preds = %bb5
  %23 = load %struct.FILE** %stream_addr, align 8, !dbg !689
  %24 = getelementptr inbounds %struct.FILE* %23, i32 0, i32 0, !dbg !689
  %25 = load i16* %24, align 8, !dbg !689
  %26 = or i16 %25, 8, !dbg !689
  %27 = load %struct.FILE** %stream_addr, align 8, !dbg !689
  %28 = getelementptr inbounds %struct.FILE* %27, i32 0, i32 0, !dbg !689
  store i16 %26, i16* %28, align 8, !dbg !689
  %29 = load %struct.FILE** %stream_addr, align 8, !dbg !690
  %30 = getelementptr inbounds %struct.FILE* %29, i32 0, i32 4, !dbg !690
  %31 = load i8** %30, align 8, !dbg !690
  %32 = ptrtoint i8* %31 to i64, !dbg !690
  %33 = load %struct.FILE** %stream_addr, align 8, !dbg !690
  %34 = getelementptr inbounds %struct.FILE* %33, i32 0, i32 3, !dbg !690
  %35 = load i8** %34, align 8, !dbg !690
  %36 = ptrtoint i8* %35 to i64, !dbg !690
  %37 = sub nsw i64 %32, %36, !dbg !690
  store i64 %37, i64* %stodo, align 8, !dbg !690
  %38 = load i64* %stodo, align 8, !dbg !690
  %39 = icmp ne i64 %38, 0, !dbg !690
  br i1 %39, label %bb8, label %bb15, !dbg !690

bb8:                                              ; preds = %bb7
  %40 = load i64* %stodo, align 8, !dbg !691
  %41 = load i64* %todo, align 8, !dbg !691
  %42 = icmp ugt i64 %40, %41, !dbg !691
  br i1 %42, label %bb9, label %bb10, !dbg !691

bb9:                                              ; preds = %bb8
  %43 = load i64* %todo, align 8, !dbg !693
  store i64 %43, i64* %stodo, align 8, !dbg !693
  br label %bb10, !dbg !693

bb10:                                             ; preds = %bb9, %bb8
  %44 = load %struct.FILE** %stream_addr, align 8, !dbg !694
  %45 = getelementptr inbounds %struct.FILE* %44, i32 0, i32 3, !dbg !694
  %46 = load i8** %45, align 8, !dbg !694
  store i8* %46, i8** %s, align 8, !dbg !694
  br label %bb11, !dbg !694

bb11:                                             ; preds = %bb13, %bb10
  %47 = load i8** %buf_addr, align 8, !dbg !695
  %48 = load i8* %47, align 1, !dbg !695
  %49 = load i8** %s, align 8, !dbg !695
  store i8 %48, i8* %49, align 1, !dbg !695
  %50 = load i8** %s, align 8, !dbg !695
  %51 = load i8* %50, align 1, !dbg !695
  %52 = icmp eq i8 %51, 10, !dbg !695
  br i1 %52, label %bb12, label %bb13, !dbg !695

bb12:                                             ; preds = %bb11
  %53 = load %struct.FILE** %stream_addr, align 8, !dbg !695
  %54 = getelementptr inbounds %struct.FILE* %53, i32 0, i32 0, !dbg !695
  %55 = load i16* %54, align 8, !dbg !695
  %56 = zext i16 %55 to i32, !dbg !695
  %57 = and i32 %56, 256, !dbg !695
  %58 = icmp ne i32 %57, 0, !dbg !695
  br i1 %58, label %bb14, label %bb13, !dbg !695

bb13:                                             ; preds = %bb12, %bb11
  %59 = load i8** %s, align 8, !dbg !696
  %60 = getelementptr inbounds i8* %59, i64 1, !dbg !696
  store i8* %60, i8** %s, align 8, !dbg !696
  %61 = load i8** %buf_addr, align 8, !dbg !697
  %62 = getelementptr inbounds i8* %61, i64 1, !dbg !697
  store i8* %62, i8** %buf_addr, align 8, !dbg !697
  %63 = load i64* %stodo, align 8, !dbg !698
  %64 = sub nsw i64 %63, 1, !dbg !698
  store i64 %64, i64* %stodo, align 8, !dbg !698
  %65 = load i64* %stodo, align 8, !dbg !698
  %66 = icmp ne i64 %65, 0, !dbg !698
  br i1 %66, label %bb11, label %bb14, !dbg !698

bb14:                                             ; preds = %bb13, %bb12
  %67 = load %struct.FILE** %stream_addr, align 8, !dbg !699
  %68 = getelementptr inbounds %struct.FILE* %67, i32 0, i32 5, !dbg !699
  %69 = load i8** %s, align 8, !dbg !699
  store i8* %69, i8** %68, align 8, !dbg !699
  %70 = load i8** %s, align 8, !dbg !700
  %71 = ptrtoint i8* %70 to i64, !dbg !700
  %72 = load %struct.FILE** %stream_addr, align 8, !dbg !700
  %73 = getelementptr inbounds %struct.FILE* %72, i32 0, i32 3, !dbg !700
  %74 = load i8** %73, align 8, !dbg !700
  %75 = ptrtoint i8* %74 to i64, !dbg !700
  %76 = sub nsw i64 %71, %75, !dbg !700
  %77 = load i64* %todo, align 8, !dbg !700
  %78 = sub i64 %77, %76, !dbg !700
  store i64 %78, i64* %todo, align 8, !dbg !700
  br label %bb15, !dbg !700

bb15:                                             ; preds = %bb14, %bb7
  %79 = load i64* %bufsize_addr, align 8, !dbg !701
  %80 = load i64* %todo, align 8, !dbg !701
  %81 = sub i64 %79, %80, !dbg !701
  store i64 %81, i64* %0, align 8, !dbg !701
  br label %bb16, !dbg !701

bb16:                                             ; preds = %bb15, %bb1
  %82 = load i64* %0, align 8, !dbg !684
  store i64 %82, i64* %retval, align 8, !dbg !684
  %retval17 = load i64* %retval, !dbg !684
  ret i64 %retval17, !dbg !684
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
  %1 = load i32* %fd_addr, align 4, !dbg !702
  %2 = call i32 (i32, i64, ...)* @ioctl(i32 %1, i64 21505, %struct.__kernel_termios* %k_termios) nounwind, !dbg !702
  store i32 %2, i32* %retval1, align 4, !dbg !702
  %3 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 0, !dbg !704
  %4 = load i32* %3, align 4, !dbg !704
  %5 = load %struct.termios** %termios_p_addr, align 8, !dbg !704
  %6 = getelementptr inbounds %struct.termios* %5, i32 0, i32 0, !dbg !704
  store i32 %4, i32* %6, align 4, !dbg !704
  %7 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 1, !dbg !705
  %8 = load i32* %7, align 4, !dbg !705
  %9 = load %struct.termios** %termios_p_addr, align 8, !dbg !705
  %10 = getelementptr inbounds %struct.termios* %9, i32 0, i32 1, !dbg !705
  store i32 %8, i32* %10, align 4, !dbg !705
  %11 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 2, !dbg !706
  %12 = load i32* %11, align 4, !dbg !706
  %13 = load %struct.termios** %termios_p_addr, align 8, !dbg !706
  %14 = getelementptr inbounds %struct.termios* %13, i32 0, i32 2, !dbg !706
  store i32 %12, i32* %14, align 4, !dbg !706
  %15 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 3, !dbg !707
  %16 = load i32* %15, align 4, !dbg !707
  %17 = load %struct.termios** %termios_p_addr, align 8, !dbg !707
  %18 = getelementptr inbounds %struct.termios* %17, i32 0, i32 3, !dbg !707
  store i32 %16, i32* %18, align 4, !dbg !707
  %19 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 4, !dbg !708
  %20 = load i8* %19, align 4, !dbg !708
  %21 = load %struct.termios** %termios_p_addr, align 8, !dbg !708
  %22 = getelementptr inbounds %struct.termios* %21, i32 0, i32 4, !dbg !708
  store i8 %20, i8* %22, align 4, !dbg !708
  %23 = load %struct.termios** %termios_p_addr, align 8, !dbg !709
  %24 = getelementptr inbounds %struct.termios* %23, i32 0, i32 5, !dbg !709
  %25 = getelementptr inbounds [32 x i8]* %24, i64 0, i64 0, !dbg !709
  %26 = getelementptr inbounds %struct.__kernel_termios* %k_termios, i32 0, i32 5, !dbg !709
  %27 = getelementptr inbounds [19 x i8]* %26, i64 0, i64 0, !dbg !709
  %28 = call i8* @mempcpy(i8* noalias %25, i8* noalias %27, i64 19) nounwind, !dbg !709
  %29 = call i8* @memset(i8* %28, i32 0, i64 13) nounwind, !dbg !709
  %30 = load i32* %retval1, align 4, !dbg !710
  store i32 %30, i32* %0, align 4, !dbg !710
  %31 = load i32* %0, align 4, !dbg !710
  store i32 %31, i32* %retval, align 4, !dbg !710
  %retval2 = load i32* %retval, !dbg !710
  ret i32 %retval2, !dbg !710
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
  %1 = load i8** %s1_addr, align 8, !dbg !711
  store i8* %1, i8** %r1, align 8, !dbg !711
  %2 = load i8** %s2_addr, align 8, !dbg !713
  store i8* %2, i8** %r2, align 8, !dbg !713
  br label %bb1, !dbg !713

bb:                                               ; preds = %bb1
  %3 = load i8** %r2, align 8, !dbg !714
  %4 = load i8* %3, align 1, !dbg !714
  %5 = load i8** %r1, align 8, !dbg !714
  store i8 %4, i8* %5, align 1, !dbg !714
  %6 = load i8** %r1, align 8, !dbg !714
  %7 = getelementptr inbounds i8* %6, i64 1, !dbg !714
  store i8* %7, i8** %r1, align 8, !dbg !714
  %8 = load i8** %r2, align 8, !dbg !714
  %9 = getelementptr inbounds i8* %8, i64 1, !dbg !714
  store i8* %9, i8** %r2, align 8, !dbg !714
  %10 = load i64* %n_addr, align 8, !dbg !715
  %11 = sub i64 %10, 1, !dbg !715
  store i64 %11, i64* %n_addr, align 8, !dbg !715
  br label %bb1, !dbg !715

bb1:                                              ; preds = %bb, %entry
  %12 = load i64* %n_addr, align 8, !dbg !716
  %13 = icmp ne i64 %12, 0, !dbg !716
  br i1 %13, label %bb, label %bb2, !dbg !716

bb2:                                              ; preds = %bb1
  %14 = load i8** %r1, align 8, !dbg !717
  store i8* %14, i8** %0, align 8, !dbg !717
  %15 = load i8** %0, align 8, !dbg !717
  store i8* %15, i8** %retval, align 8, !dbg !717
  %retval3 = load i8** %retval, !dbg !717
  ret i8* %retval3, !dbg !717
}

define i32 @main(i32, i8**) {
entry:
  call void @__uClibc_main(i32 (i32, i8**, i8**)* bitcast (i32 ()* @__user_main to i32 (i32, i8**, i8**)*), i32 %0, i8** %1, void ()* null, void ()* null, void ()* null, i8* null)
  unreachable
}

define void @klee_div_zero_check(i64 %z) nounwind {
entry:
  %0 = icmp eq i64 %z, 0, !dbg !718
  br i1 %0, label %bb, label %return, !dbg !718

bb:                                               ; preds = %entry
  tail call void @klee_report_error(i8* getelementptr inbounds ([22 x i8]* @.str26, i64 0, i64 0), i32 14, i8* getelementptr inbounds ([15 x i8]* @.str127, i64 0, i64 0), i8* getelementptr inbounds ([8 x i8]* @.str228, i64 0, i64 0)) noreturn nounwind, !
  unreachable, !dbg !720

return:                                           ; preds = %entry
  ret void, !dbg !721
}

declare void @klee_report_error(i8*, i32, i8*, i8*) noreturn

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define i32 @klee_int(i8* %name) nounwind {
entry:
  %x = alloca i32, align 4
  %x1 = bitcast i32* %x to i8*, !dbg !722
  call void @klee_make_symbolic(i8* %x1, i64 4, i8* %name) nounwind, !dbg !722
  %0 = load i32* %x, align 4, !dbg !723
  ret i32 %0, !dbg !723
}

define void @klee_overshift_check(i64 %bitWidth, i64 %shift) nounwind {
entry:
  %0 = icmp ult i64 %shift, %bitWidth, !dbg !724
  br i1 %0, label %return, label %bb, !dbg !724

bb:                                               ; preds = %entry
  tail call void @klee_report_error(i8* getelementptr inbounds ([8 x i8]* @.str329, i64 0, i64 0), i32 0, i8* getelementptr inbounds ([16 x i8]* @.str14, i64 0, i64 0), i8* getelementptr inbounds ([14 x i8]* @.str25, i64 0, i64 0)) noreturn nounwind, !db
  unreachable, !dbg !726

return:                                           ; preds = %entry
  ret void, !dbg !727
}

define i32 @klee_range(i32 %start, i32 %end, i8* %name) nounwind {
entry:
  %x = alloca i32, align 4
  %0 = icmp slt i32 %start, %end, !dbg !728
  br i1 %0, label %bb1, label %bb, !dbg !728

bb:                                               ; preds = %entry
  call void @klee_report_error(i8* getelementptr inbounds ([13 x i8]* @.str6, i64 0, i64 0), i32 17, i8* getelementptr inbounds ([14 x i8]* @.str17, i64 0, i64 0), i8* getelementptr inbounds ([5 x i8]* @.str28, i64 0, i64 0)) noreturn nounwind, !dbg !729
  unreachable, !dbg !729

bb1:                                              ; preds = %entry
  %1 = add nsw i32 %start, 1, !dbg !730
  %2 = icmp eq i32 %1, %end, !dbg !730
  br i1 %2, label %bb8, label %bb3, !dbg !730

bb3:                                              ; preds = %bb1
  %x4 = bitcast i32* %x to i8*, !dbg !731
  call void @klee_make_symbolic(i8* %x4, i64 4, i8* %name) nounwind, !dbg !731
  %3 = icmp eq i32 %start, 0, !dbg !732
  %4 = load i32* %x, align 4, !dbg !733
  br i1 %3, label %bb5, label %bb6, !dbg !732

bb5:                                              ; preds = %bb3
  %5 = icmp ult i32 %4, %end, !dbg !733
  %6 = zext i1 %5 to i64, !dbg !733
  call void @klee_assume(i64 %6) nounwind, !dbg !733
  br label %bb7, !dbg !733

bb6:                                              ; preds = %bb3
  %7 = icmp sge i32 %4, %start, !dbg !734
  %8 = zext i1 %7 to i64, !dbg !734
  call void @klee_assume(i64 %8) nounwind, !dbg !734
  %9 = load i32* %x, align 4, !dbg !735
  %10 = icmp slt i32 %9, %end, !dbg !735
  %11 = zext i1 %10 to i64, !dbg !735
  call void @klee_assume(i64 %11) nounwind, !dbg !735
  br label %bb7, !dbg !735

bb7:                                              ; preds = %bb6, %bb5
  %12 = load i32* %x, align 4, !dbg !736
  br label %bb8, !dbg !736

bb8:                                              ; preds = %bb7, %bb1
  %.0 = phi i32 [ %12, %bb7 ], [ %start, %bb1 ]
  ret i32 %.0, !dbg !737
}

!llvm.dbg.sp = !{!0, !8, !11, !17, !23, !26, !29, !30, !41, !52, !64, !71, !78, !82, !83, !87, !94, !104, !113, !129, !130, !131, !173, !179, !185, !283, !325, !351, !360, !366, !375, !381, !390, !399, !408, !417}
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
!94 = metadata !{i32 589870, i32 0, metadata !95, metadata !"memset", metadata !"memset", metadata !"memset", metadata !95, i32 18, metadata !97, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i8* (i8*, i32, i64)* @memset} ; [ DW_TAG_subprogra
!95 = metadata !{i32 589865, metadata !"memset.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !96} ; [ DW_TAG_file_type ]
!96 = metadata !{i32 589841, i32 0, i32 1, metadata !"memset.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!97 = metadata !{i32 589845, metadata !95, metadata !"", metadata !95, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !98, i32 0, null} ; [ DW_TAG_subroutine_type ]
!98 = metadata !{metadata !99, metadata !99, metadata !100, metadata !101}
!99 = metadata !{i32 589839, metadata !95, metadata !"", metadata !95, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!100 = metadata !{i32 589860, metadata !95, metadata !"int", metadata !95, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!101 = metadata !{i32 589846, metadata !102, metadata !"size_t", metadata !102, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !103} ; [ DW_TAG_typedef ]
!102 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !96} ; [ DW_TAG_file_type ]
!103 = metadata !{i32 589860, metadata !95, metadata !"long unsigned int", metadata !95, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!104 = metadata !{i32 589870, i32 0, metadata !105, metadata !"memcpy", metadata !"memcpy", metadata !"memcpy", metadata !105, i32 19, metadata !107, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i8* (i8*, i8*, i64)* @memcpy} ; [ DW_TAG_subpr
!105 = metadata !{i32 589865, metadata !"memcpy.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !106} ; [ DW_TAG_file_type ]
!106 = metadata !{i32 589841, i32 0, i32 1, metadata !"memcpy.c", metadata !"/home/anitha/klee-uclibc/libc/string", metadata !"4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2.9)", i1 true, i1 false, metadata !"", i32 0} ; [ DW_TAG_compile_unit ]
!107 = metadata !{i32 589845, metadata !105, metadata !"", metadata !105, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !108, i32 0, null} ; [ DW_TAG_subroutine_type ]
!108 = metadata !{metadata !109, metadata !109, metadata !109, metadata !110}
!109 = metadata !{i32 589839, metadata !105, metadata !"", metadata !105, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!110 = metadata !{i32 589846, metadata !111, metadata !"size_t", metadata !111, i32 214, i64 0, i64 0, i64 0, i32 0, metadata !112} ; [ DW_TAG_typedef ]
!111 = metadata !{i32 589865, metadata !"stddef.h", metadata !"/home/anitha/llvm-gcc4.2-2.9-x86_64-linux/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.2.1/include", metadata !106} ; [ DW_TAG_file_type ]
!112 = metadata !{i32 589860, metadata !105, metadata !"long unsigned int", metadata !105, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
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
!548 = metadata !{i32 18, i32 0, metadata !545, null}
!549 = metadata !{i32 139, i32 0, metadata !550, null}
!550 = metadata !{i32 589835, metadata !11, i32 137, i32 0, metadata !12, i32 0} ; [ DW_TAG_lexical_block ]
!551 = metadata !{i32 143, i32 0, metadata !552, null}
!552 = metadata !{i32 589835, metadata !550, i32 137, i32 0, metadata !12, i32 1} ; [ DW_TAG_lexical_block ]
!553 = metadata !{i32 147, i32 0, metadata !552, null}
!554 = metadata !{i32 150, i32 0, metadata !552, null}
!555 = metadata !{i32 153, i32 0, metadata !552, null}
!556 = metadata !{i32 56, i32 0, metadata !557, null}
!557 = metadata !{i32 589835, metadata !17, i32 55, i32 0, metadata !18, i32 2} ; [ DW_TAG_lexical_block ]
!558 = metadata !{i32 160, i32 0, metadata !559, null}
!559 = metadata !{i32 589835, metadata !23, i32 156, i32 0, metadata !12, i32 3} ; [ DW_TAG_lexical_block ]
!560 = metadata !{i32 161, i32 0, metadata !559, null}
!561 = metadata !{i32 162, i32 0, metadata !559, null}
!562 = metadata !{i32 163, i32 0, metadata !559, null}
!563 = metadata !{i32 165, i32 0, metadata !559, null}
!564 = metadata !{i32 166, i32 0, metadata !559, null}
!565 = metadata !{i32 168, i32 0, metadata !559, null}
!566 = metadata !{i32 191, i32 0, metadata !567, null}
!567 = metadata !{i32 589835, metadata !26, i32 188, i32 0, metadata !12, i32 4} ; [ DW_TAG_lexical_block ]
!568 = metadata !{i32 193, i32 0, metadata !567, null}
!569 = metadata !{i32 197, i32 0, metadata !567, null}
!570 = metadata !{i32 239, i32 0, metadata !567, null}
!571 = metadata !{i32 192, i32 0, metadata !567, null}
!572 = metadata !{i32 263, i32 0, metadata !573, null}
!573 = metadata !{i32 589835, metadata !29, i32 252, i32 0, metadata !12, i32 5} ; [ DW_TAG_lexical_block ]
!574 = metadata !{i32 264, i32 0, metadata !573, null}
!575 = metadata !{i32 266, i32 0, metadata !573, null}
!576 = metadata !{i32 267, i32 0, metadata !573, null}
!577 = metadata !{i32 268, i32 0, metadata !573, null}
!578 = metadata !{i32 288, i32 0, metadata !579, null}
!579 = metadata !{i32 589835, metadata !30, i32 281, i32 0, metadata !12, i32 6} ; [ DW_TAG_lexical_block ]
!580 = metadata !{i32 291, i32 0, metadata !579, null}
!581 = metadata !{i32 294, i32 0, metadata !579, null}
!582 = metadata !{i32 298, i32 0, metadata !579, null}
!583 = metadata !{i32 300, i32 0, metadata !579, null}
!584 = metadata !{i32 305, i32 0, metadata !579, null}
!585 = metadata !{i32 306, i32 0, metadata !579, null}
!586 = metadata !{i32 307, i32 0, metadata !579, null}
!587 = metadata !{i32 308, i32 0, metadata !579, null}
!588 = metadata !{i32 312, i32 0, metadata !589, null}
!589 = metadata !{i32 589835, metadata !579, i32 312, i32 0, metadata !12, i32 7} ; [ DW_TAG_lexical_block ]
!590 = metadata !{i32 313, i32 0, metadata !589, null}
!591 = metadata !{i32 314, i32 0, metadata !589, null}
!592 = metadata !{i32 316, i32 0, metadata !589, null}
!593 = metadata !{i32 311, i32 0, metadata !579, null}
!594 = metadata !{i32 323, i32 0, metadata !579, null}
!595 = metadata !{i32 327, i32 0, metadata !579, null}
!596 = metadata !{i32 331, i32 0, metadata !579, null}
!597 = metadata !{i32 336, i32 0, metadata !579, null}
!598 = metadata !{i32 337, i32 0, metadata !579, null}
!599 = metadata !{i32 338, i32 0, metadata !579, null}
!600 = metadata !{i32 342, i32 0, metadata !579, null}
!601 = metadata !{i32 354, i32 0, metadata !579, null}
!602 = metadata !{i32 370, i32 0, metadata !579, null}
!603 = metadata !{i32 371, i32 0, metadata !579, null}
!604 = metadata !{i32 391, i32 0, metadata !579, null}
!605 = metadata !{i32 392, i32 0, metadata !579, null}
!606 = metadata !{i32 395, i32 0, metadata !579, null}
!607 = metadata !{i32 396, i32 0, metadata !579, null}
!608 = metadata !{i32 401, i32 0, metadata !579, null}
!609 = metadata !{i32 22, i32 0, metadata !610, null}
!610 = metadata !{i32 589835, metadata !41, i32 19, i32 0, metadata !42, i32 0} ; [ DW_TAG_lexical_block ]
!611 = metadata !{i32 24, i32 0, metadata !610, null}
!612 = metadata !{i32 30, i32 0, metadata !613, null}
!613 = metadata !{i32 589835, metadata !52, i32 18, i32 0, metadata !53, i32 0} ; [ DW_TAG_lexical_block ]
!614 = metadata !{i32 32, i32 0, metadata !613, null}
!615 = metadata !{i32 37, i32 0, metadata !613, null}
!616 = metadata !{i32 13, i32 0, metadata !617, null}
!617 = metadata !{i32 589835, metadata !64, i32 12, i32 0, metadata !65, i32 0} ; [ DW_TAG_lexical_block ]
!618 = metadata !{i32 12, i32 0, metadata !619, null}
!619 = metadata !{i32 589835, metadata !71, i32 11, i32 0, metadata !72, i32 0} ; [ DW_TAG_lexical_block ]
!620 = metadata !{i32 258, i32 0, metadata !621, null}
!621 = metadata !{i32 589835, metadata !78, i32 211, i32 0, metadata !79, i32 0} ; [ DW_TAG_lexical_block ]
!622 = metadata !{i32 261, i32 0, metadata !621, null}
!623 = metadata !{i32 262, i32 0, metadata !621, null}
!624 = metadata !{i32 274, i32 0, metadata !621, null}
!625 = metadata !{i32 280, i32 0, metadata !626, null}
!626 = metadata !{i32 589835, metadata !82, i32 278, i32 0, metadata !79, i32 1} ; [ DW_TAG_lexical_block ]
!627 = metadata !{i32 282, i32 0, metadata !626, null}
!628 = metadata !{i32 283, i32 0, metadata !626, null}
!629 = metadata !{i32 284, i32 0, metadata !626, null}
!630 = metadata !{i32 291, i32 0, metadata !626, null}
!631 = metadata !{i32 322, i32 0, metadata !632, null}
!632 = metadata !{i32 589835, metadata !87, i32 319, i32 0, metadata !90, i32 0} ; [ DW_TAG_lexical_block ]
!633 = metadata !{i32 323, i32 0, metadata !632, null}
!634 = metadata !{i32 327, i32 0, metadata !632, null}
!635 = metadata !{i32 334, i32 0, metadata !632, null}
!636 = metadata !{i32 336, i32 0, metadata !632, null}
!637 = metadata !{i32 19, i32 0, metadata !638, null}
!638 = metadata !{i32 589835, metadata !94, i32 18, i32 0, metadata !95, i32 0} ; [ DW_TAG_lexical_block ]
!639 = metadata !{i32 28, i32 0, metadata !638, null}
!640 = metadata !{i32 29, i32 0, metadata !638, null}
!641 = metadata !{i32 27, i32 0, metadata !638, null}
!642 = metadata !{i32 32, i32 0, metadata !638, null}
!643 = metadata !{i32 20, i32 0, metadata !644, null}
!644 = metadata !{i32 589835, metadata !104, i32 19, i32 0, metadata !105, i32 0} ; [ DW_TAG_lexical_block ]
!645 = metadata !{i32 21, i32 0, metadata !644, null}
!646 = metadata !{i32 29, i32 0, metadata !644, null}
!647 = metadata !{i32 30, i32 0, metadata !644, null}
!648 = metadata !{i32 28, i32 0, metadata !644, null}
!649 = metadata !{i32 34, i32 0, metadata !644, null}
!650 = metadata !{i32 117, i32 0, metadata !113, null}
!651 = metadata !{i32 117, i32 0, metadata !652, null}
!652 = metadata !{i32 589835, metadata !113, i32 117, i32 0, metadata !116, i32 0} ; [ DW_TAG_lexical_block ]
!653 = metadata !{i32 118, i32 0, metadata !129, null}
!654 = metadata !{i32 118, i32 0, metadata !655, null}
!655 = metadata !{i32 589835, metadata !129, i32 118, i32 0, metadata !116, i32 1} ; [ DW_TAG_lexical_block ]
!656 = metadata !{i32 119, i32 0, metadata !130, null}
!657 = metadata !{i32 119, i32 0, metadata !658, null}
!658 = metadata !{i32 589835, metadata !130, i32 119, i32 0, metadata !116, i32 2} ; [ DW_TAG_lexical_block ]
!659 = metadata !{i32 23, i32 0, metadata !660, null}
!660 = metadata !{i32 589835, metadata !131, i32 18, i32 0, metadata !132, i32 0} ; [ DW_TAG_lexical_block ]
!661 = metadata !{i32 24, i32 0, metadata !660, null}
!662 = metadata !{i32 25, i32 0, metadata !660, null}
!663 = metadata !{i32 28, i32 0, metadata !660, null}
!664 = metadata !{i32 30, i32 0, metadata !665, null}
!665 = metadata !{i32 589835, metadata !173, i32 27, i32 0, metadata !174, i32 0} ; [ DW_TAG_lexical_block ]
!666 = metadata !{i32 17, i32 0, metadata !667, null}
!667 = metadata !{i32 589835, metadata !179, i32 16, i32 0, metadata !180, i32 0} ; [ DW_TAG_lexical_block ]
!668 = metadata !{i32 47, i32 0, metadata !669, null}
!669 = metadata !{i32 589835, metadata !185, i32 43, i32 0, metadata !186, i32 0} ; [ DW_TAG_lexical_block ]
!670 = metadata !{i32 48, i32 0, metadata !669, null}
!671 = metadata !{i32 49, i32 0, metadata !669, null}
!672 = metadata !{i32 50, i32 0, metadata !669, null}
!673 = metadata !{i32 52, i32 0, metadata !669, null}
!674 = metadata !{i32 58, i32 0, metadata !669, null}
!675 = metadata !{i32 62, i32 0, metadata !669, null}
!676 = metadata !{i32 63, i32 0, metadata !669, null}
!677 = metadata !{i32 64, i32 0, metadata !669, null}
!678 = metadata !{i32 65, i32 0, metadata !669, null}
!679 = metadata !{i32 67, i32 0, metadata !669, null}
!680 = metadata !{i32 71, i32 0, metadata !669, null}
!681 = metadata !{i32 44, i32 0, metadata !682, null}
!682 = metadata !{i32 589835, metadata !283, i32 35, i32 0, metadata !284, i32 0} ; [ DW_TAG_lexical_block ]
!683 = metadata !{i32 47, i32 0, metadata !682, null}
!684 = metadata !{i32 49, i32 0, metadata !682, null}
!685 = metadata !{i32 51, i32 0, metadata !682, null}
!686 = metadata !{i32 52, i32 0, metadata !682, null}
!687 = metadata !{i32 62, i32 0, metadata !682, null}
!688 = metadata !{i32 63, i32 0, metadata !682, null}
!689 = metadata !{i32 70, i32 0, metadata !682, null}
!690 = metadata !{i32 73, i32 0, metadata !682, null}
!691 = metadata !{i32 76, i32 0, metadata !692, null}
!692 = metadata !{i32 589835, metadata !682, i32 76, i32 0, metadata !284, i32 1} ; [ DW_TAG_lexical_block ]
!693 = metadata !{i32 77, i32 0, metadata !692, null}
!694 = metadata !{i32 80, i32 0, metadata !692, null}
!695 = metadata !{i32 83, i32 0, metadata !692, null}
!696 = metadata !{i32 88, i32 0, metadata !692, null}
!697 = metadata !{i32 89, i32 0, metadata !692, null}
!698 = metadata !{i32 90, i32 0, metadata !692, null}
!699 = metadata !{i32 92, i32 0, metadata !692, null}
!700 = metadata !{i32 94, i32 0, metadata !692, null}
!701 = metadata !{i32 99, i32 0, metadata !682, null}
!702 = metadata !{i32 43, i32 0, metadata !703, null}
!703 = metadata !{i32 589835, metadata !325, i32 39, i32 0, metadata !326, i32 0} ; [ DW_TAG_lexical_block ]
!704 = metadata !{i32 45, i32 0, metadata !703, null}
!705 = metadata !{i32 46, i32 0, metadata !703, null}
!706 = metadata !{i32 47, i32 0, metadata !703, null}
!707 = metadata !{i32 48, i32 0, metadata !703, null}
!708 = metadata !{i32 49, i32 0, metadata !703, null}
!709 = metadata !{i32 61, i32 0, metadata !703, null}
!710 = metadata !{i32 79, i32 0, metadata !703, null}
!711 = metadata !{i32 22, i32 0, metadata !712, null}
!712 = metadata !{i32 589835, metadata !351, i32 21, i32 0, metadata !352, i32 0} ; [ DW_TAG_lexical_block ]
!713 = metadata !{i32 23, i32 0, metadata !712, null}
!714 = metadata !{i32 31, i32 0, metadata !712, null}
!715 = metadata !{i32 32, i32 0, metadata !712, null}
!716 = metadata !{i32 30, i32 0, metadata !712, null}
!717 = metadata !{i32 36, i32 0, metadata !712, null}
!718 = metadata !{i32 13, i32 0, metadata !719, null}
!719 = metadata !{i32 589835, metadata !360, i32 12, i32 0, metadata !361, i32 0} ; [ DW_TAG_lexical_block ]
!720 = metadata !{i32 14, i32 0, metadata !719, null}
!721 = metadata !{i32 15, i32 0, metadata !719, null}
!722 = metadata !{i32 15, i32 0, metadata !494, null}
!723 = metadata !{i32 16, i32 0, metadata !494, null}
!724 = metadata !{i32 21, i32 0, metadata !725, null}
!725 = metadata !{i32 589835, metadata !375, i32 20, i32 0, metadata !376, i32 0} ; [ DW_TAG_lexical_block ]
!726 = metadata !{i32 27, i32 0, metadata !725, null}
!727 = metadata !{i32 29, i32 0, metadata !725, null}
!728 = metadata !{i32 16, i32 0, metadata !501, null}
!729 = metadata !{i32 17, i32 0, metadata !501, null}
!730 = metadata !{i32 19, i32 0, metadata !501, null}
!731 = metadata !{i32 22, i32 0, metadata !501, null}
!732 = metadata !{i32 25, i32 0, metadata !501, null}
!733 = metadata !{i32 26, i32 0, metadata !501, null}
!734 = metadata !{i32 28, i32 0, metadata !501, null}
!735 = metadata !{i32 29, i32 0, metadata !501, null}
!736 = metadata !{i32 32, i32 0, metadata !501, null}
!737 = metadata !{i32 20, i32 0, metadata !501, null}
