#include <iostream>
#include "month.h"

using namespace std;

monthType::monthType()
{
    month=1;
}

void monthType::setMonth(int m)
{
    month=m;
}

int monthType::getMonth()
{
    return month;
}

string monthType::getMonthName()
{
    string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    return months[(month-1)%12];
}

string monthType::getNextMonth()
{
    string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    return months[(month)%12];
}

string monthType::getPrevMonth()
{
    string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    return months[(month+10)%12];
}

int monthType::getDays()
{
    int daysOfMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    return daysOfMonth[(month-1)%12];
}

string monthType::calcAddMonth(int m)
{
    string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    return months[(month-1+m)%12];
}

monthType::~monthType()
{
}

