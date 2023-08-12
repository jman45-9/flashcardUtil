#ifndef FLASHCARD_MAIN_H_
#define FLASHCARD_MAIN_H_

/// Headers

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

/// using declarations
using std::string;
/// Classes
class FlashCard {
    public:
        string front;
        string back;
    FlashCard(string front, string back)
    {
        this->front = front;
        this->back = back;
    }

};

FlashCard *readSet(char *filename);

int countFileLines(char *filename);

#endif // FLASHCARD_MAIN_H_