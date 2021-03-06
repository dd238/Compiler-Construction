/* This Bison file was machine-generated by BNFC */
%{
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



%}

%union
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

%token _ERROR_
%token _SYMB_0    //   (
%token _SYMB_1    //   )
%token _SYMB_2    //   {
%token _SYMB_3    //   }
%token _SYMB_4    //   ::
%token _SYMB_5    //   ;
%token _SYMB_6    //   ,
%token _SYMB_7    //   <
%token _SYMB_8    //   >
%token _SYMB_9    //   &
%token _SYMB_10    //   [
%token _SYMB_11    //   ]
%token _SYMB_12    //   ++
%token _SYMB_13    //   --
%token _SYMB_14    //   .
%token _SYMB_15    //   ->
%token _SYMB_16    //   *
%token _SYMB_17    //   !
%token _SYMB_18    //   %
%token _SYMB_19    //   /
%token _SYMB_20    //   +
%token _SYMB_21    //   -
%token _SYMB_22    //   <<
%token _SYMB_23    //   >>
%token _SYMB_24    //   =
%token _SYMB_25    //   <=
%token _SYMB_26    //   >=
%token _SYMB_27    //   ==
%token _SYMB_28    //   !=
%token _SYMB_29    //   &&
%token _SYMB_30    //   ||
%token _SYMB_31    //   ?
%token _SYMB_32    //   :
%token _SYMB_33    //   bool
%token _SYMB_34    //   const
%token _SYMB_35    //   do
%token _SYMB_36    //   double
%token _SYMB_37    //   else
%token _SYMB_38    //   for
%token _SYMB_39    //   if
%token _SYMB_40    //   int
%token _SYMB_41    //   map
%token _SYMB_42    //   return
%token _SYMB_43    //   string
%token _SYMB_44    //   throw
%token _SYMB_45    //   typedef
%token _SYMB_46    //   using
%token _SYMB_47    //   vector
%token _SYMB_48    //   void
%token _SYMB_49    //   while
%token<string_> _SYMB_50    //   Id

%type <program_> Program
%type <def_> Def
%type <listdef_> ListDef
%type <arg_> Arg
%type <listarg_> ListArg
%type <stm_> Stm
%type <liststm_> ListStm
%type <qc_> QC
%type <name_> Name
%type <tmp_> Tmp
%type <type_> Type
%type <listtype_> ListType
%type <exp_> Exp15
%type <exp_> Exp14
%type <exp_> Exp13
%type <exp_> Exp12
%type <exp_> Exp11
%type <exp_> Exp10
%type <exp_> Exp9
%type <exp_> Exp8
%type <exp_> Exp4
%type <exp_> Exp3
%type <exp_> Exp2
%type <exp_> Exp1
%type <exp_> Exp
%type <exp_> Exp5
%type <exp_> Exp6
%type <exp_> Exp7
%type <listexp_> ListExp
%type <listid_> ListId

%start Program
%token<string_> _STRING_
%token<char_> _CHAR_
%token<int_> _INTEGER_

%%
Program : ListDef {  $$ = new PDefs($1); YY_RESULT_Program_= $$; } 
;
Def : Type _SYMB_50 _SYMB_0 ListArg _SYMB_1 _SYMB_2 ListStm _SYMB_3 {  std::reverse($4->begin(),$4->end()) ; std::reverse($7->begin(),$7->end()) ;$$ = new DFun($1, $2, $4, $7); YY_RESULT_Def_= $$; } 
  | _SYMB_46 _SYMB_50 _SYMB_4 _SYMB_50 _SYMB_5 {  $$ = new DUse($2, $4); YY_RESULT_Def_= $$; }
  | _SYMB_46 _SYMB_50 _SYMB_4 Type _SYMB_5 {  $$ = new DUsing2($2, $4); YY_RESULT_Def_= $$; }
  | _SYMB_45 Type _SYMB_50 _SYMB_5 {  $$ = new DTypDef($2, $3); YY_RESULT_Def_= $$; }
  | Type _SYMB_50 _SYMB_0 ListArg _SYMB_1 _SYMB_5 {  std::reverse($4->begin(),$4->end()) ;$$ = new DDecl($1, $2, $4); YY_RESULT_Def_= $$; }
;
ListDef : /* empty */ {  $$ = new ListDef(); YY_RESULT_ListDef_= $$; } 
  | ListDef Def {  $1->push_back($2) ; $$ = $1 ; YY_RESULT_ListDef_= $$; }
;
Arg : Type {  $$ = new AFunc($1); YY_RESULT_Arg_= $$; } 
  | Type _SYMB_50 {  $$ = new ADecl($1, $2); YY_RESULT_Arg_= $$; }
;
ListArg : /* empty */ {  $$ = new ListArg(); YY_RESULT_ListArg_= $$; } 
  | Arg {  $$ = new ListArg() ; $$->push_back($1); YY_RESULT_ListArg_= $$; }
  | Arg _SYMB_6 ListArg {  $3->push_back($1) ; $$ = $3 ; YY_RESULT_ListArg_= $$; }
  | /* empty */ {  $$ = new ListArg(); YY_RESULT_ListArg_= $$; }
  | Arg ListArg {  $2->push_back($1) ; $$ = $2 ; YY_RESULT_ListArg_= $$; }
;
Stm : Exp _SYMB_5 {  $$ = new SExp($1); YY_RESULT_Stm_= $$; } 
  | _SYMB_45 Type _SYMB_50 _SYMB_5 {  $$ = new STypDef($2, $3); YY_RESULT_Stm_= $$; }
  | _SYMB_49 _SYMB_0 Exp _SYMB_1 Stm {  $$ = new SWhile($3, $5); YY_RESULT_Stm_= $$; }
  | _SYMB_2 ListStm _SYMB_3 {  std::reverse($2->begin(),$2->end()) ;$$ = new SBlock($2); YY_RESULT_Stm_= $$; }
  | _SYMB_39 _SYMB_0 Exp _SYMB_1 Stm {  $$ = new SIf($3, $5); YY_RESULT_Stm_= $$; }
  | _SYMB_39 _SYMB_0 Exp _SYMB_1 Stm _SYMB_37 Stm {  $$ = new SIfElse($3, $5, $7); YY_RESULT_Stm_= $$; }
  | _SYMB_38 _SYMB_0 ListExp _SYMB_1 Stm {  std::reverse($3->begin(),$3->end()) ;$$ = new SFor($3, $5); YY_RESULT_Stm_= $$; }
  | _SYMB_42 Exp _SYMB_5 {  $$ = new SReturn($2); YY_RESULT_Stm_= $$; }
  | _SYMB_35 Stm _SYMB_49 _SYMB_0 Exp _SYMB_1 _SYMB_5 {  $$ = new SDoWhile($2, $5); YY_RESULT_Stm_= $$; }
;
ListStm : /* empty */ {  $$ = new ListStm(); YY_RESULT_ListStm_= $$; } 
  | Stm ListStm {  $2->push_back($1) ; $$ = $2 ; YY_RESULT_ListStm_= $$; }
  | Stm {  $$ = new ListStm() ; $$->push_back($1); YY_RESULT_ListStm_= $$; }
  | Stm _SYMB_6 ListStm {  $3->push_back($1) ; $$ = $3 ; YY_RESULT_ListStm_= $$; }
;
QC : Name {  $$ = new QualConst($1); YY_RESULT_QC_= $$; } 
  | Name _SYMB_4 QC {  $$ = new QualConst2($1, $3); YY_RESULT_QC_= $$; }
;
Name : _SYMB_50 {  $$ = new Name1($1); YY_RESULT_Name_= $$; } 
  | Tmp {  $$ = new Name2($1); YY_RESULT_Name_= $$; }
;
Tmp : Type _SYMB_7 ListType _SYMB_8 {  std::reverse($3->begin(),$3->end()) ;$$ = new Template($1, $3); YY_RESULT_Tmp_= $$; } 
;
Type : QC {  $$ = new TQC($1); YY_RESULT_Type_= $$; } 
  | Type _SYMB_9 {  $$ = new TAddress($1); YY_RESULT_Type_= $$; }
  | _SYMB_34 Type {  $$ = new TConst($2); YY_RESULT_Type_= $$; }
  | _SYMB_33 {  $$ = new Type_bool(); YY_RESULT_Type_= $$; }
  | _SYMB_40 {  $$ = new Type_int(); YY_RESULT_Type_= $$; }
  | _SYMB_36 {  $$ = new Type_double(); YY_RESULT_Type_= $$; }
  | _SYMB_48 {  $$ = new Type_void(); YY_RESULT_Type_= $$; }
  | _SYMB_43 {  $$ = new Type_string(); YY_RESULT_Type_= $$; }
  | _SYMB_47 {  $$ = new Type_vector(); YY_RESULT_Type_= $$; }
  | _SYMB_41 {  $$ = new Type_map(); YY_RESULT_Type_= $$; }
;
ListType : Type {  $$ = new ListType() ; $$->push_back($1); YY_RESULT_ListType_= $$; } 
  | Type _SYMB_6 ListType {  $3->push_back($1) ; $$ = $3 ; YY_RESULT_ListType_= $$; }
;
Exp15 : Type ListId {  std::reverse($2->begin(),$2->end()) ;$$ = new EType($1, $2); YY_RESULT_Exp_= $$; } 
  | _STRING_ {  $$ = new EString($1); YY_RESULT_Exp_= $$; }
  | _INTEGER_ {  $$ = new EInt($1); YY_RESULT_Exp_= $$; }
  | _SYMB_50 {  $$ = new EId($1); YY_RESULT_Exp_= $$; }
  | _CHAR_ {  $$ = new EChar($1); YY_RESULT_Exp_= $$; }
  | QC {  $$ = new QTypeExp($1); YY_RESULT_Exp_= $$; }
  | _SYMB_50 _SYMB_0 ListExp _SYMB_1 {  std::reverse($3->begin(),$3->end()) ;$$ = new EFunCall($1, $3); YY_RESULT_Exp_= $$; }
  | _SYMB_50 _SYMB_4 Exp {  $$ = new EColon($1, $3); YY_RESULT_Exp_= $$; }
  | _SYMB_50 _SYMB_10 ListExp _SYMB_11 {  std::reverse($3->begin(),$3->end()) ;$$ = new EInd($1, $3); YY_RESULT_Exp_= $$; }
  | _SYMB_0 Exp _SYMB_1 {  $$ = $2; YY_RESULT_Exp_= $$; }
;
Exp14 : Exp15 _SYMB_12 {  $$ = new EPIncr($1); YY_RESULT_Exp_= $$; } 
  | Exp15 _SYMB_13 {  $$ = new EPDecr($1); YY_RESULT_Exp_= $$; }
  | Exp14 _SYMB_14 Exp15 {  $$ = new EDot($1, $3); YY_RESULT_Exp_= $$; }
  | Exp14 _SYMB_15 Exp15 {  $$ = new EArrow($1, $3); YY_RESULT_Exp_= $$; }
  | _SYMB_16 Exp15 {  $$ = new EDRef($2); YY_RESULT_Exp_= $$; }
  | Exp15 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp13 : _SYMB_12 Exp14 {  $$ = new EIncr($2); YY_RESULT_Exp_= $$; } 
  | _SYMB_13 Exp14 {  $$ = new EDecr($2); YY_RESULT_Exp_= $$; }
  | _SYMB_17 Exp14 {  $$ = new ENeg($2); YY_RESULT_Exp_= $$; }
  | Exp14 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp12 : Exp12 _SYMB_18 Exp13 {  $$ = new EMod($1, $3); YY_RESULT_Exp_= $$; } 
  | Exp12 _SYMB_16 Exp13 {  $$ = new ETimes($1, $3); YY_RESULT_Exp_= $$; }
  | Exp12 _SYMB_19 Exp13 {  $$ = new EDiv($1, $3); YY_RESULT_Exp_= $$; }
  | Exp13 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp11 : Exp11 _SYMB_20 Exp12 {  $$ = new EPlus($1, $3); YY_RESULT_Exp_= $$; } 
  | Exp11 _SYMB_21 Exp12 {  $$ = new EMinus($1, $3); YY_RESULT_Exp_= $$; }
  | Exp12 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp10 : Exp10 _SYMB_22 Exp11 {  $$ = new ESl($1, $3); YY_RESULT_Exp_= $$; } 
  | Exp10 _SYMB_23 Exp11 {  $$ = new ESr($1, $3); YY_RESULT_Exp_= $$; }
  | Exp11 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp9 : Exp9 _SYMB_7 Exp10 {  $$ = new ELt($1, $3); YY_RESULT_Exp_= $$; } 
  | Exp9 _SYMB_8 Exp10 {  $$ = new EGt($1, $3); YY_RESULT_Exp_= $$; }
  | Exp9 Exp10 {  $$ = new ENewLin($1, $2); YY_RESULT_Exp_= $$; }
  | Exp9 _SYMB_24 Exp10 {  $$ = new EEqual($1, $3); YY_RESULT_Exp_= $$; }
  | Exp9 _SYMB_25 Exp10 {  $$ = new ELtEq($1, $3); YY_RESULT_Exp_= $$; }
  | Exp9 _SYMB_26 Exp10 {  $$ = new EGtEq($1, $3); YY_RESULT_Exp_= $$; }
  | Exp10 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp8 : Exp8 _SYMB_27 Exp9 {  $$ = new EEq($1, $3); YY_RESULT_Exp_= $$; } 
  | Exp8 _SYMB_28 Exp9 {  $$ = new ENEq($1, $3); YY_RESULT_Exp_= $$; }
  | Exp9 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp4 : Exp4 _SYMB_29 Exp5 {  $$ = new EAnd($1, $3); YY_RESULT_Exp_= $$; } 
  | Exp5 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp3 : Exp3 _SYMB_30 Exp4 {  $$ = new EOr($1, $3); YY_RESULT_Exp_= $$; } 
  | Exp4 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp2 : Exp2 _SYMB_31 Exp3 {  $$ = new ECond($1, $3); YY_RESULT_Exp_= $$; } 
  | Exp2 _SYMB_32 Exp3 {  $$ = new ECond2($1, $3); YY_RESULT_Exp_= $$; }
  | Exp3 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp1 : _SYMB_44 Exp2 {  $$ = new EThrow($2); YY_RESULT_Exp_= $$; } 
  | Exp2 {  $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp : Exp1 {  $$ = $1; YY_RESULT_Exp_= $$; } 
;
Exp5 : Exp6 {  $$ = $1; YY_RESULT_Exp_= $$; } 
;
Exp6 : Exp7 {  $$ = $1; YY_RESULT_Exp_= $$; } 
;
Exp7 : Exp8 {  $$ = $1; YY_RESULT_Exp_= $$; } 
;
ListExp : /* empty */ {  $$ = new ListExp(); YY_RESULT_ListExp_= $$; } 
  | Exp {  $$ = new ListExp() ; $$->push_back($1); YY_RESULT_ListExp_= $$; }
  | Exp _SYMB_6 ListExp {  $3->push_back($1) ; $$ = $3 ; YY_RESULT_ListExp_= $$; }
  | Exp {  $$ = new ListExp() ; $$->push_back($1); YY_RESULT_ListExp_= $$; }
  | Exp _SYMB_5 ListExp {  $3->push_back($1) ; $$ = $3 ; YY_RESULT_ListExp_= $$; }
;
ListId : _SYMB_50 {  $$ = new ListId() ; $$->push_back($1); YY_RESULT_ListId_= $$; } 
  | _SYMB_50 _SYMB_6 ListId {  $3->push_back($1) ; $$ = $3 ; YY_RESULT_ListId_= $$; }
  | _SYMB_50 {  $$ = new ListId() ; $$->push_back($1); YY_RESULT_ListId_= $$; }
  | _SYMB_50 _SYMB_14 ListId {  $3->push_back($1) ; $$ = $3 ; YY_RESULT_ListId_= $$; }
;

