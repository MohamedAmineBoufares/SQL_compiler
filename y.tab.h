/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    NUM = 259,
    SELECT = 260,
    FROM = 261,
    DISTINCT = 262,
    WHERE = 263,
    GROUP = 264,
    HAVING = 265,
    ORDER = 266,
    DESC = 267,
    ASC = 268,
    CREATE = 269,
    TABLE = 270,
    DROP = 271,
    DELETE = 272,
    AND = 273,
    OR = 274,
    LE = 275,
    GE = 276,
    EQ = 277,
    DIF = 278,
    INT = 279,
    VARCHAR = 280
  };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define SELECT 260
#define FROM 261
#define DISTINCT 262
#define WHERE 263
#define GROUP 264
#define HAVING 265
#define ORDER 266
#define DESC 267
#define ASC 268
#define CREATE 269
#define TABLE 270
#define DROP 271
#define DELETE 272
#define AND 273
#define OR 274
#define LE 275
#define GE 276
#define EQ 277
#define DIF 278
#define INT 279
#define VARCHAR 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
