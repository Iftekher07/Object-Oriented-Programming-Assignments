// Student Name: Iftekher Islam
// Student ID: 25001
// Course: ICT 2106 - Object-Oriented Programming Lab

#include <iostream>
#include <string>
using namespace std;

// Task 1: Student is the class name.
class Student {
public:
    // Task 2: name and studentID are data members.
    string name;
    int studentID;

    // Task 2: displayInfo() is a member function.
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    // Task 1: s1 is an object of the Student class.
    Student s1;

    // Task 3: An object accesses public class members using the dot (.) operator.
    s1.name = "Iftekher Islam";
    s1.studentID = 25001;

    s1.displayInfo();

    return 0;
}
