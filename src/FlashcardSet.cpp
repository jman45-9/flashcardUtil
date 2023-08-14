#include "../include/FlashcardSet.hpp"

FlashcardSet::FlashcardSet(int numCards, FlashCard *setArray)
{
    this->setArray = setArray;
    this->numCards = numCards;
}

FlashcardSet::~FlashcardSet()
{
    free(this->setArray);
}

void FlashcardSet::printCards()
{
    for(int iii = 0; this->numCards > iii; iii++)
        std::cout << ((this->setArray)+iii)->front << ":::" << 
        ((this->setArray)+iii)->back << "\n";
}
