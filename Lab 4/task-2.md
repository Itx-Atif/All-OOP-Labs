### Task 2:     
  
Define a class Student having attributes    
•	name (char *)   
•	registerationNumber (char *)   
•	CGPA (double)  
•	dateOfBirth (Date)  
Hint: Use a separate class of Date to store it.  
  
Now do the following operations on above-mentioned class:   
•	Write parameterized constructor and copy the constructor (with an output statement to check the lifetime scope of the object).  
•	Write a destructor (with an output statement to check the life time scope of object). 
•	Write separate setter (mutator) functions for each attribute to set value (with no memory leakage).  
•	Write separate getter (accessor) functions for each attribute to get value (which should never return the original memory handler).  
•	Write a display() function to display attributes of class Employee on screen. 
 Hint: For displaying the date call the display function of class Date.
  		
Now write the main function to declare different objects of class Student. Then call the display function against every object to see the information stored.    


### main file
```
#include<iostream>
#include"task_2_Header.h"
//#include"task_2_Source.cpp"
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
	cin >> *cgp;
	s1.set_cgpa(cgp);

	date_of_birth dateS1;

	int* date_s1;
	date_s1 = new int;

	int* month_s1;
	month_s1 = new int;

	int* year_s1;
	year_s1 = new int;

	cout << "Enter only date of birth: ";
	cin >> *date_s1;
	dateS1.set_date(date_s1);
	cout << "Enter month of birth: ";
	cin >> *month_s1;
	dateS1.set_month(month_s1);
	cout << "Enter year of birth: ";
	cin >> *year_s1;
	dateS1.set_year(year_s1);

	//write_date(s1, dateS1);

	s1.display();
	dateS1.display();

	return 0;
}
```
### source file
```
#include<iostream>
#include"task_2_Header.h"
using namespace std;

// student class defination here
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
	name=new char[len+1];
	for (int i = 0;i < len ;i++)
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
	for (int i = 0;i < len2 ;i++)
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
void Student::set_registrationNumber( char* r)
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

void write_date(Student a, date_of_birth b)
{
	/*int* at, * am, * c;
	at = new int[2];
	am = new int[2];
	c = new int[4];
	a.Date = new int[8];
	at= b.return_date();
	am = b.return_month();
	c = b.return_year();
	cout << *at << *am << *c << endl;
	for (int i = 0;i < 8;i++) {
		if (i < 2) {
			a.Date[i] = at[i];
		}
		else if (i < 4) {
			a.Date[i] = am[i];
		}
		else if (i < 8) {
			a.Date[i] = c[i];
		}
	}*/
	/*a.Date[0] = b.return_date;
	a.Date[1] = b.date[1];
	a.Date[2] = b.month[2];
	a.Date[3] = b.month[3];
	a.Date[4] = b.year[4];
	a.Date[5] = b.year[5];
	a.Date[6] = b.year[6];
	a.Date[7] = b.year[7];*/
	/*for (int i = 0;i <= 8;i++) {
		if (i < 3) {
			a.Date[i] = b.date[i];
		}
		else if (i >= 3 && i < 5) {
			a.Date[i] = b.month[i];
		}
		else if (i >= 5 && i < 8) {
			a.Date[i] = b.year[i];
		}
	}*/
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
		cout << "CGPA:" << *CGPA;
	}
	else
		cout << "Their is no CGPA." << endl;

	cout << endl << "Date of Birth: ";
	if (Date != nullptr) {
		for (int k = 1;k <= 8;k++)
		{
			if (k == 3 || k == 6) {
				cout << "-";
			}
			else {
				cout << Date[k];
			}
		}
	}
	else
		cout << "no date";
	cout << endl;
	/*for (int j = 1;j <= 10;j++) {
		if (j < 3) {
			cout << Date[j];
		}
		else if (j==3) {
			cout << "-";
		}
		else if(j>=3 || j<6) {
			cout << Date[j];
		}
		else if (j == 6)
		{
			cout << "-";
		}
		else if (j>=7 || j < 10) {
			cout << Date[j];
		}
	}*/
}


//date of birth class defination here
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
		cout <<"Date: " << *date << endl;
	}
	else
		cout << "not entered";
}
void date_of_birth::get_month() { 
	if (month != nullptr) {
		cout <<"Month: "<< * month << endl;
	}
	else
		cout << "not entered";
}
void date_of_birth::get_year() { 
	if (year != nullptr) {
		cout << "Year: "<< * year << endl;
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

int* date_of_birth::return_date()
{
	return date;
}
int* date_of_birth::return_month()
{
	return month;
}
int* date_of_birth::return_year()
{
	return year;
}
```
### header file
```
#pragma once
class date_of_birth;
class Student {
	//friend class dateOfBirth;
private:
	char* name;
	char* registration_number;
	double* CGPA;
	int* Date;

	friend void write_date(Student, date_of_birth);

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
	

	//friend void write_date(Student, date_of_birth);
	~Student();
};
class date_of_birth {

	//friend class Student;
private:
	int* date;
	int* month;
	int* year;

	friend void write_date(Student, date_of_birth);

public:
	date_of_birth();
	void set_date(int*);
	void set_month(int*);
	void set_year(int*);
	void get_date();
	void get_month();
	void get_year();

	void display();

	int* return_date();
	int* return_month();
	int* return_year();

	~date_of_birth();

	//friend void write_date(Student, date_of_birth);

};

```
