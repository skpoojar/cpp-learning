#include <iostream>
#include <string>

int main()
{
    struct Student
    {
        std::string name, section;
        int age, roll_number, marks;
    };

    Student student;
    std::string option;

    std::cout << "Enter your Age: ";
    std::cin >> student.age;
    std::cout << std::endl;

    std::cout << "Enter your name: ";
    std::cin.ignore();
    std::getline(std::cin, student.name);
    std::cout << std::endl;
    do
    {
        std::cout << "Enter your section(Diamond, Gold, Platinum): ";
        std::cin >> student.section;
        std::cout << std::endl;

        if (student.section != "Gold" && student.section != "Diamond" && student.section != "Platinum")
        {
            std::cout << "Incorrect section, your section should be one of Diamond, Gold, Platinum!" << std::endl;
            student.section = "Incorrect";
            std::cout << "Do you want to enter section again (y/n)?: ";
            std::cin >> option;
            std::cout << std::endl;
        }
        else
        {
            break;
        }

    } while (option == "y");    

    std::cout << "Hello " << student.name << ", your age is " << student.age << " and you are from " << student.section << " section";
    std::cout << std::endl;
    return 0;
}