### Task 5

### main file
```
#include<iostream>
#include"Header.h"
#include <cstdarg>
using namespace std;
int main()
{
   MyNamespace::array a(4, 6, 8);
    cout << a[0] << endl;
    cout << a[1] << endl;
    return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace MyNamespace ;
array::array(int size, ...)
{
    this->size = size;
    elements = new int[size];

    va_list args;
    va_start(args, size);

    for (int i = 0; i < size; ++i) {
        elements[i] = va_arg(args, int);
    }

    va_end(args);
}

array::~array()
{
    delete[] elements;
}

int& array::operator[](int index) const
{
    if (index >= 0 && index < size) {
        return elements[index];
    }
    else {
        throw std::out_of_range("Invalid index for array.");
    }
}
```
### header file
```
#pragma once
#include <iostream>
#include <cstdarg>
/*class array1 {
private:

public:

};*/
namespace MyNamespace {
    class array {
    private:
        int* elements;
        int size;

    public:
        array(int size, ...);
       /* {
            this->size = size;
            elements = new int[size];

            va_list args;
            va_start(args, size);

            for (int i = 0; i < size; ++i) {
                elements[i] = va_arg(args, int);
            }

            va_end(args);
        }*/
        ~array();
        /* {
            delete[] elements;
        }*/

        int& operator[](int index) const;
        /* {
            if (index >= 0 && index < size) {
                return elements[index];
            }
            else {
                throw std::out_of_range("Invalid index for array.");
            }
        }*/
    };
}
```
