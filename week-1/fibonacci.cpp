#include <iostream>

int main()
{
    int num1 = 0, num2 = 1, num3, num;

    std::cout << "Enter the number Fibonacci series: ";
    std::cin >> num;
    std::cout << std::endl;

    std::cout << num1 << " " << num2 << " ";

    for (int i = 2; i < num; i++)
    {
        num3 = num1 + num2;
        std::cout << num3 << " ";
        num1 = num2;
        num2 = num3;
    }
    std::cout << std::endl;
    return 0;
}