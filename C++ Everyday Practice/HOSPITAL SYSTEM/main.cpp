#include <iostream>
#include "inpatient.h"
#include "ward.h"

using namespace std;

int main()
{
    ward wA("Ward A");

    inpatient p1("Mike",18,"critical","Room 202",35);
    inpatient p2("John",18,"normal","Room 207",25);
    inpatient p3("Jane",18,"critical","Room 102",67);
    wA.addPatient(p1);
    wA.addPatient(p2);
    wA.addPatient(p3);

    wA.printAll();
    cout<<endl<<"Total Bill: "<<wA.totalBill()<<endl;
    wA.printHighestBill();



    return 0;
}
