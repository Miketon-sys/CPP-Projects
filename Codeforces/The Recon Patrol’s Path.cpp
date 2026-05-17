#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(101, vector<int>(1001, 0));

    int n;
    cin>>n;

    if(n<1 || n>100)
        return -1;

    int rows=51, columns=51;
    int step;

    arr[rows][columns]=1;

    for(int i=0;i<n;i++)
    {
        cin>>step;

        //to west
        if(i%4==0)
        {
            for(int j=0;j<step;j++)
            {
                if(arr[rows][columns-1]==1)
                {
                    cout<<"BREACH";
                    return -1;
                }
                columns-=1;
                arr[rows][columns]=1;
            }
            continue;
        }
        //to south
        else if(i%4==1)
        {
            for(int j=0;j<step;j++)
            {
                if(arr[rows+1][columns]==1)
                {
                    cout<<"BREACH";
                    return -1;
                }
                rows+=1;
                arr[rows][columns]=1;
            }
            continue;
        }
        //to east
        else if(i%4==2)
        {
            for(int j=0;j<step;j++)
            {
                if(arr[rows][columns+1]==1)
                {
                    cout<<"BREACH";
                    return -1;
                }
                columns+=1;
                arr[rows][columns]=1;
            }
            continue;
        }
        //to north
        else if(i%4==3)
        {
            for(int j=0;j<step;j++)
            {
                if(arr[rows-1][columns]==1)
                {
                    cout<<"BREACH";
                    return -1;
                }
                rows-=1;
                arr[rows][columns]=1;
            }
            continue;
        }
    }

    cout<<"CLEAR";

    for(int i=0;i<101;i++)
    {
        for(int j=0;j<101;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
