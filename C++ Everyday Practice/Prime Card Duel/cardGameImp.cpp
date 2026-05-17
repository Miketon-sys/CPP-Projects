#include <iostream>
#include "hand.h"
#include "cardGame.h"

using namespace std;

cardGame::cardGame(string n1,string n2): h1(n1),h2(n2)
{
    round=0;
}
void cardGame::dealCard(int player,specialCard c)
{
    if(player==1)
        h1.addCard(c);
    else
        h2.addCard(c);
}
void cardGame::playRound()
{
    cout<<"------ROUND "<<round+1<<"------"<<endl<<endl;
    if(h1.totalValue()==h2.totalValue())
    {
    }
    else if(h1.totalValue()>h2.totalValue())
    {
        h1.addPoint(1);
    }
    else
    {
        h2.addPoint(1);
    }
    round++;
}
void cardGame::printScores()
{
    cout<<"*******SCORES*******"<<endl;
    cout<<"Player 1: "<<h1.getName()<<endl;
    cout<<"Score: "<<h1.getScore()<<endl<<endl;

    cout<<"Player 2: "<<h2.getName()<<endl;
    cout<<"Score: "<<h2.getScore()<<endl<<endl;
    cout<<"********************"<<endl<<endl;
}
void cardGame::printWinner()
{
    cout<<"+++++++++++++++++++++++++++++++++++"<<endl;
    if(h1.totalValue()>h2.totalValue())
    {
        cout<<"\t"<<h1.getName()<<" Wins!"<<endl;
    }
    else
    {
         cout<<"\t"<<h2.getName()<<" Wins!"<<endl;
    }
    cout<<"+++++++++++++++++++++++++++++++++++"<<endl<<endl;
}
bool cardGame::isOver()
{
    if(round==3)
        return true;
    return false;
}
void cardGame::printStats()
{
    cout<<"-----------STATS-----------"<<endl;
    cout<<"Player: "<<h1.getName()<<endl;
    cout<<"Prime count: "<<h1.countPrimes()<<endl;
    cout<<"Has perfect cards: "<<h2.hasPerfect()<<endl<<endl;

    cout<<"Player: "<<h2.getName()<<endl;
    cout<<"Prime count: "<<h2.countPrimes()<<endl;
    cout<<"Has perfect cards: "<<h2.hasPerfect()<<endl;
    cout<<"-------------------------------"<<endl;
}
cardGame::~cardGame()
{
}
