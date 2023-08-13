#ifndef FLASHCARD_INCLUDE_MAIN_H_
#define FLASHCARD_INCLUDE_MAIN_H_

/// Headers

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

#include "../include/structs.hpp"
/// using declarations

using std::string;

FlashCard *readSet(char *filename);
void spiltFrontBack(string cardInfo, string *frontText, string *backText);

int countFileLines(char *filename);

#endif // FLASHCARD_INCLUDE_MAIN_H_