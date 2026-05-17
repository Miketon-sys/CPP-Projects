#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

long int sumOfChar(string str)
{
    long int resultSum=0;
    for(int i=0;i<str.size();i++)
    {
        resultSum+=(str.at(i)-64);
    }
    return resultSum;
}

bool isTriangular(long int x)
{
    long int accTri=0;
    int i=1;
    while(accTri<x)
    {
        accTri+=i++;
    }
    if(accTri==x)
        return true;
    else
        return false;
}

int main()
{

    ifstream inFile("0042_words.txt");

    if(!inFile.is_open())
    {
        cout<<"Could not open file."<<endl;
        return 1;
    }

    string line;
    vector <string> wordList;
    int countTriangular=0;

    inFile>>line;

    int commaPos=-1;
    for(int i=0;i<line.size();i++)
    {
        if(line.at(i)==',')
        {
            string temp=line.substr(commaPos+2,i-(commaPos+3));
            if(isTriangular(sumOfChar(temp)))
            {
                countTriangular++;
            }
            commaPos=i;
        }
        if(i==line.size()-1)
        {
            string temp=line.substr(commaPos+2,i-(commaPos+2));
            if(isTriangular(sumOfChar(temp)))
            {
                countTriangular++;
            }
        }
    }

    cout<<countTriangular;

    return 0;
}
