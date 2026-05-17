#include <iostream>
#include <string>

using namespace std;

//returns the sorted string items
string sortString(string src);
/*
returns the mode as a character from string input parameter. For the sake of
simplicity, if there is a tie in the character count, return only the first
character that is the most occurring
*/
char stringMode(string src);
/*
Using the string sortString (string src), returns the median as string from
string src parameter
*/
string stringMedian (string src);
//display the string mode and median on function main

int main()
{
    //Inputs should be in this form: A,B,C,D,E,F
    cout<<"Enter characters separated with ',': ";
    string src;
    cin>>src;
    if(src[src.size()-1]==',' || src.size()%2==0)
    {
        cout<<"Invalid! Make sure it is in the form: \"A,B,C,D,E,F\"";
        return -1;
    }

    cout<<"Sorted: "<<sortString(src)<<endl;
    cout<<"Mode: "<<stringMode(sortString(src))<<endl;
    cout<<"Median: "<<stringMedian(src);
    //cout<<stringMode("A,A,B,C,C");


    return 0;
}

//returns the sorted string items
string sortString(string src)
{
    unsigned srcSize=src.size();
    for(int i=0;i<srcSize-1;i+=2)
    {
        for(int j=0;j<srcSize-i-1;j+=2)
        {
            if(src[j]>src[j+2])
            {
                char temp=src[j];
                src[j]=src[j+2];
                src[j+2]=temp;
            }
        }
    }


    return src;
}
/*
returns the mode as a character from string input parameter. For the sake of
simplicity, if there is a tie in the character count, return only the first
character that is the most occurring
*/
char stringMode(string src)
{
    unsigned srcSize=src.size();
    char c=src[0];
    int mode=1;
    int largestMode=1;
    for(int i=0;i<srcSize;i+=2)
    {
        for(int j=0;j<srcSize;j+=2)
        {
            if(i==j)
                continue;
            if(src[i]==src[j])
                mode++;
        }
        if(mode>largestMode)
        {
            largestMode=mode;
            c=src[i];
        }
        mode=1;
    }

    return c;
}
/*
Using the string sortString (string src), returns the median as string from
string src parameter
*/
string stringMedian (string src)
{
    string sortedSrc=sortString(src);
    unsigned int srcSize=src.size();
    int midPos=srcSize/2;


    if((srcSize/2+1)%2==0)
    {
        string s1 = sortedSrc.substr(midPos-1,3);
        return s1;
    }
    else
    {
        string s1 = sortedSrc.substr(midPos,1);
        return s1;
    }

}
//display the string mode and median on function main


