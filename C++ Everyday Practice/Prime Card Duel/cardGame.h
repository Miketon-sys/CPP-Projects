#ifndef CARDGAME_H_INCLUDED
#define CARDGAME_H_INCLUDED
#include <string>
#include "hand.h"

using namespace std;

class cardGame
{
public:
    cardGame(string,string);
    void dealCard(int player,specialCard c);
    void playRound();
    void printScores();
    void printWinner();
    bool isOver();
    void printStats();
    ~cardGame();
private:
    hand h1;
    hand h2;
    int round;
};

#endif // CARDGAME_H_INCLUDED
