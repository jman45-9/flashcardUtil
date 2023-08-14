#include "../include/main.hpp"


int main()
{
    string userSet;
    std::cout << "Please enter the file name for your set(MUST BE PLAIN TEXT):";
    std::cin >> userSet;

    Logger::logInit("logSheet.log");
    FlashcardSet *cardSet = readSet(userSet.c_str());

    bool runCode = 1;
    while (runCode)
    {
        string userCommand;
        std::cin >> userCommand;
        runCode = chooseFunction(userCommand);
    }

    delete cardSet;
    Logger::closeLog();
    return 0;
}

bool chooseFunction(string userCommand)
{

    if (userCommand == "quit" || userCommand == "q")
        return 0;

    std::cout << "Please enter a valid command, use help for a list of valid commands\n";
    return 1;
}

// caller takes ownership of the object and set array
FlashcardSet *readSet(const char *filename)
{
    int cardsNum = countFileLines(filename);

    std::ifstream fileForSet{filename};
    if (!fileForSet) 
    {
        std::cerr << "Failed to open set!\n";
        return NULL;
    }

    FlashCard *setArray = (FlashCard *)(malloc(sizeof(FlashCard) * cardsNum));
    for (int iii = 0; cardsNum > iii; iii++)
    {
        string frontText;
        string backText;
        string cardInfo;

        std::getline(fileForSet, cardInfo);
        spiltFrontBack(cardInfo, &frontText, &backText);

        FlashCard card {frontText, backText};
        *(setArray + iii) = card;
    }
    FlashcardSet *cardSet = new FlashcardSet(cardsNum, setArray);

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
