### Task 2: 

Define a class Employee having attributes    
•	name (char *)   
•	hourly_pay_rate (float*)   
•	working_hours(int*)
•	salary(float*)
   
   
Now do the following operations on above-mentioned class:   
1.	Write default constructor, parameterized constructor and copy constructor.
2.	Write separate setter functions for each attribute to set value (with no memory leakage).  
3.	Write separate getter functions for each attribute to get value.
4.	Write a destructor (with an output statement to check the lifetime scope of object). 
5.	Write a display() function to display attributes of class Employee on screen.   
6.	Write an AddSal() function, which adds $10 to the salary of the employee if it is less than $500
7.	Write an “AddWork()” function, which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.


### main file
```
#include<iostream>
#include"task_2Header.h"
using namespace std;
int main()
{
    char name[10]{};
    float rate = 0.0;
    int hour = 0.0;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee hourly pay rate: ";
    cin >> rate;
    cout << "Enter employee working hours: ";
    cin >> hour;
    Employee e1(name, rate, hour);
    cout << "-----------------------" << endl;
    e1.display();
    cout << "-----------------------" << endl;
    char name1[10]{};
    float rate1 = 0.0;
    int hour1 = 0.0;
    cout << "Enter employee name: ";
    cin >> name1;
    cout << "Enter employee hourly pay rate: ";
    cin >> rate1;
    cout << "Enter employee working hours: ";
    cin >> hour1;
    Employee e2(name1, rate1, hour1);
    cout << "-----------------------" << endl;
    e2.display();
    return 0;
}
```
### source file
```
#include<iostream>
#include"task_2Header.h"
using namespace std;
Employee::Employee() {
    name = nullptr;
    hourly_pay_rate = nullptr;
    working_hours = nullptr;
    salary = nullptr;
}
Employee::Employee(char* name, float hourly_pay_rate, int working_hours)
{
    int len1 = 0;
    while (true)
    {
        if (name[len1] != '\0')
        {
            len1++;
        }
        else
            break;
    }
    this->name = new char[len1 + 1];
    for (int i = 0; i < len1; i++)
    {
        this->name[i] = name[i];
    }
    this->name[len1] = '\0';

    this->hourly_pay_rate = new float;
    *this->hourly_pay_rate = hourly_pay_rate;

    this->working_hours = new int;
    this->salary = new float;

    *this->working_hours = working_hours;
    add_work();

    *this->salary = hourly_pay_rate* working_hours;
    add_sallary();
}
Employee::Employee(const Employee& e)
{
    int len1 = 0;
    while (true)
    {
        if (e.name[len1] != '\0')
        {
            len1++;
        }
        else
            break;
    }
    this->name = new char[len1 + 1];
    for (int i = 0; i < len1; i++)
    {
        this->name[i] = e.name[i];
    }
    this->name[len1] = '\0';

    this->hourly_pay_rate = new float;
    *this->hourly_pay_rate = *e.hourly_pay_rate;

    this->working_hours = new int;
    this->salary = new float;
    *this->working_hours = *e.working_hours;
    add_work();
    *this->salary = *e.hourly_pay_rate * *e.working_hours;
    add_sallary();
}
void Employee::set_name(char* name)
{
    int len1 = 0;
    while (true)
    {
        if (name[len1] != '\0')
        {
            len1++;
        }
        else
            break;
    }
    this->name = new char[len1 + 1];
    for (int i = 0; i < len1; i++)
    {
        this->name[i] = name[i];
    }
    this->name[len1] = '\0';
}
void Employee::set_hourly_pay_rate(float hourly_pay_rate)
{
    this->hourly_pay_rate = new float;
    *this->hourly_pay_rate = hourly_pay_rate;
}
void Employee::set_working_hours(int working_hours)
{
    this->working_hours = new int;
    *this->working_hours = working_hours;
    add_work();
}
char* Employee::get_name() const
{
    int len1 = 0;
    while (true)
    {
        if (name[len1] != '\0')
        {
            cout << name[len1];
            len1++;
        }
        else
            break;
    }
    return name;
}
float Employee::get_hourly_pay_rate() const
{
    return *hourly_pay_rate;
}
int Employee::get_working_hours() const
{
    return *working_hours;
}
float Employee::get_salary() const
{
    return *salary;
}
void Employee::display() const
{
    cout << "Name: ";
    int len1 = 0;
    while (true)
    {
        if (name[len1] != '\0')
        {
            cout << name[len1];
            len1++;
        }
        else
            break;
    } 
    cout << endl;
    cout << "Hourly pay rate: $" << *hourly_pay_rate << endl;
    cout << "Working hours: " << *working_hours << endl;
    cout << "Salary: $" << *salary << endl;
}
void Employee::add_sallary()
{
    if (*salary < 500) {
        *salary += 10;
    }
    else
        *salary += 0;
}
void Employee::add_work()
{
    if (*working_hours > 6) {
        *salary += 5;
    }
    else
        *salary += 0;
}
Employee::~Employee()
{
    cout << "-----------------------" << endl;
    cout << "Destroying object for ";
    int len1 = 0;
    while (true)
    {
        if (name[len1] != '\0')
        {
            cout << name[len1];
            len1++;
        }
        else
            break;
    }
    cout << endl;
    delete[] name;
    delete hourly_pay_rate;
    delete working_hours;
    delete salary;
    cout << "-----------------------" << endl;
}
```
### header file
```
#pragma once
class Employee {
private:
    char* name;
    float* hourly_pay_rate;
    int* working_hours;
    float* salary;
public:
    Employee();
    Employee(char* name, float hourly_pay_rate, int working_hours);
    Employee(const Employee& other);
    void set_name(char* name);
    void set_hourly_pay_rate(float hourly_pay_rate);
    void set_working_hours(int working_hours);
    char* get_name() const;
    float get_hourly_pay_rate() const;
    int get_working_hours() const;
    float get_salary() const;
    void display() const;
    void add_sallary();
    void add_work();
   ~Employee();
};
```
