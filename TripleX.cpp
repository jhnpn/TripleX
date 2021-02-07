#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // Prints welcome message to the terminal
    std::cout << "\n\nYou're a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nEnter the code to continue\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // declares 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 2; 

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // prints sum and product to the terminal
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "\nYou may advance to the next room.";
        return true;
    }
    else
    {
        std::cout << "\nThere seems to be an error in your answer...";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;

    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            // Increase the level difficulty
            ++LevelDifficulty;
        }
        
    }

    return 0;
}