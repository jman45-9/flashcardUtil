#include "../include/features.hpp"

namespace CardFuncs
{
        bool printHelp()
        {
            std::cout << "(c)hoose: takes argument of the card number and side "
                << "and prints that. Syntax is choose <cardNumber> <(f)ront or" 
                << "(b)ack>\n";
            std::cout << "(h)elp: shows available commands\n";
            std::cout << "(l)ist: lists current flashcards\n";
            std::cout << "(q)uit: quits program\n";

            return CONTINUE;
        }
}