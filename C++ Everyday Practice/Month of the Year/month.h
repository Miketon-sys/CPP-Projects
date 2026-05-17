#ifndef MONTH_H______H_INCLUDED
#define MONTH_H______H_INCLUDED

#include <string>
using namespace std;

class monthType
{
public:
    monthType();
    void setMonth(int);
    int getMonth();
    string getMonthName();
    string getNextMonth();
    string getPrevMonth();
    int getDays();
    string calcAddMonth(int);
    ~monthType();

private:
    int month;
};

#endif // MONTH_H______H_INCLUDED
