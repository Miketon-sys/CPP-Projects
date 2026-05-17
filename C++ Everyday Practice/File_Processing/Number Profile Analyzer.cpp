#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
using namespace std;

bool isPrime(int x);

int divisorSum(int x);
bool isPerfect(int x);

int digitSum(int x);
bool isHarshad(int x);

bool isSmith(int x);
int digitPersistence(int x);

struct NumberProfile
{
    int value;
    bool isPrime;
    bool isPerfect;
    bool isHarshad;
    bool isSmith;
    int persistence;
};



int main()
{
    struct NumberProfile num[100];

    ofstream outFile("report.txt");

    outFile << left
            << setw(12) << "Value"
            << setw(8)  << "Prime"
            << setw(10) << "Perfect"
            << setw(10) << "Harshad"
            << setw(8)  << "Smith"
            << setw(12) << "Persist"
            << '\n';

    outFile<< std::string(60, '-') << '\n';


    int n=0;
    cout<<"Enter n: ";
    cin>>n;

    if(n<1 || n>100)
    {
        cout<<"N must be greater than or equal to 1, or less than or equal to 100\n";
        return -1;
    }

    cout<<"Enter values: ";

    for(int i=0; i<n; i++)
    {
        cin>>num[i].value;
        num[i].isPrime=isPrime(num[i].value);
        num[i].isPerfect=isPerfect(num[i].value);
        num[i].isHarshad=isHarshad(num[i].value);
        num[i].isSmith=isSmith(num[i].value);
        num[i].persistence=digitPersistence(num[i].value);

    }

    for(int i=0; i<n; i++)
    {
        outFile << left
                << setw(12) << num[i].value
                << setw(8)  << (num[i].isPrime ? "Yes":"No")
                << setw(10) << (num[i].isPerfect ? "Yes":"No")
                << setw(10) << (num[i].isHarshad ? "Yes":"No")
                << setw(8)  << (num[i].isSmith ? "Yes":"No")
                << setw(12) << num[i].persistence
                << '\n';
    }
    outFile.close();

    return 0;
}

bool isPrime(int x)
{
    if(x<2)
        return false;
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int divisorSum(int x)
{
    int sum=0;
    for(int i=1; i<=x/2; i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}

bool isPerfect(int x)
{
    if(divisorSum(x)==x)
        return true;
    return false;
}

int digitSum(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}

bool isHarshad(int x)
{
    if(x%digitSum(x)==0)
        return true;
    return false;
}

bool isSmith(int x)
{

    int ds=digitSum(x);
    int sumOfPrimeFactors=0;
    if(!(isPrime(x)))
    {
        int i=2;
        while(x>0)
        {
            if(isPrime(i) && x%i==0)
            {
                sumOfPrimeFactors+=i;
                x/=i;
                i=2;
                continue;
            }
            i++;
        }


    }

    if(sumOfPrimeFactors==ds)
        return true;
    return false;
}
int digitPersistence(int x)
{
    int count=0;
    while(x/10!=0)
    {
        int temp=x;
        x=1;
        while(temp>0)
        {
            x*=temp%10;
            temp/=10;
        }
        count++;
    }
    return count;
}
