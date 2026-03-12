#include <iostream>

int main()
{
    int factorial=1, num;
    std::cout<<"Enter a number: ";
    std::cin>>num;
    std::cout<<std::endl;

    for (int i=num; i>0; i--){
        factorial*=i;
    }

    std::cout<<"The Factorial of "<<num<<" is "<<factorial<<std::endl;
    return 0;
}