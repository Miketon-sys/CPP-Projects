#include <iostream>

bool isValidTransaction(int amount);
bool isSuspicious(int amount);

void computeTotal(int arr[], int n, int *total);
void computeTotal(int arr[], int n, int *total, int fee);

int digitSum(int x);


int main()
{
    int n;
    int total;
    int fee=5;

    std::cout<<"Enter number of transactions: ";
    std::cin>>n;
    int arr[n];
    int validTransac=0;
    int susTransac=0;
    std::cout<<"Enter values: ";
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
        if(isValidTransaction(arr[i]))
        {
            validTransac++;
        }
        if(isSuspicious(arr[i]))
        {
            susTransac++;
        }
    }

    std::cout<<"Valid transactions: "<<validTransac<<std::endl;
    std::cout<<"Suspicious transactions: "<<susTransac<<std::endl;

    computeTotal(arr,n,&total);
    std::cout<<"Final total (default fee): "<<total<<std::endl;

    computeTotal(arr,n,&total,10);
    std::cout<<"Final total (custom fee 10): "<<total<<std::endl;

    return 0;
}

bool isValidTransaction(int amount)
{
    if(amount%2==0 && amount>0)
    {
        return true;
    }
    return false;
}
bool isSuspicious(int amount)
{
    if(amount<0)
    {
        return false;
    }
    if(digitSum(amount)%7==0)
    {
        return true;
    }
    return false;
}

void computeTotal(int arr[], int n, int *total)
{
    int totalSum=-5;

    for(int i=0;i<n;i++)
    {
        totalSum+=arr[i];
    }

    *total=totalSum;
    return;
}
void computeTotal(int arr[], int n, int *total, int fee)
{
    int totalSum=-fee;

    for(int i=0;i<n;i++)
    {
        totalSum+=arr[i];
    }

    *total=totalSum;
    return;
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
