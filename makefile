CC = g++
WINCC = x86_64-w64-mingw32-g++
GDB = gdb
SRCSDIREC = src/
SRCS := $(wildcard ${SRCSDIREC}*.cpp)

compile:
	@${CC} -o bin/debFlashcards ${SRCS}

debug:
	@${CC} -g -o bin/debFlashcards ${SRCS}
	@gdb bin/debFlashcards

test:
	@${CC} -o bin/debFlashcards ${SRCS}
	@echo "start code"
	@bin/debFlashcards

winCompile:
	@${WINCC} ${SRCS} -o bin/winFlashcards

clean:
	@rm bin/*
