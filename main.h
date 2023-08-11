#ifndef MAIN
#define MAIN

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

#endif /* MAIN */