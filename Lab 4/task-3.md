### Task 3:     
  
Define a class Employee having attributes    
•	name (char *)   
•	employeeCode (char *)   
•	dateOfJoining (Date)  
Hint: Use a separate class of Date to store it.  
  
Now do the following operations on above mentioned class:   
•	Write parameterized constructor with default arguments and copy constructor (with an output statements to check the life time scope of object).  
•	Write a destructor (with an output statement to check the life time scope of object). 
•	Write separate setter (mutator) functions for each attribute to set value (with no memory leakage).  
•	Write separate getter (accessor) functions for each attribute to get value (which should never return the original memory handler).  
•	Write a display() function to display attributes of class Employee on screen. 
 Hint: For displaying date call display function of class Date.     
  
Now write a main function to create three different objects of Employee with different data.  
Then ask the user to enter current date. Then call display function against every object to see information stored and also print the total number of days of the employee in the organization.  

### main file
```
#include<iostream>
#include"Task_3_Header.h"
using namespace std;
int main()
{
	char code1[10]{}, name1[10]{};
	char* code_1, * name_1 ;
	code_1 = code1;
	name_1 = name1;

	Employee e1;
	cout << "Enter code of employee 1: ";
	cin >> code1;
	e1.set_employeeCode(code_1);
	cout << "Enter name of employee 1: ";
	cin >> name1;
	e1.set_name(name_1);

	int* date_1=new int[2], * month_1 = new int[2], * year_1 = new int[4];
	
	Date d1;
	cout << "enter date of joining:";
	while (cin >> *date_1)
	{
		if (*date_1 <= 31)
		{
			break;
		}
		else
			cout << "again enter: ";
	}
	d1.set_date(date_1);
	cout << "enter month of joining:";
	while (cin >> *month_1)
	{
		if (*month_1 <= 12)
		{
			break;
		}
		else
			cout << "again enter: ";
	}
	d1.set_month(month_1);
	cout << "enter year of joining:";
	while (cin >> *year_1)
	{
		if (*year_1 <= 9999)
		{
			break;
		}
		else
			cout << "again enter: ";
	}
	d1.set_year(year_1);

	int* current_date = new int[2], * current_month = new int[2], * current_year = new int[4];

	Date d2;
	cout << "Enter current date: ";
	while (cin >> *current_date)
	{
		if (*current_date <= 31)
		{
			break;
		}
		else
			cout << "again enter: ";
	}
	d2.set_date(current_date);
	cout << "Enter current month: ";
	while (cin >> *current_month)
	{
		if (*current_month <= 12)
		{
			break;
		}
		else
			cout << "again enter: ";
	}
	d2.set_month(current_month);
	cout << "Enter current year: ";
	while (cin >> *current_year)
	{
		if (*current_year <= 9999)
		{
			break;
		}
		else
			cout << "again enter: ";
	}
	d2.set_year(current_year);

	e1.display();
	d1.display();
	d1.total_days();

	return 0;
}
```
### source file
```
#include<iostream>
#include"Task_3_Header.h"
using namespace std;
//employee class
Employee::Employee()
{
	name = nullptr;
	employee_code = nullptr;
}
Employee::~Employee()
{
	delete[] name;
	delete[] employee_code;
}
void Employee::set_name(char* n)
{
	int len = 0;
	while (true) {
		if (n[len]!='\0') {
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
void Employee::set_employeeCode(char* c)
{
	int len = 0;
	while (true) {
		if (c[len] != '\0') {
			len++;
		}
		else
			break;
	}
	employee_code = new char[len + 1];
	for (int i = 0;i < len;i++)
	{
		employee_code[i] = c[i];
	}
	employee_code[len] = '\0';
}
void Employee::get_name()
{
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
void Employee::get_employeeCode()
{
	cout << "Employee Code : ";
	if (employee_code != nullptr) {
		int len2 = 0;
		while (true)
		{
			if (employee_code[len2] != '\0')
			{
				cout << employee_code[len2];
				len2++;
			}
			else
				break;
		}
		cout << employee_code[len2] << endl;
	}
}
void Employee::display()
{
	cout << "Employee Code : " ;
	if (employee_code != nullptr) {
		int len2 = 0;
		while (true)
		{
			if (employee_code[len2] != '\0')
			{
				cout << employee_code[len2];
				len2++;
			}
			else
				break;
		}
		cout << employee_code[len2] << endl;
	}
	else
		cout << "Their is no employee_code." << endl;

	cout << "Name : ";
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

}
//date class
Date::Date()
{
	date = nullptr;
	month = nullptr;
	year = nullptr;
	total_number_of_days = nullptr;
}
Date::~Date()
{
	delete[] date;
	delete[] month;
	delete[] year;
	delete[] total_number_of_days;
}
void Date::set_date(int* d)
{
	date = new int[2];
	date = d;
}
void Date::set_month(int* m)
{
	month = new int[2];
	month = m;
}
void Date::set_year(int* y)
{
	year = new int[4];
	year = y;
}
void Date::calculate(const Date& acc1,const Date& acc2)
{
	int *q,* w,* e,*we,*ee;
	q = new int;
	w = new int;
	e = new int;
	we = new int;
	ee = new int;
	total_number_of_days = new int;
	*q = acc1.date - acc2.date;
	*w = acc1.month - acc2.month;
	*e = acc1.year - acc2.year;
	*we = *w * 365;
	*ee = *e * 12 * 365;
	*total_number_of_days = *q + *we + *ee;
}
void Date::display()
{
	cout << "Date of joining: " << * date << " - " << *month << " - " << *year << endl;
}
void Date::total_days()
{
	cout << "Total Number of Days: ";// << *total_number_of_days << endl;
	int len = 0;
	while (true)
	{
		if (total_number_of_days[len] != '\0')
		{
			cout << total_number_of_days[len];
			len++;
		}
		else
			break;
	}
}
```
### header file
```
#pragma once
class Employee{
private:
	char* name;
	char* employee_code;
public:
	Employee();
	~Employee();
	void set_name(char*);
	void set_employeeCode(char*);
	void get_name();
	void get_employeeCode();
	void display();
};
class Date {
private:
	int* date;
	int* month;
	int* year;
	int* total_number_of_days;
public:
	Date();
	~Date();
	void set_date(int* );
	void set_month(int*);
	void set_year(int*);
	void calculate(const Date& ,const Date &);
	void display();
	void total_days();
};
```
