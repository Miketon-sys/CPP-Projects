#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> reverseArr(const vector<int> arr)
{
    vector<int> resultArr=arr;
    int s=resultArr.size();
    for(int i=0; i<s; i++)
    {
        int temp=resultArr[i];
        resultArr[i]=resultArr[s-1];
        s--;
    }
    return resultArr;
}

vector<int> multiplyArr(const vector<int>& arr, int a)
{
    vector<int> resultArr;

    int carry=0;
    for(int i=arr.size()-1; i>=0; i--)
    {
        int tempResult=(arr[i]*a)+carry;
        resultArr.push_back(tempResult%10);
        carry=tempResult/10;
    }
    while(carry>0)
    {
        resultArr.push_back(carry%10);
        carry/=10;
    }

    return reverseArr(resultArr);
}

vector<int> bubbleSortArr(const vector<int>& srcArr)
{
    vector<int> arr=srcArr;
    for(int i=0; i<arr.size()-1; i++)
    {
        for(int j=0; j<arr.size()-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    return arr;
}

vector<int> intToVec(int x)
{
    vector<int> result;
    while(x>0)
    {
        result.push_back(x%10);
        x/=10;
    }
    return result;
}

int main()
{
    int num=1;

    while(true)
    {
        cout<<num<<endl;
        if(bubbleSortArr(intToVec(num))==bubbleSortArr(intToVec(num*2)))
        {
            if(bubbleSortArr(intToVec(num))==bubbleSortArr(intToVec(num*3)))
            {
                if(bubbleSortArr(intToVec(num))==bubbleSortArr(intToVec(num*4)))
                {
                    if(bubbleSortArr(intToVec(num))==bubbleSortArr(intToVec(num*5)))
                    {
                        if(bubbleSortArr(intToVec(num))==bubbleSortArr(intToVec(num*6)))
                        {
                            cout<<num;
                            break;
                        }
                    }
                }

            }
        }
        num++;
    }


    return 0;
}
