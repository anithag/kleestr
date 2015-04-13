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
#define yyparse         cvcparse
#define yylex           cvclex
#define yyerror         cvcerror
#define yydebug         cvcdebug
#define yynerrs         cvcnerrs

#define yylval          cvclval
#define yychar          cvcchar

/* Copy the first part of user declarations.  */
#line 1 "CVC.y" /* yacc.c:339  */

  // -*- c++ -*-
  /********************************************************************
   * AUTHORS: Vijay Ganesh
   *
   * BEGIN DATE: November, 2005
   *
   * LICENSE: Please view LICENSE file in the home dir of this Program
   ********************************************************************/
  
#include "parser.h"
#include "ParserInterface.h"

  using namespace std; 
  using namespace BEEV;
  
  // Suppress the bogus warning suppression in bison (it generates
  // compile error)
#undef __GNUC_MINOR__
  
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 1048576000
#define YYERROR_VERBOSE 1
#define YY_EXIT_FAILURE -1
  
  extern int cvclex(void);
  extern char* yytext;
  extern int cvclineno;
  int yyerror(const char *s) {
    cout << "syntax error: line " << cvclineno << "\n" << s << endl;    
    FatalError("");
    return YY_EXIT_FAILURE;
  };
  
int yyerror(void* AssertsQuery, const char* s) { return yyerror(s); }
  

#line 112 "cvc.tab.c" /* yacc.c:339  */

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
   by #include "cvc.tab.h".  */
#ifndef YY_CVC_CVC_TAB_H_INCLUDED
# define YY_CVC_CVC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int cvcdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND_TOK = 258,
    OR_TOK = 259,
    NOT_TOK = 260,
    FOR_TOK = 261,
    EXCEPT_TOK = 262,
    XOR_TOK = 263,
    NAND_TOK = 264,
    NOR_TOK = 265,
    IMPLIES_TOK = 266,
    IFF_TOK = 267,
    IF_TOK = 268,
    THEN_TOK = 269,
    ELSE_TOK = 270,
    ELSIF_TOK = 271,
    END_TOK = 272,
    ENDIF_TOK = 273,
    NEQ_TOK = 274,
    ASSIGN_TOK = 275,
    BV_TOK = 276,
    BVLEFTSHIFT_TOK = 277,
    BVRIGHTSHIFT_TOK = 278,
    BVPLUS_TOK = 279,
    BVSUB_TOK = 280,
    BVUMINUS_TOK = 281,
    BVMULT_TOK = 282,
    BVDIV_TOK = 283,
    BVMOD_TOK = 284,
    SBVDIV_TOK = 285,
    SBVREM_TOK = 286,
    BVNEG_TOK = 287,
    BVAND_TOK = 288,
    BVOR_TOK = 289,
    BVXOR_TOK = 290,
    BVNAND_TOK = 291,
    BVNOR_TOK = 292,
    BVXNOR_TOK = 293,
    BVCONCAT_TOK = 294,
    BVLT_TOK = 295,
    BVGT_TOK = 296,
    BVLE_TOK = 297,
    BVGE_TOK = 298,
    BVSLT_TOK = 299,
    BVSGT_TOK = 300,
    BVSLE_TOK = 301,
    BVSGE_TOK = 302,
    BOOL_TO_BV_TOK = 303,
    BVSX_TOK = 304,
    BOOLEXTRACT_TOK = 305,
    ASSERT_TOK = 306,
    QUERY_TOK = 307,
    BOOLEAN_TOK = 308,
    ARRAY_TOK = 309,
    OF_TOK = 310,
    WITH_TOK = 311,
    TRUELIT_TOK = 312,
    FALSELIT_TOK = 313,
    IN_TOK = 314,
    LET_TOK = 315,
    PUSH_TOK = 316,
    POP_TOK = 317,
    BVCONST_TOK = 318,
    TERMID_TOK = 319,
    FORMID_TOK = 320,
    COUNTEREXAMPLE_TOK = 321,
    NUMERAL_TOK = 322,
    BIN_BASED_NUMBER = 323,
    DEC_BASED_NUMBER = 324,
    HEX_BASED_NUMBER = 325
  };
#endif
/* Tokens.  */
#define AND_TOK 258
#define OR_TOK 259
#define NOT_TOK 260
#define FOR_TOK 261
#define EXCEPT_TOK 262
#define XOR_TOK 263
#define NAND_TOK 264
#define NOR_TOK 265
#define IMPLIES_TOK 266
#define IFF_TOK 267
#define IF_TOK 268
#define THEN_TOK 269
#define ELSE_TOK 270
#define ELSIF_TOK 271
#define END_TOK 272
#define ENDIF_TOK 273
#define NEQ_TOK 274
#define ASSIGN_TOK 275
#define BV_TOK 276
#define BVLEFTSHIFT_TOK 277
#define BVRIGHTSHIFT_TOK 278
#define BVPLUS_TOK 279
#define BVSUB_TOK 280
#define BVUMINUS_TOK 281
#define BVMULT_TOK 282
#define BVDIV_TOK 283
#define BVMOD_TOK 284
#define SBVDIV_TOK 285
#define SBVREM_TOK 286
#define BVNEG_TOK 287
#define BVAND_TOK 288
#define BVOR_TOK 289
#define BVXOR_TOK 290
#define BVNAND_TOK 291
#define BVNOR_TOK 292
#define BVXNOR_TOK 293
#define BVCONCAT_TOK 294
#define BVLT_TOK 295
#define BVGT_TOK 296
#define BVLE_TOK 297
#define BVGE_TOK 298
#define BVSLT_TOK 299
#define BVSGT_TOK 300
#define BVSLE_TOK 301
#define BVSGE_TOK 302
#define BOOL_TO_BV_TOK 303
#define BVSX_TOK 304
#define BOOLEXTRACT_TOK 305
#define ASSERT_TOK 306
#define QUERY_TOK 307
#define BOOLEAN_TOK 308
#define ARRAY_TOK 309
#define OF_TOK 310
#define WITH_TOK 311
#define TRUELIT_TOK 312
#define FALSELIT_TOK 313
#define IN_TOK 314
#define LET_TOK 315
#define PUSH_TOK 316
#define POP_TOK 317
#define BVCONST_TOK 318
#define TERMID_TOK 319
#define FORMID_TOK 320
#define COUNTEREXAMPLE_TOK 321
#define NUMERAL_TOK 322
#define BIN_BASED_NUMBER 323
#define DEC_BASED_NUMBER 324
#define HEX_BASED_NUMBER 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 39 "CVC.y" /* yacc.c:355  */


  unsigned int uintval;                 /* for numerals in types. */
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
  char* str;

  //Hash_Map to hold Array Updates during parse A map from array index
  //to array values. To support the WITH construct
  BEEV::ASTNodeMap * Index_To_UpdateValue;

#line 314 "cvc.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE cvclval;

int cvcparse (void* AssertsQuery);

#endif /* !YY_CVC_CVC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 329 "cvc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  343

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

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
      67,    79,     2,     2,    78,     2,    66,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    76,
       2,    63,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    80,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    68,    69,
      70,    71,    72,    73,    74,    75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   178,   178,   182,   188,   195,   210,   216,   222,   240,
     244,   248,   268,   275,   284,   287,   292,   295,   300,   310,
     329,   350,   356,   364,   371,   380,   381,   382,   385,   397,
     403,   411,   429,   430,   449,   453,   457,   463,   479,   486,
     493,   525,   556,   561,   567,   573,   579,   585,   591,   597,
     603,   610,   617,   624,   631,   638,   645,   652,   659,   660,
     666,   673,   682,   691,   692,   702,   709,   719,   720,   721,
     722,   732,   738,   744,   750,   760,   770,   785,   792,   803,
     814,   825,   837,   849,   861,   878,   887,   967,   987,  1003,
    1010,  1018,  1025,  1033,  1041,  1049,  1057,  1064,  1065,  1066,
    1073,  1103,  1110,  1119,  1120,  1123,  1144,  1162,  1176
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"AND\"", "\"OR\"", "\"NOT\"",
  "\"FOR\"", "\"EXCEPT\"", "\"XOR\"", "\"NAND\"", "\"NOR\"", "\"=>\"",
  "\"<=>\"", "\"IF\"", "\"THEN\"", "\"ELSE\"", "\"ELSIF\"", "\"END\"",
  "\"ENDIF\"", "\"/=\"", "\":=\"", "\"BV\"", "\"<<\"", "\">>\"",
  "\"BVPLUS\"", "\"BVSUB\"", "\"BVUMINUS\"", "\"BVMULT\"", "\"BVDIV\"",
  "\"BVMOD\"", "\"SBVDIV\"", "\"SBVREM\"", "\"~\"", "\"&\"", "\"|\"",
  "\"BVXOR\"", "\"BVNAND\"", "\"BVNOR\"", "\"BVXNOR\"", "\"@\"",
  "\"BVLT\"", "\"BVGT\"", "\"BVLE\"", "\"BVGE\"", "\"BVSLT\"", "\"BVSGT\"",
  "\"BVSLE\"", "\"BVSGE\"", "\"BOOLBV\"", "\"BVSX\"", "\"BOOLEXTRACT\"",
  "\"ASSERT\"", "\"QUERY\"", "\"BOOLEAN\"", "\"ARRAY\"", "\"OF\"",
  "\"WITH\"", "\"TRUE\"", "\"FALSE\"", "\"IN\"", "\"LET\"", "\"PUSH\"",
  "\"POP\"", "'='", "'['", "'{'", "'.'", "'('", "BVCONST_TOK",
  "TERMID_TOK", "FORMID_TOK", "COUNTEREXAMPLE_TOK", "NUMERAL_TOK",
  "BIN_BASED_NUMBER", "DEC_BASED_NUMBER", "HEX_BASED_NUMBER", "';'", "':'",
  "','", "')'", "'}'", "']'", "$accept", "cmd", "counterexample",
  "other_cmd", "other_cmd1", "Asserts", "Assert", "Query", "VarDecls",
  "VarDecl", "reverseFORM_IDs", "FORM_IDs", "ForDecl", "Type", "BvType",
  "BoolType", "ArrayType", "IfExpr", "ElseRestExpr", "Formula", "IfForm",
  "ElseRestForm", "Exprs", "Expr", "ArrayUpdateExpr", "Updates",
  "LetDecls", "LetDecl", YY_NULLPTR
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
     315,   316,   317,    61,    91,   123,    46,    40,   318,   319,
     320,   321,   322,   323,   324,   325,    59,    58,    44,    41,
     125,    93
};
# endif

#define YYPACT_NINF -164

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-164)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,   374,   374,   -74,     8,   -65,   -16,   -11,  -164,  -164,
     -29,   -10,  -164,    12,   374,    19,   374,    24,    29,    31,
      55,    62,    64,    66,    70,   316,    77,    83,    94,    97,
     113,   122,   123,   127,   128,   139,   143,   145,   146,   153,
     154,  -164,  -164,   121,   374,  -164,  -164,   155,    80,  -164,
      69,  -164,  1174,  -164,    91,   162,  -164,    -1,  -164,  -164,
     -20,  -164,   -11,  -164,   147,  -164,   -19,  -164,   164,   233,
     166,   177,   316,   182,   185,   190,   193,   195,   374,   121,
     316,    26,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   374,   316,   316,   -26,     5,  -164,
      35,   192,   316,  -164,  -164,  -164,   374,   374,   374,   374,
     374,   374,   374,  -164,   316,   198,   423,   316,   316,   316,
     200,   316,   449,   316,  -164,  -164,  -164,   -11,  -164,   179,
    -164,   245,   205,  -164,  -164,  -164,   197,   202,   374,   201,
     203,   466,   204,   206,   209,   230,   231,   310,     6,   480,
     762,   775,   788,   812,   825,   838,   862,   875,   888,   912,
     925,   938,    49,   962,   975,   374,   -19,   374,   121,  -164,
    -164,   501,   174,   110,  1258,   263,  -164,   114,   114,    93,
    -164,    80,    92,    26,   129,   294,   316,  -164,    93,   124,
     194,   515,   211,   221,   374,   -19,   242,   131,  1128,   316,
     316,  -164,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,  -164,   239,   240,  1248,  1174,   252,  1248,  1174,  -164,
    -164,   196,   251,  -164,  -164,   246,   245,  1248,  1174,  -164,
     250,   374,   374,  -164,   316,   316,  -164,   108,    93,   988,
    1012,  1025,  1038,  1062,  1075,  1142,    93,   519,   528,   554,
     567,   580,   593,   606,   619,   632,   645,   658,   671,   255,
     256,   374,   317,   258,  -164,  -164,   268,  1217,  1236,  1155,
    1099,   316,  -164,   316,   316,   316,   316,   316,   316,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  1248,  1174,   316,  -164,   273,  -164,   374,
    -164,   316,    93,   684,   697,   710,   723,   736,   749,   -34,
     287,   131,  1142,  -164,  -164,  -164,  -164,  -164,  -164,     9,
    -164,  -164,   349,   295,   374,   374,    59,     7,   297,  -164,
     374,    17,  -164
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    21,     0,     2,     0,    10,    12,     6,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,     0,     0,    69,    67,    35,     0,    97,
       0,    58,     0,    98,     0,     0,     1,     0,     3,     8,
       0,    13,     9,     7,     0,    16,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,    71,    72,    73,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    22,     4,    11,    17,     0,
      29,     0,    18,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      68,     0,    45,    43,    49,    46,    44,    47,    48,    39,
      86,    87,    88,    78,    79,    85,     0,   100,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,   107,   105,     0,    61,    99,   104,
      36,     0,     0,    74,    75,     0,     0,    20,    19,    24,
       0,     0,     0,    62,     0,     0,    31,     0,    65,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    30,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    50,    51,    52,    53,    54,    55,    56,
      57,    84,    37,   108,   106,     0,    76,     0,    63,     0,
      32,     0,    66,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,    90,    92,    93,    94,    95,    96,     0,
      64,    33,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,  -164,  -164,    -5,    -6,     3,   353,    14,
     308,  -164,  -164,  -163,  -124,  -164,  -164,  -164,    44,    -2,
    -164,    47,  -164,    86,  -164,  -164,   296,   210
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    58,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   137,   132,   133,   134,   135,    49,   246,    50,
      51,   243,   247,    52,    53,   187,    98,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      54,    61,   129,   226,    55,    62,    57,   193,    56,    59,
     106,   107,    67,    63,    69,   108,   109,   110,   111,   112,
     106,   107,     1,     2,    64,   108,   109,   110,   111,   112,
     122,     1,   239,   123,   130,   131,     2,   165,   106,   107,
       1,     3,   100,   108,   109,   110,   111,   112,   115,   116,
       3,   166,   106,   107,     3,   127,    61,   108,   109,   110,
     111,   112,   106,   107,   167,   208,    65,   108,   109,   110,
     111,   112,   106,   107,    64,   126,   147,   108,   109,   110,
     111,   112,   120,   168,   168,   332,    68,   339,   333,    66,
     122,    70,   162,   123,   106,   107,    71,   342,    72,   108,
     109,   110,   111,   112,   172,   173,   174,   175,   176,   177,
     178,    81,   275,   106,   169,   115,   116,   106,   107,   109,
     110,    61,    73,   109,   110,   111,   117,   118,   221,    74,
     101,    75,   119,    76,   106,   107,   197,    77,   338,   108,
     109,   110,   111,   112,    82,   113,   241,   242,   120,   120,
      83,   115,   116,   103,   104,   105,   122,   122,   141,   123,
     123,    84,   117,   224,    85,   227,   149,   124,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
      86,   163,   164,   109,   110,   120,   281,   282,   171,    87,
      88,    97,   237,   122,    89,    90,   123,   103,   104,   105,
     179,   232,   182,   183,   184,   185,    91,   188,   190,   191,
      92,   114,    93,    94,   115,   116,   115,   116,   115,   116,
      95,    96,   102,   128,   198,   117,   118,   117,   118,   117,
     118,   119,     3,   119,   136,   119,   106,   107,   139,   277,
     278,   108,   109,   110,   111,   112,   192,   138,   120,   140,
     120,   225,   120,   228,   142,   121,   122,   143,   122,   123,
     122,   123,   144,   123,   186,   145,   129,   146,   194,   303,
     180,   170,   231,   110,   195,   233,   236,   272,   196,   199,
     238,   200,   202,   235,   203,   248,   249,   204,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   321,   205,   206,
     240,   269,   270,   106,   107,   271,   115,   116,   108,   109,
     110,   111,   112,   273,   207,   274,   276,   117,   118,    78,
     279,   280,   336,   337,   301,   302,   307,   305,   341,   306,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   320,
     120,    26,    27,    28,    29,   329,   334,   304,   122,    60,
     335,   123,   340,   125,    38,    39,   331,   312,   330,   313,
     314,   315,   316,   317,   318,   148,    79,     0,   229,    14,
      15,     0,     0,    80,    45,    46,     0,    16,    48,     0,
       0,   319,     0,     0,     0,     0,     0,   322,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,    41,    42,     0,    43,     0,    78,     0,     0,     0,
       0,    44,    45,    46,    47,     0,    48,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    26,    27,
      28,    29,    78,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    79,    26,    27,    28,    29,   115,   116,
      80,    45,    46,     0,     0,   181,     0,    38,    39,   117,
     118,     0,   115,   116,     0,   119,     0,     0,     0,    79,
       0,     0,     0,   117,   118,     0,    80,    45,    46,   119,
       0,   189,   120,   115,   116,     0,     0,     0,     0,     0,
     122,     0,     0,   123,   117,   118,   120,   115,   116,     0,
     119,   115,   116,     0,   122,   201,     0,   123,   117,   118,
     115,   116,   117,   118,   119,     0,     0,   120,   119,   170,
       0,   117,   118,     0,     0,   122,     0,   119,   123,     0,
       0,   120,     0,     0,     0,   120,   115,   116,     0,   122,
     230,     0,   123,   122,   120,     0,   123,   117,   118,   115,
     116,     0,   122,   119,   234,   123,     0,     0,   289,     0,
     117,   118,   115,   116,     0,     0,   119,   290,     0,     0,
     120,     0,     0,   117,   118,   115,   116,     0,   122,   119,
       0,   123,     0,   120,     0,     0,   117,   118,   115,   116,
       0,   122,   119,   291,   123,     0,   120,     0,     0,   117,
     118,   115,   116,     0,   122,   119,   292,   123,     0,   120,
       0,     0,   117,   118,   115,   116,     0,   122,   119,   293,
     123,     0,   120,     0,     0,   117,   118,   115,   116,     0,
     122,   119,   294,   123,     0,   120,     0,     0,   117,   118,
     115,   116,     0,   122,   119,   295,   123,     0,   120,     0,
       0,   117,   118,   115,   116,     0,   122,   119,   296,   123,
       0,   120,     0,     0,   117,   118,   115,   116,     0,   122,
     119,   297,   123,     0,   120,     0,     0,   117,   118,   115,
     116,     0,   122,   119,   298,   123,     0,   120,     0,     0,
     117,   118,   115,   116,     0,   122,   119,   299,   123,     0,
     120,     0,     0,   117,   118,   115,   116,     0,   122,   119,
     300,   123,     0,   120,     0,     0,   117,   118,   115,   116,
       0,   122,   119,   323,   123,     0,   120,     0,     0,   117,
     118,   115,   116,     0,   122,   119,   324,   123,     0,   120,
       0,     0,   117,   118,   115,   116,     0,   122,   119,   325,
     123,     0,   120,     0,     0,   117,   118,   115,   116,     0,
     122,   119,   326,   123,     0,   120,     0,     0,   117,   118,
     115,   116,     0,   122,   119,   327,   123,     0,   120,     0,
       0,   117,   118,     0,     0,     0,   122,   119,   328,   123,
       0,   120,     0,     0,   115,   116,     0,     0,     0,   122,
     209,     0,   123,     0,   120,   117,   118,   115,   116,     0,
       0,   119,   122,   210,     0,   123,     0,     0,   117,   118,
     115,   116,     0,     0,   119,     0,   211,     0,   120,     0,
       0,   117,   118,     0,     0,     0,   122,   119,     0,   123,
       0,   120,     0,     0,   115,   116,     0,     0,     0,   122,
     212,     0,   123,     0,   120,   117,   118,   115,   116,     0,
       0,   119,   122,   213,     0,   123,     0,     0,   117,   118,
     115,   116,     0,     0,   119,     0,   214,     0,   120,     0,
       0,   117,   118,     0,     0,     0,   122,   119,     0,   123,
       0,   120,     0,     0,   115,   116,     0,     0,     0,   122,
     215,     0,   123,     0,   120,   117,   118,   115,   116,     0,
       0,   119,   122,   216,     0,   123,     0,     0,   117,   118,
     115,   116,     0,     0,   119,     0,   217,     0,   120,     0,
       0,   117,   118,     0,     0,     0,   122,   119,     0,   123,
       0,   120,     0,     0,   115,   116,     0,     0,     0,   122,
     218,     0,   123,     0,   120,   117,   118,   115,   116,     0,
       0,   119,   122,   219,     0,   123,     0,     0,   117,   118,
     115,   116,     0,     0,   119,     0,   220,     0,   120,     0,
       0,   117,   118,     0,     0,     0,   122,   119,     0,   123,
       0,   120,     0,     0,   115,   116,     0,     0,     0,   122,
     222,     0,   123,     0,   120,   117,   118,   115,   116,     0,
       0,   119,   122,   223,     0,   123,     0,     0,   117,   118,
     115,   116,     0,     0,   119,     0,   283,     0,   120,     0,
       0,   117,   118,     0,     0,     0,   122,   119,     0,   123,
       0,   120,     0,     0,   115,   116,     0,     0,     0,   122,
     284,     0,   123,     0,   120,   117,   118,   115,   116,     0,
       0,   119,   122,   285,     0,   123,     0,     0,   117,   118,
       0,     0,     0,   311,   119,     0,   286,     0,   120,     0,
       0,   115,   116,     0,     0,     0,   122,     0,     0,   123,
       0,   120,   117,   118,     0,     0,     0,     0,   119,   122,
     287,     0,   123,   244,   245,     0,     0,   114,     0,     0,
     115,   116,     0,   288,     0,   120,     0,   244,   245,     0,
       0,   117,   118,   122,   115,   116,   123,   119,     0,     0,
       0,     0,     0,   310,     0,   117,   118,   115,   116,     0,
       0,   119,     0,     0,   120,     0,     0,     0,   117,   118,
       0,   121,   122,   114,   119,   123,   115,   116,   120,     0,
       0,     0,     0,     0,     0,     0,   122,   117,   118,   123,
       0,   120,     0,   119,     0,     0,     0,     0,     0,   122,
     106,   107,   123,     0,     0,   108,   109,   110,   111,   112,
     120,     0,     0,     0,     0,   308,     0,   121,   122,   106,
     107,   123,     0,     0,   108,   109,   110,   111,   112,     0,
     309,   106,   107,     0,     0,     0,   108,   109,   110,   111,
     112,   106,   107,     0,     0,     0,     0,   109,   110,   111,
     112
};

static const yytype_int16 yycheck[] =
{
       2,     7,    21,   166,    78,    10,    71,   131,     0,     6,
       3,     4,    14,    10,    16,     8,     9,    10,    11,    12,
       3,     4,    51,    52,    10,     8,     9,    10,    11,    12,
      64,    51,   195,    67,    53,    54,    52,    63,     3,     4,
      51,    70,    44,     8,     9,    10,    11,    12,    22,    23,
      70,    77,     3,     4,    70,    60,    62,     8,     9,    10,
      11,    12,     3,     4,    59,    59,    76,     8,     9,    10,
      11,    12,     3,     4,    60,    76,    78,     8,     9,    10,
      11,    12,    56,    78,    78,    76,    67,    80,    79,    77,
      64,    67,    94,    67,     3,     4,    67,    80,    67,     8,
       9,    10,    11,    12,   106,   107,   108,   109,   110,   111,
     112,    25,   236,     3,    79,    22,    23,     3,     4,     9,
      10,   127,    67,     9,    10,    11,    33,    34,    79,    67,
      44,    67,    39,    67,     3,     4,   138,    67,    79,     8,
       9,    10,    11,    12,    67,    76,    15,    16,    56,    56,
      67,    22,    23,    73,    74,    75,    64,    64,    72,    67,
      67,    67,    33,   165,    67,   167,    80,    76,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      67,    95,    96,     9,    10,    56,    78,    79,   102,    67,
      67,    70,   194,    64,    67,    67,    67,    73,    74,    75,
     114,    77,   116,   117,   118,   119,    67,   121,   122,   123,
      67,    19,    67,    67,    22,    23,    22,    23,    22,    23,
      67,    67,    67,    76,   138,    33,    34,    33,    34,    33,
      34,    39,    70,    39,    70,    39,     3,     4,    72,   241,
     242,     8,     9,    10,    11,    12,    67,    14,    56,    72,
      56,   165,    56,   167,    72,    63,    64,    72,    64,    67,
      64,    67,    72,    67,    64,    72,    21,    72,    63,   271,
      72,    79,   186,    10,    77,    81,    55,    81,    76,    78,
     194,    78,    78,    72,    78,   199,   200,    78,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   309,    78,    78,
      68,    72,    72,     3,     4,    63,    22,    23,     8,     9,
      10,    11,    12,    72,    14,    79,    76,    33,    34,    13,
     244,   245,   334,   335,    79,    79,    68,    20,   340,    81,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    76,
      56,    35,    36,    37,    38,    68,     7,   271,    64,     6,
      65,    67,    65,    55,    48,    49,   322,   281,   321,   283,
     284,   285,   286,   287,   288,    79,    60,    -1,   168,     5,
       6,    -1,    -1,    67,    68,    69,    -1,    13,    72,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,   311,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    60,    -1,    13,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    60,    35,    36,    37,    38,    22,    23,
      67,    68,    69,    -1,    -1,    72,    -1,    48,    49,    33,
      34,    -1,    22,    23,    -1,    39,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    33,    34,    -1,    67,    68,    69,    39,
      -1,    72,    56,    22,    23,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    33,    34,    56,    22,    23,    -1,
      39,    22,    23,    -1,    64,    79,    -1,    67,    33,    34,
      22,    23,    33,    34,    39,    -1,    -1,    56,    39,    79,
      -1,    33,    34,    -1,    -1,    64,    -1,    39,    67,    -1,
      -1,    56,    -1,    -1,    -1,    56,    22,    23,    -1,    64,
      79,    -1,    67,    64,    56,    -1,    67,    33,    34,    22,
      23,    -1,    64,    39,    79,    67,    -1,    -1,    79,    -1,
      33,    34,    22,    23,    -1,    -1,    39,    79,    -1,    -1,
      56,    -1,    -1,    33,    34,    22,    23,    -1,    64,    39,
      -1,    67,    -1,    56,    -1,    -1,    33,    34,    22,    23,
      -1,    64,    39,    79,    67,    -1,    56,    -1,    -1,    33,
      34,    22,    23,    -1,    64,    39,    79,    67,    -1,    56,
      -1,    -1,    33,    34,    22,    23,    -1,    64,    39,    79,
      67,    -1,    56,    -1,    -1,    33,    34,    22,    23,    -1,
      64,    39,    79,    67,    -1,    56,    -1,    -1,    33,    34,
      22,    23,    -1,    64,    39,    79,    67,    -1,    56,    -1,
      -1,    33,    34,    22,    23,    -1,    64,    39,    79,    67,
      -1,    56,    -1,    -1,    33,    34,    22,    23,    -1,    64,
      39,    79,    67,    -1,    56,    -1,    -1,    33,    34,    22,
      23,    -1,    64,    39,    79,    67,    -1,    56,    -1,    -1,
      33,    34,    22,    23,    -1,    64,    39,    79,    67,    -1,
      56,    -1,    -1,    33,    34,    22,    23,    -1,    64,    39,
      79,    67,    -1,    56,    -1,    -1,    33,    34,    22,    23,
      -1,    64,    39,    79,    67,    -1,    56,    -1,    -1,    33,
      34,    22,    23,    -1,    64,    39,    79,    67,    -1,    56,
      -1,    -1,    33,    34,    22,    23,    -1,    64,    39,    79,
      67,    -1,    56,    -1,    -1,    33,    34,    22,    23,    -1,
      64,    39,    79,    67,    -1,    56,    -1,    -1,    33,    34,
      22,    23,    -1,    64,    39,    79,    67,    -1,    56,    -1,
      -1,    33,    34,    -1,    -1,    -1,    64,    39,    79,    67,
      -1,    56,    -1,    -1,    22,    23,    -1,    -1,    -1,    64,
      78,    -1,    67,    -1,    56,    33,    34,    22,    23,    -1,
      -1,    39,    64,    78,    -1,    67,    -1,    -1,    33,    34,
      22,    23,    -1,    -1,    39,    -1,    78,    -1,    56,    -1,
      -1,    33,    34,    -1,    -1,    -1,    64,    39,    -1,    67,
      -1,    56,    -1,    -1,    22,    23,    -1,    -1,    -1,    64,
      78,    -1,    67,    -1,    56,    33,    34,    22,    23,    -1,
      -1,    39,    64,    78,    -1,    67,    -1,    -1,    33,    34,
      22,    23,    -1,    -1,    39,    -1,    78,    -1,    56,    -1,
      -1,    33,    34,    -1,    -1,    -1,    64,    39,    -1,    67,
      -1,    56,    -1,    -1,    22,    23,    -1,    -1,    -1,    64,
      78,    -1,    67,    -1,    56,    33,    34,    22,    23,    -1,
      -1,    39,    64,    78,    -1,    67,    -1,    -1,    33,    34,
      22,    23,    -1,    -1,    39,    -1,    78,    -1,    56,    -1,
      -1,    33,    34,    -1,    -1,    -1,    64,    39,    -1,    67,
      -1,    56,    -1,    -1,    22,    23,    -1,    -1,    -1,    64,
      78,    -1,    67,    -1,    56,    33,    34,    22,    23,    -1,
      -1,    39,    64,    78,    -1,    67,    -1,    -1,    33,    34,
      22,    23,    -1,    -1,    39,    -1,    78,    -1,    56,    -1,
      -1,    33,    34,    -1,    -1,    -1,    64,    39,    -1,    67,
      -1,    56,    -1,    -1,    22,    23,    -1,    -1,    -1,    64,
      78,    -1,    67,    -1,    56,    33,    34,    22,    23,    -1,
      -1,    39,    64,    78,    -1,    67,    -1,    -1,    33,    34,
      22,    23,    -1,    -1,    39,    -1,    78,    -1,    56,    -1,
      -1,    33,    34,    -1,    -1,    -1,    64,    39,    -1,    67,
      -1,    56,    -1,    -1,    22,    23,    -1,    -1,    -1,    64,
      78,    -1,    67,    -1,    56,    33,    34,    22,    23,    -1,
      -1,    39,    64,    78,    -1,    67,    -1,    -1,    33,    34,
      -1,    -1,    -1,    14,    39,    -1,    78,    -1,    56,    -1,
      -1,    22,    23,    -1,    -1,    -1,    64,    -1,    -1,    67,
      -1,    56,    33,    34,    -1,    -1,    -1,    -1,    39,    64,
      78,    -1,    67,    15,    16,    -1,    -1,    19,    -1,    -1,
      22,    23,    -1,    78,    -1,    56,    -1,    15,    16,    -1,
      -1,    33,    34,    64,    22,    23,    67,    39,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    33,    34,    22,    23,    -1,
      -1,    39,    -1,    -1,    56,    -1,    -1,    -1,    33,    34,
      -1,    63,    64,    19,    39,    67,    22,    23,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    33,    34,    67,
      -1,    56,    -1,    39,    -1,    -1,    -1,    -1,    -1,    64,
       3,     4,    67,    -1,    -1,     8,     9,    10,    11,    12,
      56,    -1,    -1,    -1,    -1,    18,    -1,    63,    64,     3,
       4,    67,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      14,     3,     4,    -1,    -1,    -1,     8,     9,    10,    11,
      12,     3,     4,    -1,    -1,    -1,    -1,     9,    10,    11,
      12
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    52,    70,    83,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     5,     6,    13,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    35,    36,    37,    38,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    57,    58,    60,    67,    68,    69,    70,    72,    99,
     101,   102,   105,   106,   101,    78,     0,    71,    84,    89,
      90,    88,    87,    89,    91,    76,    77,   101,    67,   101,
      67,    67,    67,    67,    67,    67,    67,    67,    13,    60,
      67,   105,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    70,   108,   109,
     101,   105,    67,    73,    74,    75,     3,     4,     8,     9,
      10,    11,    12,    76,    19,    22,    23,    33,    34,    39,
      56,    63,    64,    67,    76,    92,    76,    87,    76,    21,
      53,    54,    95,    96,    97,    98,    70,    94,    14,    72,
      72,   105,    72,    72,    72,    72,    72,   101,   108,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   101,   105,   105,    63,    77,    59,    78,    79,
      79,   105,   101,   101,   101,   101,   101,   101,   101,   105,
      72,    72,   105,   105,   105,   105,    64,   107,   105,    72,
     105,   105,    67,    96,    63,    77,    76,   101,   105,    78,
      78,    79,    78,    78,    78,    78,    78,    14,    59,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    78,    78,   101,   105,    95,   101,   105,   109,
      79,   105,    77,    81,    79,    72,    55,   101,   105,    95,
      68,    15,    16,   103,    15,    16,   100,   104,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,    72,
      72,    63,    81,    72,    79,    96,    76,   101,   101,   105,
     105,    78,    79,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,   101,   105,    20,    81,    68,    18,    14,
      18,    14,   105,   105,   105,   105,   105,   105,   105,   105,
      76,   101,   105,    79,    79,    79,    79,    79,    79,    68,
     103,   100,    76,    79,     7,    65,   101,   101,    79,    80,
      65,   101,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    84,    85,    85,    85,    85,    86,
      86,    86,    87,    87,    88,    89,    90,    90,    91,    91,
      91,    92,    92,    93,    94,    95,    95,    95,    96,    97,
      98,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   107,   107,   108,   108,   109,   109,   109,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     2,     2,     2,
       1,     3,     1,     2,     3,     3,     2,     3,     3,     5,
       5,     1,     3,     1,     3,     1,     1,     1,     4,     1,
       4,     5,     3,     5,     3,     1,     4,     6,     3,     3,
      16,    13,     2,     3,     3,     3,     3,     3,     3,     3,
       6,     6,     6,     6,     6,     6,     6,     6,     1,     1,
       1,     4,     5,     3,     5,     1,     3,     1,     3,     1,
       4,     2,     2,     2,     4,     4,     6,     2,     3,     3,
       6,     6,     6,     6,     6,     3,     3,     3,     3,     6,
       8,     4,     8,     8,     8,     8,     8,     1,     1,     4,
       3,     5,     7,     1,     3,     3,     5,     3,     5
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
#line 179 "CVC.y" /* yacc.c:1646  */
    {
  parserInterface->letMgr._parser_symbol_table.clear();
}
#line 1821 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 183 "CVC.y" /* yacc.c:1646  */
    {
  parserInterface->letMgr._parser_symbol_table.clear(); 
}
#line 1829 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 189 "CVC.y" /* yacc.c:1646  */
    {
  parserInterface->getUserFlags().print_counterexample_flag = true;
  (GlobalSTP->Ctr_Example)->PrintCounterExample(true);
}
#line 1838 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 211 "CVC.y" /* yacc.c:1646  */
    { 
  ((ASTVec*)AssertsQuery)->push_back(parserInterface->CreateNode(TRUE));
  ((ASTVec*)AssertsQuery)->push_back(*(yyvsp[0].node));                       
  delete (yyvsp[0].node);
}
#line 1848 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 217 "CVC.y" /* yacc.c:1646  */
    { 
  ((ASTVec*)AssertsQuery)->push_back(parserInterface->CreateNode(TRUE));
  ((ASTVec*)AssertsQuery)->push_back(*(yyvsp[0].node));
  delete (yyvsp[0].node);
}
#line 1858 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 223 "CVC.y" /* yacc.c:1646  */
    {
  ASTVec aaa = parserInterface->GetAsserts();
  if(aaa.size() == 0)
    {
      yyerror("Fatal Error: parsing:  GetAsserts() call: no assertions: ");
    }

  ASTNode asserts = 
    aaa.size() == 1 ? 
    aaa[0] :
    parserInterface->CreateNode(AND, aaa);
  ((ASTVec*)AssertsQuery)->push_back(asserts);
  ((ASTVec*)AssertsQuery)->push_back(*(yyvsp[0].node));
  delete (yyvsp[0].node);
}
#line 1878 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 241 "CVC.y" /* yacc.c:1646  */
    {
  delete (yyvsp[0].vec);
}
#line 1886 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 245 "CVC.y" /* yacc.c:1646  */
    {
  delete (yyvsp[0].vec);
}
#line 1894 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 249 "CVC.y" /* yacc.c:1646  */
    {
  delete (yyvsp[0].vec);
}
#line 1902 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 269 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec;
  (yyval.vec)->push_back(*(yyvsp[0].node));
  parserInterface->AddAssert(*(yyvsp[0].node));
  delete (yyvsp[0].node);
}
#line 1913 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 276 "CVC.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].vec)->push_back(*(yyvsp[0].node));
  parserInterface->AddAssert(*(yyvsp[0].node));
  (yyval.vec) = (yyvsp[-1].vec);
  delete (yyvsp[0].node);
}
#line 1924 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 284 "CVC.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1930 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 287 "CVC.y" /* yacc.c:1646  */
    { parserInterface->AddQuery(*(yyvsp[-1].node)); (yyval.node) = (yyvsp[-1].node);}
#line 1936 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 293 "CVC.y" /* yacc.c:1646  */
    {
}
#line 1943 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 296 "CVC.y" /* yacc.c:1646  */
    {
}
#line 1950 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 301 "CVC.y" /* yacc.c:1646  */
    {
  for(ASTVec::iterator i=(yyvsp[-2].vec)->begin(),iend=(yyvsp[-2].vec)->end();i!=iend;i++) {
    parserInterface->letMgr._parser_symbol_table.insert(*i);
    i->SetIndexWidth((yyvsp[0].indexvaluewidth).indexwidth);
    i->SetValueWidth((yyvsp[0].indexvaluewidth).valuewidth);
    ParserBM->ListOfDeclaredVars.push_back(*i);
  }
  delete (yyvsp[-2].vec);
}
#line 1964 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 311 "CVC.y" /* yacc.c:1646  */
    {
  //do type checking. if doesn't pass then abort
  BVTypeCheck(*(yyvsp[0].node));
  if((yyvsp[-2].indexvaluewidth).indexwidth != (yyvsp[0].node)->GetIndexWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
  if((yyvsp[-2].indexvaluewidth).valuewidth != (yyvsp[0].node)->GetValueWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
                         
  for(ASTVec::iterator i=(yyvsp[-4].vec)->begin(),iend=(yyvsp[-4].vec)->end();i!=iend;i++) {                         
    //set the valuewidth of the identifier
    i->SetValueWidth((yyvsp[0].node)->GetValueWidth());
    i->SetIndexWidth((yyvsp[0].node)->GetIndexWidth());
                           
    parserInterface->letMgr.LetExprMgr(*i,*(yyvsp[0].node));
  }
    delete (yyvsp[0].node);
    delete (yyvsp[-4].vec);
}
#line 1987 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 330 "CVC.y" /* yacc.c:1646  */
    {
  //do type checking. if doesn't pass then abort
  BVTypeCheck(*(yyvsp[0].node));
  if((yyvsp[-2].indexvaluewidth).indexwidth != (yyvsp[0].node)->GetIndexWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
  if((yyvsp[-2].indexvaluewidth).valuewidth != (yyvsp[0].node)->GetValueWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
                         
  for(ASTVec::iterator i=(yyvsp[-4].vec)->begin(),iend=(yyvsp[-4].vec)->end();i!=iend;i++) {                         
    //set the valuewidth of the identifier
    i->SetValueWidth((yyvsp[0].node)->GetValueWidth());
    i->SetIndexWidth((yyvsp[0].node)->GetIndexWidth());
                           
    parserInterface->letMgr.LetExprMgr(*i,*(yyvsp[0].node));
  }
  delete (yyvsp[0].node);
  delete (yyvsp[-4].vec);
}
#line 2010 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 351 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec;                      
  (yyval.vec)->push_back(*(yyvsp[0].node));
  delete (yyvsp[0].node);
}
#line 2020 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 357 "CVC.y" /* yacc.c:1646  */
    {
  (yyvsp[0].vec)->push_back(*(yyvsp[-2].node));
  (yyval.vec) = (yyvsp[0].vec);
  delete (yyvsp[-2].node);
}
#line 2030 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 365 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec((yyvsp[0].vec)->rbegin(),(yyvsp[0].vec)->rend());
  delete (yyvsp[0].vec);
}
#line 2039 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 372 "CVC.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].node)->SetIndexWidth((yyvsp[0].indexvaluewidth).indexwidth);
  (yyvsp[-2].node)->SetValueWidth((yyvsp[0].indexvaluewidth).valuewidth);
  parserInterface->letMgr._parser_symbol_table.insert(*(yyvsp[-2].node));
  (yyval.node) = (yyvsp[-2].node);                      
}
#line 2050 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 380 "CVC.y" /* yacc.c:1646  */
    { (yyval.indexvaluewidth) = (yyvsp[0].indexvaluewidth); }
#line 2056 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 381 "CVC.y" /* yacc.c:1646  */
    { (yyval.indexvaluewidth) = (yyvsp[0].indexvaluewidth); }
#line 2062 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 382 "CVC.y" /* yacc.c:1646  */
    { (yyval.indexvaluewidth) = (yyvsp[0].indexvaluewidth); }
#line 2068 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 386 "CVC.y" /* yacc.c:1646  */
    {
  /*((indexwidth is 0) && (valuewidth>0)) iff type is BV*/
  (yyval.indexvaluewidth).indexwidth = 0;
  unsigned int length = (yyvsp[-1].uintval);
  if(length > 0) {
    (yyval.indexvaluewidth).valuewidth = length;
  }
  else
    FatalError("Fatal Error: parsing: BITVECTORS must be of positive length: \n");
}
#line 2083 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 398 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.indexvaluewidth).indexwidth = 0;
  (yyval.indexvaluewidth).valuewidth = 0;
}
#line 2092 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 404 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.indexvaluewidth).indexwidth = (yyvsp[-2].indexvaluewidth).valuewidth;
  (yyval.indexvaluewidth).valuewidth = (yyvsp[0].indexvaluewidth).valuewidth;
}
#line 2101 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 412 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-1].node)->GetValueWidth();
  if (width != (yyvsp[0].node)->GetValueWidth())
    yyerror("Width mismatch in IF-THEN-ELSE");                   
  if((yyvsp[-1].node)->GetIndexWidth() != (yyvsp[0].node)->GetIndexWidth())
    yyerror("Width mismatch in IF-THEN-ELSE");

  BVTypeCheck(*(yyvsp[-3].node));
  BVTypeCheck(*(yyvsp[-1].node));
  BVTypeCheck(*(yyvsp[0].node));
  (yyval.node) = new ASTNode(parserInterface->nf->CreateArrayTerm(ITE,(yyvsp[0].node)->GetIndexWidth(), width, *(yyvsp[-3].node), *(yyvsp[-1].node), *(yyvsp[0].node)));
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2121 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 429 "CVC.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2127 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 431 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-3].node)->GetValueWidth();
  if (width != (yyvsp[-1].node)->GetValueWidth() || width != (yyvsp[0].node)->GetValueWidth())
    yyerror("Width mismatch in IF-THEN-ELSE");
  if ((yyvsp[-3].node)->GetIndexWidth() != (yyvsp[-1].node)->GetValueWidth() || (yyvsp[-3].node)->GetIndexWidth() != (yyvsp[0].node)->GetValueWidth())
    yyerror("Width mismatch in IF-THEN-ELSE");

  BVTypeCheck(*(yyvsp[-3].node));
  BVTypeCheck(*(yyvsp[-1].node));
  BVTypeCheck(*(yyvsp[0].node));                     
  (yyval.node) = new ASTNode(parserInterface->nf->CreateArrayTerm(ITE, (yyvsp[0].node)->GetIndexWidth(), width, *(yyvsp[-3].node), *(yyvsp[-1].node), *(yyvsp[0].node)));
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2147 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 450 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-1].node); 
}
#line 2155 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 454 "CVC.y" /* yacc.c:1646  */
    {  
  (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[0].node))); delete (yyvsp[0].node);
}
#line 2163 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 458 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(PARAMBOOL,*(yyvsp[-3].node),*(yyvsp[-1].node)));
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2173 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 464 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-3].node)->GetValueWidth();
  if(width <= (unsigned)(yyvsp[-1].uintval))
    yyerror("Fatal Error: BOOLEXTRACT: trying to boolextract a bit which beyond range");
                         
  ASTNode hi  =  parserInterface->CreateBVConst(32, (yyvsp[-1].uintval));
  ASTNode low =  parserInterface->CreateBVConst(32, (yyvsp[-1].uintval));
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVEXTRACT,1,*(yyvsp[-3].node),hi,low));
  ASTNode one = parserInterface->CreateBVConst(1,1);                   
  ASTNode * out = new ASTNode(parserInterface->nf->CreateNode(EQ,*n,one));


  (yyval.node) = out;
  delete (yyvsp[-3].node);
}
#line 2193 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 480 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(EQ, *(yyvsp[-2].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2204 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 487 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(NOT, parserInterface->nf->CreateNode(EQ, *(yyvsp[-2].node), *(yyvsp[0].node))));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2215 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 494 "CVC.y" /* yacc.c:1646  */
    {
  //Allows a compact representation of
  //parameterized set of formulas (bounded
  //universal quantification)
  //
  //parameter name (a variable)
  //
  //initial value (BVCONST)
  //
  //limit value (BVCONST)
  //
  //increment value (BVCONST)
  //
  //formula (it can be a nested forloop)                         
                           
  ASTVec vec;
  vec.push_back(*(yyvsp[-13].node));
  vec.push_back(*(yyvsp[-11].node));
  vec.push_back(*(yyvsp[-9].node));
  vec.push_back(*(yyvsp[-7].node));
  vec.push_back(*(yyvsp[-4].node));
  vec.push_back(*(yyvsp[-1].node));
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(FOR,vec));
  (yyval.node) = n;
  delete (yyvsp[-13].node);
  delete (yyvsp[-11].node);
  delete (yyvsp[-9].node);
  delete (yyvsp[-7].node);
  delete (yyvsp[-4].node);                  
  delete (yyvsp[-1].node);
}
#line 2251 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 526 "CVC.y" /* yacc.c:1646  */
    {
  //Allows a compact representation of
  //parameterized set of formulas (bounded
  //universal quantification)
  //
  //parameter name (a variable)
  //
  //initial value (BVCONST)
  //
  //limit value (BVCONST)
  //
  //increment value (BVCONST)
  //
  //formula (it can be a nested forloop)                         
                           
  ASTVec vec;
  vec.push_back(*(yyvsp[-10].node));
  vec.push_back(*(yyvsp[-8].node));
  vec.push_back(*(yyvsp[-6].node));
  vec.push_back(*(yyvsp[-4].node));
  vec.push_back(parserInterface->CreateNode(FALSE));
  vec.push_back(*(yyvsp[-1].node));
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(FOR,vec));
  (yyval.node) = n;
  delete (yyvsp[-10].node);
  delete (yyvsp[-8].node);
  delete (yyvsp[-6].node);
  delete (yyvsp[-4].node);
  delete (yyvsp[-1].node);
}
#line 2286 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 557 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(NOT, *(yyvsp[0].node)));
  delete (yyvsp[0].node);
}
#line 2295 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 562 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(OR, *(yyvsp[-2].node), *(yyvsp[0].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2305 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 568 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(NOR, *(yyvsp[-2].node), *(yyvsp[0].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2315 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 574 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(AND, *(yyvsp[-2].node), *(yyvsp[0].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2325 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 580 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(NAND, *(yyvsp[-2].node), *(yyvsp[0].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2335 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 586 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(IMPLIES, *(yyvsp[-2].node), *(yyvsp[0].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2345 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 592 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(IFF, *(yyvsp[-2].node), *(yyvsp[0].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2355 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 598 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(XOR, *(yyvsp[-2].node), *(yyvsp[0].node)));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2365 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 604 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVLT, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2376 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 611 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVGT, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2387 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 618 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVLE, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2398 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 625 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVGE, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2409 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 632 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSLT, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2420 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 639 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSGT, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2431 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 646 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSLE, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2442 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 653 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSGE, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2453 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 661 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->CreateNode(TRUE)); 
  (yyval.node)->SetIndexWidth(0); 
  (yyval.node)->SetValueWidth(0);
}
#line 2463 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 667 "CVC.y" /* yacc.c:1646  */
    { 
  (yyval.node) = new ASTNode(parserInterface->CreateNode(FALSE)); 
  (yyval.node)->SetIndexWidth(0); 
  (yyval.node)->SetValueWidth(0);
}
#line 2473 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 674 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[0].node);
  //Cleanup the LetIDToExprMap
  parserInterface->letMgr.CleanupLetIDMap();
}
#line 2483 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 683 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(ITE, *(yyvsp[-3].node), *(yyvsp[-1].node), *(yyvsp[0].node)));
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2494 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 691 "CVC.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2500 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 693 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(ITE, *(yyvsp[-3].node), *(yyvsp[-1].node), *(yyvsp[0].node)));
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
  delete (yyvsp[0].node);
}
#line 2511 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 703 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.vec) = new ASTVec;
  BVTypeCheck(*(yyvsp[0].node));
  (yyval.vec)->push_back(*(yyvsp[0].node));
  delete (yyvsp[0].node);
}
#line 2522 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 710 "CVC.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].vec)->push_back(*(yyvsp[0].node));
  BVTypeCheck(*(yyvsp[0].node));
  (yyval.vec) = (yyvsp[-2].vec); 
  delete (yyvsp[0].node);
}
#line 2533 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 719 "CVC.y" /* yacc.c:1646  */
    { (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[0].node))); delete (yyvsp[0].node);}
#line 2539 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 720 "CVC.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2545 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 721 "CVC.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2551 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 723 "CVC.y" /* yacc.c:1646  */
    {
  BVTypeCheck(*(yyvsp[-1].node));
  ASTNode one = parserInterface->CreateBVConst(1,1);
  ASTNode zero = parserInterface->CreateBVConst(1,0);

  //return ITE(*$3, length(1), 0bin1, 0bin0)
  (yyval.node) = new ASTNode(parserInterface->nf->CreateTerm(ITE,1,*(yyvsp[-1].node),one,zero));
  delete (yyvsp[-1].node);
}
#line 2565 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 733 "CVC.y" /* yacc.c:1646  */
    { 
  std::string* vals = new std::string((yyvsp[0].str));
  (yyval.node) = new ASTNode(parserInterface->CreateBVConst(vals, 2, (yyvsp[-1].uintval)));
  free((yyvsp[0].str)); delete vals;
}
#line 2575 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 739 "CVC.y" /* yacc.c:1646  */
    { 
  std::string* vals = new std::string((yyvsp[0].str));
  (yyval.node) = new ASTNode(parserInterface->CreateBVConst(vals, 10, (yyvsp[-1].uintval)));
  free((yyvsp[0].str)); delete vals;
}
#line 2585 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 745 "CVC.y" /* yacc.c:1646  */
    { 
  std::string* vals = new std::string((yyvsp[0].str));
  (yyval.node) = new ASTNode(parserInterface->CreateBVConst(vals, 16, (yyvsp[-1].uintval)));
  free((yyvsp[0].str)); delete vals;
}
#line 2595 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 751 "CVC.y" /* yacc.c:1646  */
    {                        
  // valuewidth is same as array, indexwidth is 0.
  unsigned int width = (yyvsp[-3].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(READ, width, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2609 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 761 "CVC.y" /* yacc.c:1646  */
    {
  // valuewidth is same as array, indexwidth is 0.
  unsigned int width = (yyvsp[-3].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(READ, width, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2623 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 771 "CVC.y" /* yacc.c:1646  */
    {
  int width = (yyvsp[-3].uintval) - (yyvsp[-1].uintval) + 1;
  if (width < 0)
    yyerror("Negative width in extract");
                         
  if((unsigned)(yyvsp[-3].uintval) >= (yyvsp[-5].node)->GetValueWidth())
    yyerror("Parsing: Wrong width in BVEXTRACT\n");                      

  ASTNode hi  =  parserInterface->CreateBVConst(32, (yyvsp[-3].uintval));
  ASTNode low =  parserInterface->CreateBVConst(32, (yyvsp[-1].uintval));
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVEXTRACT, width, *(yyvsp[-5].node),hi,low));
  (yyval.node) = n;
  delete (yyvsp[-5].node);
}
#line 2642 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 786 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[0].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNEG, width, *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[0].node);
}
#line 2653 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 793 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-2].node)->GetValueWidth();
  if (width != (yyvsp[0].node)->GetValueWidth()) {
    yyerror("Width mismatch in AND");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVAND, width, *(yyvsp[-2].node), *(yyvsp[0].node)));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2668 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 804 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-2].node)->GetValueWidth();
  if (width != (yyvsp[0].node)->GetValueWidth()) {
    yyerror("Width mismatch in OR");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVOR, width, *(yyvsp[-2].node), *(yyvsp[0].node))); 
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2683 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 815 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-3].node)->GetValueWidth();
  if (width != (yyvsp[-1].node)->GetValueWidth()) {
    yyerror("Width mismatch in XOR");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVXOR, width, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2698 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 826 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-3].node)->GetValueWidth();
  if (width != (yyvsp[-1].node)->GetValueWidth()) {
    yyerror("Width mismatch in NAND");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNAND, width, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2714 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 838 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-3].node)->GetValueWidth();
  if (width != (yyvsp[-1].node)->GetValueWidth()) {
    yyerror("Width mismatch in NOR");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNOR, width, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2730 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 850 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-3].node)->GetValueWidth();
  if (width != (yyvsp[-1].node)->GetValueWidth()) {
    yyerror("Width mismatch in NOR");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVXNOR, width, *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2746 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 862 "CVC.y" /* yacc.c:1646  */
    {
  //width of the expr which is being sign
  //extended. $5 is the resulting length of the
  //signextended expr
  BVTypeCheck(*(yyvsp[-3].node));
  if((yyvsp[-3].node)->GetValueWidth() == (yyvsp[-1].uintval)) {
    (yyval.node) = (yyvsp[-3].node);
  }
  else {
    ASTNode width = parserInterface->CreateBVConst(32,(yyvsp[-1].uintval));
    ASTNode *n =  
      new ASTNode(parserInterface->nf->CreateTerm(BVSX, (yyvsp[-1].uintval),*(yyvsp[-3].node),width));
    (yyval.node) = n;
    delete (yyvsp[-3].node);
  }
}
#line 2767 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 879 "CVC.y" /* yacc.c:1646  */
    {
  unsigned int width = (yyvsp[-2].node)->GetValueWidth() + (yyvsp[0].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT, width, *(yyvsp[-2].node), *(yyvsp[0].node)));
  (yyval.node) = n;
                         
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2780 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 888 "CVC.y" /* yacc.c:1646  */
    {
  if (0 == (yyvsp[0].uintval))
  	{
  	(yyval.node) = (yyvsp[-2].node);
  	}
  else
  {
  ASTNode zero_bits = parserInterface->CreateZeroConst((yyvsp[0].uintval));
  ASTNode * n = 
    new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT,
                                     (yyvsp[-2].node)->GetValueWidth() + (yyvsp[0].uintval), *(yyvsp[-2].node), zero_bits));
  (yyval.node) = n;
  delete (yyvsp[-2].node);
  }
}
#line 2800 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 968 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode len = parserInterface->CreateZeroConst((yyvsp[0].uintval));
  unsigned int w = (yyvsp[-2].node)->GetValueWidth();

  //the amount by which you are rightshifting
  //is less-than/equal-to the length of input
  //bitvector
  if((unsigned)(yyvsp[0].uintval) < w) {
    ASTNode hi = parserInterface->CreateBVConst(32,w-1);
    ASTNode low = parserInterface->CreateBVConst(32,(yyvsp[0].uintval));
    ASTNode extract = parserInterface->nf->CreateTerm(BVEXTRACT,w-(yyvsp[0].uintval),*(yyvsp[-2].node),hi,low);
    ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT, w,len, extract));
    (yyval.node) = n;
  }
  else
    (yyval.node) = new ASTNode(parserInterface->CreateZeroConst(w));

  delete (yyvsp[-2].node);
}
#line 2824 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 988 "CVC.y" /* yacc.c:1646  */
    {
  // VARIABLE RIGHT SHIFT
  //
  // $1 (THEEXPR) is being shifted
  //
  // $3 is the variable shift amount
  unsigned int width = (yyvsp[-2].node)->GetValueWidth();
  ASTNode * ret = new ASTNode(parserInterface->nf->CreateTerm(BVRIGHTSHIFT, width, *(yyvsp[-2].node), *(yyvsp[0].node)));
  BVTypeCheck(*ret);
  //cout << *ret;

  (yyval.node) = ret;
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 2844 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1004 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVPLUS, (yyvsp[-3].uintval), *(yyvsp[-1].vec)));
  (yyval.node) = n;

  delete (yyvsp[-1].vec);
}
#line 2855 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1011 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVSUB, (yyvsp[-5].uintval), *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2867 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1019 "CVC.y" /* yacc.c:1646  */
    {
  unsigned width = (yyvsp[-1].node)->GetValueWidth();
  ASTNode * n =  new ASTNode(parserInterface->nf->CreateTerm(BVUMINUS,width,*(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-1].node);
}
#line 2878 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1026 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVMULT, (yyvsp[-5].uintval), *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2890 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1034 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVDIV, (yyvsp[-5].uintval), *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2902 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1042 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVMOD, (yyvsp[-5].uintval), *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2914 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1050 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVDIV, (yyvsp[-5].uintval), *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;

  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2926 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1058 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVREM, (yyvsp[-5].uintval), *(yyvsp[-3].node), *(yyvsp[-1].node)));
  (yyval.node) = n;
  delete (yyvsp[-3].node);
  delete (yyvsp[-1].node);
}
#line 2937 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1064 "CVC.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2943 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1067 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[0].node);
}
#line 2951 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1074 "CVC.y" /* yacc.c:1646  */
    {
  ASTNode * result;
  unsigned int width = (yyvsp[-2].node)->GetValueWidth();

  ASTNodeMap::iterator it = (yyvsp[0].Index_To_UpdateValue)->begin();
  ASTNodeMap::iterator itend = (yyvsp[0].Index_To_UpdateValue)->end();
  result = new ASTNode(parserInterface->nf->CreateArrayTerm(WRITE,
                                            (yyvsp[-2].node)->GetIndexWidth(),
                                            width,
                                            *(yyvsp[-2].node),
                                            (*it).first,
                                            (*it).second));
  BVTypeCheck(*result);
  for(it++;it!=itend;it++) {
    result = new ASTNode(parserInterface->nf->CreateArrayTerm(WRITE,
                                              (yyvsp[-2].node)->GetIndexWidth(),
                                              width,
                                              *result,
                                              (*it).first,
                                              (*it).second));
    BVTypeCheck(*result);
  }
  BVTypeCheck(*result);
  (yyval.node) = result;
  delete (yyvsp[0].Index_To_UpdateValue);
  delete (yyvsp[-2].node);
}
#line 2983 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1104 "CVC.y" /* yacc.c:1646  */
    {
  (yyval.Index_To_UpdateValue) = new ASTNodeMap();
  (*(yyval.Index_To_UpdateValue))[*(yyvsp[-3].node)] = *(yyvsp[0].node);         
  delete (yyvsp[-3].node);
  delete (yyvsp[0].node);        
}
#line 2994 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1111 "CVC.y" /* yacc.c:1646  */
    {                   
  (*(yyvsp[-6].Index_To_UpdateValue))[*(yyvsp[-3].node)] = *(yyvsp[0].node);
  delete (yyvsp[-3].node);
  delete (yyvsp[0].node);
}
#line 3004 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1124 "CVC.y" /* yacc.c:1646  */
    {
  //Expr must typecheck
  BVTypeCheck(*(yyvsp[0].node));

  //set the valuewidth of the identifier
  (yyvsp[-2].node)->SetValueWidth((yyvsp[0].node)->GetValueWidth());
  (yyvsp[-2].node)->SetIndexWidth((yyvsp[0].node)->GetIndexWidth());

  //populate the hashtable from LET-var -->
  //LET-exprs and then process them:
  //
  //1. ensure that LET variables do not clash
  //1. with declared variables.
  //
  //2. Ensure that LET variables are not
  //2. defined more than once
  parserInterface->letMgr.LetExprMgr(*(yyvsp[-2].node),*(yyvsp[0].node));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 3029 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1145 "CVC.y" /* yacc.c:1646  */
    {
  //do type checking. if doesn't pass then abort
  BVTypeCheck(*(yyvsp[0].node));
                          
  if((yyvsp[-2].indexvaluewidth).indexwidth != (yyvsp[0].node)->GetIndexWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
  if((yyvsp[-2].indexvaluewidth).valuewidth != (yyvsp[0].node)->GetValueWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");

  //set the valuewidth of the identifier
  (yyvsp[-4].node)->SetValueWidth((yyvsp[0].node)->GetValueWidth());
  (yyvsp[-4].node)->SetIndexWidth((yyvsp[0].node)->GetIndexWidth());

  parserInterface->letMgr.LetExprMgr(*(yyvsp[-4].node),*(yyvsp[0].node));
  delete (yyvsp[-4].node);
  delete (yyvsp[0].node);
}
#line 3051 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1163 "CVC.y" /* yacc.c:1646  */
    {
  //Expr must typecheck
  BVTypeCheck(*(yyvsp[0].node));

  //set the valuewidth of the identifier
  (yyvsp[-2].node)->SetValueWidth((yyvsp[0].node)->GetValueWidth());
  (yyvsp[-2].node)->SetIndexWidth((yyvsp[0].node)->GetIndexWidth());

  //Do LET-expr management
  parserInterface->letMgr.LetExprMgr(*(yyvsp[-2].node),*(yyvsp[0].node));
  delete (yyvsp[-2].node);
  delete (yyvsp[0].node);
}
#line 3069 "cvc.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1177 "CVC.y" /* yacc.c:1646  */
    {
  //do type checking. if doesn't pass then abort
  BVTypeCheck(*(yyvsp[0].node));

  if((yyvsp[-2].indexvaluewidth).indexwidth != (yyvsp[0].node)->GetIndexWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
  if((yyvsp[-2].indexvaluewidth).valuewidth != (yyvsp[0].node)->GetValueWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");

  //set the valuewidth of the identifier
  (yyvsp[-4].node)->SetValueWidth((yyvsp[0].node)->GetValueWidth());
  (yyvsp[-4].node)->SetIndexWidth((yyvsp[0].node)->GetIndexWidth());

  //Do LET-expr management
  parserInterface->letMgr.LetExprMgr(*(yyvsp[-4].node),*(yyvsp[0].node));
  delete (yyvsp[-4].node);
  delete (yyvsp[0].node);
}
#line 3092 "cvc.tab.c" /* yacc.c:1646  */
    break;


#line 3096 "cvc.tab.c" /* yacc.c:1646  */
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
#line 1197 "CVC.y" /* yacc.c:1906  */

