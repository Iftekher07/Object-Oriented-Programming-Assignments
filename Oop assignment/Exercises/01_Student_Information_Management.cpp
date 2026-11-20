// Student Name: Iftekher Islam
// Student ID: 25001
// Course: ICT 2106 - Object-Oriented Programming Lab

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    string department;
    int semester;

public:
    // Stores the information of a student.
    void setInformation(int id, string n, string dept, int sem) {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }

    // Displays the information of a student.
    void displayInformation() {
        cout << "ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    // Creating three Student objects.
    Student s1, s2, s3;

    s1.setInformation(25052, "Abu Bakar", "CSE", 1);
    s2.setInformation(25053, "Rahim", "EEE", 2);
    s3.setInformation(25054, "Karim", "ICT", 3);

    cout << "Student 1:" << endl;
    s1.displayInformation();

    cout << "\\nStudent 2:" << endl;
    s2.displayInformation();

    cout << "\\nStudent 3:" << endl;
    s3.displayInformation();

    return 0;
}
