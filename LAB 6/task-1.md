### Task 1: 
Define a class Car having attributes    
•	name (char *)   
•	model (char* )   
•	noOfDoor (int*)
   
   
Now do the following operations on the above-mentioned class:   
1.	Write default constructor, parameterized constructor, and copy constructor.
2.	Write separate setter functions for each attribute to set value (with no memory leakage).  
3.	Write separate getter functions for each attribute to get value.
4.	Write a destructor (with an output statement to check the lifetime scope of the object). 
5.	Write a display() function to display attributes of class Car on screen.   
  
   
Now write the main function to declare different objects of class Car. Then call the display function against every object to see the information stored.   


### main file
```
#include<iostream>
#include"task_1Header.h"
using namespace std;
int main()
{
    Car car1("Toyota", "Corolla", 4);
    car1.display();
    cout << "-----------------------" << endl;
    Car car2;
    car2.setName("Honda");
    car2.setModel("Civic");
    car2.setnum_of_door(2);
    car2.display();
    cout << "-----------------------" << endl;
    cout << "Object 3 Called after copy constructor:" << endl;
    Car car1(car2);
    car3.display();
    cout << "-----------------------" << endl;
    return 0;
}
```
### source file
```
#include<iostream>
#include"task_1Header.h"
using namespace std;
Car::Car()
{
    name = nullptr;
    model = nullptr;
    num_of_door = nullptr;
}
Car::Car(const char* name, const char* model, int num_of_door)
{
    int len1=0;
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

    int len2 = 0;
    while (true)
    {
        if (model[len2] != '\0')
        {
            len2++;
        }
        else
            break;
    }
    this->model = new char[len2 + 1];
    for (int i = 0; i < len2; i++)
    {
        this->model[i] = model[i];
    }
    this->model[len2] = '\0';

    this->num_of_door = new int(num_of_door);
}
Car::Car(const Car& c)
{
    int len1 = 0;
    while (true)
    {
        if (c.name[len1] != '\0')
        {
            len1++;
        }
        else
            break;
    }
    this->name = new char[len1 + 1];
    for (int i = 0; i < len1; i++)
    {
        this->name[i] = c.name[i];
    }
    this->name[len1] = '\0';

    int len2 = 0;
    while (true)
    {
        if (c.model[len2] != '\0')
        {
            len2++;
        }
        else
            break;
    }
    this->model = new char[len2 + 1];
    for (int i = 0; i < len2; i++)
    {
        this->model[i] = c.model[i];
    }
    this->model[len2] = '\0';

    this->num_of_door = new int(*c.num_of_door);
}
void Car::setName(const char* name)
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
void Car::setModel(const char* model)
{
    int len2 = 0;
    while (true)
    {
        if (model[len2] != '\0')
        {
            len2++;
        }
        else
            break;
    }
    this->model = new char[len2 + 1];
    for (int i = 0; i < len2; i++)
    {
        this->model[i] = model[i];
    }
    this->model[len2] = '\0';
 }
void Car::setnum_of_door(int num_of_door)
{
    this->num_of_door = new int(num_of_door);
}
const char* Car::getName() const
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
const char* Car::getModel() const
{
    int len2 = 0;
    while (true)
    {
        if (model[len2] != '\0')
        {
            len2++;
        }
        else
            break;
    }
    return model;
}
int Car::get_num_of_door() const
{
    return *num_of_door;
}
void Car::display() const {
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
    cout << "Model: ";
    int len2 = 0;
    while (true)
    {
        if (model[len2] != '\0')
        {
            cout << model[len2];
            len2++;
        }
        else
            break;
    }
    cout << endl;
    cout << "Number of doors: " << *num_of_door <<  endl;
}
Car::~Car()
{
    cout << "Destructor is called.All object are destroyed :)" << endl;
    delete[] name;
    delete[] model;
    delete num_of_door;
}
```
### header file
```
#pragma once
class Car {
private:
    char* name;
    char* model;
    int* num_of_door;
public:
    Car();
    Car(const char* name, const char* model, int num_of_door);
    Car(const Car& other);
    void setName(const char*);
    void setModel(const char* );
    void setnum_of_door(int);
    const char* getName() const;
    const char* getModel() const;
    int get_num_of_door() const;
    void display() const;
    ~Car();
};
```
