LEX = flex
CC=cc
GG=gcc
PP=./infix
PL=rm
calcula:		infix
			$(PP) < infixStrings.txt > out.txt
infix:			calculator01 infix_prefix.c
			$(GG) -o infix infix_prefix.c
calculator01:		lex.yy.c
			$(CC) -o calculator01 lex.yy.c 
lex.yy.c:		Calc.lex
			$(LEX) Calc.lex
