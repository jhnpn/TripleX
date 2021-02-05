#include <iostream>

int main()
{
    //Prints welcome message to the terminal
    std::cout << "You're an adventurer entering a dungeon that consists of many rooms full of puzzles...";
    std::cout << std::endl; //creates a new line
    std::cout << "You will need to solve them in order to continue." << std::endl;

    //declares 3 number code
    const int CodeA = 4; //example of a variable
    const int CodeB = 8;
    const int CodeC = 2;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    //prints sum and product to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl; //calls out the variable
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    //gets character input from the terminal
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "You may advance to the next room.";
    }
    else
    {
        std::cout << "There seems to be an error in your answer...";
    }

    return 0;
}