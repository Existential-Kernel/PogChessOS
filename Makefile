src=engine
name=pogchess
version="1.0"

all: build exec

test:
	g++ test.cpp -o test
	./test

build:
	gcc $(src)/mainframe.c $(src)/init.c $(src)/bitboards.c $(src)/hashkeys.c $(src)/board.c $(src)/data.c -o pogchess

exec:
	./$(name)

copy:
	sudo cp $(name) /usr/bin

clean:
	rm -rf $(name)
	clear

uninstall:
	sudo rm -rf /usr/bin/pogchess