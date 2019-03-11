CC=g++
CCFLAGS=-g -W -Wall

FLEX=flex
FLEX_OPTS=-PGrammarParser

BISON=bison
BISON_OPTS=-t -pGrammarParser

OBJS=Absyn.o Lexer.o Parser.o Printer.o

.PHONY: clean distclean

all: TestGrammarParser

clean:
	rm -f *.o TestGrammarParser GrammarParser.aux GrammarParser.log GrammarParser.pdf GrammarParser.dvi GrammarParser.ps GrammarParser

distclean: clean
	rm -f Absyn.C Absyn.H Test.C Parser.C Parser.H Lexer.C Skeleton.C Skeleton.H Printer.C Printer.H Makefile GrammarParser.l GrammarParser.y GrammarParser.tex

TestGrammarParser: ${OBJS} Test.o
	@echo "Linking TestGrammarParser..."
	${CC} ${CCFLAGS} ${OBJS} Test.o -o TestGrammarParser

Absyn.o: Absyn.C Absyn.H
	${CC} ${CCFLAGS} -c Absyn.C

Lexer.C: GrammarParser.l
	${FLEX} -oLexer.C GrammarParser.l

Parser.C: GrammarParser.y
	${BISON} GrammarParser.y -o Parser.C

Lexer.o: Lexer.C Parser.H
	${CC} ${CCFLAGS} -c Lexer.C 

Parser.o: Parser.C Absyn.H
	${CC} ${CCFLAGS} -c Parser.C

Printer.o: Printer.C Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Printer.C

Skeleton.o: Skeleton.C Skeleton.H Absyn.H
	${CC} ${CCFLAGS} -Wno-unused-parameter -c Skeleton.C

Test.o: Test.C Parser.H Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Test.C
