%{
	#include <stdio.h>
	int line=1;
	int line_index=0;
	int is_comment=0;
%}


letter [A-Za-z\_]
digit [0-9]
hex_digit [0-9a-fA-F]
delim [" "\t]
delimiter ;|,|\{|\}
comment \/\/



keywords bool|break|class|else|extends|for|if|int|new|null|return|string|this|void|while|static|Print|ReadInteger|ReadLine|instanceof|true|false
identifier {letter}({letter}|{digit})*
decimal [\+\-]*{digit}+
heximal [\+\-]*(0x|0X){hex_digit}+
double [\+\-]*{digit}+\.{digit}*(E[\+\-]*{digit}+)*
Constant {decimal}|{heximal}
stringConstant \"[^\"\n]*\"
operator \+|-|\*|\/|%|<|<=|>|>=|=|==|!=|&&|\|\||!|\.|\[|\]|\(|\)
whiteSpace {delim}+


%%

{keywords} {if(!is_comment) {printf("line%d,index%d: keywords(%s)\n",line,line_index,yytext);line_index++;}}
{identifier} {if(!is_comment) {printf("line%d,index%d: identifier\n",line,line_index);line_index++;}}
{Constant} {if(!is_comment) {printf("line%d,index%d: Constant\n",line,line_index);line_index++;}}
{stringConstant} {if(!is_comment) {printf("line%d,index%d: stringConstant\n",line,line_index);line_index++;}}
{operator} {if(!is_comment) {printf("line%d,index%d: operator\n",line,line_index);line_index++;}}
"\n" {line++;line_index=0;printf("\n");is_comment=0;}
{delimiter} {if(!is_comment) {printf("line%d,index%d: delimiter\n",line,line_index);line_index++;}}
{whiteSpace} {}
{comment} {printf("line%d: comment\n",line);is_comment=1;}
{double} {if(!is_comment) {printf("line%d,index%d: double\n",line,line_index);line_index++;}}



%%
void main(){
    yyin=fopen("test.c","r");
	yylex();
}

int yywrap(){
	return 1;
}
