#include <iostream>
#include <string>

int main()
{
    struct Student
    {
        int student_id;
        std::string name;
        double marks;
    };

    Student students[] = {
        {1, "Ramesh", 99.7},
        {2, "Suresh", 75.4},
        {3, "Suresh Krishna", 48.2},
        {4, "Krishna Suresh", 89.9},
        {5, "Supriya Joshi", 87.6},
        {6, "Shanta Priya", 73.8}
    };

    int in_student_id, total_students = sizeof(students) / sizeof(Student);
    double avg_class_score = 0.0;

    std::cout << "Enter the student id: ";
    std::cin >> in_student_id;
    std::cout << std::endl;
    if (in_student_id > total_students)
    {
        std::cout << "Incorrect student id, total number of students is " << total_students << std::endl;
    }
    for (const auto &student : students)
    {
        if (in_student_id == student.student_id)
        {
            std::cout << "Student name: " << student.name << std::endl;
            std::cout << "Student marks: " << student.marks << std::endl;
            break;
        }
    }

    for (const auto &student : students)
    {
        avg_class_score += student.marks;
    }
    avg_class_score /= total_students;

    std::cout << "The average score of class is: " << avg_class_score << std::endl;

    return 0;
}