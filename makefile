CC = g++
GDB = gdb
SRCSDIREC = src/
SRCS := $(wildcard ${SRCSDIREC}*.cpp)

compile:
	@${CC} -o bin/flashcards ${SRCS}

debug:
	@${CC} -g -o bin/flashcards ${SRCS}
	@gdb bin/flashcards

test:
	@${CC} -o bin/flashcards ${SRCS}
	@echo "start code"
	@bin/flashcards

clean:
	@rm bin/*
