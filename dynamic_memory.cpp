#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int rollNumber;
};

int main()
{
    int n;

    cout << "=== Student Marks Management ===" << endl;
    cout << "Enter the number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students!" << endl;
        return 0;
    }

    // Allocate one Student object
    Student* student = new Student;

    cout << "Enter student name: ";
    cin >> student->name;

    cout << "Enter roll number: ";
    cin >> student->rollNumber;

    // Allocate a marks array dynamically
    int* marks = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }

    double average = static_cast<double>(total) / n;

    cout << "\n=== Student Report ===" << endl;
    cout << "Name: " << student->name << endl;
    cout << "Roll Number: " << student->rollNumber << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1
             << " marks: " << marks[i] << endl;
    }

    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;

    // Release memory allocated using new[]
    delete[] marks;

    // Release memory allocated using new
    delete student;

    marks = nullptr;
    student = nullptr;

    cout << "\nDynamic memory released successfully."
         << endl;

    return 0;
}
