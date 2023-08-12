#ifndef FLASHCARD_MAIN_H_
#define FLASHCARD_MAIN_H_

/// Headers

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

/// using declarations

using std::string;
/// Structs & Classes

struct FlashCard {
    string front;
    string back;
};


FlashCard *readSet(char *filename);
void spiltFrontBack(string cardInfo, string frontText, string backText);

int countFileLines(char *filename);

#endif // FLASHCARD_MAIN_H_