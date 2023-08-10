#ifndef MAIN
#define MAIN

/// Headers

#include <iostream>
#include <fstream>
#include <string>

/// using declarations
using std::string;
/// Classes
class FlashCard {
    public:
        string front;
        string back;

};

FlashCard *readSet(char *filename);

#endif /* MAIN */