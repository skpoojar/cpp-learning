#include <iostream>

int main()
{

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << std::endl;

    if (num % 2)
    {
        std::cout << "The Number " << num << " is an odd number" << std::endl;
    }
    else
    {
        std::cout << "The Number " << num << " is an even number" << std::endl;
    }

    return 0;
}