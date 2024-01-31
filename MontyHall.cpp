#include <iostream>
#include <vector>
#include <ctime>
#include <windows.h>
#include <cassert>
#include <string>

// Monte Hall Problem
//  3 doors, one of the three doors has the win token. Other two have nil
// simulation selects one door at random
// the other door will be opened that does not contain the win token and is not the door that was picked initially by simulation
// simulation will then choose the unopened door that was not initally picked
// the above described algoritihm chooses succesfully aproximately 66% of the time (2/3)
//detailed information below ... 
// https://betterexplained.com/articles/understanding-the-monty-hall-problem/

int determineWin(int userPick, int knownDoor);

int main()
{
    const int RUNS = 100; //run the test 100 times
    float winCount = 0; //keep track of wins

    for (int i = 0; i < RUNS; i++)
    {

        // formatting
        std::cout << std::endl;

        // deal with number generation
        Sleep(1000);
        srand(time(NULL));

        // set winning door number
        int winDoor = rand() % 3 + 1;

        // first pick
        int pick1 = rand() % 3 + 1;
        std::cout << "inital choice: " << pick1 << std::endl;

        // door is revealed
        int shownDoor = rand() % 3 + 1;
        while (shownDoor == pick1 || shownDoor == winDoor)
        { // ensure door that is revealed is not the first pick or the wininng door
            shownDoor = rand() % 3 + 1;
        }
        std::cout << "A door is shown: " << shownDoor << std::endl;

        // block user from picking one number and make them pick the only other number
        int finalChoice = determineWin(pick1, shownDoor);
        assert(finalChoice != -1);

        // formatting
        std::cout << "The Winning Door is : " << winDoor << std::endl
                  << "picked: " << finalChoice << std::endl;

        // check if correct pick
        if (finalChoice == winDoor)
        {
            winCount++;
        }

        std::cout << std::endl;
    }

    // result
    std::cout << "Successfully picked the correct door " << winCount << " % of the time" << std::endl;
    return 0;
}

int determineWin(int userPick, int knownDoor)
{

    // very straightforward logic
    // pick the number that was not initially picked and is not the opened or 'known' door

    if (1 != userPick && 1 != knownDoor)
    {
        return 1;
    }

    if (2 != userPick && 2 != knownDoor)
    {
        return 2;
    }

    if (3 != userPick && 3 != knownDoor)
    {
        return 3;
    }

    return -1;
}
