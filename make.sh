bison -d grammer.y
flex word2.lex
gcc -o grammer lex.yy.c grammer.tab.c AST_Node.c