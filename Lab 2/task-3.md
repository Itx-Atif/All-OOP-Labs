### Task 3: 
Create a class named as Date having following private attributes: 
 
1.	day(int) 
2.	month(int) 
3.	year(int)  
 
Now write the following for the above mentioned class: 
 
•	Write a function init which should receive three integers as parameters (_day, _month and _year) and initialize all the attributes with the respective values received in the parameters.
Remember: Validate the values in the above function. For eg: month can never be negative etc.
•	Write a non-returning display function to print the attributes of the class. 
 
 
Now write a program to create two objects of Date in main(). In one you have to ask user to enter his birthDate and in other the currentDate. Display the birthdate and currentDate of the user by display function. And then calculate age of the user from the objects and print it. 


### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	int d1, m1, y1, d2, m2, y2;
	date birth_date, current_date , dsp;
	cout << "Enter the day of birth: ";
		cin >> m1;
	
	cout << "Enter the month of birth: ";
		cin >> d1;
	
	cout << "Enter the year of birth: ";
		cin >> y1;
	

	birth_date.init(d1, m1, y1);
	birth_date.display();
	cout << "Enter the day of birth: ";
		cin >> d2;
	
	cout << "Enter the month of birth: ";
		cin >> m2;
	
	cout << "Enter the year of birth: ";
		cin >> y2;
	
	current_date.init(d2, m2, y2);
	current_date.display();

	int age = birth_date.get_age(current_date);
	cout << "Age: " << age << endl;

	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
void date::init(int _day, int _month, int _year)
{
	if (!validate_date(_day, _month, _year)) {
		throw std::invalid_argument("Invalid date");
	}
	day = _day;
	month = _month;
	year = _year;
}
void date::display()
{
	cout << "Day of birth: " << day << endl;
	cout << "Month of birth: " << month << endl;
	cout << "Year of birth: " << year << endl;
}
int date::get_age(date& current_date) {
	int age = current_date.year - year;
	if (current_date.month < month || (current_date.month == month && current_date.day < day)) {
		age--;
	}
	return age;
}
```
### header file
```
#pragma once
class date {
private:
	int day;
	int month;
	int year;
    bool validate_date(int _day, int _month, int _year) {
        if (_year < 0 || _month < 1 || _month > 12) {
            return false;
        }
        if (_month == 2) {
            if ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0)) {
                return _day <= 29;
            }
            else {
                return _day <= 28;
            }
        }
        else if (_month == 4 || _month == 6 || _month == 9 || _month == 11) {
            return _day <= 30;
        }
        else {
            return _day <= 31;
        }
    }
public:
	void init(int ,int,int);
	void display();
	int get_age(date&);
};
```
