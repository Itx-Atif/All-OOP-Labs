### CONSTANT INITIALIZER LIST

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	double radius_of_circle1=0.0, radius_of_circle2 = 0.0,PI=0.0;
	cout << "Enter raduis of circle: ";
	cin >> radius_of_circle1;
	Circle_Area obj1;
	obj1.area_function(radius_of_circle1);
	double* show = obj1.circle_area_return();
	cout << *show;
	
	cout << "Enter raduis of circle 2  ";
	cin >> radius_of_circle2;
	Circle_Area obj2(radius_of_circle2);
	cout << *obj2.circle_area_return() << endl;

	double radius_of_circle3 = 0.0, PI3 = 0.0;

	cout << "Enter raduis of circle 3 and PI: ";
	cin >> radius_of_circle3 >> PI3;
	Circle_Area obj3(radius_of_circle3 , PI3);
	cout << *obj3.circle_area_return() << endl;
	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;

Circle_Area::Circle_Area():PI(0.0)
{
	radius = nullptr;
	pie = nullptr;
	area = nullptr;
}

Circle_Area::Circle_Area(double r):PI(3.14)
{
	pie = nullptr;
	radius = new double;
	area = new double;
	*radius = r;
	*area = PI * *radius * *radius;
}
Circle_Area::Circle_Area(double rr, double pp) :PI(pp)
{
	pie = nullptr;
	radius = new double;
	area = new double;
	*radius = rr;
	*area = PI * *radius * *radius;
}

/*Circle_Area::Circle_Area(double r, double p) //: radius(&r)
{
	//double _pie = 0.0;
	//*pie = _pie;
	radius = new double;
	pie = new double;
	area = new double;
	*radius = r;
	*pie = p;
	*area = *pie * *radius * *radius;
}*/
void Circle_Area::area_function(double R)
{
	pie = new double;
	*pie = 3.14159;
	radius = new double;
	area = new double;
	*radius = R;
	*area = *pie * *radius * *radius;
	cout << *area;
}
double* Circle_Area::circle_area_return()
{
	return area;
}
Circle_Area::~Circle_Area()
{
	delete[] radius;
	delete[] pie;
	delete[] area;
}
```
### header file
```
#pragma once
class Circle_Area {
private:
	double* radius;
    double* pie;
	double* area;
	const double PI;
public:
	Circle_Area();
	//two ways to define the same thing
	//Circle_Area() :radius(nullptr), pie(nullptr) {};
	Circle_Area(double);
	Circle_Area(double, double);//wrong bcz const Pi is waste
	//Circle_Area(double, double);
	void area_function(double);
	double* circle_area_return();
	~Circle_Area();
};
```
