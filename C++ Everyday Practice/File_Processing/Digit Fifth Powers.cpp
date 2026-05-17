#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int digitCount(int x)
{
    int result=0;

    while(x>0)
    {
        result++;
        x/=10;
    }

    return result;
}

int aPowerB(int a,int b)
{
    int result=1;

    for(int i=0;i<b;i++)
    {
        result*=a;
    }

    return result;
}

bool isDigitFifthPower(int num, int exp)
{
    int sum=0;
    int x=num;
    while(num>0)
    {
        sum+=aPowerB(num%10,exp);
        num/=10;
    }
    if(sum==x)
        return true;
    return false;
}

long int digitFifthPowerSum(int power)
{
    int i=10;
    int n=digitCount(i);

    long int resultSum=0;

    while(aPowerB(10,n-1)<=(aPowerB(9,power)*n))
    {
        if(isDigitFifthPower(i,power))
        {
            resultSum+=i;

        }



        i++;
        n=digitCount(i);
    }

    return resultSum;
}

int main()
{
    cout<<digitFifthPowerSum(5);





    return 0;
}
