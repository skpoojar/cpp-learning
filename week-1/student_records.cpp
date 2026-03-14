#include <iostream>
#include <string>

int main()
{

    struct Student
    {
        int age;
        std::string name, section;
    };

    Student student[] = {
        {8, "Ram", "Gold"},
        {7, "Vignesh", "Diamond"},
        {9, "Jai Ram", "Platinum"},
        {9, "Preeti Agarwal", "Platinum"},
        {7, "Seetha Lakshmi", "Diamond"},
        {7, "Sri Vignesh", "Diamond"},
        {8, "Shanta Ram", "Gold"},
    };
    int student_num, student_array_size = sizeof(student) / sizeof(Student);

    std::cout << "There are " << student_array_size << " students, enter the student number(0-" << (student_array_size - 1) << ") to see the records: ";
    std::cin >> student_num;
    if (student_num < 0 || student_num >= student_array_size)
    {
        std::cout << std::endl
                  << "Invalid student number, it must be between 0 and " << (--student_array_size) << std::endl;
    }
    else
    {
        std::cout << "Student Name: " << student[student_num].name << std::endl
                  << "Student age: " << student[student_num].age << std::endl
                  << "Student section: " << student[student_num].section << std::endl;
    }

    return 0;
}