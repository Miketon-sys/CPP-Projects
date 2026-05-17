#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

double calculatePay(double hours, double rate);
void generateReport(const vector<Employee>& employees, const string& filename);

int main()
{
    struct Employee
    {
        int id;
        string name;
        double hours_worked;
        double hourly_rate;
        double gross_pay;  // This will be calculated
    };

    ofstream outFile;
    outFile.open("filePracticeEmployee.txt");
    if(outFile.is_open())
    {
        return 1;
    }
    outFile<<<<
    outFile.close();
}

double calculatePay(double hours, double rate)
{
    return hours*rate;
}

void generateReport(const vector<Employee>& employees, const string& filename)
{

}
