### task 3

### main file
```
#include<iostream>
#include"BsketBallPlayer.h"
#include"employee.h"
#include"person.h"
using namespace std;
int employee::employeeCount = 0;
int basket_ball_player::baseballPlayerCount = 0;
int main()
{
    char name[2][6] = {"john","henry"};
    basket_ball_player baseballPlayer(name[0], 25, 0.325, 50);

    employee employee(name[1], 30, 5000.0, 12345);

    int employeeCount = employee::get_employee_count();
    int baseballPlayerCount = basket_ball_player::get_baseball_player_count();

    cout << "Total Employees: " << employeeCount << endl;
    cout << "Total Baseball Players: " << baseballPlayerCount << endl;

	system("pause");
	return 0;
}
```
### source file
### person.h(source file)
```
#pragma once
#include"person.h"
person::person()
{
	name = nullptr ;
	age =0 ;

}
person::person(char* n, int a)
{
    int len = 0;
    while (true)
    {
        if (n[len] != '\0')
        {
            len++;
        }
        else
            break;
    }
    name = new char[len + 1];
    for (int i = 0; i < len; i++) {
        name[i] = n[i];
    }
    name[len] = '\0';
	age = a;
}
```
### basketbaleplayer.cpp(source file)
```
#pragma once
#include"person.h"
#include"BsketBallPlayer.h"
basket_ball_player::basket_ball_player( char* name, int age, double batting_average, int total_runs)
    : person(name, age){
    this->batting_average=batting_average;
    this->total_runs=total_runs;
    baseballPlayerCount++;
}
 int basket_ball_player::get_baseball_player_count() {
    return baseballPlayerCount;
}
```
### employee.cpp(source file)
```
#pragma once
#include"employee.h"
#include"person.h"
employee::employee( char* name, int age, double salary, int employeeId) :
    person(name, age){
    this->salary = salary;
    this->employeeId = employeeId;
    employeeCount++;
}
int employee::get_employee_count() {
    return employeeCount;
}
```
### header file
### person.h(header file)
```
#pragma once
class person {
private:
	char* name;
	int age;
public:
	person();
	person(char*,int);
};
```
### basketbaleplayer.h(header file)
```
#pragma once
#include"person.h"
class basket_ball_player: public person {
private:
	double batting_average;
	int total_runs;
	static int baseballPlayerCount;
public:
	basket_ball_player(char*,int,double,int);
	static int get_baseball_player_count();
};
```
### employee.h(header file)
```
#pragma once
#include"person.h"
class employee :public person {
private:
    double salary;
    int employeeId;
    static int employeeCount;
public:
    employee(char*, int, double, int);
    static int get_employee_count();
};
```
