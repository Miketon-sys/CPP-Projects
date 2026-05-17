#include <iostream>

/* Returns the sum of the digits of integer x */
int digitSum(int x);

/* Returns true if x is divisible by y, false otherwise */
bool isDivisible(int x, int y);

/* Returns true if x is a special number, false otherwise */
bool isSpecialNumber(int x);

/* Prints all special numbers within the given range */
void printSpecialNumbers(int start, int end);

int main()
{
    int start=0,end=0;
    std::cout<<"Enter start range: ";
    std::cin>>start;
    std::cout<<"Enter end range: ";
    std::cin>>end;

    if(start>end)
    {
        std::cout<<"START must NOT be GREATER than END!";
        return -1;
    }

    std::cout<<"Special numbers: ";
    printSpecialNumbers(start, end);
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

bool isDivisible(int x, int y)
{
    if(x%y==0)
        return true;
    return false;
}
/*
    A special number is defined as a positive integer that satisfies the following conditions:

    The number has at least two digits.

    The sum of its digits is an even number.

    The number is divisible by the sum of its digits.
*/

bool isSpecialNumber(int x)
{
    if(x<10)
        return false;
    int sumOfDig=digitSum(x);

    if(sumOfDig%2==0)
    {
        if(isDivisible(x,sumOfDig))
        {
            return true;
        }
    }
    return false;
}

void printSpecialNumbers(int start, int end)
{
    int count=0;
    for(int i=start;i<=end;i++)
    {
        if(isSpecialNumber(i))
        {
            std::cout<<i<<" ";
            count++;
        }
    }

    std::cout<<"\nTotal special numbers: "<<count;
    return;
}
