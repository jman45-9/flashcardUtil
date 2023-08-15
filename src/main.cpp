#include "../include/main.hpp"


int main()
{
    Logger::logInit("logSheet.log");
    Logger::logString("began program");

    string userSet;
    std::cout << "Please enter the file name for your set(MUST BE PLAIN TEXT):";
    std::cin >> userSet;
    Logger::logString("user set filename: " + userSet);

    FlashcardSet *cardSet = readSet(userSet.c_str());

    bool runCode = 1;
    while (runCode)
    {
        std::cout << "flashcardUtil> ";
        string userCommand;
        std::cin >> userCommand;
        runCode = chooseFunction(userCommand, cardSet);
    }
    Logger::logString("user quit program");

    delete cardSet;
    Logger::logString("ended program");
    Logger::closeLog();
    return 0;
}

bool chooseFunction(string userCommand, FlashcardSet *cardSet)
{
    Logger::logString("user used command " + userCommand);
    if (userCommand == "choose" || userCommand == "c")
        return CardFuncs::chooseCard(cardSet);
    if (userCommand == "list" || userCommand == "l")
        return cardSet->printCards();
    if (userCommand == "help" || userCommand == "h")
        return CardFuncs::printHelp();
    if (userCommand == "quit" || userCommand == "q")
        return QUIT;

    std::cout << "Please enter a valid command, use help for a list of valid commands\n";
    return CONTINUE;
}

// caller takes ownership of the object and set array
FlashcardSet *readSet(const char *filename)
{
    int cardsNum = countFileLines(filename);

    std::ifstream fileForSet{filename};
    if (!fileForSet) 
    {
        Logger::logString("Failed to open set!");
        exit(1);
    }

    FlashCard *setArray = (FlashCard *)(malloc(sizeof(FlashCard) * cardsNum));
    for (int iii = 0; cardsNum > iii; iii++)
    {
        string frontText;
        string backText;
        string cardInfo;

        std::getline(fileForSet, cardInfo);
        if (cardInfo.length() == 0 || cardInfo[0] == '#')
            continue;
        spiltFrontBack(cardInfo, &frontText, &backText);

        FlashCard card {frontText, backText};
        *(setArray + iii) = card;
    }
    FlashcardSet *cardSet = new FlashcardSet(cardsNum, setArray);

    Logger::logString("set read successfully");
    return cardSet;
}

void spiltFrontBack(string cardInfo, string *frontText, string *backText)
{
    int splitMarker = -1;
    for(int iii = 0; cardInfo.length() >= iii; iii++)
    {
        if (cardInfo[iii] == ':' && cardInfo[iii+1] == ':')
        {
            splitMarker = iii;
            break;
        }
    }

    if (splitMarker == -1)
    {
        std::cerr << "Please add a '::' between the front and back of \"" 
        << cardInfo << "\"\n";
        Logger::logString("User made syntax error");
        exit(1);
    }
    *frontText = cardInfo;
    frontText->erase(splitMarker, frontText->length());
    *backText = cardInfo;
    backText->erase(0, splitMarker + 2);
}


int countFileLines(const char *filename)
{
    std::ifstream file{filename};
    if (!file)
    {
        std::cerr << "Failed to open file!\n";
        return -1;
    }

    int lines = 0;
    while (file)
    {
        string trash;
        std::getline(file, trash);
        lines++;
    }
    return --lines;
}
