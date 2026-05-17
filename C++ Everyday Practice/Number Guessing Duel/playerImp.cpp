#include <iostream>
#include <string>
#include "player.h"

using namespace std;

player::player()
{
    name="unknown";
    score=0;
}
player::player(string n)
{
    name=n;
    score=0;
}
string player::getName()
{
    return name;
}
int player::getScore()
{
    return score;
}
void player::addPoint()
{
    score++;
}
void player::printScore()
{
    cout<<"Score: "<<score;
}
player::~player()
{
}
