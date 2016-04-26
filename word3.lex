%option yylineno
%{
	#include <stdio.h>
	#include "grammer.tab.h"
	int wordCount =0;

%}


letter [A-Za-z\_]
digit [0-9]
hex_digit [0-9a-fA-F]
delim [" "\t]

identifier {letter}({letter}|{digit})*
decimal [\+\-]*{digit}+
heximal [\+\-]*(0x|0X){hex_digit}+
double [\+\-]*{digit}+\.{digit}*(E[\+\-]*{digit}+)*
stringConstant \"[^\"\n]*\"
whiteSpace {delim}+
%%

"\n" {wordCount=0;}
{whiteSpace} {}
"/*" {;}
"bool" {printf("bool");wordCount++;return(BOOL);}
"break" {printf("break");wordCount++;return(BREAK);}
"class" {printf("class");wordCount++;return CLASS;}
"else" {printf("else");wordCount++;return ELSE;}
"extends" {printf("extends");wordCount++;return EXTENDS;}
"for" {printf("for");wordCount++;return FOR;}
"if" {printf("if");wordCount++;return IF;}
"int" {printf("int");wordCount++;return INT;}
"new" {printf("new");wordCount++;return NEW;}
"null" {printf("null");wordCount++;return KEY_NULL;}
"return" {printf("return");wordCount++;return RETURN;}
"string" {printf("string");wordCount++;return STRING;}
"this" {printf("this");wordCount++;return THIS;}
"void" {printf("void");wordCount++;return VOID;}
"while" {printf("while");wordCount++;return WHILE;}
"static" {printf("static");wordCount++;return STATIC;}
"Print" {printf("Print");wordCount++;return PRINT;}
"ReadInteger" {printf("ReadInteger");wordCount++;return READINTEGER;}
"ReadLine" {printf("ReadLine");wordCount++;return READLINE;}
"instanceof" {printf("instanceof");wordCount++;return INSTANCEOF;}
"true" {printf("true");wordCount++;return TRUE;}
"false" {printf("false");wordCount++;return FALSE;}


{identifier} {printf("identifier");wordCount++;return IDENTIFIER;}
{decimal} {printf("decimal");wordCount++;return INTCONSTANT;}
{heximal} {printf("heximal");wordCount++;return INTCONSTANT;}
{stringConstant} {printf("string_constant");wordCount++;return STRINGCONSTANT;}


"+" {printf("+");wordCount++;return '+';}
"-" {printf("-");wordCount++;return '-';}
'*' {printf("*");wordCount++;return '*';}
"/" {printf("/");wordCount++;return '/';}
"%" {printf("%%");wordCount++;return '%';}
"<" {printf("<");wordCount++;return '<';}
"<=" {printf("<=");wordCount++;return LE_OP;}
">" {printf(">");wordCount++;return '>';}
">=" {printf(">=");wordCount++;return GE_OP;}
"=" {printf("=");wordCount++;return '=';}
"==" {printf("==");wordCount++;return EQ_OP;}
"!=" {printf("!=");wordCount++;return NE_OP;}
"&&" {printf("&&");wordCount++;return AND_OP;}
"||" {printf("||");wordCount++;return OR_OP;}
"!" {printf("!");wordCount++;return '!';}
"." {printf(".");wordCount++;return '.';}
"[" {printf("[");wordCount++;return '[';}
"]" {printf("]");wordCount++;return ']';}
"(" {printf("(");wordCount++;return '(';}
")" {printf(")");wordCount++;return ')';}
"{" {printf("{");wordCount++;return '{';}
"}" {printf("}");wordCount++;return '}';}
";" {printf(";");wordCount++;return ';';}
"," {printf(",");wordCount++;return ',';}




%%
void main(){
    //yyin=fopen("test.c","r");
	yylex();
	printf("No of numbers :%d\n",wordCount);
}

int yywrap(){
	return 1;
}

void setYYin(){
	yyin=fopen("test.c","r");
}
