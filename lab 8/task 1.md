### task 1

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	int a = 0, b = 0;
	rectangle obj1;
	cout << "write Height and width of rectangle" << endl;
	cin >> a;
	cin >> b;
	obj1.setHeight(a);
	obj1.setWidth(b);
	cout << "Area of rectangle is: " << endl;
	cout << obj1.getArea();
	cout << endl;

	int c = 0;
	square obj2;
	cout << "write length of square" << endl;
	cin >> c;
	obj2.setHeight(c);
	obj2.setWidth(c);
	cout << "Area of aquare is: " << endl;
	cout << obj2.getArea();
	cout << endl;

	system("pause");
	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
shape::shape()
{
	width = 0;
	height = 0;
}
void shape::setWidth(float a)
{
	width = a;
}
void shape::setHeight(float a)
{
	height = a;
}
int rectangle::getArea()
{

	return width * height;
}

int square::getArea()
{
	return width * height;
}
```
### header file
```
#pragma once
class shape {
private:
protected:
	float width;
	float height;
public:
	shape();
	void setWidth(float);
	void setHeight(float);
};
class rectangle :public shape {
public:
	int getArea();
};
class square :public shape {
public:
	int getArea();
};
```
