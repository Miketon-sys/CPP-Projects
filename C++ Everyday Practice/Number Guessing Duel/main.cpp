#include <iostream>
#include "game.h"
using namespace std;

int main()
{
    game g1("Mike","Aries",0);

    while(!g1.isOver())
    {
        g1.playRound();
        g1.printScores();
    }
    g1.printWinner();

    return 0;
}
