
%token BOOL BREAK CLASS ELSE EXTENDS FOR IF INT NEW KEY_NULL RETURN STRING THIS VOID WHILE STATIC
%token PRINT READINTEGER READLINE INSTANCEOF TRUE FALSE
%token IDENTIFIER INTCONSTANT STRINGCONSTANT
%token LE_OP GE_OP EQ_OP NE_OP AND_OP OR_OP DOUBLE COMMENT
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
    : classdef
    | program classdef
    ;

variabledef
    :variable ';'
    ;

variable
    :type IDENTIFIER
    ;

type
    :INT
    |BOOL
    |STRING
    |VOID
    |CLASS IDENTIFIER
    |type '['']'
    ;

formals
    :formals_not_empty
    |
    ;

formals_not_empty
    :formals_not_empty ',' variable
    |variable
    ;


functiondef
    :STATIC functiondef_not_static
    |functiondef_not_static
    ;

functiondef_not_static
    :type IDENTIFIER '(' formals ')' stmtblock
    ;

classdef
    :CLASS IDENTIFIER EXTENDS IDENTIFIER '{' fields '}'
    |CLASS IDENTIFIER '{' fields '}'
    ;

fields
    :fields_not_empty
    |
    ;

fields_not_empty
    :fields_not_empty  field
    |field

field
    :variabledef
    |functiondef
    ;

stmtblock
    :'{' stmts '}'
    ;

stmts
    :stmts_not_empty 
    |
    ;

stmts_not_empty
    :stmts_not_empty  stmt
    |stmt
    ;


stmt
    :variabledef
    |simple_stmt ';'
    |if_stmt
    |while_stmt
    |for_stmt
    |break_stmt ';'
    |return_stmt ';'
    |print_stmt ';'
    |stmtblock
    ;

simple_stmt
    :lvalue '=' expr
    |call
    |
    ;

lvalue
    :lvalue_dot
    |lvalue_access
    ;

lvalue_dot
    :expr '.' IDENTIFIER
    |IDENTIFIER
    ;

lvalue_access
    :expr '[' expr ']'
    ;

call
    :expr '.' IDENTIFIER '(' actuals ')'
    |IDENTIFIER '(' actuals ')'
    ;

actuals
    :actuals_not_empty
    |actuals_empty
    ;

actuals_not_empty
    :actuals_not_empty ',' expr
    |expr
    ;

actuals_empty
    :
    ;

for_stmt
    :FOR '(' simple_stmt ';' bool_expr ';' simple_stmt ')' stmt
    ;

while_stmt
    :WHILE '(' bool_expr ')' stmt
    ;

if_stmt
    :IF '(' bool_expr ')' stmt
    |IF '(' bool_expr ')' stmt ELSE stmt
    ;

return_stmt
    :RETURN
    |RETURN expr
    ;

break_stmt
    :BREAK
    ;

print_stmt
    :PRINT '(' actuals_not_empty ')'
    ;

bool_expr
    :expr
    ;

expr
    :constant
    |lvalue
    |THIS
    |call
    |'(' expr ')'
    |expr '+' expr
    |expr '-' expr
    |expr '*' expr
    |expr '/' expr
    |expr '%' expr
    |'-' expr
    |expr '<' expr
    |expr LE_OP expr
    |expr '>' expr
    |expr GE_OP expr
    |expr EQ_OP expr
    |expr NE_OP expr
    |expr AND_OP expr
    |expr OR_OP expr
    |'!' expr
    |READINTEGER '(' ')'
    |READLINE '(' ')'
    |NEW IDENTIFIER '(' ')'
    |NEW type '[' expr ']'
    |INSTANCEOF '(' expr ',' IDENTIFIER ')'
    |'(' CLASS IDENTIFIER ')' expr
    ;

constant
    :INTCONSTANT
    |TRUE
    |FALSE
    |STRINGCONSTANT
    |KEY_NULL
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
   return( yyparse() );
}        

yyerror(s) char *s; {
    fprintf( stderr, "line %d, wordCount %d: %s\n", yylineno,wordCount,s );
}

int yywrap() 
{ 
   return 1; 
} 