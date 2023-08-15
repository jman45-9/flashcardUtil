#ifndef FLASHCARD_INCLUDE_MAIN_H_
#define FLASHCARD_INCLUDE_MAIN_H_

/// Headers

#include "macrosStdLibs.hpp"
#include "structs.hpp"
#include "classHeaders.hpp"
#include "logger.hpp"
#include "features.hpp"

/// using declarations

using std::string;

/// Function declarations 

bool chooseFunction(string userCommand, FlashcardSet *cardSet, lastCard *lastChoosenCard);

FlashcardSet *readSet(const char *filename);
void spiltFrontBack(string cardInfo, string *frontText, string *backText);

int countFileLines(const char *filename);


#endif // FLASHCARD_INCLUDE_MAIN_H_