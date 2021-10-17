src=engine
NAME=pogchess
version="1.0"

all: build exec

remake:
	rm -rf engine/*

test:
	g++ tests/test.cpp -o tests/test
	./tests/test

build:
	g++ $(src)/vice.c $(src)/init.c $(src)/bitboards.c $(src)/hashkeys.c \
	$(src)/board.c $(src)/data.c $(src)/attack.c $(src)/io.c \
	$(src)/movegen.c $(src)/validate.c $(src)/makemove.c $(src)/perft.c \
	$(src)/search.c $(src)/misc.c $(src)/pvtable.c -o $(NAME)

exec:
	./$(NAME)

clean:
	rm -rf $(src)/$(NAME)
	clear

install:
	sudo cp $(NAME) /usr/bin

uninstall:
	sudo rm -rf /usr/bin/$(name)