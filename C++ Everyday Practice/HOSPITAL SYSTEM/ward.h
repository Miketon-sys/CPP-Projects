#ifndef WARD_H_INCLUDED
#define WARD_H_INCLUDED
#include "inpatient.h"
#include <string>
#include <vector>

using namespace std;

class ward
{
public:
    ward();
    ward(string);
    void addPatient(inpatient);
    void printAll();
    int getCount();
    double totalBill();
    void printHighestBill();
    ~ward();

private:
    string wardName;
    vector<inpatient> patients;
};

#endif // WARD_H_INCLUDED
