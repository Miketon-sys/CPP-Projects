#ifndef SPECIALCARD_H_INCLUDED
#define SPECIALCARD_H_INCLUDED

#include <string>
#include "card.h"

using namespace std;

class specialCard : public card
{
public:
    specialCard();
    specialCard(string,int,int);
    int getBonus();
    int totalValue();
    void printInfo();
    ~specialCard();
private:
    int bonus;
};

#endif // SPECIALCARD_H_INCLUDED
