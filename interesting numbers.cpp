#include <iostream>
using namespace std;

//functions to be implemented
int digitSum(int x);
bool isDigitPowerSum(int x);
void printDigitPowerSum (int x=5);

int main()
{
    //cout<<digitSum(512);
    //cout<<isDigitPowerSum(8);
    printDigitPowerSum(5);
    return 0;
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
bool isDigitPowerSum(int x)
{
    int multiplyer=x;
    for(int i=2;true;i++)
    {
        x*=multiplyer;
        if(x%10!=x && digitSum(x)==multiplyer)
        {
            return 1;
        }
    }

    return 0;
}

void printDigitPowerSum (int x)
{
    if(isDigitPowerSum(x))
    {
        cout<<x;
    }
}
