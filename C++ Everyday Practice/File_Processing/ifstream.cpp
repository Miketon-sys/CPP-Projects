#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    ifstream inputFile;
    int value;

    inputFile.open("numbers1.txt");
    while(inputFile>>value)
    {
        cout<<value<<" + ";
        cin>>value;
    }

    inputFile.close();

    return 0;
}
