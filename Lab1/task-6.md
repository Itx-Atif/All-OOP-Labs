### /*Task 6: Create a struct called Student which has registration no, name,
# admission date and cgpa as member variables. 
# Write a function Input_Records for getting record of a student.
## Also write a function Display to print contents of the struct student on screen.*/
```
#include<iostream>
#include<string>
using namespace std;
void Input_Records();
void Display(Students);

struct Students {
	string registration_no;
	string name;
	string admission_date;
	float cgpa;
};

int main()
{
	
	Students student;
	Input_Records();

	//Display(students);

	return 0;
}
void Input_Records(students)
{
	//Students student;
	cout << "Enter Registration number:" << endl;
	cin >> student.registration_no;
	cout << "Enter name of student: " << endl;
	cin >> student.name ;
	cout<< "Enter admission date of student" << endl;
	cin >> student.admission_date;
	cout << "Enter CGPA of student: " << endl;
	cin >> student.cgpa;

	Display(student);
}
void Display(Students student)
{
	cout << student.registration_no;
	cout << student.name;
	cout << student.admission_date;
	cout << student.cgpa;
}

```
