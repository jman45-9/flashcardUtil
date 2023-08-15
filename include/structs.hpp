#ifndef FLASHCARD_INCLUDE_STRUCTS_H_
#define FLASHCARD_INCLUDE_STRUCTS_H_

#include <string>

struct FlashCard {
    std::string front;
    std::string back;
};

struct lastCard {
    FlashCard card;
    char lastSide;
};
#endif // FLASHCARD_INCLUDE_STRUCTS_H_