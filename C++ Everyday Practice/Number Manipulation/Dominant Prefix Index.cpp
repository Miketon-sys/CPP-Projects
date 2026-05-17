#include <iostream>
using namespace std;

void findDominantPrefixIndices(int arr[], int n, int indices[], int &count);
void displayIndices(int indices[], int count);

int main()
{
    int n;
    cout<<"Enter N (1-100): ";
    cin>>n;
    if(n<=0 || n>100)
    {
        cout<<"ERROR: Must not EXCEED 100 or LESSER than 1!";
        return -1;
    }
    int count=0;
    int arr[100];
    int indexArr[100];
    cout<<"Enter Values: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    findDominantPrefixIndices(arr,n,indexArr, count);
    cout<<"Equilibrium indices: ";
    displayIndices(indexArr, count);
    cout<<"\nTotal: "<<count;
    return 0;
}

void findDominantPrefixIndices(int arr[], int n, int indices[], int &count)
{
    int rightNegativeSum=0;
    int leftPositiveTotalSum=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            rightNegativeSum+=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            leftPositiveTotalSum+=arr[i];
        else
            rightNegativeSum-=arr[i];

        if(leftPositiveTotalSum>abs(rightNegativeSum))
            indices[count++]=i;
    }
}

void displayIndices(int indices[], int count)
{
    for(int i=0; i<count; i++) std::cout<<indices[i]<<" ";
}
