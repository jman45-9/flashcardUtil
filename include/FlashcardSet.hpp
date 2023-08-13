#ifndef FLASHCARD_FLASHCARD_SET_H_
#define FLASHCARD_FLASHCARD_SET_H_

#include <iostream>
#include <string>

#include "structs.hpp"

class FlashcardSet 
{
    public:
        FlashCard *setArray;
        int numCards;

    FlashcardSet(int numCards, FlashCard *setArray);
    void printCards();
};

#endif // FLASHCARD_FLASHCARD_SET_H_