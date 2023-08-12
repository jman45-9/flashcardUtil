#include "main.h"


int main()
{

    return 0;
}

FlashCard *readSet(char *filename)
{
    int cardsNum = countFileLines(filename);

    std::ifstream setFile{filename};
    if (!setFile) 
    {
        std::cerr << "Failed to open set!\n";
        return NULL;
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
