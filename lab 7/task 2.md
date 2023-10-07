### Task 2

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	dist d1(11, 10), d2(5, 11), d3;
	cout << "Enter the value of objects: ";
	cin >> d3;
	cout << "first distance: " << d1 << endl;
	cout << "second distance: " << d2 << endl;
	cout << "third distance: " << d3 << endl;
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
	a = 0;
	b = 0;
}
dist::dist(int a, int b)
{
	this->a = a;
	this->b = b;
}
ostream& operator<<(ostream& os, const dist& obj)
{
	os <<" Feet: " <<obj.a << " inch: " << obj.b ;
	return os;
}
istream& operator>>(istream& is, dist& obj)
{
	is >> obj.a >> obj.b;
	return is;
}
```
### header file
```
#pragma once
#include<iostream>
using namespace std;
class dist {
private:
	int a;
	int b;
public:
	dist();
	dist(int,int);
	friend ostream& operator<<(ostream&,const dist&);
	friend istream& operator>>(istream&,dist&);

};
```
