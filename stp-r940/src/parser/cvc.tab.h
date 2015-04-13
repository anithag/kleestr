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
#line 39 "CVC.y" /* yacc.c:1909  */


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

#line 216 "cvc.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE cvclval;

int cvcparse (void* AssertsQuery);

#endif /* !YY_CVC_CVC_TAB_H_INCLUDED  */
