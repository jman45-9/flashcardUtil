#ifndef FLASHCARD_INCLUDE_FEATURES_H_
#define FLASHCARD_INCLUDE_FEATURES_H_

#include "macrosStdLibs.hpp"
#include "logger.hpp"
#include "classHeaders.hpp"
#include "structs.hpp"
namespace CardFuncs
{
    bool printHelp();
    bool chooseCard(FlashcardSet *cardSet, lastCard *lastChosenCard);
    bool flipCard(lastCard *lastChoosenCard);
}

#endif // FLASHCARD_INCLUDE_FEATURES_H_