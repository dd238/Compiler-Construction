/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _ERROR_ = 258,
     _SYMB_0 = 259,
     _SYMB_1 = 260,
     _SYMB_2 = 261,
     _SYMB_3 = 262,
     _SYMB_4 = 263,
     _SYMB_5 = 264,
     _SYMB_6 = 265,
     _SYMB_7 = 266,
     _SYMB_8 = 267,
     _SYMB_9 = 268,
     _SYMB_10 = 269,
     _SYMB_11 = 270,
     _SYMB_12 = 271,
     _SYMB_13 = 272,
     _SYMB_14 = 273,
     _SYMB_15 = 274,
     _SYMB_16 = 275,
     _SYMB_17 = 276,
     _SYMB_18 = 277,
     _SYMB_19 = 278,
     _SYMB_20 = 279,
     _SYMB_21 = 280,
     _SYMB_22 = 281,
     _SYMB_23 = 282,
     _SYMB_24 = 283,
     _SYMB_25 = 284,
     _SYMB_26 = 285,
     _SYMB_27 = 286,
     _SYMB_28 = 287,
     _SYMB_29 = 288,
     _SYMB_30 = 289,
     _SYMB_31 = 290,
     _SYMB_32 = 291,
     _SYMB_33 = 292,
     _SYMB_34 = 293,
     _SYMB_35 = 294,
     _SYMB_36 = 295,
     _SYMB_37 = 296,
     _SYMB_38 = 297,
     _SYMB_39 = 298,
     _SYMB_40 = 299,
     _SYMB_41 = 300,
     _SYMB_42 = 301,
     _SYMB_43 = 302,
     _SYMB_44 = 303,
     _SYMB_45 = 304,
     _SYMB_46 = 305,
     _SYMB_47 = 306,
     _SYMB_48 = 307,
     _SYMB_49 = 308,
     _SYMB_50 = 309,
     _STRING_ = 310,
     _CHAR_ = 311,
     _INTEGER_ = 312
   };
#endif
/* Tokens.  */
#define _ERROR_ 258
#define _SYMB_0 259
#define _SYMB_1 260
#define _SYMB_2 261
#define _SYMB_3 262
#define _SYMB_4 263
#define _SYMB_5 264
#define _SYMB_6 265
#define _SYMB_7 266
#define _SYMB_8 267
#define _SYMB_9 268
#define _SYMB_10 269
#define _SYMB_11 270
#define _SYMB_12 271
#define _SYMB_13 272
#define _SYMB_14 273
#define _SYMB_15 274
#define _SYMB_16 275
#define _SYMB_17 276
#define _SYMB_18 277
#define _SYMB_19 278
#define _SYMB_20 279
#define _SYMB_21 280
#define _SYMB_22 281
#define _SYMB_23 282
#define _SYMB_24 283
#define _SYMB_25 284
#define _SYMB_26 285
#define _SYMB_27 286
#define _SYMB_28 287
#define _SYMB_29 288
#define _SYMB_30 289
#define _SYMB_31 290
#define _SYMB_32 291
#define _SYMB_33 292
#define _SYMB_34 293
#define _SYMB_35 294
#define _SYMB_36 295
#define _SYMB_37 296
#define _SYMB_38 297
#define _SYMB_39 298
#define _SYMB_40 299
#define _SYMB_41 300
#define _SYMB_42 301
#define _SYMB_43 302
#define _SYMB_44 303
#define _SYMB_45 304
#define _SYMB_46 305
#define _SYMB_47 306
#define _SYMB_48 307
#define _SYMB_49 308
#define _SYMB_50 309
#define _STRING_ 310
#define _CHAR_ 311
#define _INTEGER_ 312




/* Copy the first part of user declarations.  */
#line 2 "GrammarParser.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include "Absyn.H"
typedef struct yy_buffer_state *YY_BUFFER_STATE;
int yyparse(void);
int yylex(void);
YY_BUFFER_STATE yy_scan_string(const char *str);
void yy_delete_buffer(YY_BUFFER_STATE buf);
int yy_mylinenumber;
int initialize_lexer(FILE * inp);
int yywrap(void)
{
  return 1;
}
void yyerror(const char *str)
{
  extern char *yytext;
  fprintf(stderr,"error: line %d: %s at %s\n", 
    yy_mylinenumber, str, yytext);
}



static Program* YY_RESULT_Program_ = 0;
Program* pProgram(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}
Program* pProgram(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}

static Def* YY_RESULT_Def_ = 0;
Def* pDef(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Def_;
  }
}
Def* pDef(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Def_;
  }
}

static ListDef* YY_RESULT_ListDef_ = 0;
ListDef* pListDef(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDef_;
  }
}
ListDef* pListDef(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDef_;
  }
}

static Arg* YY_RESULT_Arg_ = 0;
Arg* pArg(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Arg_;
  }
}
Arg* pArg(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Arg_;
  }
}

static ListArg* YY_RESULT_ListArg_ = 0;
ListArg* pListArg(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListArg_;
  }
}
ListArg* pListArg(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListArg_;
  }
}

static Stm* YY_RESULT_Stm_ = 0;
Stm* pStm(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stm_;
  }
}
Stm* pStm(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stm_;
  }
}

static ListStm* YY_RESULT_ListStm_ = 0;
ListStm* pListStm(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStm_;
  }
}
ListStm* pListStm(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStm_;
  }
}

static QC* YY_RESULT_QC_ = 0;
QC* pQC(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_QC_;
  }
}
QC* pQC(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_QC_;
  }
}

static Name* YY_RESULT_Name_ = 0;
Name* pName(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Name_;
  }
}
Name* pName(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Name_;
  }
}

static Tmp* YY_RESULT_Tmp_ = 0;
Tmp* pTmp(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Tmp_;
  }
}
Tmp* pTmp(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Tmp_;
  }
}

static Type* YY_RESULT_Type_ = 0;
Type* pType(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type* pType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

static ListType* YY_RESULT_ListType_ = 0;
ListType* pListType(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}
ListType* pListType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListType_;
  }
}

static Exp* YY_RESULT_Exp_ = 0;
Exp* pExp(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp* pExp(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

static ListExp* YY_RESULT_ListExp_ = 0;
ListExp* pListExp(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExp_;
  }
}
ListExp* pListExp(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExp_;
  }
}

static ListId* YY_RESULT_ListId_ = 0;
ListId* pListId(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListId_;
  }
}
ListId* pListId(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListId_;
  }
}





/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 528 "GrammarParser.y"
{
  int int_;
  char char_;
  double double_;
  char* string_;
  Program* program_;
  Def* def_;
  ListDef* listdef_;
  Arg* arg_;
  ListArg* listarg_;
  Stm* stm_;
  ListStm* liststm_;
  QC* qc_;
  Name* name_;
  Tmp* tmp_;
  Type* type_;
  ListType* listtype_;
  Exp* exp_;
  ListExp* listexp_;
  ListId* listid_;
}
/* Line 193 of yacc.c.  */
#line 757 "Parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 770 "Parser.C"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   452

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNRULES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    14,    20,    26,    31,    38,    39,
      42,    44,    47,    48,    50,    54,    55,    58,    61,    66,
      72,    76,    82,    90,    96,   100,   108,   109,   112,   114,
     118,   120,   124,   126,   128,   133,   135,   138,   141,   143,
     145,   147,   149,   151,   153,   155,   157,   161,   164,   166,
     168,   170,   172,   174,   179,   183,   188,   192,   195,   198,
     202,   206,   209,   211,   214,   217,   220,   222,   226,   230,
     234,   236,   240,   244,   246,   250,   254,   256,   260,   264,
     267,   271,   275,   279,   281,   285,   289,   291,   295,   297,
     301,   303,   307,   311,   313,   316,   318,   320,   322,   324,
     326,   327,   329,   333,   335,   339,   341,   345,   347
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    61,    -1,    69,    54,     4,    63,     5,
       6,    65,     7,    -1,    50,    54,     8,    54,     9,    -1,
      50,    54,     8,    69,     9,    -1,    49,    69,    54,     9,
      -1,    69,    54,     4,    63,     5,     9,    -1,    -1,    61,
      60,    -1,    69,    -1,    69,    54,    -1,    -1,    62,    -1,
      62,    10,    63,    -1,    -1,    62,    63,    -1,    83,     9,
      -1,    49,    69,    54,     9,    -1,    53,     4,    83,     5,
      64,    -1,     6,    65,     7,    -1,    43,     4,    83,     5,
      64,    -1,    43,     4,    83,     5,    64,    41,    64,    -1,
      42,     4,    87,     5,    64,    -1,    46,    83,     9,    -1,
      39,    64,    53,     4,    83,     5,     9,    -1,    -1,    64,
      65,    -1,    64,    -1,    64,    10,    65,    -1,    67,    -1,
      67,     8,    66,    -1,    54,    -1,    68,    -1,    69,    11,
      70,    12,    -1,    66,    -1,    69,    13,    -1,    38,    69,
      -1,    37,    -1,    44,    -1,    40,    -1,    52,    -1,    47,
      -1,    51,    -1,    45,    -1,    69,    -1,    69,    10,    70,
      -1,    69,    88,    -1,    55,    -1,    57,    -1,    54,    -1,
      56,    -1,    66,    -1,    54,     4,    87,     5,    -1,    54,
       8,    83,    -1,    54,    14,    87,    15,    -1,     4,    83,
       5,    -1,    71,    16,    -1,    71,    17,    -1,    72,    18,
      71,    -1,    72,    19,    71,    -1,    20,    71,    -1,    71,
      -1,    16,    72,    -1,    17,    72,    -1,    21,    72,    -1,
      72,    -1,    74,    22,    73,    -1,    74,    20,    73,    -1,
      74,    23,    73,    -1,    73,    -1,    75,    24,    74,    -1,
      75,    25,    74,    -1,    74,    -1,    76,    26,    75,    -1,
      76,    27,    75,    -1,    75,    -1,    77,    11,    76,    -1,
      77,    12,    76,    -1,    77,    76,    -1,    77,    28,    76,
      -1,    77,    29,    76,    -1,    77,    30,    76,    -1,    76,
      -1,    78,    31,    77,    -1,    78,    32,    77,    -1,    77,
      -1,    79,    33,    84,    -1,    84,    -1,    80,    34,    79,
      -1,    79,    -1,    81,    35,    80,    -1,    81,    36,    80,
      -1,    80,    -1,    48,    81,    -1,    81,    -1,    82,    -1,
      85,    -1,    86,    -1,    78,    -1,    -1,    83,    -1,    83,
      10,    87,    -1,    83,    -1,    83,     9,    87,    -1,    54,
      -1,    54,    10,    88,    -1,    54,    -1,    54,    18,    88,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   640,   640,   642,   643,   644,   645,   646,   648,   649,
     651,   652,   654,   655,   656,   657,   658,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   670,   671,   672,   673,
     675,   676,   678,   679,   681,   683,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   694,   695,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   708,   709,   710,
     711,   712,   713,   715,   716,   717,   718,   720,   721,   722,
     723,   725,   726,   727,   729,   730,   731,   733,   734,   735,
     736,   737,   738,   739,   741,   742,   743,   745,   746,   748,
     749,   751,   752,   753,   755,   756,   758,   760,   762,   764,
     766,   767,   768,   769,   770,   772,   773,   774,   775
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ERROR_", "_SYMB_0", "_SYMB_1",
  "_SYMB_2", "_SYMB_3", "_SYMB_4", "_SYMB_5", "_SYMB_6", "_SYMB_7",
  "_SYMB_8", "_SYMB_9", "_SYMB_10", "_SYMB_11", "_SYMB_12", "_SYMB_13",
  "_SYMB_14", "_SYMB_15", "_SYMB_16", "_SYMB_17", "_SYMB_18", "_SYMB_19",
  "_SYMB_20", "_SYMB_21", "_SYMB_22", "_SYMB_23", "_SYMB_24", "_SYMB_25",
  "_SYMB_26", "_SYMB_27", "_SYMB_28", "_SYMB_29", "_SYMB_30", "_SYMB_31",
  "_SYMB_32", "_SYMB_33", "_SYMB_34", "_SYMB_35", "_SYMB_36", "_SYMB_37",
  "_SYMB_38", "_SYMB_39", "_SYMB_40", "_SYMB_41", "_SYMB_42", "_SYMB_43",
  "_SYMB_44", "_SYMB_45", "_SYMB_46", "_SYMB_47", "_SYMB_48", "_SYMB_49",
  "_SYMB_50", "_STRING_", "_CHAR_", "_INTEGER_", "$accept", "Program",
  "Def", "ListDef", "Arg", "ListArg", "Stm", "ListStm", "QC", "Name",
  "Tmp", "Type", "ListType", "Exp15", "Exp14", "Exp13", "Exp12", "Exp11",
  "Exp10", "Exp9", "Exp8", "Exp4", "Exp3", "Exp2", "Exp1", "Exp", "Exp5",
  "Exp6", "Exp7", "ListExp", "ListId", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    60,    60,    60,    61,    61,
      62,    62,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    65,    65,
      66,    66,    67,    67,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    74,    74,    74,
      74,    75,    75,    75,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    78,    79,    79,    80,
      80,    81,    81,    81,    82,    82,    83,    84,    85,    86,
      87,    87,    87,    87,    87,    88,    88,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     8,     5,     5,     4,     6,     0,     2,
       1,     2,     0,     1,     3,     0,     2,     2,     4,     5,
       3,     5,     7,     5,     3,     7,     0,     2,     1,     3,
       1,     3,     1,     1,     4,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     2,     2,     3,
       3,     2,     1,     2,     2,     2,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     2,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       0,     1,     3,     1,     3,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     2,     1,    38,     0,    40,    39,    44,    42,
       0,     0,    43,    41,    32,     9,    35,    30,    33,     0,
      37,     0,     0,     0,     0,    36,     0,     0,     0,    31,
       0,    45,     0,    12,     6,    32,     0,     0,    34,    12,
       0,    10,     4,     5,    46,    12,    16,     0,    11,    14,
      26,     7,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    48,    51,    49,    26,
       0,    52,     0,    62,    66,    70,    73,    76,    83,    86,
      99,    90,    93,    95,    96,     0,    88,    97,    98,     0,
       0,    63,    64,    61,    65,     0,   100,     0,     0,    94,
       0,     0,   100,     0,   100,    26,    27,     3,   105,    47,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,    17,    56,    20,     0,   101,     0,     0,
      24,     0,     0,     0,    54,     0,    29,     0,     0,    59,
      60,    68,    67,    69,    71,    72,    74,    75,    77,    78,
      80,    81,    82,    84,    85,    87,    89,    91,    92,     0,
     100,   100,     0,     0,    18,     0,    53,    55,   106,   108,
       0,   104,   102,    23,    21,    19,     0,     0,    25,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    15,     2,    39,    40,    69,    70,    71,    17,
      18,    72,    32,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   138,
     109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int16 yypact[] =
{
    -101,    47,   362,  -101,  -101,   380,  -101,  -101,  -101,  -101,
     380,   -47,  -101,  -101,  -101,  -101,  -101,    74,  -101,    10,
     100,    11,    77,   380,   380,  -101,    91,     6,   398,  -101,
     100,    64,    31,   380,  -101,    90,     7,   380,  -101,   344,
      14,    19,  -101,  -101,  -101,   380,  -101,    29,  -101,  -101,
     142,  -101,   238,   142,   301,   301,   322,   301,   142,   112,
     117,   238,   280,   380,   134,    79,  -101,  -101,  -101,    88,
     140,    26,    68,    12,    15,  -101,    66,    44,    80,   196,
      59,   131,   118,   119,  -101,   162,  -101,  -101,  -101,   167,
     166,    15,    15,  -101,    15,   121,   238,   238,   168,   119,
      99,   238,   238,   238,   238,   142,  -101,  -101,    -4,  -101,
    -101,  -101,   322,   322,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,    80,   280,   280,   280,
     280,   280,   280,  -101,  -101,  -101,   171,   114,   173,   178,
    -101,   183,   197,   198,  -101,   161,  -101,   147,   147,  -101,
    -101,  -101,  -101,  -101,    66,    66,    44,    44,    80,    80,
      80,    80,    80,   196,   196,  -101,   131,   118,   118,   238,
     238,   238,   142,   142,  -101,   142,  -101,  -101,  -101,  -101,
     199,  -101,  -101,  -101,   164,  -101,   200,   142,  -101,  -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,  -101,   -28,   -58,   -44,     3,  -101,
    -101,    39,   169,   -53,    46,    35,    43,    37,   -67,    38,
    -101,    81,    36,   148,  -101,   -51,    85,  -101,  -101,  -100,
      22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -36
static const yytype_int16 yytable[] =
{
      95,    89,   143,    93,   145,    16,   147,    22,    16,    90,
      98,    46,   126,    16,   148,    34,    43,    49,    24,    47,
      25,    24,    24,    25,    25,   106,    29,    16,   110,   111,
      24,    16,    25,   112,   113,    50,    16,   -35,    51,   -35,
      16,    19,    16,    38,    20,   137,   139,     3,    16,    21,
     142,   137,   144,   137,   158,   159,   160,   161,   162,   149,
     150,   146,    30,    31,    26,    27,    16,    36,   117,   118,
     181,   182,    41,    48,    37,    24,    31,    25,    41,    24,
     -35,    25,    23,   102,    41,    28,   114,   103,   115,   116,
     127,   128,    52,   104,    53,    33,   126,   126,   105,    42,
      91,    92,   100,    94,    54,    55,   119,   120,    56,    57,
      24,    24,    25,    25,   183,   184,    96,   185,   180,   137,
     137,    97,   108,   170,   171,     4,     5,    58,     6,   189,
      59,    60,     7,     8,    61,     9,    62,    63,   101,    12,
      13,    64,    65,    66,    67,    68,    52,   107,    53,   151,
     152,   153,   130,   141,   131,   132,   156,   157,    54,    55,
     154,   155,    56,    57,   129,   163,   164,   167,   168,   178,
     179,   133,   134,   135,   136,   169,   177,   140,   172,     4,
       5,    58,     6,   173,    59,    60,     7,     8,    61,     9,
      62,    63,   174,    12,    13,    64,    65,    66,    67,    68,
      52,   108,   175,   176,   186,   187,    44,   121,   122,   188,
      99,   166,    54,    55,   165,     0,    56,    57,     0,     0,
       0,     0,     0,     0,   123,   124,   125,     0,     0,     0,
       0,     0,     0,     4,     5,     0,     6,     0,     0,     0,
       7,     8,    52,     9,     0,     0,     0,    12,    13,     0,
      65,    66,    67,    68,    54,    55,     0,     0,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     0,     6,     0,
       0,     0,     7,     8,    52,     9,    62,     0,     0,    12,
      13,     0,    65,    66,    67,    68,    54,    55,     0,     0,
      56,    57,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,     0,
       6,    56,     0,     0,     7,     8,    52,     9,     0,     0,
       0,    12,    13,     0,    65,    66,    67,    68,     4,     5,
       0,     6,     0,     0,     0,     7,     8,     0,     9,     0,
       0,     0,    12,    13,    45,    65,    66,    67,    68,     4,
       5,     0,     6,     0,     0,     0,     7,     8,     0,     9,
       0,     0,     0,    12,    13,     0,    65,    66,    67,    68,
       0,     4,     5,     0,     6,     0,     0,     0,     7,     8,
       0,     9,     0,     0,     0,    12,    13,     0,    14,     4,
       5,     0,     6,     0,     0,     0,     7,     8,     0,     9,
       0,    10,    11,    12,    13,     0,    14,     4,     5,     0,
       6,     0,     0,     0,     7,     8,     0,     9,     0,     0,
       0,    12,    13,     0,    14,     4,     5,     0,     6,     0,
       0,     0,     7,     8,     0,     9,     0,     0,     0,    12,
      13,     0,    35
};

static const yytype_int16 yycheck[] =
{
      58,    52,   102,    56,   104,     2,    10,    54,     5,    53,
      61,    39,    79,    10,    18,     9,     9,    45,    11,     5,
      13,    11,    11,    13,    13,    69,    23,    24,    16,    17,
      11,    28,    13,    18,    19,     6,    33,    11,     9,    13,
      37,     2,    39,    12,     5,    96,    97,     0,    45,    10,
     101,   102,   103,   104,   121,   122,   123,   124,   125,   112,
     113,   105,    23,    24,    54,    54,    63,    28,    24,    25,
     170,   171,    33,    54,    10,    11,    37,    13,    39,    11,
      54,    13,     8,     4,    45,     8,    20,     8,    22,    23,
      31,    32,     4,    14,     6,     4,   163,   164,    10,     9,
      54,    55,    63,    57,    16,    17,    26,    27,    20,    21,
      11,    11,    13,    13,   172,   173,     4,   175,   169,   170,
     171,     4,    54,     9,    10,    37,    38,    39,    40,   187,
      42,    43,    44,    45,    46,    47,    48,    49,     4,    51,
      52,    53,    54,    55,    56,    57,     4,     7,     6,   114,
     115,   116,    34,    54,    35,    36,   119,   120,    16,    17,
     117,   118,    20,    21,    33,   127,   128,   131,   132,   147,
     148,     9,     5,     7,    53,     4,    15,     9,     5,    37,
      38,    39,    40,     5,    42,    43,    44,    45,    46,    47,
      48,    49,     9,    51,    52,    53,    54,    55,    56,    57,
       4,    54,     5,     5,     5,    41,    37,    11,    12,     9,
      62,   130,    16,    17,   129,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,
      44,    45,     4,    47,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    56,    57,    16,    17,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      -1,    -1,    44,    45,     4,    47,    48,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    16,    17,    -1,    -1,
      20,    21,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    20,    -1,    -1,    44,    45,     4,    47,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    37,    38,
      -1,    40,    -1,    -1,    -1,    44,    45,    -1,    47,    -1,
      -1,    -1,    51,    52,    10,    54,    55,    56,    57,    37,
      38,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,    47,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,    57,
      -1,    37,    38,    -1,    40,    -1,    -1,    -1,    44,    45,
      -1,    47,    -1,    -1,    -1,    51,    52,    -1,    54,    37,
      38,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    -1,    54,    37,    38,    -1,
      40,    -1,    -1,    -1,    44,    45,    -1,    47,    -1,    -1,
      -1,    51,    52,    -1,    54,    37,    38,    -1,    40,    -1,
      -1,    -1,    44,    45,    -1,    47,    -1,    -1,    -1,    51,
      52,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    61,     0,    37,    38,    40,    44,    45,    47,
      49,    50,    51,    52,    54,    60,    66,    67,    68,    69,
      69,    69,    54,     8,    11,    13,    54,    54,     8,    66,
      69,    69,    70,     4,     9,    54,    69,    10,    12,    62,
      63,    69,     9,     9,    70,    10,    63,     5,    54,    63,
       6,     9,     4,     6,    16,    17,    20,    21,    39,    42,
      43,    46,    48,    49,    53,    54,    55,    56,    57,    64,
      65,    66,    69,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    83,
      65,    72,    72,    71,    72,    64,     4,     4,    83,    81,
      69,     4,     4,     8,    14,    10,    65,     7,    54,    88,
      16,    17,    18,    19,    20,    22,    23,    24,    25,    26,
      27,    11,    12,    28,    29,    30,    76,    31,    32,    33,
      34,    35,    36,     9,     5,     7,    53,    83,    87,    83,
       9,    54,    83,    87,    83,    87,    65,    10,    18,    71,
      71,    73,    73,    73,    74,    74,    75,    75,    76,    76,
      76,    76,    76,    77,    77,    84,    79,    80,    80,     4,
       9,    10,     5,     5,     9,     5,     5,    15,    88,    88,
      83,    87,    87,    64,    64,    64,     5,    41,     9,    64
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 640 "GrammarParser.y"
    {  (yyval.program_) = new PDefs((yyvsp[(1) - (1)].listdef_)); YY_RESULT_Program_= (yyval.program_); ;}
    break;

  case 3:
#line 642 "GrammarParser.y"
    {  std::reverse((yyvsp[(4) - (8)].listarg_)->begin(),(yyvsp[(4) - (8)].listarg_)->end()) ; std::reverse((yyvsp[(7) - (8)].liststm_)->begin(),(yyvsp[(7) - (8)].liststm_)->end()) ;(yyval.def_) = new DFun((yyvsp[(1) - (8)].type_), (yyvsp[(2) - (8)].string_), (yyvsp[(4) - (8)].listarg_), (yyvsp[(7) - (8)].liststm_)); YY_RESULT_Def_= (yyval.def_); ;}
    break;

  case 4:
#line 643 "GrammarParser.y"
    {  (yyval.def_) = new DUse((yyvsp[(2) - (5)].string_), (yyvsp[(4) - (5)].string_)); YY_RESULT_Def_= (yyval.def_); ;}
    break;

  case 5:
#line 644 "GrammarParser.y"
    {  (yyval.def_) = new DUsing2((yyvsp[(2) - (5)].string_), (yyvsp[(4) - (5)].type_)); YY_RESULT_Def_= (yyval.def_); ;}
    break;

  case 6:
#line 645 "GrammarParser.y"
    {  (yyval.def_) = new DTypDef((yyvsp[(2) - (4)].type_), (yyvsp[(3) - (4)].string_)); YY_RESULT_Def_= (yyval.def_); ;}
    break;

  case 7:
#line 646 "GrammarParser.y"
    {  std::reverse((yyvsp[(4) - (6)].listarg_)->begin(),(yyvsp[(4) - (6)].listarg_)->end()) ;(yyval.def_) = new DDecl((yyvsp[(1) - (6)].type_), (yyvsp[(2) - (6)].string_), (yyvsp[(4) - (6)].listarg_)); YY_RESULT_Def_= (yyval.def_); ;}
    break;

  case 8:
#line 648 "GrammarParser.y"
    {  (yyval.listdef_) = new ListDef(); YY_RESULT_ListDef_= (yyval.listdef_); ;}
    break;

  case 9:
#line 649 "GrammarParser.y"
    {  (yyvsp[(1) - (2)].listdef_)->push_back((yyvsp[(2) - (2)].def_)) ; (yyval.listdef_) = (yyvsp[(1) - (2)].listdef_) ; YY_RESULT_ListDef_= (yyval.listdef_); ;}
    break;

  case 10:
#line 651 "GrammarParser.y"
    {  (yyval.arg_) = new AFunc((yyvsp[(1) - (1)].type_)); YY_RESULT_Arg_= (yyval.arg_); ;}
    break;

  case 11:
#line 652 "GrammarParser.y"
    {  (yyval.arg_) = new ADecl((yyvsp[(1) - (2)].type_), (yyvsp[(2) - (2)].string_)); YY_RESULT_Arg_= (yyval.arg_); ;}
    break;

  case 12:
#line 654 "GrammarParser.y"
    {  (yyval.listarg_) = new ListArg(); YY_RESULT_ListArg_= (yyval.listarg_); ;}
    break;

  case 13:
#line 655 "GrammarParser.y"
    {  (yyval.listarg_) = new ListArg() ; (yyval.listarg_)->push_back((yyvsp[(1) - (1)].arg_)); YY_RESULT_ListArg_= (yyval.listarg_); ;}
    break;

  case 14:
#line 656 "GrammarParser.y"
    {  (yyvsp[(3) - (3)].listarg_)->push_back((yyvsp[(1) - (3)].arg_)) ; (yyval.listarg_) = (yyvsp[(3) - (3)].listarg_) ; YY_RESULT_ListArg_= (yyval.listarg_); ;}
    break;

  case 15:
#line 657 "GrammarParser.y"
    {  (yyval.listarg_) = new ListArg(); YY_RESULT_ListArg_= (yyval.listarg_); ;}
    break;

  case 16:
#line 658 "GrammarParser.y"
    {  (yyvsp[(2) - (2)].listarg_)->push_back((yyvsp[(1) - (2)].arg_)) ; (yyval.listarg_) = (yyvsp[(2) - (2)].listarg_) ; YY_RESULT_ListArg_= (yyval.listarg_); ;}
    break;

  case 17:
#line 660 "GrammarParser.y"
    {  (yyval.stm_) = new SExp((yyvsp[(1) - (2)].exp_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 18:
#line 661 "GrammarParser.y"
    {  (yyval.stm_) = new STypDef((yyvsp[(2) - (4)].type_), (yyvsp[(3) - (4)].string_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 19:
#line 662 "GrammarParser.y"
    {  (yyval.stm_) = new SWhile((yyvsp[(3) - (5)].exp_), (yyvsp[(5) - (5)].stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 20:
#line 663 "GrammarParser.y"
    {  std::reverse((yyvsp[(2) - (3)].liststm_)->begin(),(yyvsp[(2) - (3)].liststm_)->end()) ;(yyval.stm_) = new SBlock((yyvsp[(2) - (3)].liststm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 21:
#line 664 "GrammarParser.y"
    {  (yyval.stm_) = new SIf((yyvsp[(3) - (5)].exp_), (yyvsp[(5) - (5)].stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 22:
#line 665 "GrammarParser.y"
    {  (yyval.stm_) = new SIfElse((yyvsp[(3) - (7)].exp_), (yyvsp[(5) - (7)].stm_), (yyvsp[(7) - (7)].stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 23:
#line 666 "GrammarParser.y"
    {  std::reverse((yyvsp[(3) - (5)].listexp_)->begin(),(yyvsp[(3) - (5)].listexp_)->end()) ;(yyval.stm_) = new SFor((yyvsp[(3) - (5)].listexp_), (yyvsp[(5) - (5)].stm_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 24:
#line 667 "GrammarParser.y"
    {  (yyval.stm_) = new SReturn((yyvsp[(2) - (3)].exp_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 25:
#line 668 "GrammarParser.y"
    {  (yyval.stm_) = new SDoWhile((yyvsp[(2) - (7)].stm_), (yyvsp[(5) - (7)].exp_)); YY_RESULT_Stm_= (yyval.stm_); ;}
    break;

  case 26:
#line 670 "GrammarParser.y"
    {  (yyval.liststm_) = new ListStm(); YY_RESULT_ListStm_= (yyval.liststm_); ;}
    break;

  case 27:
#line 671 "GrammarParser.y"
    {  (yyvsp[(2) - (2)].liststm_)->push_back((yyvsp[(1) - (2)].stm_)) ; (yyval.liststm_) = (yyvsp[(2) - (2)].liststm_) ; YY_RESULT_ListStm_= (yyval.liststm_); ;}
    break;

  case 28:
#line 672 "GrammarParser.y"
    {  (yyval.liststm_) = new ListStm() ; (yyval.liststm_)->push_back((yyvsp[(1) - (1)].stm_)); YY_RESULT_ListStm_= (yyval.liststm_); ;}
    break;

  case 29:
#line 673 "GrammarParser.y"
    {  (yyvsp[(3) - (3)].liststm_)->push_back((yyvsp[(1) - (3)].stm_)) ; (yyval.liststm_) = (yyvsp[(3) - (3)].liststm_) ; YY_RESULT_ListStm_= (yyval.liststm_); ;}
    break;

  case 30:
#line 675 "GrammarParser.y"
    {  (yyval.qc_) = new QualConst((yyvsp[(1) - (1)].name_)); YY_RESULT_QC_= (yyval.qc_); ;}
    break;

  case 31:
#line 676 "GrammarParser.y"
    {  (yyval.qc_) = new QualConst2((yyvsp[(1) - (3)].name_), (yyvsp[(3) - (3)].qc_)); YY_RESULT_QC_= (yyval.qc_); ;}
    break;

  case 32:
#line 678 "GrammarParser.y"
    {  (yyval.name_) = new Name1((yyvsp[(1) - (1)].string_)); YY_RESULT_Name_= (yyval.name_); ;}
    break;

  case 33:
#line 679 "GrammarParser.y"
    {  (yyval.name_) = new Name2((yyvsp[(1) - (1)].tmp_)); YY_RESULT_Name_= (yyval.name_); ;}
    break;

  case 34:
#line 681 "GrammarParser.y"
    {  std::reverse((yyvsp[(3) - (4)].listtype_)->begin(),(yyvsp[(3) - (4)].listtype_)->end()) ;(yyval.tmp_) = new Template((yyvsp[(1) - (4)].type_), (yyvsp[(3) - (4)].listtype_)); YY_RESULT_Tmp_= (yyval.tmp_); ;}
    break;

  case 35:
#line 683 "GrammarParser.y"
    {  (yyval.type_) = new TQC((yyvsp[(1) - (1)].qc_)); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 36:
#line 684 "GrammarParser.y"
    {  (yyval.type_) = new TAddress((yyvsp[(1) - (2)].type_)); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 37:
#line 685 "GrammarParser.y"
    {  (yyval.type_) = new TConst((yyvsp[(2) - (2)].type_)); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 38:
#line 686 "GrammarParser.y"
    {  (yyval.type_) = new Type_bool(); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 39:
#line 687 "GrammarParser.y"
    {  (yyval.type_) = new Type_int(); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 40:
#line 688 "GrammarParser.y"
    {  (yyval.type_) = new Type_double(); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 41:
#line 689 "GrammarParser.y"
    {  (yyval.type_) = new Type_void(); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 42:
#line 690 "GrammarParser.y"
    {  (yyval.type_) = new Type_string(); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 43:
#line 691 "GrammarParser.y"
    {  (yyval.type_) = new Type_vector(); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 44:
#line 692 "GrammarParser.y"
    {  (yyval.type_) = new Type_map(); YY_RESULT_Type_= (yyval.type_); ;}
    break;

  case 45:
#line 694 "GrammarParser.y"
    {  (yyval.listtype_) = new ListType() ; (yyval.listtype_)->push_back((yyvsp[(1) - (1)].type_)); YY_RESULT_ListType_= (yyval.listtype_); ;}
    break;

  case 46:
#line 695 "GrammarParser.y"
    {  (yyvsp[(3) - (3)].listtype_)->push_back((yyvsp[(1) - (3)].type_)) ; (yyval.listtype_) = (yyvsp[(3) - (3)].listtype_) ; YY_RESULT_ListType_= (yyval.listtype_); ;}
    break;

  case 47:
#line 697 "GrammarParser.y"
    {  std::reverse((yyvsp[(2) - (2)].listid_)->begin(),(yyvsp[(2) - (2)].listid_)->end()) ;(yyval.exp_) = new EType((yyvsp[(1) - (2)].type_), (yyvsp[(2) - (2)].listid_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 48:
#line 698 "GrammarParser.y"
    {  (yyval.exp_) = new EString((yyvsp[(1) - (1)].string_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 49:
#line 699 "GrammarParser.y"
    {  (yyval.exp_) = new EInt((yyvsp[(1) - (1)].int_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 50:
#line 700 "GrammarParser.y"
    {  (yyval.exp_) = new EId((yyvsp[(1) - (1)].string_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 51:
#line 701 "GrammarParser.y"
    {  (yyval.exp_) = new EChar((yyvsp[(1) - (1)].char_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 52:
#line 702 "GrammarParser.y"
    {  (yyval.exp_) = new QTypeExp((yyvsp[(1) - (1)].qc_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 53:
#line 703 "GrammarParser.y"
    {  std::reverse((yyvsp[(3) - (4)].listexp_)->begin(),(yyvsp[(3) - (4)].listexp_)->end()) ;(yyval.exp_) = new EFunCall((yyvsp[(1) - (4)].string_), (yyvsp[(3) - (4)].listexp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 54:
#line 704 "GrammarParser.y"
    {  (yyval.exp_) = new EColon((yyvsp[(1) - (3)].string_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 55:
#line 705 "GrammarParser.y"
    {  std::reverse((yyvsp[(3) - (4)].listexp_)->begin(),(yyvsp[(3) - (4)].listexp_)->end()) ;(yyval.exp_) = new EInd((yyvsp[(1) - (4)].string_), (yyvsp[(3) - (4)].listexp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 56:
#line 706 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(2) - (3)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 57:
#line 708 "GrammarParser.y"
    {  (yyval.exp_) = new EPIncr((yyvsp[(1) - (2)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 58:
#line 709 "GrammarParser.y"
    {  (yyval.exp_) = new EPDecr((yyvsp[(1) - (2)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 59:
#line 710 "GrammarParser.y"
    {  (yyval.exp_) = new EDot((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 60:
#line 711 "GrammarParser.y"
    {  (yyval.exp_) = new EArrow((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 61:
#line 712 "GrammarParser.y"
    {  (yyval.exp_) = new EDRef((yyvsp[(2) - (2)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 62:
#line 713 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 63:
#line 715 "GrammarParser.y"
    {  (yyval.exp_) = new EIncr((yyvsp[(2) - (2)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 64:
#line 716 "GrammarParser.y"
    {  (yyval.exp_) = new EDecr((yyvsp[(2) - (2)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 65:
#line 717 "GrammarParser.y"
    {  (yyval.exp_) = new ENeg((yyvsp[(2) - (2)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 66:
#line 718 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 67:
#line 720 "GrammarParser.y"
    {  (yyval.exp_) = new EMod((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 68:
#line 721 "GrammarParser.y"
    {  (yyval.exp_) = new ETimes((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 69:
#line 722 "GrammarParser.y"
    {  (yyval.exp_) = new EDiv((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 70:
#line 723 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 71:
#line 725 "GrammarParser.y"
    {  (yyval.exp_) = new EPlus((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 72:
#line 726 "GrammarParser.y"
    {  (yyval.exp_) = new EMinus((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 73:
#line 727 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 74:
#line 729 "GrammarParser.y"
    {  (yyval.exp_) = new ESl((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 75:
#line 730 "GrammarParser.y"
    {  (yyval.exp_) = new ESr((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 76:
#line 731 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 77:
#line 733 "GrammarParser.y"
    {  (yyval.exp_) = new ELt((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 78:
#line 734 "GrammarParser.y"
    {  (yyval.exp_) = new EGt((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 79:
#line 735 "GrammarParser.y"
    {  (yyval.exp_) = new ENewLin((yyvsp[(1) - (2)].exp_), (yyvsp[(2) - (2)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 80:
#line 736 "GrammarParser.y"
    {  (yyval.exp_) = new EEqual((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 81:
#line 737 "GrammarParser.y"
    {  (yyval.exp_) = new ELtEq((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 82:
#line 738 "GrammarParser.y"
    {  (yyval.exp_) = new EGtEq((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 83:
#line 739 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 84:
#line 741 "GrammarParser.y"
    {  (yyval.exp_) = new EEq((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 85:
#line 742 "GrammarParser.y"
    {  (yyval.exp_) = new ENEq((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 86:
#line 743 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 87:
#line 745 "GrammarParser.y"
    {  (yyval.exp_) = new EAnd((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 88:
#line 746 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 89:
#line 748 "GrammarParser.y"
    {  (yyval.exp_) = new EOr((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 90:
#line 749 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 91:
#line 751 "GrammarParser.y"
    {  (yyval.exp_) = new ECond((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 92:
#line 752 "GrammarParser.y"
    {  (yyval.exp_) = new ECond2((yyvsp[(1) - (3)].exp_), (yyvsp[(3) - (3)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 93:
#line 753 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 94:
#line 755 "GrammarParser.y"
    {  (yyval.exp_) = new EThrow((yyvsp[(2) - (2)].exp_)); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 95:
#line 756 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 96:
#line 758 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 97:
#line 760 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 98:
#line 762 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 99:
#line 764 "GrammarParser.y"
    {  (yyval.exp_) = (yyvsp[(1) - (1)].exp_); YY_RESULT_Exp_= (yyval.exp_); ;}
    break;

  case 100:
#line 766 "GrammarParser.y"
    {  (yyval.listexp_) = new ListExp(); YY_RESULT_ListExp_= (yyval.listexp_); ;}
    break;

  case 101:
#line 767 "GrammarParser.y"
    {  (yyval.listexp_) = new ListExp() ; (yyval.listexp_)->push_back((yyvsp[(1) - (1)].exp_)); YY_RESULT_ListExp_= (yyval.listexp_); ;}
    break;

  case 102:
#line 768 "GrammarParser.y"
    {  (yyvsp[(3) - (3)].listexp_)->push_back((yyvsp[(1) - (3)].exp_)) ; (yyval.listexp_) = (yyvsp[(3) - (3)].listexp_) ; YY_RESULT_ListExp_= (yyval.listexp_); ;}
    break;

  case 103:
#line 769 "GrammarParser.y"
    {  (yyval.listexp_) = new ListExp() ; (yyval.listexp_)->push_back((yyvsp[(1) - (1)].exp_)); YY_RESULT_ListExp_= (yyval.listexp_); ;}
    break;

  case 104:
#line 770 "GrammarParser.y"
    {  (yyvsp[(3) - (3)].listexp_)->push_back((yyvsp[(1) - (3)].exp_)) ; (yyval.listexp_) = (yyvsp[(3) - (3)].listexp_) ; YY_RESULT_ListExp_= (yyval.listexp_); ;}
    break;

  case 105:
#line 772 "GrammarParser.y"
    {  (yyval.listid_) = new ListId() ; (yyval.listid_)->push_back((yyvsp[(1) - (1)].string_)); YY_RESULT_ListId_= (yyval.listid_); ;}
    break;

  case 106:
#line 773 "GrammarParser.y"
    {  (yyvsp[(3) - (3)].listid_)->push_back((yyvsp[(1) - (3)].string_)) ; (yyval.listid_) = (yyvsp[(3) - (3)].listid_) ; YY_RESULT_ListId_= (yyval.listid_); ;}
    break;

  case 107:
#line 774 "GrammarParser.y"
    {  (yyval.listid_) = new ListId() ; (yyval.listid_)->push_back((yyvsp[(1) - (1)].string_)); YY_RESULT_ListId_= (yyval.listid_); ;}
    break;

  case 108:
#line 775 "GrammarParser.y"
    {  (yyvsp[(3) - (3)].listid_)->push_back((yyvsp[(1) - (3)].string_)) ; (yyval.listid_) = (yyvsp[(3) - (3)].listid_) ; YY_RESULT_ListId_= (yyval.listid_); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2732 "Parser.C"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



