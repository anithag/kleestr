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
#line 82 "smtlib2.y" /* yacc.c:1909  */
  
  unsigned uintval;                  /* for numerals in types. */
  //ASTNode,ASTVec
  BEEV::ASTNode *node;
  BEEV::ASTVec *vec;
  std::string *str;

#line 220 "smt2.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE smt2lval;

int smt2parse (void* AssertsQuery);

#endif /* !YY_SMT2_SMT2_TAB_H_INCLUDED  */
