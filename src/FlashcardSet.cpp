#include "../include/FlashcardSet.hpp"

FlashcardSet::FlashcardSet(int numCards, FlashCard *setArray)
{
    this->setArray = setArray;
    this->numCards = numCards;
}