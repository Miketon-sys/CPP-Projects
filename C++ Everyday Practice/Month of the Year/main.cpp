#include <iostream>
#include "month.h"

using namespace std;

int main()
{

    monthType m1;

    cout<<"Default month: "<<m1.getMonthName()<<endl;
    m1.setMonth(10);
    cout << "Current month: " << m1.getMonthName() << endl;
    cout<<"Next month: "<<m1.getNextMonth()<<endl;
    cout<<"Previous month: "<<m1.getPrevMonth()<<endl;
    cout<<"Days in October: "<<m1.getDays()<<endl;
    cout<<"Add 4 months: "<<m1.calcAddMonth(4)<<endl;


    return 0;
}
