#include <iostream>
using namespace std;

int sumOfFactors(unsigned int x)
{
    int sum=0;
    for(int  i=x/2;i>=1;i--)
    {
        if(x%i==0)
            sum+=i;
    }
    return sum;
}

bool isAmicable(int x)
{
    bool isfound=false;
    int factorsSum=sumOfFactors(x);
    if(x==factorsSum)
    {
        return false;
    }
    if(x==sumOfFactors(factorsSum))
    {
        return true;
    }

    /*
    while(x>0)
    {
        if(factorsSum==x)
        {
            isfound=true;
            break;
        }
        if(factorsSum<x)
            break;
        if(factorsSum>1000000)
            break;

        factorsSum=sumOfFactors(factorsSum);
    }
    if(isfound)
        return true;*/
    return false;

}
int main()
{
    int sumOfAmicableChain=0;

    for(int i=1;i<10000;i++)
    {
        //cout<<i;
        if(isAmicable(i))
        {
            cout<<" "<<i<<" ";
            sumOfAmicableChain+=i;
        }
        //cout<<endl;
    }


    cout<<sumOfAmicableChain;

    return 0;
}
