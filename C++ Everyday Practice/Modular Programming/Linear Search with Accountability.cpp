#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n=0;
    cout<<"Enter n: ";
    cin>>n;

    if(n<1 || n>100)
    {
        cout<<"N must be greater than or equal to 0, or less than or equal to 100\n";
        return -1;
    }

    cout<<"Enter values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target=arr[0];
    cout<<"Target: ";
    cin>>target;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"Found at index "<<i;
            return 0;
        }
    }

    cout<<"Not found";
    return 0;
}

