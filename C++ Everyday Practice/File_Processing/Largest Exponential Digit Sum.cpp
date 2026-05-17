#include <iostream>
#include <vector>
using namespace std;

long long int intExp(int a, int b);
int digitSum (long long int x);
void storeLargestExpDigitSum (int x[], int s);
void dispExpDigitSum(int x[],int s);


int main()
{
    int s;
    cin>>s;
    if(s>9)
        return 1;
    int x[s];
    storeLargestExpDigitSum(x,s);
    dispExpDigitSum(x,s);

    return 0;
}

long long int intExp(int a, int b)
{
    long long int result=1;
    for(int i=0;i<b;i++)
    {
        result*=a;
    }

    return result;
}

int digitSum (long long int x)
{
    int result=0;

    while(x>0)
    {
        result+=(x%10);
        x/=10;
    }

    return result;
}

void storeLargestExpDigitSum (int x[], int s)
{
    for(int i=0;i<s;i++)
    {
        int largestDigitSum=0;
        for(int j=0;j<=18;j++)
        {
            int sumOfDigits = digitSum(intExp(i,j));
            if(largestDigitSum<sumOfDigits)
            {
                largestDigitSum=sumOfDigits;
            }
        }
        x[i]=largestDigitSum;
    }
}

void dispExpDigitSum(int x[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<i<<": "<<x[i]<<endl;
    }
}
