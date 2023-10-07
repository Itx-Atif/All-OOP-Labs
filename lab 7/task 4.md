### task 4

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	dist d1(11, 10), d2(5, 11);
	cout << "first distance :" << endl;
	d1.display();
	cout << "second distance :" << endl;
	d2.display();
	if (d1 < d2)
		cout << "d1 is less than d2." << endl;
	else
		cout << "d1 is greater than (or equal to) d2." << endl;
	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
dist::dist()
{
	feet = 0;
	inch = 0;
}
dist::dist(int a, int b)
{
	feet = a;
	inch = b;
}
void dist::display()
{
	cout << "Feet: " << feet << "\t inch: " << inch << endl;
}
bool dist::operator<(const dist& a)
{
	if (feet < a.feet  && inch < a.inch ) {
		return true;
	}
	else
		return false;
}
```
### header file
```
#pragma once
class dist {
private:
	int feet;
	int inch;
public:
	dist();
	dist(int, int);
	void display();
	bool operator<(const dist&);
};
```
