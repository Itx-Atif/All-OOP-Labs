### task 2
### cin. ignore use is important in taking input from user in char datatype
### main file
```
#include<iostream>
#include"BasicInfo.h"
#include"DepatInfo.h"
#include"Employee.h"
using namespace std;
int main()
{
	employee e{};
	e.get_employee_info();
	e.print_employee_info();

	system("pause");
	return 0;
}
```
### source file
### Employee1.cpp(source file)
```
#include"Employee.h"
#include<Iostream>
#include"BasicInfo.h"
#include"DepatInfo.h"
using namespace std;
void employee::get_employee_info()
{
	char nm[10],g[10];
	int id;
	cout << "Enter name: ";
	cin.get(nm, 10);
	cin.ignore();
	cout << "Enter employee id: ";
	cin >> id;
	cin.ignore();
	cout << "Enter gender: ";
	cin.get(g, 10);
	cin.ignore();
	get_basic_info(nm,id,g);

	char dnm[10], a[10];
	int t;
	cout << "Enter department name: ";
	cin.get(dnm, 10);
	cin.ignore();
	cout << "Enter assigned work: ";
	cin.get(a, 10);
	cin.ignore();
	cout << "Enter time to complete: ";
	cin >> t;
	cin.ignore();
	get_department_info(dnm,a,t);
}
void employee::print_employee_info()
{
	print_basic_info();
	print_department_info();
}
```
### basicinfo1.cpp(source file)
```
#include<iostream>
#include"BasicInfo.h"
using namespace std;
void BasicInfo::get_basic_info(char* n, int a, char* g)
{
	int len=0;
	while (true)
	{
		if (n[len]!='\0'){
			len++;
		}
		else
			break;
	}
	name = new char[len + 1];
	for (int i = 0; i < len; i++){
		name[i] = n[i];
	}
	name[len] = '\0';

	emp_id = a;

	int len1=0;
	while (true)
	{
		if (g[len1] != '\0'){
			len1++;
		}
		else
			break;
	}
	gender = new char[len1 + 1];
	for (int i = 0; i < len1; i++){
		gender[i] = g[i];
	}
	gender[len1] = '\0';
}
void BasicInfo::print_basic_info()
{
	cout << "Name: ";
	int len = 0;
	while (true)
	{
		if (name[len] != '\0') {
			len++;
		}
		else
			break;
	}
	for (int i = 0; i < len; i++) {
		cout << name[i];
	}
	cout << "\nemployee id: " << emp_id << endl;
	cout << "gender: ";
	int len1 = 0;
	while (true)
	{
		if (gender[len1] != '\0') {
			len1++;
		}
		else
			break;
	}
	for (int i = 0; i < len1; i++) {
		cout << gender[i];
	}
	cout << endl;
}
```
### Departinfo.cpp(source file)
```
#include"DepatInfo.h"
#include<Iostream>
using namespace std;
void depatmentInfo::get_department_info(char* n, char* w,int t)
{
	int len = 0;
	while (true)
	{
		if (n[len] != '\0') {
			len++;
		}
		else
			break;
	}
	dept_name = new char[len + 1];
	for (int i = 0; i < len; i++) {
		dept_name[i] = n[i];
	}
	dept_name[len] = '\0';

	int len1 = 0;
	while (true)
	{
		if (w[len1] != '\0') {
			len1++;
		}
		else
			break;
	}
	assigned_work = new char[len1 + 1];
	for (int i = 0; i < len1; i++) {
		assigned_work[i] = w[i];
	}
	assigned_work[len1] = '\0';

	time_to_complete = t;
}
void depatmentInfo::print_department_info()
{
	cout << "Department name: ";
	int len = 0;
	while (true)
	{
		if (dept_name[len] != '\0') {
			len++;
		}
		else
			break;
	}
	for (int i = 0; i < len; i++) {
		cout << dept_name[i];
	}
	cout << endl << "Assigned work: ";
	int len1 = 0;
	while (true)
	{
		if (assigned_work[len1] != '\0') {
			len1++;
		}
		else
			break;
	}
	for (int i = 0; i < len1; i++) {
		cout<<assigned_work[i];
	}

	cout << "\ntime_to_complete =" << time_to_complete << endl;
}
```
### header file
### Employee.h
```
#pragma once
#include<Iostream>
#include"BasicInfo.h"
#include"DepatInfo.h"
class employee:public BasicInfo, depatmentInfo {
public:
	void get_employee_info();
	void print_employee_info();
};
```
### BasicInfo.h
```
#pragma once
class BasicInfo{
protected:
	char* name;
	int emp_id;
	char* gender;
public:
	void get_basic_info(char*, int, char*);
	void print_basic_info();
};
```
### DepatInfo.h.h
```
#pragma once
class depatmentInfo {
protected:
	char* dept_name;
	char* assigned_work;
	int time_to_complete;
public:
	void get_department_info(char*,char*,int);
	void print_department_info();
};
```
