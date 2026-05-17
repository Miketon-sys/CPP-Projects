#include <iostream>

int countPositive(int arr[], int n);
int countNegative(int arr[], int start, int n);

void findMajorityBalanceIndices(
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
    findMajorityBalanceIndices(arr,n,indexArr, count);
    std::cout<<"Equilibrium indices: ";
    displayIndices(indexArr, count);
    std::cout<<"\nTotal: "<<count;
    return 0;
}

int countPositive(int arr[], int n)
{
    int countPos=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
            countPos++;
    }
    return countPos;
}

int countNegative(int arr[], int start, int n)
{
    int countNeg=0;
    for(int i=start; i<n; i++)
    {
        if(arr[i]<0)
            countNeg++;
    }
    return countNeg;
}

void findMajorityBalanceIndices(
    int arr[], int n,
    int indices[], int &count
)
{
    int posCount=countPositive(arr, n);
    int negCount=countNegative(arr,n-1,n);

    for(int i=n-1; i>=0; i--)
    {
       if(arr[i]>0)
        posCount--;
       if(i<n-1)
       {
           if(arr[i+1]<0)
            negCount++;
       }

        if(posCount==negCount)
            indices[count++]=i;
    }
}

void displayIndices(int indices[], int count)
{
    for(int i=0; i<count; i++) std::cout<<indices[i]<<" ";
}
