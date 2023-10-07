### Task 4: 
 
Create a class named as Triangle having following private attributes: 
 
1.	base (double)  
2.	height(double) 
 
Now write the following for the above mentioned class: 
 
•	Write a function init which should receive two doubles as parameters (_base and _height) and initialize all the attributes with the respective values received in the parameters.
Remember: Validate the values in the above function. For eg: height can never be negative etc.
•	Write a non-returning display function to print the attributes of the class.
•	Write a function calculateArea which calculates the area of the triangle and returns it. 
 
 
Write a program to create a five objects of Triangle with different data. Display the attributes of the triangle through display function having greatest area (use function written in the class to calculate area). 


### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	Triangle  T1, T2, T3, T4, T5 , area;
	double b1, h1, b2, h2, b3,h3,b4, h4, b5, h5;
	cout << "Enter base of Triangle 1:";
	cin >> b1;
	cout << "\nEnter height of triangle1: ";
	cin >> h1;
	T1.init(b1, h1);
	T1.display();
	cout << "\nEnter base of Triangle 1:";
	cin >> b2;
	cout << "\nEnter height of triangle1: ";
	cin >> h2;
	T2.init(b2, h2);
	T2.display();
	cout << "\nEnter base of Triangle 1:";
	cin >> b3;
	cout << "\nEnter height of triangle1: ";
	cin >> h3;
	T3.init(b3, h3);
	T3.display();
	cout << "\nEnter base of Triangle 1:";
	cin >> b4;
	cout << "\nEnter height of triangle1: ";
	cin >> h4;
	T4.init(b4, h4);
	T4.display();
	cout << "\nEnter base of Triangle 1:";
	cin >> b5;
	cout << "\nEnter height of triangle1: ";
	cin >> h5;
	T5.init(b5, h5);
	T5.display();

	int greatest_area = area.caculate_area(T1,T2,T3,T4,T5);
	cout << "\nGreatest Area is: " << greatest_area << endl;
	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
void Triangle::init(double b, double h)
{
	base = b;
	height = h;
}
void Triangle::display()
{
	cout << "---------------------------------" << endl;
	cout << "Base of Triange is: " << base << endl;
	cout << "Height of triangle is: " << height << endl;
	cout << "---------------------------------" << endl;
}
int Triangle::caculate_area(Triangle t1, Triangle t2, Triangle t3, Triangle t4, Triangle t5)
{
	int a1, a2, a3, a4, a5 ,temp=0;
	a1 = t1.base * t1.height;
	a2 = t2.base * t2.height;
	a3 = t3.base * t3.height;
	a4 = t4.base * t4.height;
	a5 = t5.base * t5.height;
	cout << a1 << a2 << a3 << a4 << a5;
	if (a1 > a2 && a1 > a3 && a1 > a4 && a1 > a5) {
		return a1;
	}
	else if (a2 > a1 && a2 > a3 && a2 > a4 && a2 > a5)
	{
		return a2;
	}
	else if (a3 > a2 && a3 > a1 && a3 > a4 && a3 > a5)
	{
		return a3;
	}
	else if (a4 > a2 && a4 > a3 && a4 > a1 && a4 > a5)
	{
		return a4;
	}
	else if (a5 > a2 && a5 > a3 && a5 > a4 && a5 > a1)
	{
		return a5;
	}
}
```
### header file
```
#pragma once
class Triangle {
private:
	double base;
	double height;
public:
	void init(double, double);
	void display();
	int caculate_area(Triangle, Triangle, Triangle, Triangle, Triangle);
};
```
