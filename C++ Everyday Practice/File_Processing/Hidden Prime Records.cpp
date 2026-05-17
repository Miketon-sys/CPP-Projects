#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Record
{
    int id;
    int number;
    string tag;
};

bool isPrime(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


int digitSum(int n)
{
    int result=0;

    while(n>0)
    {
        result+=(n%10);
        n/=10;
    }
    return result;
}


int reverseNumber(int n)
{
    int result=0;

    while(n>0)
    {
        result=result*10+(n%10);
        n/=10;
    }
    return result;
}
bool isPalindrome(int n)
{
    if(n==reverseNumber(n))
        return true;
    return false;
}
bool isSpecialPrime(int n)
{
    if(!isPrime(n))
        return false;
    if(!isPrime(digitSum(n)))
        return false;
    if(!isPrime(reverseNumber(n)))
        return false;
    if(isPalindrome(n))
        return false;

    return true;

}


int main()
{
    ifstream inFile("records.txt");

    if(!inFile.is_open())
    {
        cout<<"Could not open file.";
        return 1;
    }


    vector<Record> recordList;

    while(!inFile.eof())
    {
        Record temp;
        string line;
        inFile>>line;

        int commaCount=0;
        int commaIndex=0;
        for(int i=0;i<line.size();i++)
        {
            if(line.at(i)==',' && commaCount==0)
            {
                int tempNum=0;
                for(int j=0;j<line.substr(0,i).size();j++)
                {
                    tempNum=tempNum*10+(line.at(j)-'0');
                }
                temp.id=tempNum;
                commaCount++;
                commaIndex=i;
            }

            if(line.at(i)==',' && commaCount==1)
            {
                int tempNum=0;
                string tempStr=line.substr(commaIndex+1,i-commaIndex-1);
                for(int j=0;j<tempStr.size();j++)
                {
                    tempNum=tempNum*10+(tempStr.at(j)-'0');
                }
                temp.number=tempNum;

                temp.tag=line.substr(i+1,line.size()-1-i);


            }

        }

        recordList.push_back(temp);
    }

    for(int i=0;i<recordList.size();i++)
    {
        cout<<"ID: "<<recordList[i].id<<endl;
        cout<<"Number: "<<recordList[i].number<<endl;
        cout<<"Special Prime Number: "<<isSpecialPrime(recordList[i].number)<<endl;
        cout<<"Tag: "<<recordList[i].tag<<endl<<endl;

    }


    inFile.close();


    return 0;
}
