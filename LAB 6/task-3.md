### Task 3: 
Create a class called "Rectangle" with two private member variables, "width" and "height". Include a constructor that takes two parameters and initializes the variables. Include two public member functions to calculate the area and perimeter of the rectangle. Make these functions "const" , they can be called by constant/non constant objects.
Note: constant objects can call only constant functions.

### main file
```
#include<iostream>
#include"task_3Header.h"
using namespace std;
int main()
{
    double w = 0.0, h = 0.0;
    cout << "Enter width and height of rectangle: ";
    cin >> w >> h ;
    cout << "--------------------------";
    const Rectangle R1(w,h);
    cout << "Area of rectangle: " << R1.area() << endl;
    cout << "Perimeter of rectangle: " << R1.perimeter() << endl;
    cout << "--------------------------";
    double w2 = 0.0, h2 = 0.0;
    cout << "Enter width and height of rectangle: ";
    cin >> w2 >> h2;
    cout << "--------------------------";
    Rectangle R2(w2, h2);
    cout << "Area of second rectangle: " << R2.area() << endl;
    cout << "Perimeter of second rectangle: " << R2.perimeter() << endl;
    cout << "--------------------------";
	return 0;
}
```
### source file
```
#include<iostream>
#include"task_3Header.h"
using namespace std;
Rectangle::Rectangle()
{
    width = nullptr;
    height = nullptr;
}
Rectangle::Rectangle(double w, double h)
{
    width = new double;
    height = new double;
    *width = w;
    *height = h;
}
double Rectangle::area() const {
    double area= *width * *height;
    return area;
}
double Rectangle::perimeter() const {
    double Perimeter = 2 * (*width + *height);
    return Perimeter;
}
Rectangle::~Rectangle()
{
    delete[] width;
    delete[] height;
}
```
### header file
```
#pragma once
class Rectangle {
private:
    double* width;
    double* height;
public:
    Rectangle();
    Rectangle(double,double);
    double area() const;
    double perimeter() const;
    ~Rectangle();
};
```
