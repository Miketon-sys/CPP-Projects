#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <string>
using namespace std;

class card
{
public:
    card();
    card(string,int);
    string getSuit();
    int getRank();
    string getRankName();
    void printInfo();
    bool isPrime();
    bool isPerfect();
    ~card();

protected:
    string suit;
    int rank;
};

#endif // CARD_H_INCLUDED
