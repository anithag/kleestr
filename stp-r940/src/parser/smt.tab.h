/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 69 "smtlib.y" /* yacc.c:1909  */
  
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

#line 282 "smt.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE smtlval;

int smtparse (void* AssertsQuery);

#endif /* !YY_SMT_SMT_TAB_H_INCLUDED  */
