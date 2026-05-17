#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "player.h"
#include "secretNumber.h"

class game
{
public:
    game(string,string,int);
    void playRound();
    void printScores();
    bool isOver();
    void printWinner();
    ~game();

private:
    player p1;
    player p2;
    secretNumber secret;
    int round;
};

#endif // GAME_H_INCLUDED
