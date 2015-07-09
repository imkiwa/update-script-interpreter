#pragma once

#include "expr.h"

extern int gLine;
extern int gColumn;

void yyerror(Expr** root, int* error_count, const char* s);
int yyparse(Expr** root, int* error_count);

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
# define YYERROR_VERBOSE 1
#endif


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
    AND = 258,
    OR = 259,
    SUBSTR = 260,
    SUPERSTR = 261,
    EQ = 262,
    NE = 263,
    IF = 264,
    THEN = 265,
    ELSE = 266,
    ENDIF = 267,
    STRING = 268,
    BAD = 269
  };
#endif
/* Tokens.  */
#define AND 258
#define OR 259
#define SUBSTR 260
#define SUPERSTR 261
#define EQ 262
#define NE 263
#define IF 264
#define THEN 265
#define ELSE 266
#define ENDIF 267
#define STRING 268
#define BAD 269

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 36 "parser.y" /* yacc.c:355  */

    char* str;
    Expr* expr;
    struct {
        int argc;
        Expr** argv;
    } args;

#line 173 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (Expr** root, int* error_count);
