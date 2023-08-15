#include "../include/features.hpp"

namespace CardFuncs
{
        bool printHelp()
        {
            Logger::logString("Help Start");

            std::cout << "all commands are case sensitive and lowercase\n";
            std::cout << "(c)hoose: takes argument of the card number and side "
                << "and prints that. Syntax is choose <cardNumber> <(f)ront or" 
                << "(b)ack>(Front is default)\n";
            std::cout << "(h)elp: shows available commands\n";
            std::cout << "(l)ist: lists current flashcards\n";
            std::cout << "(q)uit: quits program\n";
            
            Logger::logString("Help success");
            return CONTINUE;
        }

        bool chooseCard(FlashcardSet *cardSet, lastCard *lastChoosenCard)
        {
            Logger::logString("chooseCard start");
            int cardNum;
            std::string cardSide;

            std::cin >> cardNum;
            std::cin >> cardSide;
            Logger::logString("user asked for card " + std::to_string(cardNum) + 
                " side " + cardSide);

            if (cardNum >= cardSet->numCards)
            {
                std::cout << "Please enter a valid card number.\n";
                Logger::logString("user entered a invalid card number");
                return CONTINUE;
            }
            lastChoosenCard->card = *(cardSet->setArray + cardNum);
            Logger::logString("Saved last card");

            if (cardSide == "back" || cardSide == "b")
            {
                std::cout << (cardSet->setArray + cardNum)->back << '\n';
                lastChoosenCard->lastSide = 'b';
                return CONTINUE;
            } 
            else 
            {
                std::cout << (cardSet->setArray + cardNum)->front << '\n';
                lastChoosenCard->lastSide = 'f';
                return CONTINUE;
            }
        }
}