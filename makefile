CC = g++
SRCS := $(wildcard *.cpp)

compile:
	@${CC} -o bin/flashcards ${SRCS}

compDebug:
	@${CC} -g -o bin/flashcards ${SRCS}

clean:
	@rm bin/*
