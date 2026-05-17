#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Entry
{
    string label;
    int value;
    string status;
};

//Functions
bool isPrime(int n);
string classify(int n);
void buildRegistry(vector<Entry>&reg, int n);
void printPrimesOnly(const vector<Entry>& reg);
string longestPrimeLabel(const vector<Entry>& reg);

int main()
{
    vector<Entry> listOfEntry;
    int n;
    cin>>n;
    while(n<1 || n>100)
    {
        cin>>n;
    }

    buildRegistry(listOfEntry,n);
    printPrimesOnly(listOfEntry);

    bool primeCount=false;
    for(int i=0;i<n;i++)
    {
        if(listOfEntry[i].status == "prime")
        {
            primeCount=true;
        }
    }
    if(primeCount)
    {
            cout<<"Longest prime level: "<<longestPrimeLabel(listOfEntry);
    }
    else
    {
            cout<<"No primes found.";
    }

    return 0;
}

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
string classify(int n)
{
    if(n==1)
        return "unit";
    if(isPrime(n))
        return "prime";
    else
        return "composite";
}
void buildRegistry(vector<Entry>&reg, int n)
{
    for(int i=0;i<n;i++)
    {
        Entry temp;
        cin>>temp.label;
        cin>>temp.value;

        temp.status=classify(temp.value);

        reg.push_back(temp);
    }
}
void printPrimesOnly(const vector<Entry>& reg)
{
    for(const Entry& entries:reg)
    {
        if(entries.status=="prime")
        {
            cout<<entries.label<<" "<<entries.value<<" is "<<entries.status<<endl;
        }
    }
}

string longestPrimeLabel(const vector<Entry>& reg)
{
    string longestLabel=reg[0].label;

    for(const Entry& entries:reg)
    {
        if(entries.status!="prime")
            continue;
        if(entries.label>longestLabel && entries.label.size()>longestLabel.size())
        {
            longestLabel=entries.label;
        }
    }
    return longestLabel;
}




