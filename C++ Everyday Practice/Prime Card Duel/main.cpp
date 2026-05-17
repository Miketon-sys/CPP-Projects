#include <iostream>
#include "cardGame.h"
using namespace std;

int main()
{
    cardGame g("Mike", "Aivan");

    // deal cards to Mike
    g.dealCard(1, specialCard("Hearts", 7, 3));
    g.dealCard(1, specialCard("Spades", 2, 1));
    g.dealCard(1, specialCard("Clubs", 5, 2));

    // deal cards to Aivan
    g.dealCard(2, specialCard("Diamonds", 4, 2));
    g.dealCard(2, specialCard("Hearts", 9, 0));
    g.dealCard(2, specialCard("Clubs", 3, 4));

    // game loop
    while(!g.isOver())
    {
        g.playRound();
        g.printScores();
    }

    g.printWinner();
    g.printStats();

    return 0;
}
