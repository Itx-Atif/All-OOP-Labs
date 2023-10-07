### Task 1:  
  
Define a class Cat having attributes    
•	name (char *)   
•	weight (double )   
   
   
Now do the following operations on the above-mentioned class:   
•	Write parameterized constructor with default arguments and copy the constructor (with an output statement to check the lifetime scope of the object).  
•	Write a destructor (with an output statement to check the lifetime scope of the object). 
•	Write separate setter (mutator) functions for each attribute to set value (with no memory leakage).  
•	Write separate getter (accessor) functions for each attribute to get value (which should never return the original memory handler).  
•	Write a display() function to display attributes of class Cat on screen.   
  
   
Now write the main function to declare different objects of class Cat. Then call the display function against every object to see the information stored.   


### main file
```
#include<iostream>
#include"task_1_Header.h"
using namespace std;
int main()
{
	double wi;
	char arr[10] {};
	char* ar;
	ar = arr;
	Cat c1;
	cout << "Enter name of cat: ";
	//cin >> arr;
	//trying different ways :)
	//c1.set_name(ar);
	cout << "Enter weight of cat: ";
	cin >> wi;
	cin.ignore();
	cin.get(arr, 10);
	c1.set_name(ar);
	c1.set_weight(wi);
	c1.display();
	return 0;
}
```
### source file
```
#include<iostream>
#include"task_1_Header.h"
using namespace std;
Cat::Cat()
{
	name = nullptr;
	weight = 0.0;
}
Cat::~Cat()
{
	delete[] name;
}
void Cat::set_name(char* n)
{
	int len = 0;
	while (true)
	{
		if (n[len]!='\0')
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
void Cat::set_weight(double w)
{
	weight = w;
}
void Cat::get_name()
{
	int len = 0;
	while (true)
	{
		if (name[len] != '\0')
		{
			cout<<name[len];
			len++;
		}
		else
			break;
	}
}
void Cat::get_weight()
{
	cout << "Weight: " << weight << endl;
}
void Cat::display()
{
	cout << "Name: ";
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
	cout << "\nWeight: " << weight <<" kg" << endl;
}
```
### header file
```
#pragma once
class Cat {
private:
	char* name;
	double weight;
public:
	Cat();
	~Cat();
	void set_name(char*);
	void set_weight(double);
	void get_name();
	void get_weight();
	void display();
};

```
