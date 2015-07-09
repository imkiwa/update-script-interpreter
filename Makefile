export CC := gcc
export YACC := yacc
export LEX := lex

export BIN := update-binary-kiva

export CFLAGS += -std=c99

SRC := install.c expr.c lexer.c parser.c updater.c
OBJ := $(SRC:.c=.o)


$(BIN): $(OBJ)
	gcc -o $@ $(CFLAGS) $(OBJ)

clean:
	$(RM) -f $(OBJ) $(BIN)

