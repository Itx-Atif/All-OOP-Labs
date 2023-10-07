### Task 1: 
 
### Using the concept of implementation in three files coding using Visual Studio, Write a class with a student name that contains student data his/her rollno, name, city and cgpa as private data members and create a two function having name of input_information(); to take data in the data members of the class and also display data using a member function display_student_data(); after doing it for one student data then you have to manage the same data for the whole class, assuming that there is a class of 5 students minimum. And you also have to enter the 5 subjects details along with every student and to enter the marks of those subjects. After entering the data of the students, you have to enter a roll_no of a student, the data of that corresponding student should be displayed. You have to do this program in three different files.

### header file
```
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    string city;
    double cgpa;
    double marks[5];

public:
    void input_information();
    void display_student_data();
    void display_subject_marks();
    int get_rollno();
};
```
### main file
```
#include <iostream>
#include "student.h"
using namespace std;

int main() {
    const int num_of_students = 5;
    Student students[num_of_students];

    for (int i = 0; i < num_of_students; i++) {
        cout << "Enter information for student " << i + 1 << endl;
        students[i].input_information();
    }

    for (int i = 0; i < num_of_students; i++) {
        cout << "Information for student " << i + 1 << endl;
        students[i].display_student_data();
        students[i].display_subject_marks();
        cout << "---------------------" << endl;
    }

    int roll_no;
    cout << "Enter roll no of student to display: ";
    cin >> roll_no;

    bool found = false;
    for (int i = 0; i < num_of_students; i++) {
        if (students[i].get_rollno() == roll_no) {
            students[i].display_student_data();
            students[i].display_subject_marks();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found!" << endl;
    }

    return 0;
}

```
### source file
```
#include "student.h"

void Student::input_information() {
    cout << "Enter roll no: ";
    cin >> rollno;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter CGPA: ";
    cin >> cgpa;
    cout << "Enter marks of 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void Student::display_student_data() {
    cout << "Roll no: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "City: " << city << endl;
    cout << "CGPA: " << cgpa << endl;
}

void Student::display_subject_marks() {
    cout << "Subject marks:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }
}

int Student::get_rollno() {
    return rollno;
}

```
