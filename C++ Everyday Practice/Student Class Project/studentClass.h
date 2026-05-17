#ifndef STUDENTCLASS_H_INCLUDED
#define STUDENTCLASS_H_INCLUDED
using namespace std;

class student
{
public:
    student();
    student(string,int,double);

    void printInfo();
    string isPassing();

    string getName();
    int getIdNumber();
    double getGwa();

    void setName(string);
    void setIdNumber(int);
    void setGwa(double);

    ~student();

private:
    string name;
    int idNumber;
    double gwa;
};

#endif // STUDENTCLASS_H_INCLUDED
