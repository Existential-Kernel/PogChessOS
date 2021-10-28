CC=gcc
SRC=engine
NAME=pogchess
VERSION="1.0"

.PHONY: remake test build exec clean install

all: build exec

remake:
	rm -rf engine/*

test:
	g++ tests/test.cpp -o tests/test
	./tests/test

build:
	$(CC) $(SRC)/main.c $(SRC)/init.c $(SRC)/bitboards.c $(SRC)/hashkeys.c \
	$(SRC)/board.c $(SRC)/data.c $(SRC)/attack.c $(SRC)/io.c \
	$(SRC)/movegen.c $(SRC)/validate.c $(SRC)/makemove.c $(SRC)/perft.c \
	$(SRC)/search.c $(SRC)/misc.c $(SRC)/pvtable.c -o $(NAME)

exec:
	./$(NAME)

clean:
	rm -rf $(SRC)/$(NAME)
	clear

install:
	sudo cp $(NAME) /usr/bin

uninstall:
	sudo rm -rf /usr/bin/$(NAME)