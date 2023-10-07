### my task

### main file
```
#include<iostream>
#include"task_2Header.h"
using namespace std;
int main()
{
	char nameOfStu[10]{};
	char regNum[15]{};
	double* cgp;
	cgp = new double;
	char* nameofstu;
	nameofstu = nameOfStu;
	char* regnum;
	regnum = regNum;

	Student s1;

	cout << "Enter name of student: ";
	cin >> nameOfStu;
	s1.set_name(nameofstu);
	cout << "Enter registration number of student: ";
	cin >> regNum;
	s1.set_registrationNumber(regnum);
	cout << "Enter CGPA: ";
	while (cin >> *cgp) {
		if (*cgp <= 4) {
			break;
		}
	}
	s1.set_cgpa(cgp);

	date_of_birth dateS1;

	int* date_s1;
	date_s1 = new int;

	int* month_s1;
	month_s1 = new int;

	int* year_s1;
	year_s1 = new int;

	cout << "Enter only date of birth: ";
	while (cin >> *date_s1)
	{
		if (*date_s1 <= 31) {
			break;
		}
		else {
			cout << "it should not be greater than 31." << endl;
			cout << "again enter: ";
		}
	}
	dateS1.set_date(date_s1);
	cout << "Enter month of birth: ";
	while (cin >> *month_s1) {
		if (*month_s1 <= 12) {
			break;
		}
		else
		{
			cout << "it should be less then 13" << endl;
			cout << "again enter: ";
		}
	}
	dateS1.set_month(month_s1);
	cout << "Enter year of birth: ";
	while (cin >> *year_s1)
	{
		if (*year_s1<=9999)
		{
			break;
		}
		else {
			cout << "enter valid year." << endl;
			cout <<"again enter: ";
		}
	}
	dateS1.set_year(year_s1);

	s1.display();
	dateS1.display();

	return 0;
}
```
### source file
```
#include<iostream>
#include"task_2Header.h"
using namespace std;

// student class members functions definations here
Student::Student()
{
	name = nullptr;
	registration_number = nullptr;
	CGPA = nullptr;
	Date = nullptr;
}
Student::~Student()
{
	delete[] name;
	delete[] registration_number;
	delete[] CGPA;
	delete[] Date;
}
Student::Student(const Student& acc)
{
	int len = 0;
	while (true)
	{
		if (acc.name[len] != '\0')
		{
			len++;
		}
		else
			break;
	}
	name = new char[len + 1];
	for (int i = 0;i < len;i++)
	{
		name[i] = acc.name[i];
	}
	name[len] = '\0';

	int len2 = 0;
	while (true)
	{
		if (registration_number[len2] != '\0')
		{
			len2++;
		}
		else
			break;
	}
	registration_number = new char[len2 + 1];
	for (int i = 0;i < len2;i++)
	{
		registration_number[i] = acc.registration_number[i];
	}
	registration_number[len2] = '\0';

	CGPA = new double;
	*CGPA = *acc.CGPA;

	*Date = *acc.Date;

	cout << "Copied Succesfull!" << endl;
}
void Student::set_name(char* n)
{
	int len = 0;
	while (true)
	{
		if (n[len] != '\0')
		{
			len++;
		}
		else
			break;
	}
	name = new char[len + 1];
	for (int i = 0;i < len;i++)
	{
		name[i] = n[i];
	}
	name[len] = '\0';
}
void Student::set_registrationNumber(char* r)
{
	int len = 0;
	while (true)
	{
		if (r[len] != '\0')
		{
			len++;
		}
		else
			break;
	}
	registration_number = new char[len + 1];
	for (int i = 0;i < len;i++)
	{
		registration_number[i] = r[i];
	}
	registration_number[len] = '\0';
}
void Student::set_cgpa(double* cg)
{
	CGPA = new double;
	CGPA = cg;
}
void Student::get_name()
{
	cout << "Student Name: ";
	if (name != nullptr) {
		int len = 0;
		while (true)
		{
			if (name[len] != '\0')
			{
				cout << name[len];
				len++;
			}
			else
				break;
		}
		cout << endl;
	}
	else
		cout << "Their is no name." << endl;
}
void Student::get_registrationNumber()
{
	cout << "Registration Number: ";
	if (registration_number != nullptr) {
		int len = 0;
		while (true)
		{
			if (registration_number[len] != '\0')
			{
				cout << registration_number[len];
				len++;
			}
			else
				break;
		}
		cout << endl;
	}
	else
		cout << "Their is no registration number." << endl;
}
void Student::get_cgpa()
{
	if (CGPA != nullptr) {
		cout << "CGPA:" << *CGPA;
	}
	else
		cout << "Their is no CGPA." << endl;
}
void Student::display()
{
	cout << "-------------------" << endl;
	cout << "Student Name: ";
	if (name != nullptr) {
		int len1 = 0;
		while (true)
		{
			if (name[len1] != '\0')
			{
				cout << name[len1];
				len1++;
			}
			else
				break;
		}
		cout << name[len1] << endl;
	}
	else
		cout << "Their is no name." << endl;
	cout << "Registration Number: ";
	if (registration_number != nullptr) {
		int len2 = 0;
		while (true)
		{
			if (registration_number[len2] != '\0')
			{
				cout << registration_number[len2];
				len2++;
			}
			else
				break;
		}
		cout << registration_number[len2] << endl;
	}
	else
		cout << "Their is no registration number." << endl;

	if (CGPA != nullptr) {
		cout << "CGPA:" << *CGPA << endl;
	}
	else
		cout << "Their is no CGPA." << endl;
}
//date of birth class members functions definations here
date_of_birth::date_of_birth()
{
	date = nullptr;
	month = nullptr;
	year = nullptr;
}
void date_of_birth::set_date(int* dt)
{
	date = new int[2];
	date = dt;
}
void date_of_birth::set_month(int* mn)
{
	month = new int[2];
	month = mn;
}
void date_of_birth::set_year(int* yr)
{
	year = new int[4];
	year = yr;
}
void date_of_birth::get_date()
{
	if (date != nullptr) {
		cout << "Date: " << *date << endl;
	}
	else
		cout << "not entered";
}
void date_of_birth::get_month() {
	if (month != nullptr) {
		cout << "Month: " << *month << endl;
	}
	else
		cout << "not entered";
}
void date_of_birth::get_year() {
	if (year != nullptr) {
		cout << "Year: " << *year << endl;
	}
	else
		cout << "not entered";
}
date_of_birth::~date_of_birth()
{
	delete[] date;
	delete[] month;
	delete[] year;
}
void date_of_birth::display()
{
	cout << "Date of Birth: ";
	cout << *date << " - " << *month << " - " << *year << endl;
}
```
### header file
```
#pragma once
class Student {
private:
	char* name;
	char* registration_number;
	double* CGPA;
	int* Date;
public:
	Student();
	Student(const Student&);
	void set_name(char*);
	void set_registrationNumber(char*);
	void set_cgpa(double*);
	void get_name();
	void get_registrationNumber();
	void get_cgpa();
	void display();
	~Student();
};
class date_of_birth {
private:
	int* date;
	int* month;
	int* year;
public:
	date_of_birth();
	void set_date(int*);
	void set_month(int*);
	void set_year(int*);
	void get_date();
	void get_month();
	void get_year();
	void display();
	~date_of_birth();
};

```
