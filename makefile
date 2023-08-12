CC = g++
GDB = gdb
SRCS := $(wildcard *.cpp)

compile:
	@${CC} -o bin/flashcards ${SRCS}

debug:
	@${CC} -g -o bin/flashcards ${SRCS}
	@gdb bin/flashcards

test:
	@${CC} -o bin/flashcards ${SRCS}
	@bin/flashcards

clean:
	@rm bin/*
