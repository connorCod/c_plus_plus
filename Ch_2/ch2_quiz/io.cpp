#include <iostream>
#include "io.h"

int readNumber()
{
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;

    return num;
}

void writeAnswer(int num)
{
    std::cout << "Your two numbers added together are: " << num << '\n';
}
