### Task 5: 

Create a class named as ComplexNumber having following private attributes: 
 
1.	realPart(double)  
2.	imaginaryPart(double)  
 
Now write the following for the above mentioned class: 
 
•	Write a function init which should receive two doubles as parameters (_realPart and _imaginaryPart) and initialize all the attributes with the respective values received in the parameters.
Remember: Validate the values in the above function. 
•	Write a non-returning display function to print the attributes of the class in the format given below. 
 
 
Write a program to create a five objects of ComplexNumber with different data. And then display all the complex number objects in the following format. 
 
Output Format:    3+2i 


### main file
```
#include<iostream>
//#include"Header.h"
using namespace std;
class ComplexNumber {
private:
	double real_part;
	double imaginary;
public:
	//void init(double, double);
	//void display();
	void init(double a, double b)
	{
		real_part = a;
		imaginary = b;
	}
	void display()
	{
		cout << real_part << " + " << imaginary << "i" << endl;
	}
};
int main()
{
	double r1, r2, r3, r4, r5, c1, c2, c3, c4, c5;
	ComplexNumber q;
	ComplexNumber w;
	ComplexNumber e;
	ComplexNumber r;
	ComplexNumber t;
	cout << "enter real part: ";
	cin >> r1;
	cout << "enter imaginary part: ";
	cin >> c1;
	q.init(r1, c1);
	q.display();
	cout << "enter real part: ";
	cin >> r2;
	cout << "enter imaginary part: ";
	cin >> c2;
	w.init(r2, c2);
	w.display();
	cout << "enter real part: ";
	cin >> r3;
	cout << "enter imaginary part: ";
	cin >> c3;
	e.init(r3, c3);
	e.display();
	cout << "enter real part: ";
	cin >> r4;
	cout << "enter imaginary part: ";
	cin >> c4;
	r.init(r4, c4);
	r.display();
	cout << "enter real part: ";
	cin >> r5;
	cout << "enter imaginary part: ";
	cin >> c5;
	t.init(r5, c5);
	t.display();

	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;

void ComplexNumber::init(double a, double b)
{
	real_part = a;
	imaginary = b;
}
void ComplexNumber::display()
{
	cout << real_part << " + " << imaginary << "i" << endl;
}
```
### header file
```
#pragma once
class ComplexNumber {
private:
	double real_part;
	double imaginary;
public:
	void init(double,double);
	void display();
};

```
