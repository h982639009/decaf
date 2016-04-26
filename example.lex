
//operator \+|-|\*|/|%|<|<=|>|>=|=|==|!=|&&|\|\||!|\.|\[|\]|\(|\)|\{|\}
//delimiter ;|,
whiteSpace {blank}+

%{
	#include <stdio.h>
	int wordCount =0;
%}
keywords []
chars [A-Za-z\_\'\.\"]
numbers ([0-9])+
delim [" "\n\t]
whiteSpace {delim}+
words {chars}+
%%

{words} {wordCount++; 
        printf("words\n");}
{whiteSpace} {}
{numbers} {}

%%
void f();
void main(){
    yyin=fopen("test.c","r");
	yylex();
	printf("No of numbers :%d\n",wordCount);
	//f();
}

int yywrap(){
	return 1;
}

void f(){
	printf("call f!\n");
}