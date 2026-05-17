#include <iostream>
#include "hand.h"

using namespace std;

hand::hand()
{
    playerName="unknown";
    score=0;
}
hand::hand(string n)
{
    playerName=n;
    score=0;
}
void hand::addCard(specialCard s)
{
    cards.push_back(s);
}
void hand::addPoint(int p)
{
    score+=p;
}
string hand::getName()
{
    return playerName;
}
int hand::getScore()
{
    return score;
}
int hand::totalValue()
{
    int sum=0;
    for(int i=0;i<cards.size();i++)
    {
        sum+=cards[i].totalValue();
    }
    return sum;
}
int hand::countPrimes()
{
    int cnt=0;
    for(int i=0;i<cards.size();i++)
    {
        if(cards[i].isPrime())
            cnt++;
    }
    return cnt;
}
bool hand::hasPerfect()
{
    for(int i=0;i<cards.size();i++)
    {
        if(cards[i].isPerfect())
            return true;
    }
    return false;
}
hand::~hand()
{
}
