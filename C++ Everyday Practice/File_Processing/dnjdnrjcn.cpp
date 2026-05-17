#include <iostream>
#include <string>

using namespace std;

int main() {
    string myString;
    int myInt;
    double myDouble;

    cout << "--- The Buggy Input Loop ---" << endl;
    cout << "Try to enter: 'Hello', then '45', then '3.14'" << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "\n--- Loop Iteration " << i << " ---" << endl;

        cout << "Enter a string: ";
        // 1. Gets the string fine on the first loop, but skips on the second loop!
        getline(cin, myString);

        // THE BUG: This is in the wrong spot!
        // It will eat the first digit of your integer.
        cin.ignore();

        cout << "Enter an integer: ";
        cin >> myInt;

        cout << "Enter a double: ";
        // 2. Gets the double, but leaves the '\n' behind to ruin the next loop's getline()
        cin >> myDouble;

        cout << "\n--- What the computer actually read ---" << endl;
        cout << "String: " << myString << endl;
        cout << "Integer: " << myInt << endl;
        cout << "Double: " << myDouble << endl;

        // MISSING CODE: There should be a cin.ignore(10000, '\n'); right here!
    }

    return 0;
}
