#include "../include/main.hpp"


int main()
{
    std::cout << "Hello World!\n";
    return 0;
}

FlashCard *readSet(char *filename)
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

    return setArray;
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


int countFileLines(char *filename)
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
