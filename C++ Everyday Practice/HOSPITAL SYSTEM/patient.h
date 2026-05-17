#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <string>
using namespace std;

class patient
{
public:
    patient();
    patient(string,int,string);
    void setName(string);
    void setAge(int);
    void setDiagnosis(string);
    string getName();
    int getAge();
    string getDiagnosis();
    void printInfo();
    ~patient();

private:
    string name;
    int age;
    string diagnosis;
};

#endif // PATIENT_H_INCLUDED
