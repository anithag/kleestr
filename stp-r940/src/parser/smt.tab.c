/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         smtparse
#define yylex           smtlex
#define yyerror         smterror
#define yydebug         smtdebug
#define yynerrs         smtnerrs

#define yylval          smtlval
#define yychar          smtchar

/* Copy the first part of user declarations.  */
#line 1 "smtlib.y" /* yacc.c:339  */

  /********************************************************************
   * AUTHORS: Vijay Ganesh, Trevor Hansen
   *
   * BEGIN DATE: July, 2006
   *
   * This file is modified version of the CVCL's smtlib.y file. Please
   * see CVCL license below
   ********************************************************************/
  
  /********************************************************************
   *
   * \file smtlib.y
   * 
   * Author: Sergey Berezin, Clark Barrett
   * 
   * Created: Apr 30 2005
   *
   * <hr>
   * Copyright (C) 2004 by the Board of Trustees of Leland Stanford
   * Junior University and by New York University. 
   *
   * License to use, copy, modify, sell and/or distribute this software
   * and its documentation for any purpose is hereby granted without
   * royalty, subject to the terms and conditions defined in the \ref
   * LICENSE file provided with this distribution.  In particular:
   *
   * - The above copyright notice and this permission notice must appear
   * in all copies of the software and related documentation.
   *
   * - THE SOFTWARE IS PROVIDED "AS-IS", WITHOUT ANY WARRANTIES,
   * EXPRESSED OR IMPLIED.  USE IT AT YOUR OWN RISK.
   * 
   * <hr>
   ********************************************************************/
  // -*- c++ -*-

#include "ParserInterface.h"

  using namespace std; 
  using namespace BEEV;

  // Suppress the bogus warning suppression in bison (it generates
  // compile error)
#undef __GNUC_MINOR__
  
  extern char* smttext;
  extern int smtlineno;
  extern int smtlex(void);

  int yyerror(const char *s) {
    cout << "syntax error: line " << smtlineno << "\n" << s << endl;
    cout << "  token: " << smttext << endl;
    FatalError("");
    return 1;
  }

int yyerror(void* AssertsQuery, const char* s) { return yyerror(s); }

  ASTNode query;
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 104857600
#define YYERROR_VERBOSE 1
#define YY_EXIT_FAILURE -1
  

#line 141 "smt.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "smt.tab.h".  */
#ifndef YY_SMT_SMT_TAB_H_INCLUDED
# define YY_SMT_SMT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int smtdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMERAL_TOK = 258,
    BVCONST_TOK = 259,
    BITCONST_TOK = 260,
    FORMID_TOK = 261,
    TERMID_TOK = 262,
    STRING_TOK = 263,
    USER_VAL_TOK = 264,
    SOURCE_TOK = 265,
    CATEGORY_TOK = 266,
    DIFFICULTY_TOK = 267,
    BITVEC_TOK = 268,
    ARRAY_TOK = 269,
    SELECT_TOK = 270,
    STORE_TOK = 271,
    TRUE_TOK = 272,
    FALSE_TOK = 273,
    NOT_TOK = 274,
    IMPLIES_TOK = 275,
    ITE_TOK = 276,
    AND_TOK = 277,
    OR_TOK = 278,
    XOR_TOK = 279,
    IFF_TOK = 280,
    EXISTS_TOK = 281,
    FORALL_TOK = 282,
    LET_TOK = 283,
    FLET_TOK = 284,
    NOTES_TOK = 285,
    CVC_COMMAND_TOK = 286,
    SORTS_TOK = 287,
    FUNS_TOK = 288,
    PREDS_TOK = 289,
    EXTENSIONS_TOK = 290,
    DEFINITION_TOK = 291,
    AXIOMS_TOK = 292,
    LOGIC_TOK = 293,
    COLON_TOK = 294,
    LBRACKET_TOK = 295,
    RBRACKET_TOK = 296,
    LPAREN_TOK = 297,
    RPAREN_TOK = 298,
    SAT_TOK = 299,
    UNSAT_TOK = 300,
    UNKNOWN_TOK = 301,
    ASSUMPTION_TOK = 302,
    FORMULA_TOK = 303,
    STATUS_TOK = 304,
    BENCHMARK_TOK = 305,
    EXTRASORTS_TOK = 306,
    EXTRAFUNS_TOK = 307,
    EXTRAPREDS_TOK = 308,
    LANGUAGE_TOK = 309,
    DOLLAR_TOK = 310,
    QUESTION_TOK = 311,
    DISTINCT_TOK = 312,
    SEMICOLON_TOK = 313,
    EOF_TOK = 314,
    EQ_TOK = 315,
    NAND_TOK = 316,
    NOR_TOK = 317,
    NEQ_TOK = 318,
    ASSIGN_TOK = 319,
    BV_TOK = 320,
    BOOLEAN_TOK = 321,
    BVLEFTSHIFT_1_TOK = 322,
    BVRIGHTSHIFT_1_TOK = 323,
    BVARITHRIGHTSHIFT_TOK = 324,
    BVPLUS_TOK = 325,
    BVSUB_TOK = 326,
    BVNOT_TOK = 327,
    BVMULT_TOK = 328,
    BVDIV_TOK = 329,
    SBVDIV_TOK = 330,
    BVMOD_TOK = 331,
    SBVREM_TOK = 332,
    SBVMOD_TOK = 333,
    BVNEG_TOK = 334,
    BVAND_TOK = 335,
    BVOR_TOK = 336,
    BVXOR_TOK = 337,
    BVNAND_TOK = 338,
    BVNOR_TOK = 339,
    BVXNOR_TOK = 340,
    BVCONCAT_TOK = 341,
    BVLT_TOK = 342,
    BVGT_TOK = 343,
    BVLE_TOK = 344,
    BVGE_TOK = 345,
    BVSLT_TOK = 346,
    BVSGT_TOK = 347,
    BVSLE_TOK = 348,
    BVSGE_TOK = 349,
    BVSX_TOK = 350,
    BVZX_TOK = 351,
    BVROTATE_RIGHT_TOK = 352,
    BVROTATE_LEFT_TOK = 353,
    BVREPEAT_TOK = 354,
    BVCOMP_TOK = 355,
    BOOLEXTRACT_TOK = 356,
    BOOL_TO_BV_TOK = 357,
    BVEXTRACT_TOK = 358
  };
#endif
/* Tokens.  */
#define NUMERAL_TOK 258
#define BVCONST_TOK 259
#define BITCONST_TOK 260
#define FORMID_TOK 261
#define TERMID_TOK 262
#define STRING_TOK 263
#define USER_VAL_TOK 264
#define SOURCE_TOK 265
#define CATEGORY_TOK 266
#define DIFFICULTY_TOK 267
#define BITVEC_TOK 268
#define ARRAY_TOK 269
#define SELECT_TOK 270
#define STORE_TOK 271
#define TRUE_TOK 272
#define FALSE_TOK 273
#define NOT_TOK 274
#define IMPLIES_TOK 275
#define ITE_TOK 276
#define AND_TOK 277
#define OR_TOK 278
#define XOR_TOK 279
#define IFF_TOK 280
#define EXISTS_TOK 281
#define FORALL_TOK 282
#define LET_TOK 283
#define FLET_TOK 284
#define NOTES_TOK 285
#define CVC_COMMAND_TOK 286
#define SORTS_TOK 287
#define FUNS_TOK 288
#define PREDS_TOK 289
#define EXTENSIONS_TOK 290
#define DEFINITION_TOK 291
#define AXIOMS_TOK 292
#define LOGIC_TOK 293
#define COLON_TOK 294
#define LBRACKET_TOK 295
#define RBRACKET_TOK 296
#define LPAREN_TOK 297
#define RPAREN_TOK 298
#define SAT_TOK 299
#define UNSAT_TOK 300
#define UNKNOWN_TOK 301
#define ASSUMPTION_TOK 302
#define FORMULA_TOK 303
#define STATUS_TOK 304
#define BENCHMARK_TOK 305
#define EXTRASORTS_TOK 306
#define EXTRAFUNS_TOK 307
#define EXTRAPREDS_TOK 308
#define LANGUAGE_TOK 309
#define DOLLAR_TOK 310
#define QUESTION_TOK 311
#define DISTINCT_TOK 312
#define SEMICOLON_TOK 313
#define EOF_TOK 314
#define EQ_TOK 315
#define NAND_TOK 316
#define NOR_TOK 317
#define NEQ_TOK 318
#define ASSIGN_TOK 319
#define BV_TOK 320
#define BOOLEAN_TOK 321
#define BVLEFTSHIFT_1_TOK 322
#define BVRIGHTSHIFT_1_TOK 323
#define BVARITHRIGHTSHIFT_TOK 324
#define BVPLUS_TOK 325
#define BVSUB_TOK 326
#define BVNOT_TOK 327
#define BVMULT_TOK 328
#define BVDIV_TOK 329
#define SBVDIV_TOK 330
#define BVMOD_TOK 331
#define SBVREM_TOK 332
#define SBVMOD_TOK 333
#define BVNEG_TOK 334
#define BVAND_TOK 335
#define BVOR_TOK 336
#define BVXOR_TOK 337
#define BVNAND_TOK 338
#define BVNOR_TOK 339
#define BVXNOR_TOK 340
#define BVCONCAT_TOK 341
#define BVLT_TOK 342
#define BVGT_TOK 343
#define BVLE_TOK 344
#define BVGE_TOK 345
#define BVSLT_TOK 346
#define BVSGT_TOK 347
#define BVSLE_TOK 348
#define BVSGE_TOK 349
#define BVSX_TOK 350
#define BVZX_TOK 351
#define BVROTATE_RIGHT_TOK 352
#define BVROTATE_LEFT_TOK 353
#define BVREPEAT_TOK 354
#define BVCOMP_TOK 355
#define BOOLEXTRACT_TOK 356
#define BOOL_TO_BV_TOK 357
#define BVEXTRACT_TOK 358

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 69 "smtlib.y" /* yacc.c:355  */
  
  // FIXME: Why is this not an UNSIGNED int?
  int uintval;                  /* for numerals in types. */

  // for BV32 BVCONST 
  unsigned long long ullval;

  struct {
    //stores the indexwidth and valuewidth
    //indexwidth is 0 iff type is bitvector. positive iff type is
    //array, and stores the width of the indexing bitvector
    unsigned int indexwidth;
    //width of the bitvector type
    unsigned int valuewidth;
  } indexvaluewidth;

  //ASTNode,ASTVec
  BEEV::ASTNode *node;
  BEEV::ASTVec *vec;
  std::string *str;

#line 409 "smt.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE smtlval;

int smtparse (void* AssertsQuery);

#endif /* !YY_SMT_SMT_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 424 "smt.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   211,   211,   237,   257,   263,   272,   284,   289,   300,
     304,   315,   319,   323,   330,   334,   341,   345,   349,   367,
     370,   376,   384,   387,   390,   394,   400,   409,   414,   420,
     429,   441,   450,   461,   467,   473,   477,   485,   512,   520,
     528,   536,   544,   552,   560,   568,   576,   580,   585,   591,
     598,   603,   608,   614,   620,   630,   650,   665,   674,   685,
     690,   695,   702,   703,   708,   715,   728,   742,   758,   766,
     774,   782,   790,   798,   806,   814,   833,   848,   856,   865,
     874,   883,   892,   901,   909,   917,   925,   933,   942,   951,
     960,   991,  1022,  1038,  1046,  1063,  1078,  1099,  1104,  1109,
    1116,  1120
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERAL_TOK", "BVCONST_TOK",
  "BITCONST_TOK", "FORMID_TOK", "TERMID_TOK", "STRING_TOK", "USER_VAL_TOK",
  "SOURCE_TOK", "CATEGORY_TOK", "DIFFICULTY_TOK", "BITVEC_TOK",
  "ARRAY_TOK", "SELECT_TOK", "STORE_TOK", "TRUE_TOK", "FALSE_TOK",
  "NOT_TOK", "IMPLIES_TOK", "ITE_TOK", "AND_TOK", "OR_TOK", "XOR_TOK",
  "IFF_TOK", "EXISTS_TOK", "FORALL_TOK", "LET_TOK", "FLET_TOK",
  "NOTES_TOK", "CVC_COMMAND_TOK", "SORTS_TOK", "FUNS_TOK", "PREDS_TOK",
  "EXTENSIONS_TOK", "DEFINITION_TOK", "AXIOMS_TOK", "LOGIC_TOK",
  "COLON_TOK", "LBRACKET_TOK", "RBRACKET_TOK", "LPAREN_TOK", "RPAREN_TOK",
  "SAT_TOK", "UNSAT_TOK", "UNKNOWN_TOK", "ASSUMPTION_TOK", "FORMULA_TOK",
  "STATUS_TOK", "BENCHMARK_TOK", "EXTRASORTS_TOK", "EXTRAFUNS_TOK",
  "EXTRAPREDS_TOK", "LANGUAGE_TOK", "DOLLAR_TOK", "QUESTION_TOK",
  "DISTINCT_TOK", "SEMICOLON_TOK", "EOF_TOK", "EQ_TOK", "NAND_TOK",
  "NOR_TOK", "NEQ_TOK", "ASSIGN_TOK", "BV_TOK", "BOOLEAN_TOK",
  "BVLEFTSHIFT_1_TOK", "BVRIGHTSHIFT_1_TOK", "BVARITHRIGHTSHIFT_TOK",
  "BVPLUS_TOK", "BVSUB_TOK", "BVNOT_TOK", "BVMULT_TOK", "BVDIV_TOK",
  "SBVDIV_TOK", "BVMOD_TOK", "SBVREM_TOK", "SBVMOD_TOK", "BVNEG_TOK",
  "BVAND_TOK", "BVOR_TOK", "BVXOR_TOK", "BVNAND_TOK", "BVNOR_TOK",
  "BVXNOR_TOK", "BVCONCAT_TOK", "BVLT_TOK", "BVGT_TOK", "BVLE_TOK",
  "BVGE_TOK", "BVSLT_TOK", "BVSGT_TOK", "BVSLE_TOK", "BVSGE_TOK",
  "BVSX_TOK", "BVZX_TOK", "BVROTATE_RIGHT_TOK", "BVROTATE_LEFT_TOK",
  "BVREPEAT_TOK", "BVCOMP_TOK", "BOOLEXTRACT_TOK", "BOOL_TO_BV_TOK",
  "BVEXTRACT_TOK", "$accept", "cmd", "benchmark", "bench_name",
  "bench_attributes", "bench_attribute", "logic_name", "status",
  "annotation", "user_value", "attribute", "sort_symbs", "var_decls",
  "var_decl", "an_formulas", "an_formula", "letexpr_mgmt", "an_terms",
  "an_term", "an_nonbvconst_term", "sort_symb", "var", "fvar", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358
};
# endif

#define YYPACT_NINF -55

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-55)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,   -26,    23,   -55,    19,   -55,   -55,   -11,   229,   -30,
     -55,   -55,    20,   -55,   -55,   -55,    24,   196,   196,   -34,
      -9,    -7,   -55,   -55,   -55,   -55,    17,   -55,   -55,   -55,
     -55,   337,    52,   -55,   196,   -55,   -55,   -55,   -55,   -55,
     -55,    18,    18,    56,   196,   196,   196,   196,   196,   196,
     196,    22,    34,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,    35,   -55,    36,    59,   -25,   -55,   -23,
      21,    37,   196,   196,    80,   -55,   127,   196,   196,    10,
      26,    42,   -55,   -55,   -55,   250,   250,   196,   250,    70,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
      43,    44,    45,    47,    48,   250,    49,   150,   -55,   -55,
     -55,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     -55,   -55,    13,   -55,   -55,   -55,   -55,   -55,    50,   196,
     -55,   -55,   -55,    61,    68,    84,    85,    89,   250,   250,
     250,    76,   -55,   250,   250,   250,   250,   250,   -55,   250,
     250,   250,   250,   250,   250,   -55,   250,   250,   250,   250,
     250,   250,   250,   122,   123,   124,   125,   126,   250,   128,
     -55,   -55,    87,    93,    95,    96,    97,    98,    99,   100,
     115,    92,   119,   -55,   117,     8,   -55,   118,   -55,   -55,
     250,   196,   121,   -55,   250,   250,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   131,   132,   133,   137,   142,
     -55,   129,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   160,   161,   -55,   -55,   -55,   141,   143,   -55,   -55,
     -55,   250,   250,   250,   250,   250,   164,   144,   148,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   147,   -55,   186,   250,
     153,   -55,   -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     4,     0,     0,     0,
       5,    13,    19,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     3,     6,    21,    20,    15,    10,   101,    33,
      34,     0,     0,     7,     0,    35,     8,    16,    17,    18,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,    59,    62,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    61,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    54,     0,    11,    28,    12,    14,    47,     0,     0,
      50,    32,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,    25,    48,     0,    52,    53,
       0,     0,     0,    65,     0,     0,    64,    87,    88,    89,
      78,    77,    79,    80,    82,    81,    83,    84,    72,    73,
      74,    85,    86,    75,    69,     0,     0,     0,     0,     0,
      76,     0,    36,    42,    44,    43,    45,    38,    40,    39,
      41,     0,     0,    29,    26,    49,     0,     0,    60,    66,
      68,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    93,    94,    91,    90,    92,     0,    95,     0,     0,
       0,    67,    96
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,   -55,   -55,   -55,   182,   -55,   -55,   -55,   -55,
     -55,   -55,   154,   -53,   155,   103,   -55,   -55,   -54,   -55,
       0,   -55,   -55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     9,    10,    27,    40,    11,    25,
      12,   194,    67,    68,    74,    75,    34,   117,   118,   119,
     195,   120,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     121,   122,   123,   124,   125,   126,   127,   128,   129,     8,
      37,    38,    39,    22,   134,     1,   134,    66,   133,    66,
     135,   191,   192,     5,     4,     6,   191,   192,     8,    24,
      26,   148,   149,    41,   151,    42,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   193,    43,    64,    70,
      66,   178,   136,   181,    79,   132,   145,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    80,   152,   130,   131,
     137,   146,   147,   173,   174,   175,    28,   176,   177,   179,
     200,   201,   202,   196,   203,   204,   205,    29,    30,   207,
     208,   209,   210,   211,   198,   212,   213,   214,   215,   216,
     217,   199,   218,   219,   220,   221,   222,   223,   224,   206,
      33,    36,    31,   140,   230,   225,   226,   227,   228,   229,
     232,   231,   241,    28,    63,    32,   233,    65,   234,   235,
     236,   237,   238,   239,    29,    30,   246,    71,    72,    73,
     249,   250,    77,    78,    81,    82,    83,    84,   240,   242,
     243,   245,   248,   257,   258,    85,    86,   266,   256,    31,
     142,    87,   251,   252,   253,   138,   139,   141,   254,   141,
     143,   144,    32,   255,   259,   267,   260,   268,   269,   270,
     150,    23,    88,   180,   272,   244,    69,   261,   262,   263,
     264,   265,    28,    76,     0,     0,    89,     0,     0,     0,
       0,     0,     0,    29,    30,   271,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,     0,    31,    13,
      14,    15,   197,     0,     0,   110,   111,   112,   113,   114,
     115,    32,     0,   116,    81,    82,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    85,    86,    16,     0,     0,
       0,    87,     0,     0,     0,     0,    17,    18,    19,     0,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,     0,     0,     0,
       0,     0,     0,    28,     0,   110,   111,   112,   113,   114,
     115,     0,     0,   116,    29,    30,    44,    45,    46,    47,
      48,    49,    50,     0,     0,    51,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,    53,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62
};

static const yytype_int16 yycheck[] =
{
      54,    55,    56,    57,    58,    59,    60,    61,    62,    39,
      44,    45,    46,    43,    67,    42,    69,    42,    43,    42,
      43,    13,    14,     0,    50,     6,    13,    14,    39,     9,
       6,    85,    86,    42,    88,    42,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    43,    40,     6,     3,
      42,   115,    41,   117,    42,     6,    56,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    42,     7,    43,    43,
      43,    55,    40,    40,    40,    40,     6,    40,    40,    40,
       6,     6,     3,    43,   148,   149,   150,    17,    18,   153,
     154,   155,   156,   157,    43,   159,   160,   161,   162,   163,
     164,    43,   166,   167,   168,   169,   170,   171,   172,    43,
      17,    18,    42,    43,   178,     3,     3,     3,     3,     3,
      43,     3,    40,     6,    31,    55,    43,    34,    43,    43,
      43,    43,    43,    43,    17,    18,   200,    44,    45,    46,
     204,   205,    49,    50,     4,     5,     6,     7,    43,    40,
      43,    43,    41,     3,     3,    15,    16,     3,    39,    42,
      43,    21,    41,    41,    41,    72,    73,    74,    41,    76,
      77,    78,    55,    41,    43,    41,    43,    39,    41,     3,
      87,     9,    42,    43,    41,   195,    42,   251,   252,   253,
     254,   255,     6,    48,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,   269,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    42,    10,
      11,    12,   139,    -1,    -1,    95,    96,    97,    98,    99,
     100,    55,    -1,   103,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    38,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    95,    96,    97,    98,    99,
     100,    -1,    -1,   103,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      93,    94
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,   105,   106,    50,     0,     6,   107,    39,   108,
     109,   112,   114,    10,    11,    12,    38,    47,    48,    49,
      52,    53,    43,   109,     9,   113,     6,   110,     6,    17,
      18,    42,    55,   119,   120,   126,   119,    44,    45,    46,
     111,    42,    42,    40,    19,    20,    21,    22,    23,    24,
      25,    28,    29,    57,    60,    87,    88,    89,    90,    91,
      92,    93,    94,   119,     6,   119,    42,   116,   117,   116,
       3,   119,   119,   119,   118,   119,   118,   119,   119,    42,
      42,     4,     5,     6,     7,    15,    16,    21,    42,    56,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      95,    96,    97,    98,    99,   100,   103,   121,   122,   123,
     125,   122,   122,   122,   122,   122,   122,   122,   122,   122,
      43,    43,     6,    43,   117,    43,    41,    43,   119,   119,
      43,   119,    43,   119,   119,    56,    55,    40,   122,   122,
     119,   122,     7,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,    40,    40,    40,    40,    40,   122,    40,
      43,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,    13,    14,    43,   115,   124,    43,   119,    43,    43,
       6,     6,     3,   122,   122,   122,    43,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,     3,     3,     3,     3,     3,
     122,     3,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    40,    40,    43,   124,    43,   122,   119,    41,   122,
     122,    41,    41,    41,    41,    41,    39,     3,     3,    43,
      43,   122,   122,   122,   122,   122,     3,    41,    39,    41,
       3,   122,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   111,   111,   112,
     112,   113,   114,   114,   114,   115,   115,   116,   116,   117,
     117,   118,   118,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   121,   121,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   124,   124,   125,   125,   125,
     126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,     1,     1,     2,     3,     3,     3,
       3,     5,     5,     1,     4,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     4,
       3,     1,     2,     1,     1,     1,     5,     4,     5,     5,
       5,     5,     5,     5,     5,     5,     3,     4,     5,     6,
       4,     4,     5,     5,     3,     7,     7,     1,     2,     1,
       4,     1,     1,     1,     3,     3,     4,     7,     4,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     5,     5,     5,     5,     4,     6,     1,     1,     2,
       2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (AssertsQuery, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, AssertsQuery); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void* AssertsQuery)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (AssertsQuery);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void* AssertsQuery)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, AssertsQuery);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, void* AssertsQuery)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , AssertsQuery);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, AssertsQuery); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void* AssertsQuery)
{
  YYUSE (yyvaluep);
  YYUSE (AssertsQuery);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void* AssertsQuery)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 212 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode assumptions;
  if((yyvsp[0].node) == NULL) 
    {
      assumptions = parserInterface->CreateNode(TRUE);
    } 
  else 
    {
      assumptions = *(yyvsp[0].node);
    }
      
  if(query.IsNull()) 
    {
      query = parserInterface->CreateNode(FALSE);
    }

  ((ASTVec*)AssertsQuery)->push_back(assumptions);
  ((ASTVec*)AssertsQuery)->push_back(query);
  delete (yyvsp[0].node);
  parserInterface->letMgr.cleanupParserSymbolTable();
  YYACCEPT;
}
#line 1758 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 238 "smtlib.y" /* yacc.c:1646  */
    {
  if((yyvsp[-1].vec) != NULL){
    if((yyvsp[-1].vec)->size() > 1) 
      (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(AND,*(yyvsp[-1].vec)));
    else
      (yyval.node) = new ASTNode((*(yyvsp[-1].vec))[0]);         
    delete (yyvsp[-1].vec);
  }
  else {
    (yyval.node) = NULL;
  }
  delete (yyvsp[-2].node); //discard the benchmarkname.
}
#line 1776 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 258 "smtlib.y" /* yacc.c:1646  */
    {
}
#line 1783 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 264 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec;
  if ((yyvsp[0].node) != NULL) {
    (yyval.vec)->push_back(*(yyvsp[0].node));
    parserInterface->AddAssert(*(yyvsp[0].node));
    delete (yyvsp[0].node);
  }
}
#line 1796 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 273 "smtlib.y" /* yacc.c:1646  */
    {
  if ((yyvsp[-1].vec) != NULL && (yyvsp[0].node) != NULL) {
    (yyvsp[-1].vec)->push_back(*(yyvsp[0].node));
    parserInterface->AddAssert(*(yyvsp[0].node));
    (yyval.vec) = (yyvsp[-1].vec);
    delete (yyvsp[0].node);
  }
}
#line 1809 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 285 "smtlib.y" /* yacc.c:1646  */
    {
  //assumptions are like asserts
  (yyval.node) = (yyvsp[0].node);
}
#line 1818 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 290 "smtlib.y" /* yacc.c:1646  */
    {
  // Previously this would call AddQuery() on the negation.
  // But if multiple formula were (eroneously) present
  // it discarded all but the last formula. Allowing multiple 
  // formula and taking the conjunction of them along with all
  // the assumptions is what the other solvers do.  

  //assumptions are like asserts
  (yyval.node) = (yyvsp[0].node);
}
#line 1833 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 301 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = NULL;
}
#line 1841 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 305 "smtlib.y" /* yacc.c:1646  */
    {
  if (!(0 == strcmp((yyvsp[0].node)->GetName(),"QF_UFBV")  ||
        0 == strcmp((yyvsp[0].node)->GetName(),"QF_BV") ||
        //0 == strcmp($3->GetName(),"QF_UF") ||
        0 == strcmp((yyvsp[0].node)->GetName(),"QF_AUFBV"))) {
    yyerror("Wrong input logic:");
  }
  delete (yyvsp[0].node);
  (yyval.node) = NULL;
}
#line 1856 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 316 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = NULL;
}
#line 1864 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 320 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = NULL;
}
#line 1872 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 324 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = NULL;
}
#line 1880 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 331 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-3].node);
}
#line 1888 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 335 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[0].node);
}
#line 1896 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 341 "smtlib.y" /* yacc.c:1646  */
    { 
  input_status = TO_BE_SATISFIABLE; 
  (yyval.node) = NULL; 
}
#line 1905 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 345 "smtlib.y" /* yacc.c:1646  */
    { 
  input_status = TO_BE_UNSATISFIABLE; 
  (yyval.node) = NULL; 
  }
#line 1914 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 350 "smtlib.y" /* yacc.c:1646  */
    { 
  input_status = TO_BE_UNKNOWN; 
  (yyval.node) = NULL; 
}
#line 1923 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 368 "smtlib.y" /* yacc.c:1646  */
    {
}
#line 1930 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 371 "smtlib.y" /* yacc.c:1646  */
    {
}
#line 1937 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 377 "smtlib.y" /* yacc.c:1646  */
    {
  //cerr << "Printing user_value: " << *$1 << endl;
  delete (yyvsp[0].str);
}
#line 1946 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 385 "smtlib.y" /* yacc.c:1646  */
    {
}
#line 1953 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 388 "smtlib.y" /* yacc.c:1646  */
    {
}
#line 1960 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 395 "smtlib.y" /* yacc.c:1646  */
    {
  //a single sort symbol here means either a BitVec or a Boolean
  (yyval.indexvaluewidth).indexwidth = (yyvsp[0].indexvaluewidth).indexwidth;
  (yyval.indexvaluewidth).valuewidth = (yyvsp[0].indexvaluewidth).valuewidth;
}
#line 1970 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 401 "smtlib.y" /* yacc.c:1646  */
    {
  //two sort symbols mean f: type --> type
  (yyval.indexvaluewidth).indexwidth = (yyvsp[-1].indexvaluewidth).valuewidth;
  (yyval.indexvaluewidth).valuewidth = (yyvsp[0].indexvaluewidth).valuewidth;
}
#line 1980 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 410 "smtlib.y" /* yacc.c:1646  */
    {
}
#line 1987 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 415 "smtlib.y" /* yacc.c:1646  */
    {
}
#line 1994 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 421 "smtlib.y" /* yacc.c:1646  */
    {
  parserInterface->letMgr._parser_symbol_table.insert(*(yyvsp[-2].node));
  //Sort_symbs has the indexwidth/valuewidth. Set those fields in
  //var
  (yyvsp[-2].node)->SetIndexWidth((yyvsp[-1].indexvaluewidth).indexwidth);
  (yyvsp[-2].node)->SetValueWidth((yyvsp[-1].indexvaluewidth).valuewidth);
  delete (yyvsp[-2].node);
}
#line 2007 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 430 "smtlib.y" /* yacc.c:1646  */
    {
  parserInterface->letMgr._parser_symbol_table.insert(*(yyvsp[-1].node));
  //Sort_symbs has the indexwidth/valuewidth. Set those fields in
  //var
  (yyvsp[-1].node)->SetIndexWidth(0);
  (yyvsp[-1].node)->SetValueWidth(0);
  delete (yyvsp[-1].node);
}
#line 2020 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 442 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec;
  if ((yyvsp[0].node) != NULL) {
    (yyval.vec)->push_back(*(yyvsp[0].node));
    delete (yyvsp[0].node);
  }
}
#line 2032 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 451 "smtlib.y" /* yacc.c:1646  */
    {
  if ((yyvsp[-1].vec) != NULL && (yyvsp[0].node) != NULL) {
    (yyvsp[-1].vec)->push_back(*(yyvsp[0].node));
    (yyval.vec) = (yyvsp[-1].vec);
    delete (yyvsp[0].node);
  }
}
#line 2044 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 462 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->CreateNode(TRUE)); 
  assert(0 == (yyval.node)->GetIndexWidth()); 
  assert(0 == (yyval.node)->GetValueWidth());
}
#line 2054 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 468 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->CreateNode(FALSE)); 
  assert(0 == (yyval.node)->GetIndexWidth()); 
  assert(0 == (yyval.node)->GetValueWidth());
}
#line 2064 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 474 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[0].node);
}
#line 2072 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 479 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(EQ,*(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2083 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 486 "smtlib.y" /* yacc.c:1646  */
    {
  using namespace BEEV;

  ASTVec terms = *(yyvsp[-1].vec);
  ASTVec forms;

  for(ASTVec::const_iterator it=terms.begin(),itend=terms.end();
      it!=itend; it++) {
    for(ASTVec::const_iterator it2=it+1; it2!=itend; it2++) {
      ASTNode n = (parserInterface->nf->CreateNode(NOT, parserInterface->nf->CreateNode(EQ, *it, *it2)));

          
      forms.push_back(n); 
    }
  }

  if(forms.size() == 0) 
    FatalError("empty distinct");
 
  (yyval.node) = (forms.size() == 1) ?
    new ASTNode(forms[0]) :
    new ASTNode(parserInterface->nf->CreateNode(AND, forms));

  delete (yyvsp[-1].vec);
}
#line 2113 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 514 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSLT, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2124 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 522 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSLE, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2135 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 530 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSGT, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2146 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 538 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSGE, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2157 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 546 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVLT, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2168 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 554 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVLE, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2179 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 562 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVGT, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2190 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 570 "smtlib.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVGE, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2201 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 577 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-1].node);
}
#line 2209 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 581 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(NOT, *(yyvsp[-1].node)));
  delete (yyvsp[-1].node);
}
#line 2218 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 586 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(IMPLIES, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
}
#line 2228 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 592 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(ITE, *(yyvsp[-3].node), *(yyvsp[-2].node), *(yyvsp[-1].node)));
  delete (yyvsp[-3].node);
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
}
#line 2239 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 599 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(AND, *(yyvsp[-1].vec)));
  delete (yyvsp[-1].vec);
}
#line 2248 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 604 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(OR, *(yyvsp[-1].vec)));
  delete (yyvsp[-1].vec);
}
#line 2257 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 609 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(XOR, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
}
#line 2267 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 615 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(IFF, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
}
#line 2277 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 622 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-1].node);
  //Cleanup the LetIDToExprMap
  parserInterface->letMgr.CleanupLetIDMap();                      
}
#line 2287 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 631 "smtlib.y" /* yacc.c:1646  */
    {
      
  //set the valuewidth of the identifier
  (yyvsp[-2].node)->SetValueWidth((yyvsp[-1].node)->GetValueWidth());
  (yyvsp[-2].node)->SetIndexWidth((yyvsp[-1].node)->GetIndexWidth());
      
  //populate the hashtable from LET-var -->
  //LET-exprs and then process them:
  //
  //1. ensure that LET variables do not clash
  //1. with declared variables.
  //
  //2. Ensure that LET variables are not
  //2. defined more than once
  parserInterface->letMgr.LetExprMgr(*(yyvsp[-2].node),*(yyvsp[-1].node));
  
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2311 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 651 "smtlib.y" /* yacc.c:1646  */
    {
  //Expr must typecheck
     
  //set the valuewidth of the identifier
  (yyvsp[-2].node)->SetValueWidth((yyvsp[-1].node)->GetValueWidth());
  (yyvsp[-2].node)->SetIndexWidth((yyvsp[-1].node)->GetIndexWidth());
     
  //Do LET-expr management
  parserInterface->letMgr.LetExprMgr(*(yyvsp[-2].node),*(yyvsp[-1].node));
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);     
}
#line 2328 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 666 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec;
  if ((yyvsp[0].node) != NULL) {
    (yyval.vec)->push_back(*(yyvsp[0].node));
    delete (yyvsp[0].node);
  }
}
#line 2340 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 675 "smtlib.y" /* yacc.c:1646  */
    {
  if ((yyvsp[-1].vec) != NULL && (yyvsp[0].node) != NULL) {
    (yyvsp[-1].vec)->push_back(*(yyvsp[0].node));
    (yyval.vec) = (yyvsp[-1].vec);
    delete (yyvsp[0].node);
  }
}
#line 2352 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 686 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->CreateBVConst((yyvsp[0].str), 10, 32));
  delete (yyvsp[0].str);
}
#line 2361 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 691 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->CreateBVConst((yyvsp[-3].str),10,(yyvsp[-1].uintval)));
  delete (yyvsp[-3].str);
}
#line 2370 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 696 "smtlib.y" /* yacc.c:1646  */
    {
(yyval.node) = (yyvsp[0].node);
}
#line 2378 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 702 "smtlib.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2384 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 704 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[0].node)));
  delete (yyvsp[0].node);
}
#line 2393 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 710 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-1].node);
  //$$ = new ASTNode(parserInterface->SimplifyTerm(*$2));
  //delete $2;
}
#line 2403 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 716 "smtlib.y" /* yacc.c:1646  */
    {
  //ARRAY READ
  // valuewidth is same as array, indexwidth is 0.
  ASTNode array = *(yyvsp[-1].node);
  ASTNode index = *(yyvsp[0].node);
  unsigned int width = array.GetValueWidth();
  ASTNode * n = 
    new ASTNode(parserInterface->nf->CreateTerm(READ, width, array, index));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2420 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 729 "smtlib.y" /* yacc.c:1646  */
    {
  //ARRAY WRITE
  unsigned int width = (yyvsp[0].node)->GetValueWidth();
  ASTNode array = *(yyvsp[-2].node);
  ASTNode index = *(yyvsp[-1].node);
  ASTNode writeval = *(yyvsp[0].node);
  ASTNode write_term = parserInterface->nf->CreateArrayTerm(WRITE,(yyvsp[-2].node)->GetIndexWidth(),width,array,index,writeval);
  ASTNode * n = new ASTNode(write_term);
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2438 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 743 "smtlib.y" /* yacc.c:1646  */
    {
  int width = (yyvsp[-4].uintval) - (yyvsp[-2].uintval) + 1;
  if (width < 0)
    yyerror("Negative width in extract");
      
  if((unsigned)(yyvsp[-4].uintval) >= (yyvsp[0].node)->GetValueWidth())
    yyerror("Parsing: Wrong width in BVEXTRACT\n");                      
      
  ASTNode hi  =  parserInterface->CreateBVConst(32, (yyvsp[-4].uintval));
  ASTNode low =  parserInterface->CreateBVConst(32, (yyvsp[-2].uintval));
  ASTNode output = parserInterface->nf->CreateTerm(BVEXTRACT, width, *(yyvsp[0].node),hi,low);
  ASTNode * n = new ASTNode(output);
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2458 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 759 "smtlib.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  (yyval.node) = new ASTNode(parserInterface->nf->CreateArrayTerm(ITE,(yyvsp[0].node)->GetIndexWidth(), width,*(yyvsp[-2].node), *(yyvsp[-1].node), *(yyvsp[0].node)));      
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2470 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 767 "smtlib.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth() + (yyvsp[0].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2482 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 775 "smtlib.y" /* yacc.c:1646  */
    {
  //this is the BVNEG (term) in the CVCL language
  unsigned int width = (yyvsp[0].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNEG, width, *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2494 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 783 "smtlib.y" /* yacc.c:1646  */
    {
  //this is the BVUMINUS term in CVCL langauge
  unsigned width = (yyvsp[0].node)->GetValueWidth();
  ASTNode * n =  new ASTNode(parserInterface->nf->CreateTerm(BVUMINUS,width,*(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2506 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 791 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVAND, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2518 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 799 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVOR, width, *(yyvsp[-1].node), *(yyvsp[0].node))); 
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2530 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 807 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVXOR, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2542 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 815 "smtlib.y" /* yacc.c:1646  */
    {
//   (bvxnor s t) abbreviates (bvor (bvand s t) (bvand (bvnot s) (bvnot t)))

	
      unsigned int width = (yyvsp[-1].node)->GetValueWidth();
      ASTNode * n = new ASTNode(
      parserInterface->nf->CreateTerm( BVOR, width,
     parserInterface->nf->CreateTerm(BVAND, width, *(yyvsp[-1].node), *(yyvsp[0].node)),
     parserInterface->nf->CreateTerm(BVAND, width,
	     parserInterface->nf->CreateTerm(BVNEG, width, *(yyvsp[-1].node)),
     	 parserInterface->nf->CreateTerm(BVNEG, width, *(yyvsp[0].node))
     )));

      (yyval.node) = n;
      delete (yyvsp[-1].node);
      delete (yyvsp[0].node);
  
  }
#line 2565 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 834 "smtlib.y" /* yacc.c:1646  */
    {
	

  	ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(ITE, 1, 
  	parserInterface->nf->CreateNode(EQ, *(yyvsp[-1].node), *(yyvsp[0].node)),
  	parserInterface->CreateOneConst(1),
  	parserInterface->CreateZeroConst(1)));
  	
      (yyval.node) = n;
      delete (yyvsp[-1].node);
      delete (yyvsp[0].node);
  }
#line 2582 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 849 "smtlib.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVSUB, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2594 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 857 "smtlib.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVPLUS, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);

}
#line 2607 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 866 "smtlib.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVMULT, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2619 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 875 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVDIV, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;

  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2632 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 884 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVMOD, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;

  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2645 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 893 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVDIV, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;

  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2658 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 902 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVREM, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2670 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 910 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVMOD, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2682 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 918 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNEG, width, parserInterface->nf->CreateTerm(BVAND, width, *(yyvsp[-1].node), *(yyvsp[0].node))));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2694 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 926 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNEG, width, parserInterface->nf->CreateTerm(BVOR, width, *(yyvsp[-1].node), *(yyvsp[0].node)))); 
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2706 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 934 "smtlib.y" /* yacc.c:1646  */
    {
  // shifting left by who know how much?
  unsigned int w = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVLEFTSHIFT,w,*(yyvsp[-1].node),*(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2719 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 943 "smtlib.y" /* yacc.c:1646  */
    {
  // shifting right by who know how much?
  unsigned int w = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVRIGHTSHIFT,w,*(yyvsp[-1].node),*(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2732 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 952 "smtlib.y" /* yacc.c:1646  */
    {
  // shifting arithmetic right by who know how much?
  unsigned int w = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVSRSHIFT,w,*(yyvsp[-1].node),*(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2745 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 961 "smtlib.y" /* yacc.c:1646  */
    {
      
  ASTNode *n;
  unsigned width = (yyvsp[0].node)->GetValueWidth();
  unsigned rotate = (yyvsp[-2].uintval);
  if (0 == rotate)
    {
      n = (yyvsp[0].node);
    }
  else if (rotate < width)
    {
      ASTNode high = parserInterface->CreateBVConst(32,width-1);
      ASTNode zero = parserInterface->CreateBVConst(32,0);
      ASTNode cut = parserInterface->CreateBVConst(32,width-rotate);
      ASTNode cutMinusOne = parserInterface->CreateBVConst(32,width-rotate-1);

      ASTNode top =  parserInterface->nf->CreateTerm(BVEXTRACT,rotate,*(yyvsp[0].node),high, cut);
      ASTNode bottom =  parserInterface->nf->CreateTerm(BVEXTRACT,width-rotate,*(yyvsp[0].node),cutMinusOne,zero);
      n =  new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT,width,bottom,top));
      delete (yyvsp[0].node);
    }
  else
    {
      n = NULL; // remove gcc warning.
      yyerror("Rotate must be strictly less than the width.");
    }
      
  (yyval.node) = n;
      
}
#line 2780 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 992 "smtlib.y" /* yacc.c:1646  */
    {
      
  ASTNode *n;
  unsigned width = (yyvsp[0].node)->GetValueWidth();
  unsigned rotate = (yyvsp[-2].uintval);
  if (0 == rotate)
    {
      n = (yyvsp[0].node);
    }
  else if (rotate < width)
    {
      ASTNode high = parserInterface->CreateBVConst(32,width-1);
      ASTNode zero = parserInterface->CreateBVConst(32,0);
      ASTNode cut = parserInterface->CreateBVConst(32,rotate); 
      ASTNode cutMinusOne = parserInterface->CreateBVConst(32,rotate-1);

      ASTNode bottom =  parserInterface->nf->CreateTerm(BVEXTRACT,rotate,*(yyvsp[0].node),cutMinusOne, zero);
      ASTNode top =  parserInterface->nf->CreateTerm(BVEXTRACT,width-rotate,*(yyvsp[0].node),high,cut);
      n =  new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT,width,bottom,top));
      delete (yyvsp[0].node);
    }
  else
    {
      n = NULL; // remove gcc warning.
      yyerror("Rotate must be strictly less than the width.");
    }
      
  (yyval.node) = n;
      
}
#line 2815 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1023 "smtlib.y" /* yacc.c:1646  */
    {
	  unsigned count = (yyvsp[-2].uintval);
	  if (count < 1)
	  	FatalError("One or more repeats please");

	  unsigned w = (yyvsp[0].node)->GetValueWidth();  
      ASTNode n =  *(yyvsp[0].node);
      
      for (unsigned i =1; i < count; i++)
      {
      	  n = parserInterface->nf->CreateTerm(BVCONCAT,w*(i+1),n,*(yyvsp[0].node));
      }
       delete (yyvsp[0].node);
      (yyval.node) = new ASTNode(n);
    }
#line 2835 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1039 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned w = (yyvsp[0].node)->GetValueWidth() + (yyvsp[-2].uintval);
  ASTNode width = parserInterface->CreateBVConst(32,w);
  ASTNode *n =  new ASTNode(parserInterface->nf->CreateTerm(BVSX,w,*(yyvsp[0].node),width));
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2847 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1047 "smtlib.y" /* yacc.c:1646  */
    {
  if (0 != (yyvsp[-2].uintval))
    {
      unsigned w = (yyvsp[0].node)->GetValueWidth() + (yyvsp[-2].uintval);
      ASTNode leading_zeroes = parserInterface->CreateZeroConst((yyvsp[-2].uintval));
      ASTNode *n =  new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT,w,leading_zeroes,*(yyvsp[0].node)));
      (yyval.node) = n;
      delete (yyvsp[0].node);
    }
  else
    (yyval.node) = (yyvsp[0].node);

}
#line 2865 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1064 "smtlib.y" /* yacc.c:1646  */
    {
  // Just return BV width.  If sort is BOOL, width is 0.
  // Otherwise, BITVEC[w] returns w. 
  //
  //((indexwidth is 0) && (valuewidth>0)) iff type is BV
  (yyval.indexvaluewidth).indexwidth = 0;
  unsigned int length = (yyvsp[-1].uintval);
  if(length > 0) {
    (yyval.indexvaluewidth).valuewidth = length;
  }
  else {
    FatalError("Fatal Error: parsing: BITVECTORS must be of positive length: \n");
  }
}
#line 2884 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1079 "smtlib.y" /* yacc.c:1646  */
    {
  unsigned int index_len = (yyvsp[-3].uintval);
  unsigned int value_len = (yyvsp[-1].uintval);
  if(index_len > 0) {
    (yyval.indexvaluewidth).indexwidth = (yyvsp[-3].uintval);
  }
  else {
    FatalError("Fatal Error: parsing: BITVECTORS must be of positive length: \n");
  }

  if(value_len > 0) {
    (yyval.indexvaluewidth).valuewidth = (yyvsp[-1].uintval);
  }
  else {
    FatalError("Fatal Error: parsing: BITVECTORS must be of positive length: \n");
  }
}
#line 2906 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1100 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[0].node))); 
  delete (yyvsp[0].node);      
}
#line 2915 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1105 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[0].node)));
  delete (yyvsp[0].node);
}
#line 2924 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1110 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[0].node);
}
#line 2932 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1117 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[0].node); 
}
#line 2940 "smt.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1121 "smtlib.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[0].node))); 
  delete (yyvsp[0].node);      
}
#line 2949 "smt.tab.c" /* yacc.c:1646  */
    break;


#line 2953 "smt.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (AssertsQuery, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (AssertsQuery, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, AssertsQuery);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, AssertsQuery);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (AssertsQuery, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, AssertsQuery);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, AssertsQuery);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1126 "smtlib.y" /* yacc.c:1906  */

