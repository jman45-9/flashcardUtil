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

        bool chooseCard(FlashcardSet *cardSet)
        {
            Logger::logString("chooseCard start");
            int cardNum;
            std::string cardSide;

            std::cin >> cardNum;
            std::cin >> cardSide;

            if (cardNum >= cardSet->numCards)
            {
                std::cout << "Please enter a valid card number.\n";
                return CONTINUE;
            }

            if (cardSide == "back" || cardSide == "b")
            {
                std::cout << (cardSet->setArray + cardNum)->back << '\n';
                return CONTINUE;
            } 
            else 
            {
                std::cout << (cardSet->setArray + cardNum)->front << '\n';
                return CONTINUE;
            }
        }
}