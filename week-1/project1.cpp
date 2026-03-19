/*
Student Management System
Features:

1) Define Student structure with nested Date of Birth structure.

2) Use dynamic array of students.

3) Implement input, display, search, and sort functionality.

4) Demonstrate array of structures and pointer manipulation.
*/
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <algorithm>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int id;
    std::string name;
    float marks;
    Date dob;
};

// Function to input student data
void inputStudent(Student &student)
{
    std::cout << "Enter Student ID: ";
    std::cin >> student.id;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear newline

    std::cout << "Enter Student Name: ";
    std::getline(std::cin, student.name);

    std::cout << "Enter Student's marks: ";
    std::cin >> student.marks;

    std::cout << "Enter date of birth (day month year): ";
    std::cin >> student.dob.day >> student.dob.month >> student.dob.year;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear newline
}

// Function to display student data
void displayStudent(const Student &s)
{
    std::cout << "ID: " << s.id
              << ", Name: " << s.name
              << ", Marks: " << s.marks
              << ", DOB: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year
              << std::endl;
}

// Search a student using student ID
void searchStudent(const std::vector<Student> &students, int in_id)
{
    for (const auto &student : students)
    {
        if (student.id == in_id)
        {
            displayStudent(student);
            break;
        }
        else
        {
            std::cout << "Student ID " << in_id << " not found" << std::endl;
        }
    }
}

void sortStudentsbymarks(std::vector<Student> &students)
{
    for (int i = 0; i < (sizeof(students) / sizeof(Student)); i++)
    {
        if (students[i].marks > students[i + 1].marks)
        {
            swap(students[i], students[i + 1]);
        }
    }
    std::cout << "Sorted students in aphabetic order" << std::endl;
    for (const auto &student : students)
    {
        displayStudent(student);
    }
}

int main()
{
    int n, input_id;
    std::cout << "Enter number of students: ";
    std::cin >> n;

    std::vector<Student> students(n);

    // Input all students
    for (int i = 0; i < n; i++)
    {
        std::cout << "\n--- Student " << (i + 1) << " ---\n";
        inputStudent(students[i]);
    }

    // Display all students
    std::cout << "\nAll Students:\n";
    for (const auto &student : students)
    {
        displayStudent(student);
    }

    // Search a student ID
    std::cout << "Enter Student ID: ";
    std::cin >> input_id;
    searchStudent(students, input_id);

    // Sort students in alphbetic order and display the results
    sortStudentsbyName(students);
}