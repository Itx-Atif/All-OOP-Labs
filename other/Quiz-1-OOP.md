### QUIZ OOP

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	int birthday_date = 0, birthday_month = 0, birthday_year = 0; 
	int current_date = 0, current_month = 0, current_year = 0;

	//Birthday Date

	cout << "Enter your Birthday Date: ";
	while (cin >> birthday_date)
		if (birthday_date <= 31 && birthday_date > 0)
			break;
	cout << "Enter your Birthday month: ";
	while (cin >> birthday_month)
		if (birthday_month <= 12 && birthday_month > 0)
			break;
	cout << "Enter your Birthday year: ";
	while (cin >> birthday_year)
		if (birthday_year <= 9999 && birthday_year > 0)
			break;

	Date obj1(birthday_date , birthday_month , birthday_year);

	//Current date

	cout << "Enter your current Date: ";
	while (cin >> current_date)
		if (current_date <= 31 && current_date > 0)
			break;
	cout << "Enter your current month: ";
	while (cin >> current_month) {
		if (current_month <= 12 && current_month > 0) {
			break;
		}
	}
	cout << "Enter your current year: ";
	while (cin >> current_year)
		if (current_year <= 9999 && current_year > 0)
			break;

	Date obj2(current_date , current_month , current_year);

	cout << "Birthday Date: " << endl;
	obj1.display();
	cout << "\nCurrent Date: " << endl;// '\n' it means new line like endl
	obj2.display();

	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;

Date::Date()
{
	day = nullptr;
	month = nullptr;
	year = nullptr;
}
Date::Date(int _day, int _month, int _year)
{
	day = new int;
	*day = _day;
	month = new int;
	*month = _month;
	year = new int;
	*year = _year;
}
void Date::display()
{
	cout << "Date: " << *day << "-" << *month << "-" << *year << endl;
}
Date::~Date()
{
	delete[] day;
	delete[] month;
	delete[] year;
}
```
### header file
```
#pragma once
class Date {
private:
	int* day;
	int* month;
	int* year;
public:
	Date();
	Date(int, int, int);
	~Date();
	void display();
};

```
