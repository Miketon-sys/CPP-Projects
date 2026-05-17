#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("text.txt");

    string writings;
    string date;

    cout<<"Date: ";
    cin>>date;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<<"Notes: \n";
    cin.ignore();
    getline(cin, writings);

    outputFile <<date<<"\n"<<writings;

    outputFile.close();

    return 0;
}