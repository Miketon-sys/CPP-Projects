#include <iostream>
#include <string>
#include "secretNumber.h"

using namespace std;

secretNumber::secretNumber(int seed)
{
    value=((long long)seed*1103515245 + 12345)%1000+1;
}

int secretNumber::getValue()
{
    return value;
}
bool secretNumber::isEven(int n)
{
    if(n%2==0)
        return true;
    return false;
}
bool secretNumber::isPrime(int n)
{
    if(n<2)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
string secretNumber::getHint(int guess)
{
    if(guess==value)
        return "Correct!";
    if(isPrime(guess))
    {
        if(guess<value)
            return "Too low - and your guess is prime";
        else
            return "Too high - and your guess is prime";
    }
    else
    {
        if(guess<value)
            return "Too low - and your guess is not prime";
        else
            return "Too high - and your guess is not prime";
    }
}
secretNumber::~secretNumber()
{
}
