#include <iostream>
#include "card.h"

using namespace std;

card::card()
{
    suit="unknown";
    rank=0;
}
card::card(string s,int r)
{
    suit=s;
    rank=r;
}
string card::getSuit()
{
    return suit;
}
int card::getRank()
{
    return rank;
}
string card::getRankName()
{
    if(rank==1)
        return "Ace";
    else if(rank==11)
        return "Jack";
    else if(rank==12)
        return "Queen";
    else if(rank==13)
        return "King";
    else
    {
        //to_string wont work
        string s;
        s.push_back(rank+'0');
        return s;
    }
}
void card::printInfo()
{
    cout<<rank<<" of "<<suit<<endl;
}
bool card::isPrime()
{
    if(rank<2)
        return false;
    for(int i=2;i*i<=rank;i++)
    {
        if(rank%i==0)
            return false;
    }
    return true;
}
bool card::isPerfect()
{
    int sum=0;
    for(int i=1;i<=rank/2;i++)
    {
        if(rank%i==0)
            sum+=i;
    }
    return sum==rank;
}
card::~card()
{
}
