#include "main.h"


int main()
{

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

/* Saving for later
    FlashCard *setArray = (FlashCard *)(malloc(sizeof(FlashCard) * cardsNum));
    for (int iii = 0; cardsNum > iii; iii++)
    {
        string frontText;
        string backText;
        string cardInfo;

        std::getline(fileForSet, cardInfo);
        spiltFrontBack();
    }
    */
}

void spiltFrontBack(string cardInfo, string *frontText, string *backText)
{
    int splitMarker = -1;
    for(int iii = 0; cardInfo.length() >= iii; iii++)
    {
        if (cardInfo[iii] == ':' && cardInfo[iii+1] == '::')
        {
            
        }
    }

    if (splitMarker == -1)
    {
        std::cerr << "Please add a '::' between the front and back of" << cardInfo << '\n';
        exit(1);
    }
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
