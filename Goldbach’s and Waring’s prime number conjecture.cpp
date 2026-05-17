#include <iostream>

bool isPrime(int x);
bool isEven(int x);
void printGolbachspair(int x);
void printWaringTrio(int x);

int main()
{
    int userInput=0;
    std::cout<<"Enter number: ";
    std::cin>>userInput;

    if(isEven(userInput))
    {
        printGolbachspair(userInput);
    }
    else
    {
        printWaringTrio(userInput);
    }

    return 0;
}

bool isPrime(int x)
{
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

bool isEven(int x)
{
   if(x%2==0)
        return true;
   return false;
}

void printGolbachspair(int x)
{
    for(int i=3;i<=x/2;i+=2)
    {
        for(int j=3;j<x;j+=2)
        {
            if(i+j==x)
            {
                if(isPrime(i) && isPrime(j))
                {
                    std::cout<<i<<"+"<<j<<", ";
                }
            }
        }
    }
}

void printWaringTrio(int x)
{
    for(int i=2;i<=x/3;i++)
    {
        for(int j=2;j<= x*2/3;j++)
        {
            for(int k=2;k<x;k++)
            {
                if(i+j+k==x)
                {
                    if(isPrime(i) && isPrime(j) && isPrime(k))
                    {
                        std::cout<<i<<"+"<<j<<"+"<<k<<", ";
                    }
                }
            }
        }
    }
}
