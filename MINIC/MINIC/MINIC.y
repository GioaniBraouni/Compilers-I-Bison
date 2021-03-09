%language "C++"

%{
#include <iostream>
#include "MINIC.tab.h"
#include "CompositeConcrete.h"

using namespace std;
extern int yylex(yy::parser::semantic_type *yylval ,yy::parser::location_type *yylloc);
extern FILE *yyin;

%}
%verbose

%locations

%initial-action {
// Filename for locations here
@$.begin.filename = @$.end.filename = new std::string("test.txt");
}

%error-verbose
%code requires{
	#include "Composite.h"
}

%union{
	CSTNode *node;
}

%start compile_unit
%token <node> IDENTIFIER NUMBER
%token RETURN BREAK IF ELSE SWITCH FUNCTION
%token WHILE DO FOR
%token INT FLOAT
%token CASE 
%token DEFAULT
%nonassoc IFPREC
%left '='
%left OR
%left AND
%nonassoc GTE GT LTE LT EQUAL NEQUAL
%left PLUS MINUS
%left MULT DIV
%nonassoc NOT ELSE

%type <node> compile_unit function_definition fargs statement compound_statement statement_list expression args

%type <node> selection_statement if_statement switch_statement case_options default_option

%type <node> while_statement do_while_statement for_statement

%type <node> array elems elem 


%%

compile_unit: statement							{ $$=g_root= new CCompileUnit($1);}
			| compile_unit statement			{ $$=g_root= new CCompileUnit($1,$2);}
			| function_definition				{ $$=g_root= new CCompileUnit($1);}
			| compile_unit function_definition  { $$=g_root= new CCompileUnit($1,$2);}
			;

function_definition : FUNCTION IDENTIFIER '(' fargs ')' compound_statement { $$ = new CFunctionDefinition($2,$4,$6);
																			g_symbolTable.GetSymbol(((CIDENTIFIER *)$2)->m_text)->syntaxNode =$$;
																		   }
				|	  FUNCTION IDENTIFIER '('  ')' compound_statement  { $$ = new CFunctionDefinition($2,$5);
																		g_symbolTable.GetSymbol(((CIDENTIFIER *)$2)->m_text)->syntaxNode =$$;
																	   }
				;

fargs :   IDENTIFIER		{ $$ = new CFormalArgs($1); }
		| fargs ',' IDENTIFIER  { $$ = new CFormalArgs($1,$3); }
		;

statement : expression ';'			 { $$ = new CExpressionStatement($1) ;}
		  | compound_statement
		  | selection_statement		 { $$ = new CSelectionStatement($1)  ;}	
		  | while_statement
		  |	do_while_statement
		  | for_statement
		  | RETURN expression ';'	 { $$ = new CReturnStatement($2) ;}
		  | BREAK ';'				 { $$ = new CBreakStatement() ;}
		  | ';'						 { $$ = new CNullStatement() ;}

selection_statement : if_statement { $$ = $1;}
					| switch_statement { $$ = $1;}
					;

if_statement : IF '(' expression ')' statement %prec IFPREC   { $$ = new CIfStatement($3,$5) ;}
			 | IF '(' expression ')' statement ELSE statement  { $$ = new CIfStatement($3,$5,$7) ;}
			 ;

switch_statement : SWITCH '(' expression ')' '{' case_options'}' { $$ = new CSwitchStatement($3,$6);}
				 | SWITCH '(' expression ')' '{' case_options default_option '}' { $$ = new CSwitchStatement($3,$6,$7);}
				 ;

case_options	 : CASE expression ':' statement_list					{ $$ = new CCaseOptions($2,$4);}
				 | CASE expression ':'									{ $$ = new CCaseOptions($2);}
				 | case_options CASE expression ':' statement_list		{ $$ = new CCaseOptions($1,$3,$5);}
				 | case_options CASE expression ':'						{ $$ = new CCaseOptions($1,$3);}
				 ;

default_option   :	DEFAULT ':' statement_list							{ $$ = new CDefaultOption($3);}
				 ;

while_statement : WHILE '(' expression ')' statement  { $$ = new CWhileStatement($3,$5) ;}
				;	

do_while_statement : DO statement WHILE '(' expression ')' ';' {$$ = new CDoWhileStatement($2,$5) ;}
				   ;

for_statement : FOR '(' ';' ';' ')' statement {$$ = new CForStatement($6);}
			  | FOR '(' ';' expression ';' expression ')' statement {$$ = new CForStatement($4,$6,$8);}
			  | FOR '(' expression ';' expression ';' expression ')' statement {$$ = new CForStatement($3,$5,$7,$9);}
		   	  ;

compound_statement : '{' '}'					{ $$ = new CCompoundStatement() ;}
					| '{' statement_list '}'    { $$ = new CCompoundStatement($2) ;}
					;
statement_list : statement					{ $$ = new CStatementList($1) ;}
			   | statement_list statement	{ $$ = new CStatementList($1,$2) ;}
			   ;

	//Needs more work , for 1d & 2d array
array: '{' elems '}'						{ $$ = $2;}
			;

elems :  elem								{ $$ = new CElems($1);}
      |  elems ',' elem						{ $$ = new CElems($1,$3);}
	  ;

elem   : expression	 					    { $$ = new CElem($1);}
	   | array								{ $$ = new CElem($1);}
       ;

expression: NUMBER							{ $$ = $1; }							
		  | IDENTIFIER						{ $$ = new CExpressionVariable($1);
											  g_symbolTable.GetSymbol(((CIDENTIFIER *)$1)->m_text)->syntaxNode =$$;
											}
		  | array 							{ $$ = new CArray($1);}
		  | IDENTIFIER '(' ')'				{ $$ = new CExpressionFCall($1); }
		  | IDENTIFIER '(' args ')'			{ $$ = new CExpressionFCall($1,$3); }
		  | expression '[' expression']' 	{ 
											  $$ = new CExpressionArray($1,$3);
											}
		  | expression PLUS expression		{ $$ = new CExpressionAdd($1,$3); }
		  | expression MINUS expression		{ $$ = new CExpressionMinus($1,$3); }
		  | expression MULT expression		{ $$ = new CExpressionMult($1,$3); }
		  | expression DIV expression		{ $$ = new CExpressionDiv($1,$3); }
		  | PLUS expression					{ $$ = new CExpressionUnaryPlus($2); }
		  | MINUS expression				{ $$ = new CExpressionUnaryMinus($2); }
		  | expression PLUS     			{ $$ = new CExpressionPostFixPlus($1); }
		  | expression MINUS	    		{ $$ = new CExpressionPostFixMinus($1); }
		  | '(' expression ')'				{ $$ = $2;}
		  | IDENTIFIER '=' expression		{ $$ = new CExpressionAssign($1,$3); }
		  | expression AND expression		{ $$ = new CExpressionAND($1,$3); }
		  | expression OR expression		{ $$ = new CExpressionOR($1,$3); }
		  | NOT expression					{ $$ = new CExpressionNOT($2); }
		  | expression GT expression		{ $$ = new CExpressionGT($1,$3); }
		  | expression GTE expression		{ $$ = new CExpressionGTE($1,$3); }
		  | expression LT expression		{ $$ = new CExpressionLT($1,$3); }
		  | expression LTE expression		{ $$ = new CExpressionLTE($1,$3); }
		  | expression EQUAL expression		{ $$ = new CExpressionEQUAL($1,$3); }
		  | expression NEQUAL expression	{ $$ = new CExpressionNEQUAL($1,$3); }
		  ;

args : expression							{ $$ = new CActualArgs($1); }	
	 | args ',' expression					{ $$ = new CActualArgs($1,$3); }	
	 ;
%%

namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}