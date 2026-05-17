#ifndef SECRETNUMBER_H_INCLUDED
#define SECRETNUMBER_H_INCLUDED

using namespace std;

class secretNumber
{
public:
    secretNumber(int);
    int getValue();
    bool isEven(int n);
    bool isPrime(int n);
    string getHint(int guess);
    ~secretNumber();

private:
    long long int value;
};

#endif // SECRETNUMBER_H_INCLUDED
