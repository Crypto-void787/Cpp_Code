#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int totalStudents; // static data member

    Student(string n) {
        name = n;
        totalStudents++; // increment when a new student is created
    }

    void show() {
        cout << "Name: " << name << endl;
    }

    static void showCount() { // static function
        cout << "Total Students: " << totalStudents << endl;
    }
};

// Definition of static data member (outside the class)
int Student::totalStudents = 0;

int main() {
    Student s1("Ali");
    Student s2("Sara");
    Student s3("John");

    s1.show();
    s2.show();

    // Access static member using class name
    Student::showCount(); 

    return 0;
}
