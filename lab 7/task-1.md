### 

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	complex obj;

	obj.get_value(2, 3);

	obj++;

	cout << "after increment: " << endl;
	obj.display();
	obj--;
	cout << "after decrement: " << endl;
	obj.display();
	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;

complex::complex()
{
	a = 0;
	b = 0;
}

complex::complex(int s, int g)
{
	a = s;
	b = g;
}

void complex::get_value(int v, int p)

{

	a = v;

	b = p;

}

void complex::display()

{

	cout << a << " + " << b << " i" << endl;

}

complex& complex::operator++()
{
    a++;
    b++;
    return *this;
}

complex complex::operator++(int)
{
    // Create a copy of the current object
    complex temp(*this);

    // Increment the real and imaginary parts
    a++;
    b++;

    // Return the original object before increment
    return temp;
}

complex& complex::operator--()
{
    a--;
    b--;
    return *this;
}

complex complex::operator--(int)
{
    // Create a copy of the current object
    complex temp(*this);

    // Decrement the real and imaginary parts
    a--;
    b--;

    // Return the original object before decrement
    return temp;
}
```
### header file
```
#pragma once
class complex {
private:
	int a;

	int b;

public:
	complex();

	complex(int, int);

	void get_value(int, int);

	void display();

	complex& operator++();

	complex operator++(int);

	complex& operator--();

	complex operator--(int);
};
```
