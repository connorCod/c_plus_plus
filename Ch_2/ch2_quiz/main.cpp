#include <iostream> 
#include "io.h"

int main()
{
    int first_number;
    first_number = readNumber();

    int second_number;
    second_number = readNumber();

    int answer;
    answer = first_number + second_number;

    writeAnswer(answer);

    return 0;
}
