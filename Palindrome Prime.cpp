#include <iostream>

int isPrime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    std::cout<<"Start Range: ";
    int startRange=0;
    std::cin>>startRange;
    std::cout<<"End Range: ";
    int endRange=0;
    std::cin>>endRange;

    std::cout<<"Palindrome Primes: ";
    for(int i=startRange;i<=endRange;i++)
    {
        if(isPrime(i))
        {
            int temp=i;
            int revNum=0;
            while(temp>0)
            {
                revNum=(revNum)*10+(temp%10);
                temp/=10;
            }
            if(isPrime(revNum))
            {
                std::cout<<i<<" ";

            }
        }
    }


    return 0;
}
