#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"


class Skeleton : public Visitor
{
public:
  void visitProgram(Program *p);
  void visitDef(Def *p);
  void visitArg(Arg *p);
  void visitStm(Stm *p);
  void visitQC(QC *p);
  void visitName(Name *p);
  void visitTmp(Tmp *p);
  void visitType(Type *p);
  void visitExp(Exp *p);
  void visitPDefs(PDefs *p);
  void visitDFun(DFun *p);
  void visitDUse(DUse *p);
  void visitDUsing2(DUsing2 *p);
  void visitDTypDef(DTypDef *p);
  void visitDDecl(DDecl *p);
  void visitAFunc(AFunc *p);
  void visitADecl(ADecl *p);
  void visitSExp(SExp *p);
  void visitSTypDef(STypDef *p);
  void visitSWhile(SWhile *p);
  void visitSBlock(SBlock *p);
  void visitSIf(SIf *p);
  void visitSIfElse(SIfElse *p);
  void visitSFor(SFor *p);
  void visitSReturn(SReturn *p);
  void visitSDoWhile(SDoWhile *p);
  void visitQualConst(QualConst *p);
  void visitQualConst2(QualConst2 *p);
  void visitName1(Name1 *p);
  void visitName2(Name2 *p);
  void visitTemplate(Template *p);
  void visitTQC(TQC *p);
  void visitTAddress(TAddress *p);
  void visitTConst(TConst *p);
  void visitEType(EType *p);
  void visitEString(EString *p);
  void visitEInt(EInt *p);
  void visitEId(EId *p);
  void visitEChar(EChar *p);
  void visitQTypeExp(QTypeExp *p);
  void visitEFunCall(EFunCall *p);
  void visitEColon(EColon *p);
  void visitEInd(EInd *p);
  void visitEPIncr(EPIncr *p);
  void visitEPDecr(EPDecr *p);
  void visitEDot(EDot *p);
  void visitEArrow(EArrow *p);
  void visitEDRef(EDRef *p);
  void visitEIncr(EIncr *p);
  void visitEDecr(EDecr *p);
  void visitENeg(ENeg *p);
  void visitEMod(EMod *p);
  void visitETimes(ETimes *p);
  void visitEDiv(EDiv *p);
  void visitEPlus(EPlus *p);
  void visitEMinus(EMinus *p);
  void visitESl(ESl *p);
  void visitESr(ESr *p);
  void visitELt(ELt *p);
  void visitEGt(EGt *p);
  void visitENewLin(ENewLin *p);
  void visitEEqual(EEqual *p);
  void visitELtEq(ELtEq *p);
  void visitEGtEq(EGtEq *p);
  void visitEEq(EEq *p);
  void visitENEq(ENEq *p);
  void visitEAnd(EAnd *p);
  void visitEOr(EOr *p);
  void visitECond(ECond *p);
  void visitECond2(ECond2 *p);
  void visitEThrow(EThrow *p);
  void visitType_bool(Type_bool *p);
  void visitType_int(Type_int *p);
  void visitType_double(Type_double *p);
  void visitType_void(Type_void *p);
  void visitType_string(Type_string *p);
  void visitType_vector(Type_vector *p);
  void visitType_map(Type_map *p);
  void visitListDef(ListDef *p);
  void visitListArg(ListArg *p);
  void visitListStm(ListStm *p);
  void visitListType(ListType *p);
  void visitListExp(ListExp *p);
  void visitListId(ListId *p);

  void visitId(Id x);
  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);

};


#endif
