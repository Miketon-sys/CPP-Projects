#include <iostream>

int main()
{
    int first_value=25;
    int second_value=30;
    int temp_value=0;

    temp_value=first_value;
    first_value=second_value;
    second_value=temp_value;

    std::cout <<first_value;
    std::cout <<"\n";
    std::cout <<second_value;
    std::cout <<"\n";
    std::cout <<(float)second_value/first_value;


    return 0;
}
