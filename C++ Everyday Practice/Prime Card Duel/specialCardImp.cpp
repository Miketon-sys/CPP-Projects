#include <iostream>
#include "specialCard.h"

using namespace std;

specialCard::specialCard() : card()
{
    bonus=0;
}
specialCard::specialCard(string s,int r,int b) : card(s,r)
{
    bonus=b;
}
int specialCard::getBonus()
{
    return bonus;
}
int specialCard::totalValue()
{
    return rank+bonus;
}
void specialCard::printInfo()
{
    card::printInfo();
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Total value: "<<totalValue()<<endl;
}
specialCard::~specialCard()
{

}
