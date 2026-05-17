#include <iostream>
#include "day.h"

using namespace std;

int main()
{

    dayType d;

    cout<<"Default day: ";
    d.printDay();

    d.setDay("Saturday");
    cout<<"Current Day: ";
    d.printDay();

    cout<<"Next day: "<<d.getNextDay()<<endl;
    cout<<"Previous day: "<<d.getPrevDay()<<endl;
    cout<<"Add 3 days: "<<d.calcAddDay(3)<<endl;


    return 0;
}
