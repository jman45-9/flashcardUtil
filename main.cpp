#include "main.h"


int main()
{
    return 0;
}

FlashCard *readSet(char *filename)
{
    std::ifstream setFile{filename};
    if (!setFile)
    {
        std::cerr << "Failed to open set!\n";
    }
}
