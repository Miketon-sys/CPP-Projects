#include "day.h"
#include <iostream>

using namespace std;

dayType::dayType()
{
    day="Sunday";
}


void dayType::setDay(string d)
{
    day=d;
}

string dayType::getDay()
{
    return day;
}

string dayType::getNextDay()
{
    string days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    for(int i=0;i<7;i++)
    {
        if(days[i]==day)
        {
            return days[(i+1)%7];
        }
    }
}

string dayType::getPrevDay()
{
    string days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    for(int i=0;i<7;i++)
    {
        if(days[i]==day)
        {
            return days[(i+6)%7];
        }
    }
}

void dayType::printDay()
{
    cout<<day<<endl;
}

string dayType::calcAddDay(int n)
{
    string days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    for(int i=0;i<7;i++)
    {
        if(days[i]==day)
        {
            return days[(i+n)%7];
        }
    }
}

dayType::~dayType()
{
}
