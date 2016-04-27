%type <ast> program classdef variabledef variable  formals functiondef
%type <ast> field stmtblock stmt simple_stmt if_stmt while_stmt for_stmt 
%type <ast> break_stmt return_stmt print_stmt 
%type <ast> lvalue expr call actuals bool_expr 

bison -d grammer.y
flex word2.lex
gcc -o grammer lex.yy.c grammer.tab.c AST_Node.c


class Computer{
	int cpu;
	void Crash(int numTimes){
		int i;
		for(i=0;i<numTimes;i=i+1){
			Print("sad\n");
		}
	}
}