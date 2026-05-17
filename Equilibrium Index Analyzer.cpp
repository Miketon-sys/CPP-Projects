#include <iostream>

int arraySum(int arr[], int n);

void findEquilibriumIndices(
    int arr[], int n,
    int indices[], int &count
);

void displayIndices(int indices[], int count);

int main()
{
    int n;
    std::cout<<"Enter N (1-100): ";
    std::cin>>n;
    if(n<=0 || n>100)
    {
        std::cout<<"ERROR: Must not EXCEED 100 or LESSER than 1!";
        return -1;
    }
    int count=0;
    int arr[100];
    int indexArr[100];
    std::cout<<"Enter Values: ";
    for(int i=0; i<n; i++)
    {
        std::cin>>arr[i];
    }
    findEquilibriumIndices(arr,n,indexArr, count);
    std::cout<<"Equilibrium indices: ";
    displayIndices(indexArr, count);
    std::cout<<"\nTotal: "<<count;
    return 0;
}

int arraySum(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}

void findEquilibriumIndices(int arr[], int n, int indices[], int &count)
{
    int rightSum=arraySum(arr, n);
    int leftSum=0;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(i>0)
            leftSum+=arr[i-1];
        rightSum-=arr[i];
        if(rightSum==leftSum)
        {
            indices[count++]=i;
        }
    }
}

void displayIndices(int indices[], int count)
{
    for(int i=0;i<count;i++)
        std::cout<<indices[i]<<" ";
}

