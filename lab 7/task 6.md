### task 6

### main file
```
#include<iostream> 
#include"Header.h" 
using namespace std;
int main()
{
	Time t1(4, 15, 45);

	Time t2(0, 15, 45);

	if (t1 == t2)
	{
		cout << "Both the time values are equal";
	}
	else
	{
		cout << "Both the time values are not equal";
	}
	return 0;
}
```
### source file
```
#include<iostream> 
#include"Header.h" 
Time::Time()
{
	t1 = 0;
	t2 = 0;
	t3 = 0;
}
Time::Time(int e, int  f, int g)
{
	t1 = e;
	t2 = f;
	t3 = g;
}
bool Time::operator==(const Time& a)
{
	if (t1 == a.t1 && t2 == a.t2 && t3 == a.t3)
	{
		return true;
	}
	else
		return false;
}
```
### header file
```
#pragma once
class Time {
private:
	int t1;
	int t2;
	int t3;
public:
	Time();
	Time(int, int, int);
	bool operator==(const Time&);
};
```
