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
#define yyparse         smt2parse
#define yylex           smt2lex
#define yyerror         smt2error
#define yydebug         smt2debug
#define yynerrs         smt2nerrs

#define yylval          smt2lval
#define yychar          smt2char

/* Copy the first part of user declarations.  */
#line 1 "smtlib2.y" /* yacc.c:339  */

  /********************************************************************
   * AUTHORS:  Trevor Hansen
   *
   * BEGIN DATE: May, 2010
   *
   * This file is modified version of the STP's smtlib.y file. Please
   * see CVCL license below
   ********************************************************************/

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
  
  extern char* smt2text;
  extern int smt2lineno;
  extern int smt2lex(void);

  int yyerror(const char *s) {
    cout << "syntax error: line " << smt2lineno << "\n" << s << endl;
    cout << "  token: " << smt2text << endl;
    FatalError("");
    return 1;
  }

int yyerror(void* AssertsQuery, const char* s) { return yyerror(s); }

  ASTNode querysmt2;
  ASTVec assertionsSMT2;
  vector<string> commands;
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 104857600
#define YYERROR_VERBOSE 1
#define YY_EXIT_FAILURE -1
  

#line 153 "smt2.tab.c" /* yacc.c:339  */

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
   by #include "smt2.tab.h".  */
#ifndef YY_SMT2_SMT2_TAB_H_INCLUDED
# define YY_SMT2_SMT2_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int smt2debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    NUMERAL_TOK = 258,
    BVCONST_DECIMAL_TOK = 259,
    BVCONST_BINARY_TOK = 260,
    BVCONST_HEXIDECIMAL_TOK = 261,
    DECIMAL_TOK = 262,
    FORMID_TOK = 263,
    TERMID_TOK = 264,
    STRING_TOK = 265,
    SOURCE_TOK = 266,
    CATEGORY_TOK = 267,
    DIFFICULTY_TOK = 268,
    VERSION_TOK = 269,
    STATUS_TOK = 270,
    UNDERSCORE_TOK = 271,
    LPAREN_TOK = 272,
    RPAREN_TOK = 273,
    SAT_TOK = 274,
    UNSAT_TOK = 275,
    UNKNOWN_TOK = 276,
    BVLEFTSHIFT_1_TOK = 277,
    BVRIGHTSHIFT_1_TOK = 278,
    BVARITHRIGHTSHIFT_TOK = 279,
    BVPLUS_TOK = 280,
    BVSUB_TOK = 281,
    BVNOT_TOK = 282,
    BVMULT_TOK = 283,
    BVDIV_TOK = 284,
    SBVDIV_TOK = 285,
    BVMOD_TOK = 286,
    SBVREM_TOK = 287,
    SBVMOD_TOK = 288,
    BVNEG_TOK = 289,
    BVAND_TOK = 290,
    BVOR_TOK = 291,
    BVXOR_TOK = 292,
    BVNAND_TOK = 293,
    BVNOR_TOK = 294,
    BVXNOR_TOK = 295,
    BVCONCAT_TOK = 296,
    BVLT_TOK = 297,
    BVGT_TOK = 298,
    BVLE_TOK = 299,
    BVGE_TOK = 300,
    BVSLT_TOK = 301,
    BVSGT_TOK = 302,
    BVSLE_TOK = 303,
    BVSGE_TOK = 304,
    BVSX_TOK = 305,
    BVEXTRACT_TOK = 306,
    BVZX_TOK = 307,
    BVROTATE_RIGHT_TOK = 308,
    BVROTATE_LEFT_TOK = 309,
    BVREPEAT_TOK = 310,
    BVCOMP_TOK = 311,
    BITVEC_TOK = 312,
    ARRAY_TOK = 313,
    BOOL_TOK = 314,
    TRUE_TOK = 315,
    FALSE_TOK = 316,
    NOT_TOK = 317,
    AND_TOK = 318,
    OR_TOK = 319,
    XOR_TOK = 320,
    ITE_TOK = 321,
    EQ_TOK = 322,
    IMPLIES_TOK = 323,
    DISTINCT_TOK = 324,
    LET_TOK = 325,
    EXIT_TOK = 326,
    CHECK_SAT_TOK = 327,
    LOGIC_TOK = 328,
    NOTES_TOK = 329,
    DECLARE_FUNCTION_TOK = 330,
    FORMULA_TOK = 331,
    SELECT_TOK = 332,
    STORE_TOK = 333
  };
#endif
/* Tokens.  */
#define END 0
#define NUMERAL_TOK 258
#define BVCONST_DECIMAL_TOK 259
#define BVCONST_BINARY_TOK 260
#define BVCONST_HEXIDECIMAL_TOK 261
#define DECIMAL_TOK 262
#define FORMID_TOK 263
#define TERMID_TOK 264
#define STRING_TOK 265
#define SOURCE_TOK 266
#define CATEGORY_TOK 267
#define DIFFICULTY_TOK 268
#define VERSION_TOK 269
#define STATUS_TOK 270
#define UNDERSCORE_TOK 271
#define LPAREN_TOK 272
#define RPAREN_TOK 273
#define SAT_TOK 274
#define UNSAT_TOK 275
#define UNKNOWN_TOK 276
#define BVLEFTSHIFT_1_TOK 277
#define BVRIGHTSHIFT_1_TOK 278
#define BVARITHRIGHTSHIFT_TOK 279
#define BVPLUS_TOK 280
#define BVSUB_TOK 281
#define BVNOT_TOK 282
#define BVMULT_TOK 283
#define BVDIV_TOK 284
#define SBVDIV_TOK 285
#define BVMOD_TOK 286
#define SBVREM_TOK 287
#define SBVMOD_TOK 288
#define BVNEG_TOK 289
#define BVAND_TOK 290
#define BVOR_TOK 291
#define BVXOR_TOK 292
#define BVNAND_TOK 293
#define BVNOR_TOK 294
#define BVXNOR_TOK 295
#define BVCONCAT_TOK 296
#define BVLT_TOK 297
#define BVGT_TOK 298
#define BVLE_TOK 299
#define BVGE_TOK 300
#define BVSLT_TOK 301
#define BVSGT_TOK 302
#define BVSLE_TOK 303
#define BVSGE_TOK 304
#define BVSX_TOK 305
#define BVEXTRACT_TOK 306
#define BVZX_TOK 307
#define BVROTATE_RIGHT_TOK 308
#define BVROTATE_LEFT_TOK 309
#define BVREPEAT_TOK 310
#define BVCOMP_TOK 311
#define BITVEC_TOK 312
#define ARRAY_TOK 313
#define BOOL_TOK 314
#define TRUE_TOK 315
#define FALSE_TOK 316
#define NOT_TOK 317
#define AND_TOK 318
#define OR_TOK 319
#define XOR_TOK 320
#define ITE_TOK 321
#define EQ_TOK 322
#define IMPLIES_TOK 323
#define DISTINCT_TOK 324
#define LET_TOK 325
#define EXIT_TOK 326
#define CHECK_SAT_TOK 327
#define LOGIC_TOK 328
#define NOTES_TOK 329
#define DECLARE_FUNCTION_TOK 330
#define FORMULA_TOK 331
#define SELECT_TOK 332
#define STORE_TOK 333

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 82 "smtlib2.y" /* yacc.c:355  */
  
  unsigned uintval;                  /* for numerals in types. */
  //ASTNode,ASTVec
  BEEV::ASTNode *node;
  BEEV::ASTVec *vec;
  std::string *str;

#line 359 "smt2.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE smt2lval;

int smt2parse (void* AssertsQuery);

#endif /* !YY_SMT2_SMT2_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 374 "smt2.tab.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   523

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

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
      75,    76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   200,   200,   215,   216,   221,   225,   230,   238,   242,
     244,   248,   250,   252,   260,   264,   268,   276,   278,   280,
     282,   284,   289,   298,   305,   328,   337,   348,   354,   360,
     365,   372,   398,   422,   429,   436,   443,   450,   457,   464,
     471,   478,   482,   487,   493,   500,   505,   510,   516,   522,
     530,   531,   534,   553,   576,   585,   596,   601,   605,   618,
     632,   648,   661,   670,   678,   686,   694,   702,   710,   718,
     726,   742,   753,   761,   770,   778,   787,   796,   805,   813,
     821,   829,   837,   846,   855,   864,   888,   912,   928,   934,
     941
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "NUMERAL_TOK",
  "BVCONST_DECIMAL_TOK", "BVCONST_BINARY_TOK", "BVCONST_HEXIDECIMAL_TOK",
  "DECIMAL_TOK", "FORMID_TOK", "TERMID_TOK", "STRING_TOK", "SOURCE_TOK",
  "CATEGORY_TOK", "DIFFICULTY_TOK", "VERSION_TOK", "STATUS_TOK",
  "UNDERSCORE_TOK", "LPAREN_TOK", "RPAREN_TOK", "SAT_TOK", "UNSAT_TOK",
  "UNKNOWN_TOK", "BVLEFTSHIFT_1_TOK", "BVRIGHTSHIFT_1_TOK",
  "BVARITHRIGHTSHIFT_TOK", "BVPLUS_TOK", "BVSUB_TOK", "BVNOT_TOK",
  "BVMULT_TOK", "BVDIV_TOK", "SBVDIV_TOK", "BVMOD_TOK", "SBVREM_TOK",
  "SBVMOD_TOK", "BVNEG_TOK", "BVAND_TOK", "BVOR_TOK", "BVXOR_TOK",
  "BVNAND_TOK", "BVNOR_TOK", "BVXNOR_TOK", "BVCONCAT_TOK", "BVLT_TOK",
  "BVGT_TOK", "BVLE_TOK", "BVGE_TOK", "BVSLT_TOK", "BVSGT_TOK",
  "BVSLE_TOK", "BVSGE_TOK", "BVSX_TOK", "BVEXTRACT_TOK", "BVZX_TOK",
  "BVROTATE_RIGHT_TOK", "BVROTATE_LEFT_TOK", "BVREPEAT_TOK", "BVCOMP_TOK",
  "BITVEC_TOK", "ARRAY_TOK", "BOOL_TOK", "TRUE_TOK", "FALSE_TOK",
  "NOT_TOK", "AND_TOK", "OR_TOK", "XOR_TOK", "ITE_TOK", "EQ_TOK",
  "IMPLIES_TOK", "DISTINCT_TOK", "LET_TOK", "EXIT_TOK", "CHECK_SAT_TOK",
  "LOGIC_TOK", "NOTES_TOK", "DECLARE_FUNCTION_TOK", "FORMULA_TOK",
  "SELECT_TOK", "STORE_TOK", "$accept", "cmd", "commands", "cmdi",
  "status", "attribute", "var_decl", "an_formulas", "an_formula", "lets",
  "let", "an_terms", "an_term", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

#define YYPACT_NINF -49

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-49)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,   165,    10,    11,    -8,    -3,    -1,     6,   111,    30,
      55,   -49,   -49,   -49,   -49,   -49,    22,   -49,   -49,   -49,
     -49,    34,   128,    24,    28,   -49,    42,   -49,   -49,    29,
     -49,   -49,   -49,   -49,   -49,    33,    40,    46,   -49,    47,
     -49,   387,   387,   387,   387,   387,   387,   387,   387,    55,
      55,    55,    55,    55,    -4,    55,    -4,    43,    49,   -49,
     -49,   -49,   -49,   -11,   -49,   -49,   -49,    65,   445,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
      55,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,    61,    53,   -49,    58,    55,    55,   321,    55,   387,
      55,    60,   226,   -49,    64,   -49,    -9,   -49,    79,   137,
      75,   387,   387,   387,   387,   387,   -49,   387,   387,   387,
     387,   387,   387,   -49,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,    81,    99,   119,   121,   125,
     126,   127,   129,   -49,   -49,   -49,   -49,   132,    55,    55,
     133,   134,   135,   -49,   -49,   -49,   146,   158,    64,    26,
     176,   -49,   191,   193,   194,   196,   197,   199,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   387,   -49,
     387,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     185,    -4,   -49,   -49,   -49,    -4,    55,   -49,   201,   203,
     215,   209,   216,   227,   228,   229,   -49,   -49,   -49,   250,
     251,   252,   253,   217,   387,   254,   387,   387,   387,   387,
     -49,   -49,   -49,   -49,   270,   -49,   387,   -49,   -49,   -49,
     -49,   257,   -49,   259,   261,   221,   276,   262,   263,   -49
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     5,     6,     0,    17,    18,    19,
      20,     0,     0,     0,     0,    29,     0,    27,    28,     0,
       7,    14,    15,    16,    21,     0,     0,     0,    11,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       9,     8,    10,     0,    90,    89,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    41,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    45,    26,    46,     0,     0,     0,
       0,     0,     0,    32,    31,    55,     0,     0,    51,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    57,    82,
      83,    84,    73,    72,    74,    75,    77,    76,    78,    79,
      67,    68,    69,    80,    81,    70,    64,    71,     0,    58,
       0,    37,    39,    38,    40,    33,    35,    34,    36,    47,
       0,     0,    48,    30,    43,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    59,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    49,    22,     0,    62,     0,    61,    86,    85,
      87,     0,    60,     0,     0,     0,     0,     0,     0,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -49,   -49,   279,   -49,   -49,   -49,   -49,   -48,   -10,   117,
     -49,   -49,    86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    34,    22,    24,   102,   103,   167,
     168,   112,   120
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      29,    64,    65,   104,    25,    66,   116,   169,   111,     1,
      11,    12,    67,   107,    16,    14,    58,    15,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    23,   101,
      30,    39,   105,   106,   108,   110,    40,    59,   117,   170,
      25,    60,    89,    31,    32,    33,    27,    28,    61,    26,
     114,    25,    90,    25,    62,    63,    25,   115,    25,   118,
      26,   154,    26,    91,    92,    26,   156,    26,   163,   153,
     142,   166,   171,   218,    41,    42,    43,    44,    45,    46,
      47,    48,   155,   178,   155,   157,   158,    58,   160,   201,
     162,   155,    27,    28,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    27,    28,    27,    28,   202,    27,    28,
      27,    28,    17,    18,    19,    20,    21,    93,    94,    95,
      96,    97,    98,    99,   100,    35,    36,   203,    37,   204,
     109,   118,   113,   205,   206,   207,    38,   208,   210,   211,
     209,   212,   213,   214,   215,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   216,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   172,   173,   174,
     175,   176,   177,   219,   220,   161,   221,   222,   165,   223,
     224,   158,   225,   228,   232,   229,   231,   179,   180,   181,
     182,   183,   235,   184,   185,   186,   187,   188,   189,   233,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    64,    65,   234,   236,    66,     5,     6,     7,     8,
       9,    10,    67,    68,   164,   237,   238,   239,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,   240,   241,
     242,   243,   246,   251,   244,   253,   254,   255,   256,   257,
     258,   259,    89,    13,   226,   217,   227,     0,     0,     0,
       0,     0,    90,     0,     0,     0,     0,   198,     0,     0,
       0,   230,     0,    91,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   247,   248,   249,   250,    64,    65,     0,    25,
      66,     0,   252,     0,     0,     0,     0,   119,   107,     0,
       0,     0,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    41,    42,    43,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,    27,    28,    49,    50,    51,    52,   159,    54,    55,
      56,    57,    64,    65,     0,     0,    66,     0,    91,    92,
       0,     0,     0,    67,    68,     0,     0,     0,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    90,    66,     0,     0,     0,     0,     0,
       0,   119,    68,     0,    91,    92,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92
};

static const yytype_int16 yycheck[] =
{
      10,     5,     6,    51,     8,     9,    17,    16,    56,    17,
       0,     0,    16,    17,     8,    18,    26,    18,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     8,    49,
      18,    17,    52,    53,    54,    55,    18,    18,    59,    58,
       8,    18,    56,    19,    20,    21,    60,    61,    18,    17,
      17,     8,    66,     8,    18,    18,     8,    18,     8,     4,
      17,    18,    17,    77,    78,    17,    18,    17,    18,    18,
      90,    17,     3,    57,    42,    43,    44,    45,    46,    47,
      48,    49,   102,    18,   104,   105,   106,   107,   108,    18,
     110,   111,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    60,    61,    60,    61,    18,    60,    61,
      60,    61,    11,    12,    13,    14,    15,    41,    42,    43,
      44,    45,    46,    47,    48,     7,     8,    18,    10,    18,
      54,     4,    56,    18,    18,    18,    18,    18,   158,   159,
      18,    18,    18,    18,     8,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    18,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    50,    51,    52,
      53,    54,    55,    17,     3,   109,     3,     3,   112,     3,
       3,   211,     3,    18,     3,   215,   216,   121,   122,   123,
     124,   125,     3,   127,   128,   129,   130,   131,   132,    16,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     5,     6,    18,    18,     9,    71,    72,    73,    74,
      75,    76,    16,    17,    18,    18,    18,    18,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    18,    18,
      18,    18,    18,     3,    57,    18,    17,    16,    57,     3,
      18,    18,    56,     4,   198,   168,   200,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,   215,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,   236,   237,   238,   239,     5,     6,    -1,     8,
       9,    -1,   246,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     5,     6,    -1,    -1,     9,    -1,    77,    78,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    66,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    77,    78,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    80,    81,    82,    71,    72,    73,    74,    75,
      76,     0,     0,    81,    18,    18,     8,    11,    12,    13,
      14,    15,    84,     8,    85,     8,    17,    60,    61,    87,
      18,    19,    20,    21,    83,     7,     8,    10,    18,    17,
      18,    42,    43,    44,    45,    46,    47,    48,    49,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    87,    18,
      18,    18,    18,    18,     5,     6,     9,    16,    17,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    56,
      66,    77,    78,    91,    91,    91,    91,    91,    91,    91,
      91,    87,    86,    87,    86,    87,    87,    17,    87,    91,
      87,    86,    90,    91,    17,    18,    17,    59,     4,    16,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    87,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    18,    18,    87,    18,    87,    87,    66,
      87,    91,    87,    18,    18,    91,    17,    88,    89,    16,
      58,     3,    50,    51,    52,    53,    54,    55,    18,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    18,    18,    18,    18,    18,    18,    18,    18,    18,
      87,    87,    18,    18,    18,     8,    18,    88,    57,    17,
       3,     3,     3,     3,     3,     3,    91,    91,    18,    87,
      91,    87,     3,    16,    18,     3,    18,    18,    18,    18,
      18,    18,    18,    18,    57,    91,    18,    91,    91,    91,
      91,     3,    91,    18,    17,    16,    57,     3,    18,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    84,    84,    84,
      84,    84,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     4,     5,     5,
       5,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     2,     8,     4,    16,     1,     2,     1,     1,     1,
       5,     4,     4,     5,     5,     5,     5,     5,     5,     5,
       5,     3,     4,     5,     6,     4,     4,     5,     5,     7,
       2,     1,     4,     4,     1,     2,     1,     3,     3,     4,
       7,     6,     6,     4,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     6,     6,     3,     1,
       1
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
#line 201 "smtlib2.y" /* yacc.c:1646  */
    {
	if(querysmt2.IsNull()) 
    {
      querysmt2 = parserInterface->CreateNode(FALSE);
    }  
        
      ((ASTVec*)AssertsQuery)->push_back(parserInterface->nf->CreateNode(AND,assertionsSMT2));
  	  ((ASTVec*)AssertsQuery)->push_back(querysmt2);
       parserInterface->letMgr.cleanupParserSymbolTable();
       YYACCEPT;
}
#line 1692 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 217 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1698 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 222 "smtlib2.y" /* yacc.c:1646  */
    {
		commands.push_back("exit");
	}
#line 1706 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 226 "smtlib2.y" /* yacc.c:1646  */
    {
		commands.push_back("check-sat");
	}
#line 1714 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 231 "smtlib2.y" /* yacc.c:1646  */
    {
	  if (!(0 == strcmp((yyvsp[-1].node)->GetName(),"QF_BV") ||
	        0 == strcmp((yyvsp[-1].node)->GetName(),"QF_AUFBV"))) {
	    yyerror("Wrong input logic:");
	  }
	  delete (yyvsp[-1].node);
	}
#line 1726 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 239 "smtlib2.y" /* yacc.c:1646  */
    {
	delete (yyvsp[-1].node);
	}
#line 1734 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 243 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1740 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 245 "smtlib2.y" /* yacc.c:1646  */
    {
	delete (yyvsp[-1].str);
	}
#line 1748 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 249 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1754 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 251 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1760 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 253 "smtlib2.y" /* yacc.c:1646  */
    {
	assertionsSMT2.push_back(*(yyvsp[-1].node));
	delete (yyvsp[-1].node);
	}
#line 1769 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 260 "smtlib2.y" /* yacc.c:1646  */
    { 
  input_status = TO_BE_SATISFIABLE; 
  (yyval.node) = NULL; 
}
#line 1778 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 264 "smtlib2.y" /* yacc.c:1646  */
    { 
  input_status = TO_BE_UNSATISFIABLE; 
  (yyval.node) = NULL; 
  }
#line 1787 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 269 "smtlib2.y" /* yacc.c:1646  */
    { 
  input_status = TO_BE_UNKNOWN; 
  (yyval.node) = NULL; 
}
#line 1796 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 277 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1802 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 279 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1808 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 281 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1814 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 283 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1820 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 285 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 1826 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 290 "smtlib2.y" /* yacc.c:1646  */
    {
  parserInterface->letMgr._parser_symbol_table.insert(*(yyvsp[-7].node));
  //Sort_symbs has the indexwidth/valuewidth. Set those fields in
  //var
  (yyvsp[-7].node)->SetIndexWidth(0);
  (yyvsp[-7].node)->SetValueWidth((yyvsp[-1].uintval));
  delete (yyvsp[-7].node);
}
#line 1839 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 299 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyvsp[-3].node)->SetIndexWidth(0);
  (yyvsp[-3].node)->SetValueWidth(0);
  parserInterface->letMgr._parser_symbol_table.insert(*(yyvsp[-3].node));
  delete (yyvsp[-3].node);
}
#line 1850 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 306 "smtlib2.y" /* yacc.c:1646  */
    {
  parserInterface->letMgr._parser_symbol_table.insert(*(yyvsp[-15].node));
  unsigned int index_len = (yyvsp[-7].uintval);
  unsigned int value_len = (yyvsp[-2].uintval);
  if(index_len > 0) {
    (yyvsp[-15].node)->SetIndexWidth((yyvsp[-7].uintval));
  }
  else {
    FatalError("Fatal Error: parsing: BITVECTORS must be of positive length: \n");
  }

  if(value_len > 0) {
    (yyvsp[-15].node)->SetValueWidth((yyvsp[-2].uintval));
  }
  else {
    FatalError("Fatal Error: parsing: BITVECTORS must be of positive length: \n");
  }
  delete (yyvsp[-15].node);
}
#line 1874 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 329 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec;
  if ((yyvsp[0].node) != NULL) {
    (yyval.vec)->push_back(*(yyvsp[0].node));
    delete (yyvsp[0].node);
  }
}
#line 1886 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 338 "smtlib2.y" /* yacc.c:1646  */
    {
  if ((yyvsp[-1].vec) != NULL && (yyvsp[0].node) != NULL) {
    (yyvsp[-1].vec)->push_back(*(yyvsp[0].node));
    (yyval.vec) = (yyvsp[-1].vec);
    delete (yyvsp[0].node);
  }
}
#line 1898 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 349 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->CreateNode(TRUE)); 
  assert(0 == (yyval.node)->GetIndexWidth()); 
  assert(0 == (yyval.node)->GetValueWidth());
}
#line 1908 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 355 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->CreateNode(FALSE)); 
  assert(0 == (yyval.node)->GetIndexWidth()); 
  assert(0 == (yyval.node)->GetValueWidth());
}
#line 1918 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 361 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[0].node))); 
  delete (yyvsp[0].node);      
}
#line 1927 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 366 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(EQ,*(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 1938 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 373 "smtlib2.y" /* yacc.c:1646  */
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
#line 1968 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 399 "smtlib2.y" /* yacc.c:1646  */
    {
  using namespace BEEV;

  ASTVec terms = *(yyvsp[-1].vec);
  ASTVec forms;

  for(ASTVec::const_iterator it=terms.begin(),itend=terms.end();
      it!=itend; it++) {
    for(ASTVec::const_iterator it2=it+1; it2!=itend; it2++) {
      ASTNode n = (parserInterface->nf->CreateNode(NOT, parserInterface->nf->CreateNode(IFF, *it, *it2)));
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
#line 1996 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 423 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSLT, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2007 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 430 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSLE, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2018 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 437 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSGT, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2029 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 444 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSGE, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2040 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 451 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVLT, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2051 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 458 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVLE, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2062 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 465 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVGT, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2073 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 472 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVGE, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);      
}
#line 2084 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 479 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-1].node);
}
#line 2092 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 483 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(NOT, *(yyvsp[-1].node)));
  delete (yyvsp[-1].node);
}
#line 2101 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 488 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(IMPLIES, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
}
#line 2111 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 494 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(ITE, *(yyvsp[-3].node), *(yyvsp[-2].node), *(yyvsp[-1].node)));
  delete (yyvsp[-3].node);
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
}
#line 2122 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 501 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(AND, *(yyvsp[-1].vec)));
  delete (yyvsp[-1].vec);
}
#line 2131 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 506 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(OR, *(yyvsp[-1].vec)));
  delete (yyvsp[-1].vec);
}
#line 2140 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 511 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(XOR, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
}
#line 2150 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 517 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(IFF, *(yyvsp[-2].node), *(yyvsp[-1].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
}
#line 2160 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 523 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-1].node);
  //Cleanup the LetIDToExprMap
  parserInterface->letMgr.CleanupLetIDMap();                      
}
#line 2170 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 532 "smtlib2.y" /* yacc.c:1646  */
    {}
#line 2176 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 535 "smtlib2.y" /* yacc.c:1646  */
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
#line 2199 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 554 "smtlib2.y" /* yacc.c:1646  */
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
#line 2223 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 577 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec;
  if ((yyvsp[0].node) != NULL) {
    (yyval.vec)->push_back(*(yyvsp[0].node));
    delete (yyvsp[0].node);
  }
}
#line 2235 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 586 "smtlib2.y" /* yacc.c:1646  */
    {
  if ((yyvsp[-1].vec) != NULL && (yyvsp[0].node) != NULL) {
    (yyvsp[-1].vec)->push_back(*(yyvsp[0].node));
    (yyval.vec) = (yyvsp[-1].vec);
    delete (yyvsp[0].node);
  }
}
#line 2247 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 597 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[0].node)));
  delete (yyvsp[0].node);
}
#line 2256 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 602 "smtlib2.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-1].node);
}
#line 2264 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 606 "smtlib2.y" /* yacc.c:1646  */
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
#line 2281 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 619 "smtlib2.y" /* yacc.c:1646  */
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
#line 2299 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 633 "smtlib2.y" /* yacc.c:1646  */
    {
  int width = (yyvsp[-3].uintval) - (yyvsp[-2].uintval) + 1;
  if (width < 0)
    yyerror("Negative width in extract");
      
  if((unsigned)(yyvsp[-3].uintval) >= (yyvsp[0].node)->GetValueWidth())
    yyerror("Parsing: Wrong width in BVEXTRACT\n");                      
      
  ASTNode hi  =  parserInterface->CreateBVConst(32, (yyvsp[-3].uintval));
  ASTNode low =  parserInterface->CreateBVConst(32, (yyvsp[-2].uintval));
  ASTNode output = parserInterface->nf->CreateTerm(BVEXTRACT, width, *(yyvsp[0].node),hi,low);
  ASTNode * n = new ASTNode(output);
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2319 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 649 "smtlib2.y" /* yacc.c:1646  */
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
#line 2336 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 662 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned w = (yyvsp[0].node)->GetValueWidth() + (yyvsp[-2].uintval);
  ASTNode width = parserInterface->CreateBVConst(32,w);
  ASTNode *n =  new ASTNode(parserInterface->nf->CreateTerm(BVSX,w,*(yyvsp[0].node),width));
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2348 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 671 "smtlib2.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  (yyval.node) = new ASTNode(parserInterface->nf->CreateArrayTerm(ITE,(yyvsp[0].node)->GetIndexWidth(), width,*(yyvsp[-2].node), *(yyvsp[-1].node), *(yyvsp[0].node)));      
  delete (yyvsp[-2].node);
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2360 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 679 "smtlib2.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth() + (yyvsp[0].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2372 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 687 "smtlib2.y" /* yacc.c:1646  */
    {
  //this is the BVNEG (term) in the CVCL language
  unsigned int width = (yyvsp[0].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNEG, width, *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2384 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 695 "smtlib2.y" /* yacc.c:1646  */
    {
  //this is the BVUMINUS term in CVCL langauge
  unsigned width = (yyvsp[0].node)->GetValueWidth();
  ASTNode * n =  new ASTNode(parserInterface->nf->CreateTerm(BVUMINUS,width,*(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2396 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 703 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVAND, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2408 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 711 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVOR, width, *(yyvsp[-1].node), *(yyvsp[0].node))); 
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2420 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 719 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVXOR, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2432 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 727 "smtlib2.y" /* yacc.c:1646  */
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
#line 2452 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 743 "smtlib2.y" /* yacc.c:1646  */
    {
  	ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(ITE, 1, 
  	parserInterface->nf->CreateNode(EQ, *(yyvsp[-1].node), *(yyvsp[0].node)),
  	parserInterface->CreateOneConst(1),
  	parserInterface->CreateZeroConst(1)));
  	
      (yyval.node) = n;
      delete (yyvsp[-1].node);
      delete (yyvsp[0].node);
}
#line 2467 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 754 "smtlib2.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVSUB, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2479 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 762 "smtlib2.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVPLUS, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);

}
#line 2492 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 771 "smtlib2.y" /* yacc.c:1646  */
    {
  const unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVMULT, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2504 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 779 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVDIV, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;

  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2517 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 788 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVMOD, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;

  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2530 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 797 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVDIV, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;

  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2543 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 806 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVREM, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2555 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 814 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVMOD, width, *(yyvsp[-1].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2567 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 822 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNEG, width, parserInterface->nf->CreateTerm(BVAND, width, *(yyvsp[-1].node), *(yyvsp[0].node))));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2579 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 830 "smtlib2.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNEG, width, parserInterface->nf->CreateTerm(BVOR, width, *(yyvsp[-1].node), *(yyvsp[0].node)))); 
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2591 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 838 "smtlib2.y" /* yacc.c:1646  */
    {
  // shifting left by who know how much?
  unsigned int w = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVLEFTSHIFT,w,*(yyvsp[-1].node),*(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2604 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 847 "smtlib2.y" /* yacc.c:1646  */
    {
  // shifting right by who know how much?
  unsigned int w = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVRIGHTSHIFT,w,*(yyvsp[-1].node),*(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2617 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 856 "smtlib2.y" /* yacc.c:1646  */
    {
  // shifting arithmetic right by who know how much?
  unsigned int w = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVSRSHIFT,w,*(yyvsp[-1].node),*(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2630 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 865 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode *n;
  unsigned width = (yyvsp[0].node)->GetValueWidth();
  unsigned rotate = (yyvsp[-2].uintval) % width;
  if (0 == rotate)
    {
      n = (yyvsp[0].node);
    }
  else 
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
      
  (yyval.node) = n;
}
#line 2658 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 889 "smtlib2.y" /* yacc.c:1646  */
    {
  ASTNode *n;
  unsigned width = (yyvsp[0].node)->GetValueWidth();
  unsigned rotate = (yyvsp[-2].uintval) % width;
  if (0 == rotate)
    {
      n = (yyvsp[0].node);
    }
  else 
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
      
  (yyval.node) = n;
}
#line 2686 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 913 "smtlib2.y" /* yacc.c:1646  */
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
      (yyval.node) = new ASTNode(n);
      delete (yyvsp[0].node);
}
#line 2706 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 929 "smtlib2.y" /* yacc.c:1646  */
    {
	(yyval.node) = new ASTNode(parserInterface->CreateBVConst((yyvsp[-1].str), 10, (yyvsp[0].uintval)));
    (yyval.node)->SetValueWidth((yyvsp[0].uintval));
    delete (yyvsp[-1].str);
}
#line 2716 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 935 "smtlib2.y" /* yacc.c:1646  */
    {
	unsigned width = (yyvsp[0].str)->length()*4;
	(yyval.node) = new ASTNode(parserInterface->CreateBVConst((yyvsp[0].str), 16, width));
    (yyval.node)->SetValueWidth(width);
    delete (yyvsp[0].str);
}
#line 2727 "smt2.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 942 "smtlib2.y" /* yacc.c:1646  */
    {
	unsigned width = (yyvsp[0].str)->length();
	(yyval.node) = new ASTNode(parserInterface->CreateBVConst((yyvsp[0].str), 2, width));
    (yyval.node)->SetValueWidth(width);
    delete (yyvsp[0].str);
}
#line 2738 "smt2.tab.c" /* yacc.c:1646  */
    break;


#line 2742 "smt2.tab.c" /* yacc.c:1646  */
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
#line 950 "smtlib2.y" /* yacc.c:1906  */

