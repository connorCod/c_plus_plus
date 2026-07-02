#include <iostream> 

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
