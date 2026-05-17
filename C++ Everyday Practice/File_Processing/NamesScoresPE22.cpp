#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream infile("0022_names.txt");

    if(!infile)
    {
        cout<<"Error opening file.\n";
        return -1;
    }

    string line;
    getline(infile,line);

    vector<string> nameList;

    long int commaPos=-1;
    for(int i=0;i<line.size();i++)
    {
        if(line.at(i)==',')
        {
            nameList.push_back(line.substr(commaPos+1,i-(commaPos+1)));
            commaPos=i;
            continue;
        }
        if(i==(line.size()-1))
        {
            nameList.push_back(line.substr(commaPos+1,(line.size()-1)-(commaPos)));
        }
    }

    int n=nameList.size();

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(nameList[j]>nameList[j+1])
            {
                string temp=nameList[j];
                nameList[j]=nameList[j+1];
                nameList[j+1]=temp;
            }
        }
    }

    vector<int> namesScores;

    for(int i=0;i<n;i++)
    {
        int totalScore=0;
        for(int j=1;j<nameList[i].size()-1;j++)
        {
            totalScore+=((nameList[i].at(j))%64);
        }
        namesScores.push_back(totalScore*(i+1));
    }

    for(int i=0;i<n;i++)
    {
        cout<<i+1<<nameList[i]<<"-"<<namesScores[i]<<endl;

    }

    long long int totalNameScores=0;

    for(int i=0;i<n;i++)
    {
        totalNameScores+=namesScores[i];
    }

    cout<<totalNameScores;

    infile.close();

    ofstream outFile("NamesScores.txt");
    if(!outFile.is_open())
    {
        cout<<"Could not open file.";
        return 1;
    }

    for(int i=0;i<namesScores.size();i++)
    {
        outFile<<i+1<<": "<<nameList.at(i)<<" - "<<namesScores.at(i)<<endl;
    }

    outFile.close();



    return 0;
}
