```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

    static int count;

public:
    // Constructor
    Student(int rollNo, float marks) {
        this->rollNo = rollNo;
        this->marks = marks;
        count++;
    }

    // Inline function
    inline void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }

    // Friend class declaration
    friend class Result;
};

// Definition of static data member
int Student::count = 0;

// Friend class
class Result {
public:
    void showDetails(Student s) {
        cout << "\nAccessing Private Data Using Friend Class:" << endl;
        cout << "Roll Number: " << s.rollNo << endl;
        cout << "Marks: " << s.marks << endl;
    }
};

int main() {
    // Creating objects
    Student s1(101, 85.5);
    Student s2(102, 90.0);

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    // Calling static member function
    Student::showCount();

    // Creating friend class object
    Result r;
    r.showDetails(s1);

    return 0;
}
```
