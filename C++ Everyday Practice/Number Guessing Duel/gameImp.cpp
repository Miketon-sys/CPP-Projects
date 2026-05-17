#include <iostream>
#include <string>
#include "game.h"

using namespace std;

game::game(string n1,string n2,int seed):p1(n1), p2(n2), secret(seed)
{
    round=1;
}
void game::playRound()
{
    int g;
    if(round % 2 != 0)
        cout << p1.getName() << " guess: ";
    else
        cout << p2.getName() << " guess: ";

    cin>>g;

    cout<<secret.getHint(g)<<endl;

    if(secret.getValue()==g)
    {
        if(round % 2 != 0)
            p1.addPoint();   // p1's turn
        else
            p2.addPoint();   // p2's turn

        secret = secretNumber(round);
    }
    round++;
}
void game::printScores()
{
    cout<<"Player 1: "<<p1.getName()<<endl;
    cout<<"Score: "<<p1.getScore()<<endl;

    cout<<"Player 2: "<<p2.getName()<<endl;
    cout<<"Score: "<<p2.getScore()<<endl<<endl;

}
bool game::isOver()
{
    if(p1.getScore()==3 || p2.getScore()==3)
        return true;
    return false;
}
void game::printWinner()
{
    if(p1.getScore() > p2.getScore())
        cout << p1.getName() << " wins!" << endl;
    else
        cout << p2.getName() << " wins!" << endl;
}
game::~game()
{
}
