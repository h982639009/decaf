
%{
   #include "AST_Node.h"
   #include "stdio.h"
   struct Node * programBlock;
%}
%union{
    struct Node * ast;
    int intv;
    double dbv;
    char * str;
}

%token BOOL 
%token BREAK CLASS ELSE EXTENDS FOR IF 
%token <intv> INT 
%token NEW 
%token KEY_NULL 
%token RETURN 
%token <str> STRING 
%token THIS VOID WHILE STATIC
%token PRINT READINTEGER READLINE INSTANCEOF TRUE FALSE
%token IDENTIFIER INTCONSTANT STRINGCONSTANT
%token LE_OP GE_OP EQ_OP NE_OP AND_OP OR_OP 
%token <dbv> DOUBLE 
%token COMMENT

%type <ast> program classdef variabledef variable  type formals 
%type <ast> formals_not_empty functiondef
%type <ast> functiondef_not_static fields fields_not_empty field stmtblock stmts 
%type <ast> stmts_not_empty stmt
%type <ast>simple_stmt if_stmt while_stmt for_stmt 
%type <ast> break_stmt return_stmt print_stmt 
%type <ast> lvalue lvalue_dot lvalue_access 
%type <ast> expr call actuals bool_expr constant actuals_not_empty 

%start program

%left '='
%left OR_OP
%left AND_OP
%left EQ_OP NE_OP
%left '<' LE_OP '>' GE_OP
%left '+' '-'
%left '*' '/' '%'
%left '[' ']' '.' '(' ')'
%left '!'
%%


program 
    : classdef {programBlock= newNode(); $$=programBlock; addChild($$,$1);setType($$,"program");}
    | program classdef {addChild($$,$1);}
    ;

variabledef
    :variable ';' {$$=newNode(); addChild($$,$1); setType($$,"variabledef"); }
    ;

variable
    :type IDENTIFIER {$$=newNode();addChild($$,$1);setType($$,"variable");}
    ;

type
    :INT {$$=newNode();setType($$,"int");}
    |BOOL {$$=newNode();setType($$,"bool");}
    |STRING {$$=newNode();setType($$,"string");}
    |VOID {$$=newNode();setType($$,"void");printf("\ncon:%s\n",($$)->typeName);}
    |CLASS IDENTIFIER {$$=newNode();setType($$,"class");}
    |type '['']'    {addChild($$,$1);}
    ;

formals
    :formals_not_empty {$$=newNode();addChild($$,$1);setType($$,"formals");printf("\ncon:%s\n",($$)->typeName);}
    |  {$$=newNode();setType($$,"formals");}
    ;

formals_not_empty
    :formals_not_empty ',' variable {addChild($$,$3);}
    |variable  {$$=newNode();addChild($$,$1);setType($$,"formals_not_empty");}
    ;


functiondef
    :STATIC functiondef_not_static {$$=newNode();addChild($$,$2);setType($$,"functiondef");}
    |functiondef_not_static {$$=newNode();addChild($$,$1);setType($$,"functiondef");}
    ;

functiondef_not_static
    :type IDENTIFIER '(' formals ')' stmtblock {$$=newNode();addChild($$,$1);addChild($$,$4);addChild($$,$6);setType($$,"functiondef_not_static");printf("\ncon:%d\n",($$)->childnum);if(($$)->list==NULL)printf("\ncon:NULL POINTER\n");}
    ;

classdef
    :CLASS IDENTIFIER EXTENDS IDENTIFIER '{' fields '}'
    {$$=newNode();addChild($$,$6);setType($$,"classdef_externs");}
    |CLASS IDENTIFIER '{' fields '}'  {$$=newNode();addChild($$,$4);setType($$,"classdef");}
    ;

fields
    :fields_not_empty  {$$=newNode();addChild($$,$1);setType($$,"fields");}
    |  {$$=newNode();setType($$,"fields");}
    ;

fields_not_empty
    :fields_not_empty  field  {addChild($$,$2);setType($$,"fields_not_empty");}
    |field  {$$=newNode();addChild($$,$1);setType($$,"fields_not_empty");}

field
    :variabledef  {$$=newNode();addChild($$,$1);setType($$,"field");}
    |functiondef  {$$=newNode();addChild($$,$1);setType($$,"field");}
    ;

stmtblock
    :'{' stmts '}'  {$$=newNode();addChild($$,$2);setType($$,"stmtblock");printf("\ncon:%s\n",($$)->typeName);}
    ;

stmts
    :stmts_not_empty {$$=newNode();addChild($$,$1);setType($$,"stmts");}
    |  {$$=newNode();setType($$,"stmts");}
    ;

stmts_not_empty
    :stmts_not_empty  stmt  {addChild($$,$2);}
    |stmt  {$$=newNode();addChild($$,$1);setType($$,"classdef");}
    ;


stmt
    :variabledef  {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    |simple_stmt ';'  {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    |if_stmt  {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    |while_stmt  {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    |for_stmt  {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    |break_stmt ';' {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    |return_stmt ';' {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    |print_stmt ';'  {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    |stmtblock  {$$=newNode();addChild($$,$1);setType($$,"stmt");}
    ;

simple_stmt
    :lvalue '=' expr  {$$=newNode();addChild($$,$3);setType($$,"simple_stmt");}
    |call  {$$=newNode();addChild($$,$1);setType($$,"simple_stmt");}
    |   {$$=newNode();setType($$,"simple_stmt");}
    ;

lvalue
    :lvalue_dot {$$=newNode();addChild($$,$1);setType($$,"lvalue");}
    |lvalue_access  {$$=newNode();addChild($$,$1);setType($$,"lvalue");}
    ;

lvalue_dot
    :expr '.' IDENTIFIER  {$$=newNode();addChild($$,$1);setType($$,"lvalue_dot");}
    |IDENTIFIER  {$$=newNode();setType($$,"lvalue_dot");}
    ;

lvalue_access
    :expr '[' expr ']'  {$$=newNode();addChild($$,$1);addChild($$,$3);setType($$,"lvalue_access");}
    ;

call
    :expr '.' IDENTIFIER '(' actuals ')'  {$$=newNode();addChild($$,$1);addChild($$,$5);setType($$,"call");}
    |IDENTIFIER '(' actuals ')'  {$$=newNode();addChild($$,$3);setType($$,"call");}
    ;

actuals
    :actuals_not_empty  {$$=newNode();addChild($$,$1);setType($$,"actuals");}
    |  {$$=newNode();setType($$,"actuals");}
    ;

actuals_not_empty
    :actuals_not_empty ',' expr  {;addChild($$,$3);}
    |expr  {$$=newNode();addChild($$,$1);setType($$,"actuals_not_empty");}
    ;


for_stmt
    :FOR '(' simple_stmt ';' bool_expr ';' simple_stmt ')' stmt
    {$$=newNode();addChild($$,$3);addChild($$,$5);addChild($$,$7);setType($$,"for_stmt");}
    ;

while_stmt
    :WHILE '(' bool_expr ')' stmt
    {$$=newNode();addChild($$,$3);addChild($$,$5);setType($$,"while_stmt");}
    ;

if_stmt
    :IF '(' bool_expr ')' stmt
    {$$=newNode();addChild($$,$3);addChild($$,$5);setType($$,"if_stmt");}
    |IF '(' bool_expr ')' stmt ELSE stmt
    {$$=newNode();addChild($$,$3);addChild($$,$5);addChild($$,$7);setType($$,"if_stmt");}
    ;

return_stmt
    :RETURN  {$$=newNode();setType($$,"return_stmt");}
    |RETURN expr   {$$=newNode();addChild($$,$2);setType($$,"return_stmt");}
    ;

break_stmt
    :BREAK  {$$=newNode();setType($$,"break_stmt");}
    ;

print_stmt
    :PRINT '(' actuals_not_empty ')'  {$$=newNode();addChild($$,$3);setType($$,"print_stmt");}
    ;

bool_expr
    :expr  {$$=newNode();addChild($$,$1);setType($$,"bool_expr");}
    ;

expr
    :constant  {$$=newNode();addChild($$,$1);setType($$,"expr");}
    |lvalue  {$$=newNode();addChild($$,$1);setType($$,"expr");}
    |THIS  {$$=newNode();setType($$,"expr_this");}
    |call  {$$=newNode();addChild($$,$1);setType($$,"expr");}
    |'(' expr ')'  {addChild($$,$2);}
    |expr '+' expr {addChild($$,$1);addChild($$,$3);}
    |expr '-' expr {addChild($$,$1);addChild($$,$3);}
    |expr '*' expr {addChild($$,$1);addChild($$,$3);}
    |expr '/' expr {addChild($$,$1);addChild($$,$3);}
    |expr '%' expr {addChild($$,$1);addChild($$,$3);}
    |'-' expr      {addChild($$,$2);}
    |expr '<' expr {addChild($$,$1);addChild($$,$3);}
    |expr LE_OP expr  {addChild($$,$1);addChild($$,$3);}
    |expr '>' expr    {addChild($$,$1);addChild($$,$3);}
    |expr GE_OP expr  {addChild($$,$1);addChild($$,$3);}
    |expr EQ_OP expr  {addChild($$,$1);addChild($$,$3);}
    |expr NE_OP expr  {addChild($$,$1);addChild($$,$3);}
    |expr AND_OP expr {addChild($$,$1);addChild($$,$3);}
    |expr OR_OP expr  {addChild($$,$1);addChild($$,$3);}
    |'!' expr         {addChild($$,$2);}
    |READINTEGER '(' ')'     {$$=newNode();setType($$,"expr_readI");}
    |READLINE '(' ')'        {$$=newNode();setType($$,"expr_readL");}
    |NEW IDENTIFIER '(' ')'  {$$=newNode();setType($$,"expr_new");}
    |NEW type '[' expr ']'   {addChild($$,$2);addChild($$,$4);}
    |INSTANCEOF '(' expr ',' IDENTIFIER ')'  {addChild($$,$3);}
    |'(' CLASS IDENTIFIER ')' expr {addChild($$,$5);}
    ;

constant
    :INTCONSTANT {$$=newNode();setType($$,"constant_I");}
    |TRUE   {$$=newNode();setType($$,"constant_T");}
    |FALSE  {$$=newNode();setType($$,"constant_F");}
    |STRINGCONSTANT   {$$=newNode();setType($$,"constant_S");}
    |KEY_NULL   {$$=newNode();setType($$,"constant_N");}
    ;
 
%%
#include <stdio.h>

/*extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}*/

void setYYin();


extern int yylineno;
extern int wordCount;
main(){
   //yyin=fopen("test.c","r");
   setYYin();
   yyparse();
   if(programBlock!=NULL){
       printf("\nprogramBlock\n");
   }
   print(programBlock);
}        

yyerror(s) char *s; {
    fprintf( stderr, "line %d, wordCount %d: %s\n", yylineno,wordCount,s );
}

int yywrap() 
{ 
   return 1; 
} 