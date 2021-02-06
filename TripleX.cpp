#include <iostream>

void PrintIntroduction()
{
    // Prints welcome message to the terminal
    std::cout << "You're an adventurer entering a dungeon that consists of many rooms full of puzzles...\n";
    std::cout << "You will need to solve them in order to continue.\n\n";
}

void PlayGame()
{
    PrintIntroduction();

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
    }
    else
    {
        std::cout << "\nThere seems to be an error in your answer...";
    }
}

int main()
{
    PlayGame();
    return 0;
}