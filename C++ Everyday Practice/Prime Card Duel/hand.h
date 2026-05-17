#ifndef HAND_H_INCLUDED
#define HAND_H_INCLUDED

#include <string>
#include <vector>
#include "specialCard.h"

using namespace std;

class hand
{
public:
    hand();
    hand(string);
    void addCard(specialCard);
    void addPoint(int);
    int getScore();
    string getName();
    int totalValue();
    int countPrimes();
    bool hasPerfect();
    ~hand();
private:
    string playerName;
    int score;
    vector<specialCard> cards;
};

#endif // HAND_H_INCLUDED
