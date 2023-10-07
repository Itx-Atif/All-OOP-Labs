### Task 4: 
# Write a C++ program to create a complex number class. Write getter setter, constructor, destructor, and all overloaded operators needed to run the given driver code.
```
class complex 
{
private:
int real;
int imag;
public:
//All functions that are needed.
};
int main() 
{
complex c1(5,7);		// for complex numbers, such as 5+7i
complex c2(5); 		// for numbers without imaginary part as 5 + 0i
complex c3(); 
complex c4(); 
c3 = c1+c2; 
c4 = c1-c2; 
c5 = c3*c4; 
c6 = c4/c5; 
return 0;
 }
```

### main file
```
#include <iostream>
#include"task_4Header.h"
using namespace std;
int main()
{  
    Complex c1(5, 7);
    Complex c2(5);
    Complex c3;
    Complex c4;
    Complex c5;
    Complex c6;

    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c3 * c4;
    c6 = c4 / c5;

    cout << "c3 = " << c3.get_real_num() << " + " << c3.get_imaginary_num() << "i" << endl;
    cout << "c4 = " << c4.get_real_num() << " + " << c4.get_imaginary_num() << "i" << endl;
    cout << "c5 = " << c5.get_real_num() << " + " << c5.get_imaginary_num() << "i" << endl;
    cout << "c6 = " << c6.get_real_num() << " + " << c6.get_imaginary_num() << "i" << endl;

    return 0;
}
```
### source file
```
#include <iostream>
#include"task_4Header.h"
using namespace std;
Complex::Complex()
{
    real = 0;
    imaginary = 0;
}
Complex::Complex(int real, int imag )
{
    this->real = real;
    this->imaginary = imag;
}
Complex::Complex(const Complex& acc)
{
    real = acc.real;
    imaginary = acc.imaginary;
}
void Complex::set_real_num(int real)
{
    this->real = real;
}
void Complex::set_imaginary_num(int imag)
{
     this->imaginary = imag;
}
int Complex::get_real_num() const
{
    return real;
}
int Complex::get_imaginary_num() const
{
    return imaginary;
}
Complex Complex::operator+(const Complex& acc) const
{
     Complex equation;
     equation.real = real + acc.real;
     equation.imaginary = imaginary + acc.imaginary;
     return equation;
}
Complex Complex::operator-(const Complex& acc) const
{
     Complex equation;
     equation.real = real - acc.real;
     equation.imaginary = imaginary - acc.imaginary;
     return equation;
}
Complex Complex::operator*(const Complex& acc) const {
    Complex equation;
    equation.real = (real * acc.real) - (imaginary * acc.imaginary);
    equation.imaginary = (real * acc.imaginary) + (imaginary * acc.real);
    return equation;
}
Complex Complex::operator/(const Complex& acc) const {
    Complex equation;
    int denominator = (acc.real * acc.real) + (acc.imaginary * acc.imaginary);
    equation.real = ((real * acc.real) + (imaginary * acc.imaginary)) / denominator;
    equation.imaginary = ((imaginary * acc.real) - (real * acc.imaginary)) / denominator;
    return equation;
}
Complex::~Complex()
{
    cout << " ";//doing nothimg bcz no dynamicalyy given memmory
   // cout << "Destroying complex number " << real << " + " << imaginary << "i" << endl;
}
```
### header file
```
#pragma once
class Complex {
private:
    int real;
    int imaginary;
public:
  Complex();
  Complex(int,int imag = 0);
  Complex(const Complex&);
  void set_real_num(int);
  void set_imaginary_num(int);
  int get_real_num() const;
  int get_imaginary_num() const;
  Complex operator+(const Complex&) const;
  Complex operator-(const Complex&) const;
  Complex operator*(const Complex&) const;
  Complex operator/(const Complex&) const;
  ~Complex();
};
```
