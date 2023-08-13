#ifndef FLASHCARD_INCLUDE_MAIN_H_
#define FLASHCARD_INCLUDE_MAIN_H_

/// Headers

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

#include "structs.hpp"
#include "FlashcardSet.hpp"
/// using declarations

using std::string;

FlashcardSet *readSet(char *filename);
void spiltFrontBack(string cardInfo, string *frontText, string *backText);

int countFileLines(char *filename);

#endif // FLASHCARD_INCLUDE_MAIN_H_