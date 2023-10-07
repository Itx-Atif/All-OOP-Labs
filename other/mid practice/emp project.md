### emp project

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{/*
	int h = 100;
	char arr[5]={'a','t','i','f'};
		// Create an instance of e using the parameterized constructor
		e emp1(h,arr );
		emp1.display();
		std::cout << std::endl;
		// Print out emp1 using the output stream operator
		std::cout << "emp1: " << std::endl << emp1 << std::endl;
		
		// Create another instance of e using the default constructor
		e emp2;

		// Prompt the user to enter emp2's id and name using the input stream operator
		std::cout << "Enter emp2's id and name: ";
		std::cin >> emp2;

		// Print out emp2 using the output stream operator
		std::cout << "emp2: " << std::endl << emp2 << std::endl;
		
		// Use the overloaded assignment operator to make emp2 a copy of emp1
		emp2 = emp1;

		// Print out emp2 again to verify the copy was successful
		std::cout << "emp2 after assignment: " << std::endl << emp2 << std::endl;
		char as[3] = { 'b','p' };
		// Set emp2's name using the setter function
		emp2.setn(as);

		// Print out emp2 again to verify the name was changed
		std::cout << "emp2 after name change: " << std::endl << emp2 << std::endl;

		// Use the getter functions to get emp1's id and name and print them out
		std::cout << "emp1 id: " << emp1.getid() << std::endl;
		std::cout << "emp1 name: " << emp1.getn() << std::endl;

		// Done!
		*/
	int h = 9;
	char nm[5]={"atif"};
	e a(h,nm);
	//cout<<a;
	char* name = a.getn();
	if (name != nullptr) {
		int len = 0;
		while (true)
		{
			if (name[len] != '\0')
			{
				len++;
			}
			else
				break;
		}
		char* newname = new char[len + 1];
		for (int i = 0; i < len; i++) {
			cout << name[i] << endl;
		}
	}
	else
		cout << "name: null";
	/*e a11;
	cout << a11;
	cin >> a11;
	cout << a11;*/
	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
void e::display()
{
	cout << "id: " << id << endl;
	if (name != nullptr) {
		cout << "name: ";
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
	}
	else
		cout << "null";
}
e e::operator=(const e& a)
{
	e b = *this;
	id = a.id;
	if (a.name != nullptr) {
		int len = 0;
		while (true)
		{
			if (a.name[len] != '\0')
			{
				len++;
			}
			else
				break;
		}
		name = new char[len + 1];
		for (int i = 0; i < len + 1; i++) {
			name[i] = a.name[i];
		}
		name[len] = '\0';
	}
	else
		name = nullptr;
	return b;
}
e::e()
{
	id = 0;
	name = nullptr;
}
e::e(int a, char* n)
{
	id = a;
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
	for (int i = 0; i < len; i++) {
		name[i] = n[i];
	}
	name[len] = '\0';
}
e::e(const e& a)
{
	id = a.id;
	if (a.name != nullptr) {
		int len = 0;
		while (true)
		{
			if (a.name[len] != '\0')
			{
				len++;
			}
			else
				break;
		}
		name = new char[len + 1];
		for (int i = 0; i < len; i++) {
			name[i] = a.name[i];
		}
		name[len] = '\0';
	}
	else
		name = nullptr;
}
void e::setid(int a)
{
	id = a;
}
void e::setn(char* n)
{
	int len = 0;
	while (true)
	{
		if (n[len] == '\0')
		{
			break;
		}
		else
			len++;
	}
	name = new char[len + 1];
	for (int i = 0; i < len; i++) {
		name[i] = n[i];
	}
	name[len] = '\0';
}
int e::getid()
{
	return id;
}
char* e::getn()
{
	if (name != nullptr) {
		int len = 0;
		while (true)
		{
			if (name[len] != '\0')
			{
				len++;
			}
			else
				break;
		}
		char* newname = new char[len + 1];
		for (int i = 0; i < len; i++) {
			newname[i] = name[i];
		}
		newname[len] = '\0';
		return newname;
	}
	else {
		cout << "null";
		return nullptr;
	}
	
}
ostream& operator<<(ostream& os, e& a)
{
	os << "Id:" << a.id << endl;
	if (a.name != nullptr) {
		int len = 0;
		while (true) {
			if (a.name[len] != '\0') {
				len++;
			}
			else
				break;
		}
		char* n = new char[len + 1];
		os << "name:";
		for (int i = 0; i < len; i++)
		{
			if (a.name[i] == '\0')
			{
				n[i] = a.name[i];
				os << n[i];
			}
			else {
				n[i] = a.name[i];
				os << n[i];
			}
		}
		os << endl;
		return os;
	}
	else {
		os << "null";
		return os;
	}
}
istream& operator>>(istream& is, e& a)
{
	cout << "enter id:";
	is >> a.id;
	cout << "enter name: ";
	//char nm[4];
	//cin.getline(nm, 4);
	a.name = new char[4];
	is >> a.name;
	return is;
}
e::~e()
{
	delete[] name;
}
```
### header file
```
#pragma once
#include<iostream>
using namespace std;
class e {
private:
	int id;
	char* name;
public:
	e();
	e(int, char*);
	e(const e&);
	void setid(int);
	void setn(char*);
	int getid();
	char* getn();
	void display();
	e operator=(const e&);
	friend ostream& operator<<(ostream&, e&);
	friend istream& operator>>(istream&, e&);
	~e();
};
```
