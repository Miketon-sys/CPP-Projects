#include "ward.h"
#include <iostream>

using namespace std;

ward::ward() : wardName("unknown")
{
}

ward::ward(string n) : wardName(n)
{
}

void ward::addPatient(inpatient p)
{
    patients.push_back(p);
}

void ward::printAll()
{
    cout<<wardName<<endl;
    cout<<"-----Patients-----"<<endl;
    int s=getCount();
    for(int i=0;i<s;i++)
    {
        patients[i].printInfo();
    }
}

int ward::getCount()
{
    return patients.size();
}

double ward::totalBill()
{
    double sum=0;
    int s=getCount();
    for(int i=0;i<s;i++)
    {
        sum+=patients[i].billAmount();
    }
    return sum;
}

void ward::printHighestBill()
{
    double highestBill=patients[0].billAmount();
    int p=0;
    int s=getCount();
    for(int i=1;i<s;i++)
    {
        if(patients[i].billAmount()>highestBill)
        {
            highestBill=patients[i].billAmount();
            p=i;
        }
    }
    cout<<endl<<"Patient with the highest bill: "<<endl;
    patients[p].printInfo();
}

ward::~ward()
{
}
