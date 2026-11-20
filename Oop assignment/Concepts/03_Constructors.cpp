// Student Name: Iftekher Islam
// Student ID: 25001
// Course: ICT 2106 - Object-Oriented Programming Lab

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int studentID;

public:
    // Task 1: This is the default constructor.
    // Task 2: It is called when an object is created without arguments.
    Student() {
        name = "Unknown";
        studentID = 0;
    }

    // Task 1: This is the parameterized constructor.
    // Task 2: It is called when values are passed during object creation.
    Student(string n, int id) {
        name = n;
        studentID = id;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student s1;  // Calls the default constructor.

    // Task 3: These three objects use the parameterized constructor.
    Student s2("Iftekher", 25001);
    
    Student s3("Rahim", 25053);
    Student s4("Karim", 25054);

    // Task 4: Each object stores its own information.
    cout << "Default Object:" << endl;
    s1.display();

    cout << "\\nStudent 1:" << endl;
    s2.display();

    cout << "\\nStudent 2:" << endl;
    s3.display();

    cout << "\\nStudent 3:" << endl;
    s4.display();

    return 0;
}
