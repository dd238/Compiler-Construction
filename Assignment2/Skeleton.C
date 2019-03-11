/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"



void Skeleton::visitProgram(Program *t) {} //abstract class
void Skeleton::visitDef(Def *t) {} //abstract class
void Skeleton::visitArg(Arg *t) {} //abstract class
void Skeleton::visitStm(Stm *t) {} //abstract class
void Skeleton::visitQC(QC *t) {} //abstract class
void Skeleton::visitName(Name *t) {} //abstract class
void Skeleton::visitTmp(Tmp *t) {} //abstract class
void Skeleton::visitType(Type *t) {} //abstract class
void Skeleton::visitExp(Exp *t) {} //abstract class

void Skeleton::visitPDefs(PDefs *p_defs)
{
  /* Code For PDefs Goes Here */

  p_defs->listdef_->accept(this);

}

void Skeleton::visitDFun(DFun *d_fun)
{
  /* Code For DFun Goes Here */

  d_fun->type_->accept(this);
  visitId(d_fun->id_);
  d_fun->listarg_->accept(this);
  d_fun->liststm_->accept(this);

}

void Skeleton::visitDUse(DUse *d_use)
{
  /* Code For DUse Goes Here */

  visitId(d_use->id_1);
  visitId(d_use->id_2);

}

void Skeleton::visitDUsing2(DUsing2 *d_using)
{
  /* Code For DUsing2 Goes Here */

  visitId(d_using->id_);
  d_using->type_->accept(this);

}

void Skeleton::visitDTypDef(DTypDef *d_typ_def)
{
  /* Code For DTypDef Goes Here */

  d_typ_def->type_->accept(this);
  visitId(d_typ_def->id_);

}

void Skeleton::visitDDecl(DDecl *d_decl)
{
  /* Code For DDecl Goes Here */

  d_decl->type_->accept(this);
  visitId(d_decl->id_);
  d_decl->listarg_->accept(this);

}

void Skeleton::visitAFunc(AFunc *a_func)
{
  /* Code For AFunc Goes Here */

  a_func->type_->accept(this);

}

void Skeleton::visitADecl(ADecl *a_decl)
{
  /* Code For ADecl Goes Here */

  a_decl->type_->accept(this);
  visitId(a_decl->id_);

}

void Skeleton::visitSExp(SExp *s_exp)
{
  /* Code For SExp Goes Here */

  s_exp->exp_->accept(this);

}

void Skeleton::visitSTypDef(STypDef *s_typ_def)
{
  /* Code For STypDef Goes Here */

  s_typ_def->type_->accept(this);
  visitId(s_typ_def->id_);

}

void Skeleton::visitSWhile(SWhile *s_while)
{
  /* Code For SWhile Goes Here */

  s_while->exp_->accept(this);
  s_while->stm_->accept(this);

}

void Skeleton::visitSBlock(SBlock *s_block)
{
  /* Code For SBlock Goes Here */

  s_block->liststm_->accept(this);

}

void Skeleton::visitSIf(SIf *s_if)
{
  /* Code For SIf Goes Here */

  s_if->exp_->accept(this);
  s_if->stm_->accept(this);

}

void Skeleton::visitSIfElse(SIfElse *s_if_else)
{
  /* Code For SIfElse Goes Here */

  s_if_else->exp_->accept(this);
  s_if_else->stm_1->accept(this);
  s_if_else->stm_2->accept(this);

}

void Skeleton::visitSFor(SFor *s_for)
{
  /* Code For SFor Goes Here */

  s_for->listexp_->accept(this);
  s_for->stm_->accept(this);

}

void Skeleton::visitSReturn(SReturn *s_return)
{
  /* Code For SReturn Goes Here */

  s_return->exp_->accept(this);

}

void Skeleton::visitSDoWhile(SDoWhile *s_do_while)
{
  /* Code For SDoWhile Goes Here */

  s_do_while->stm_->accept(this);
  s_do_while->exp_->accept(this);

}

void Skeleton::visitQualConst(QualConst *qual_const)
{
  /* Code For QualConst Goes Here */

  qual_const->name_->accept(this);

}

void Skeleton::visitQualConst2(QualConst2 *qual_const)
{
  /* Code For QualConst2 Goes Here */

  qual_const->name_->accept(this);
  qual_const->qc_->accept(this);

}

void Skeleton::visitName1(Name1 *name)
{
  /* Code For Name1 Goes Here */

  visitId(name->id_);

}

void Skeleton::visitName2(Name2 *name)
{
  /* Code For Name2 Goes Here */

  name->tmp_->accept(this);

}

void Skeleton::visitTemplate(Template *template_)
{
  /* Code For Template Goes Here */

  template_->type_->accept(this);
  template_->listtype_->accept(this);

}

void Skeleton::visitTQC(TQC *tqc)
{
  /* Code For TQC Goes Here */

  tqc->qc_->accept(this);

}

void Skeleton::visitTAddress(TAddress *t_address)
{
  /* Code For TAddress Goes Here */

  t_address->type_->accept(this);

}

void Skeleton::visitTConst(TConst *t_const)
{
  /* Code For TConst Goes Here */

  t_const->type_->accept(this);

}

void Skeleton::visitType_bool(Type_bool *type_bool)
{
  /* Code For Type_bool Goes Here */


}

void Skeleton::visitType_int(Type_int *type_int)
{
  /* Code For Type_int Goes Here */


}

void Skeleton::visitType_double(Type_double *type_double)
{
  /* Code For Type_double Goes Here */


}

void Skeleton::visitType_void(Type_void *type_void)
{
  /* Code For Type_void Goes Here */


}

void Skeleton::visitType_string(Type_string *type_string)
{
  /* Code For Type_string Goes Here */


}

void Skeleton::visitType_vector(Type_vector *type_vector)
{
  /* Code For Type_vector Goes Here */


}

void Skeleton::visitType_map(Type_map *type_map)
{
  /* Code For Type_map Goes Here */


}

void Skeleton::visitEType(EType *e_type)
{
  /* Code For EType Goes Here */

  e_type->type_->accept(this);
  e_type->listid_->accept(this);

}

void Skeleton::visitEString(EString *e_string)
{
  /* Code For EString Goes Here */

  visitString(e_string->string_);

}

void Skeleton::visitEInt(EInt *e_int)
{
  /* Code For EInt Goes Here */

  visitInteger(e_int->integer_);

}

void Skeleton::visitEId(EId *e_id)
{
  /* Code For EId Goes Here */

  visitId(e_id->id_);

}

void Skeleton::visitEChar(EChar *e_char)
{
  /* Code For EChar Goes Here */

  visitChar(e_char->char_);

}

void Skeleton::visitQTypeExp(QTypeExp *q_type_exp)
{
  /* Code For QTypeExp Goes Here */

  q_type_exp->qc_->accept(this);

}

void Skeleton::visitEFunCall(EFunCall *e_fun_call)
{
  /* Code For EFunCall Goes Here */

  visitId(e_fun_call->id_);
  e_fun_call->listexp_->accept(this);

}

void Skeleton::visitEColon(EColon *e_colon)
{
  /* Code For EColon Goes Here */

  visitId(e_colon->id_);
  e_colon->exp_->accept(this);

}

void Skeleton::visitEInd(EInd *e_ind)
{
  /* Code For EInd Goes Here */

  visitId(e_ind->id_);
  e_ind->listexp_->accept(this);

}

void Skeleton::visitEPIncr(EPIncr *ep_incr)
{
  /* Code For EPIncr Goes Here */

  ep_incr->exp_->accept(this);

}

void Skeleton::visitEPDecr(EPDecr *ep_decr)
{
  /* Code For EPDecr Goes Here */

  ep_decr->exp_->accept(this);

}

void Skeleton::visitEDot(EDot *e_dot)
{
  /* Code For EDot Goes Here */

  e_dot->exp_1->accept(this);
  e_dot->exp_2->accept(this);

}

void Skeleton::visitEArrow(EArrow *e_arrow)
{
  /* Code For EArrow Goes Here */

  e_arrow->exp_1->accept(this);
  e_arrow->exp_2->accept(this);

}

void Skeleton::visitEDRef(EDRef *ed_ref)
{
  /* Code For EDRef Goes Here */

  ed_ref->exp_->accept(this);

}

void Skeleton::visitEIncr(EIncr *e_incr)
{
  /* Code For EIncr Goes Here */

  e_incr->exp_->accept(this);

}

void Skeleton::visitEDecr(EDecr *e_decr)
{
  /* Code For EDecr Goes Here */

  e_decr->exp_->accept(this);

}

void Skeleton::visitENeg(ENeg *e_neg)
{
  /* Code For ENeg Goes Here */

  e_neg->exp_->accept(this);

}

void Skeleton::visitEMod(EMod *e_mod)
{
  /* Code For EMod Goes Here */

  e_mod->exp_1->accept(this);
  e_mod->exp_2->accept(this);

}

void Skeleton::visitETimes(ETimes *e_times)
{
  /* Code For ETimes Goes Here */

  e_times->exp_1->accept(this);
  e_times->exp_2->accept(this);

}

void Skeleton::visitEDiv(EDiv *e_div)
{
  /* Code For EDiv Goes Here */

  e_div->exp_1->accept(this);
  e_div->exp_2->accept(this);

}

void Skeleton::visitEPlus(EPlus *e_plus)
{
  /* Code For EPlus Goes Here */

  e_plus->exp_1->accept(this);
  e_plus->exp_2->accept(this);

}

void Skeleton::visitEMinus(EMinus *e_minus)
{
  /* Code For EMinus Goes Here */

  e_minus->exp_1->accept(this);
  e_minus->exp_2->accept(this);

}

void Skeleton::visitESl(ESl *e_sl)
{
  /* Code For ESl Goes Here */

  e_sl->exp_1->accept(this);
  e_sl->exp_2->accept(this);

}

void Skeleton::visitESr(ESr *e_sr)
{
  /* Code For ESr Goes Here */

  e_sr->exp_1->accept(this);
  e_sr->exp_2->accept(this);

}

void Skeleton::visitELt(ELt *e_lt)
{
  /* Code For ELt Goes Here */

  e_lt->exp_1->accept(this);
  e_lt->exp_2->accept(this);

}

void Skeleton::visitEGt(EGt *e_gt)
{
  /* Code For EGt Goes Here */

  e_gt->exp_1->accept(this);
  e_gt->exp_2->accept(this);

}

void Skeleton::visitENewLin(ENewLin *e_new_lin)
{
  /* Code For ENewLin Goes Here */

  e_new_lin->exp_1->accept(this);
  e_new_lin->exp_2->accept(this);

}

void Skeleton::visitEEqual(EEqual *e_equal)
{
  /* Code For EEqual Goes Here */

  e_equal->exp_1->accept(this);
  e_equal->exp_2->accept(this);

}

void Skeleton::visitELtEq(ELtEq *e_lt_eq)
{
  /* Code For ELtEq Goes Here */

  e_lt_eq->exp_1->accept(this);
  e_lt_eq->exp_2->accept(this);

}

void Skeleton::visitEGtEq(EGtEq *e_gt_eq)
{
  /* Code For EGtEq Goes Here */

  e_gt_eq->exp_1->accept(this);
  e_gt_eq->exp_2->accept(this);

}

void Skeleton::visitEEq(EEq *e_eq)
{
  /* Code For EEq Goes Here */

  e_eq->exp_1->accept(this);
  e_eq->exp_2->accept(this);

}

void Skeleton::visitENEq(ENEq *en_eq)
{
  /* Code For ENEq Goes Here */

  en_eq->exp_1->accept(this);
  en_eq->exp_2->accept(this);

}

void Skeleton::visitEAnd(EAnd *e_and)
{
  /* Code For EAnd Goes Here */

  e_and->exp_1->accept(this);
  e_and->exp_2->accept(this);

}

void Skeleton::visitEOr(EOr *e_or)
{
  /* Code For EOr Goes Here */

  e_or->exp_1->accept(this);
  e_or->exp_2->accept(this);

}

void Skeleton::visitECond(ECond *e_cond)
{
  /* Code For ECond Goes Here */

  e_cond->exp_1->accept(this);
  e_cond->exp_2->accept(this);

}

void Skeleton::visitECond2(ECond2 *e_cond)
{
  /* Code For ECond2 Goes Here */

  e_cond->exp_1->accept(this);
  e_cond->exp_2->accept(this);

}

void Skeleton::visitEThrow(EThrow *e_throw)
{
  /* Code For EThrow Goes Here */

  e_throw->exp_->accept(this);

}


void Skeleton::visitListDef(ListDef *list_def)
{
  for (ListDef::iterator i = list_def->begin() ; i != list_def->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListArg(ListArg *list_arg)
{
  for (ListArg::iterator i = list_arg->begin() ; i != list_arg->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListStm(ListStm *list_stm)
{
  for (ListStm::iterator i = list_stm->begin() ; i != list_stm->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListType(ListType *list_type)
{
  for (ListType::iterator i = list_type->begin() ; i != list_type->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListExp(ListExp *list_exp)
{
  for (ListExp::iterator i = list_exp->begin() ; i != list_exp->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListId(ListId *list_id)
{
  for (ListId::iterator i = list_id->begin() ; i != list_id->end() ; ++i)
  {
    visitId(*i) ;
  }
}


void Skeleton::visitId(Id x)
{
  /* Code for Id Goes Here */
}

void Skeleton::visitInteger(Integer x)
{
  /* Code for Integer Goes Here */
}

void Skeleton::visitChar(Char x)
{
  /* Code for Char Goes Here */
}

void Skeleton::visitDouble(Double x)
{
  /* Code for Double Goes Here */
}

void Skeleton::visitString(String x)
{
  /* Code for String Goes Here */
}

void Skeleton::visitIdent(Ident x)
{
  /* Code for Ident Goes Here */
}



