
all: build exec

test:
	g++ test.cpp -o test
	./test

build:
	g++ engine/mainframe.cpp engine/init.cpp -o pogchess

exec:
	./pogchess

copy:
	sudo cp pogchess /usr/bin

clean:
	rm -rf main
	clear

uninstall:
	sudo rm -rf /usr/bin/pogchess