#ifndef FLASHCARD_INCLUDE_MAIN_H_
#define FLASHCARD_INCLUDE_MAIN_H_

/// Headers

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cassert>

#include "structs.hpp"
#include "FlashcardSet.hpp"
#include "logger.hpp"

/// using declarations

using std::string;

/// Function declarations 

bool chooseFunction(string userCommand);

FlashcardSet *readSet(const char *filename);
void spiltFrontBack(string cardInfo, string *frontText, string *backText);

int countFileLines(const char *filename);


#endif // FLASHCARD_INCLUDE_MAIN_H_