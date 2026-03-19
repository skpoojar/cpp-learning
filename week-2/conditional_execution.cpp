#include <iostream>

void odd_or_even()
{
    int i;

    std::cout << "Enter a number: ";
    std::cin >> i;
    std::cout << std::endl;

    if (i % 2)
    {
        std::cout << i << " is an Odd number" << std::endl;
    }
    else
        std::cout << i << " is an Even number" << std::endl;
}

void calculator()
{
    int in1, in2;
    char operation = '+';

    std::cout << "Enter number1: ";
    std::cin >> in1;
    std::cout << "Enter number2: ";
    std::cin >> in2;
    std::cout << "Enter arithmetic operation (+, -, *, /):";
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        std::cout << "Sum is: " << in1 + in2;
        break;

    case '-':
        std::cout << "Difference is: " << in1 - in2;
        break;

    case '*':
        std::cout << "Multiplication is: " << in1 * in2;
        break;

    case '/':
        std::cout << "Division is: " << in1 / in2;
        break;

    default:
        std::cout << "Sum is: " << in1 + in2;
        break;
    }
    std::cout << std::endl;
}

int main()
{
    // odd_or_even();
    calculator();
}