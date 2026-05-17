#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <string>
using namespace std;

class player
{
public:
    player();
    player(string);
    string getName();
    int getScore();
    void addPoint();
    void printScore();
    ~player();
private:
    string name;
    int score;
};

#endif // PLAYER_H_INCLUDED
