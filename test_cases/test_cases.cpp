﻿//#include "lexer.hpp"

#include <iostream>
#include <vector>

<<<<<<< HEAD
=======
int main(int argc, char *argv[])
{
  // R28 <Primary>
  //
  // R27 <Factor>
  // Michael: R27 <Factor> :: = -<Primary> | <Primary>
  // R26.1 <Term'>
  // 
  // R26 <Term>
  // 
  // R25 <Expression>
  // 
  // R25.1 <Expression'>
  // 
  // R24 <Relop>
  // 
  // R23 <Condition>
  // Michael: R23 <Condition> :: = <Expression>  <Relop>   <Expression>
  // R22 <While>
  // 
  // R21 <Scan>
  // 
  // R20 <Print>
  // 
  // R19 <Return>
  // 
  // R18 <If>
  // 
  // R17 <Assign>
  // 
  // R16 <Compound>
  // 
  // R15 <Statement>
  // 
  // R14 <Statement List>
  // 
  // R13 <IDs>
  // 
  // R12 <Declaration>
  // 
  // R11 <Declaration List>
  // 
  // R10 <Opt Declaration List>
  // 
  // R9 <Body>
  // 
  // R8 <Qualifier>
  // Michael: R8 <Qualifier> :: = int | boolean | real
  // R7 <Parameter>
  // 
  // R6 <Parameter List>
  // 
  // R5 <Opt Parameter List>
  // 
  // R4 <Function>
  // 
  // R3 <Function Definitions>
  // 
  // R2 <Opt Function Definitions>
  // 
  // R1 <Rat20F>
  //

  return 0;
}
>>>>>>> 1511390a1156fe9264ff9de23371009554393d81

//bool identifier_helper(token_323 input_token);



//R28. <Primary> :: = <Identifier> | <Integer> | <Identifier>  (<IDs>) | (<Expression>) | <Real> | true | false
//---------------------------------------------------------------------------------------------------
//bool procedure_Primary(vector<token_323>& all_tokens, int& loc);


//R27. <Factor> :: = -<Primary> | <Primary>
//---------------------------------------------------------------------------------------------------
//bool procedure_Factor(vector<token_323>& all_tokens, int& loc);


//R26.1 <Term'> :: = * <Factor> <Term>' | / <Factor> <Term>' | ϵ
//---------------------------------------------------------------------------------------------------
//bool procedure_Term_q(vector<token_323>& all_tokens, int& loc);


//R26. <Term>    :: = <Factor> <Term>'
//---------------------------------------------------------------------------------------------------
//bool procedure_Term(vector<token_323>& all_tokens, int& loc);


//R25. <Expression>  :: = <Term> <Expression'>
//---------------------------------------------------------------------------------------------------
//bool procedure_Expression(vector<token_323>& all_tokens, int& loc);


//R25.1 <Expression'>  :: = ϵ | +<Term> <Expression'>  | -<Term> <Expression'>
//---------------------------------------------------------------------------------------------------
//bool procedure_Expression_q(vector<token_323>& all_tokens, int& loc);


//R24. <Relop> :: = ==   |   !=    | > | <    |  <=   | = >
//---------------------------------------------------------------------------------------------------
//bool procedure_Relop(vector<token_323>& all_tokens, int& loc);


//R23. <Condition> :: = <Expression>  <Relop>   <Expression>
//---------------------------------------------------------------------------------------------------
//bool procedure_Condition(vector<token_323>& all_tokens, int& loc);


//R22. <While> :: = while (<Condition>) < Statement >
//---------------------------------------------------------------------------------------------------
//bool procedure_While(vector<token_323>& all_tokens, int& loc);


//R21. <Scan> :: = get(<IDs>);
//---------------------------------------------------------------------------------------------------
//bool procedure_Scan(vector<token_323>& all_tokens, int& loc);


//R20. <Print> :: = put(<Expression>);
//---------------------------------------------------------------------------------------------------
//bool procedure_Print(vector<token_323>& all_tokens, int& loc);


//R19. <Return> :: = return; | return <Expression>;
//---------------------------------------------------------------------------------------------------
//bool procedure_Return(vector<token_323>& all_tokens, int& loc);


//R18. <If> :: = if (<Condition>) < Statement > fi | if (<Condition>) < Statement > else  <Statement>  fi
//---------------------------------------------------------------------------------------------------
//bool procedure_If(vector<token_323>& all_tokens, int& loc);


//R17. <Assign> :: = <Identifier> = <Expression>;
//---------------------------------------------------------------------------------------------------
//bool procedure_Assign(vector<token_323>& all_tokens, int& loc);


//R16. <Compound> :: = { <Statement List> }
//---------------------------------------------------------------------------------------------------
//bool procedure_Compound(vector<token_323>& all_tokens, int& loc);


//R15. <Statement> :: = <Compound> | <Assign> | <If> | <Return> | <Print> | <Scan> | <While>
//---------------------------------------------------------------------------------------------------
//bool procedure_Statement(vector<token_323>& all_tokens, int& loc);


//R14. <Statement List> :: = <Statement> | <Statement> <Statement List>
//---------------------------------------------------------------------------------------------------
//bool procedure_Statement_List(vector<token_323>& all_tokens, int& loc);


//R13. <IDs> :: = <Identifier> | <Identifier>, <IDs>
//---------------------------------------------------------------------------------------------------
//bool procedure_IDs(vector<token_323>& all_tokens, int& loc);


//R12. <Declaration> :: = <Qualifier > <IDs>
//---------------------------------------------------------------------------------------------------
//bool procedure_Declaration(vector<token_323>& all_tokens, int& loc);


//R11. <Declaration List>  : = <Declaration>; | <Declaration>; <Declaration List>
//---------------------------------------------------------------------------------------------------
//bool procedure_Declaration_List(vector<token_323>& all_tokens, int& loc);


//R10. <Opt Declaration List> :: = <Declaration List> | <Empty>
//---------------------------------------------------------------------------------------------------
//bool procedure_Opt_Declaration_List(vector<token_323>& all_tokens, int& loc);


//R9. <Body>  :: = { < Statement List> }
//---------------------------------------------------------------------------------------------------
//bool procedure_Body(vector<token_323>& all_tokens, int& loc);


//R8. <Qualifier> :: = int | boolean | real
//---------------------------------------------------------------------------------------------------
//bool procedure_Qualifier(vector<token_323>& all_tokens, int& loc);


//R7. <Parameter> :: = <IDs >  <Qualifier>
//---------------------------------------------------------------------------------------------------
//bool procedure_Parameter(vector<token_323>& all_tokens, int& loc);


//R6. <Parameter List>  :: = <Parameter> | <Parameter>, <Parameter List>
//---------------------------------------------------------------------------------------------------
//bool procedure_Parameter_List(vector<token_323>& all_tokens, int& loc);


//R5. <Opt Parameter List> :: = <Parameter List> | <Empty>
//---------------------------------------------------------------------------------------------------
//bool procedure_Opt_Parameter_List(vector<token_323>& all_tokens, int& loc);


//R4. <Function> :: = function  <Identifier>  (  <Opt Parameter List>  )   < Opt Declaration List >   <Body>
//bool procedure_Function(vector<token_323>& all_tokens, int& loc);


//R3. <Function Definitions>  :: = <Function> | <Function> <Function Definitions>
//---------------------------------------------------------------------------------------------------
//bool procedure_Function_Definitions(vector<token_323>& all_tokens, int& loc);


//R2. <Opt Function Definitions> :: = <Function Definitions> | <Empty>
//---------------------------------------------------------------------------------------------------
//bool procedure_Opt_Function_Definitions(vector<token_323> & all_tokens, int& loc);


//R1. <Rat20F>  :: = <Opt Function Definitions>   $$  <Opt Declaration List>  <Statement List>  $$
//---------------------------------------------------------------------------------------------------
//bool procedure_Rat20F(vector<token_323> & all_tokens, int& loc);



int main(int argc, char *argv[])
{
  // R28 <Primary>
  //
  // R27 <Factor>
  // 
  // R26.1 <Term'>
  // 
  // R26 <Term>
  // 
  // R25 <Expression>
  // 
  // R25.1 <Expression'>
  // 
  // R24 <Relop>
  // 
  // R23 <Condition>
  // 
  // R22 <While>
  // 
  // R21 <Scan>
  // 
  // R20 <Print>
  // 
  // R19 <Return>
  // 
  // R18 <If>
  // 
  // R17 <Assign>
  // 
  // R16 <Compound>
  // 
  // R15 <Statement>
  // 
  // R14 <Statement List>
  // 
  // R13 <IDs>
  // 
  // R12 <Declaration>
  // 
  // R11 <Declaration List>
  // 
  // R10 <Opt Declaration List>
  // 
  // R9 <Body>
  // 
  // R8 <Qualifier>
  // 
  // R7 <Parameter>
  // 
  // R6 <Parameter List>
  // 
  // R5 <Opt Parameter List>
  //
  // R4 <Function>
  // 
  // R3 <Function Definitions>
  // 
  // R2 <Opt Function Definitions>
  // 
  // R1 <Rat20F>
  //

  return 0;
}
