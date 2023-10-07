### fraction practice in class

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	//fraction f1(1,9), f2(2, 3),f5;
	//f5 = f1 + f2;
	//f5.display();
	/*fraction f1, f2(2, 3), f5;// , f3, f4, f5, f6, f7;
	cout << "addition checking:" << endl; 
	int a = 1, b = 9;
	f1.set_num(a);
	f1.set_den(b);
	cout << "fraction 1<-1: ";
	f1.display();
	cout << "fraction 2<-2: ";
	f2.display();
	//f5 = f1.operator+(f2);
	//f5.display();
	f5 = f1 - f2;
	cout << "fraction 5<-3: ";
	f5.display();
	cout << "fraction 1<-1: ";
	f1.display();
	cout << "fraction 2<-2: ";
	f2.display();
	cout << endl << "mission accomplished" << endl;
	cout << "Rechecking: " << endl;
	fraction f4(1, 1),f6;
	f6 =f5 + f4;
	cout << "fraction 4<-4: ";
	f4.display();
	cout << "fraction 5<-5: ";
	f5.display();
	cout << "fraction 6<-5: ";
	f6.display();
	cout << "fraction 1<-5: ";
	f1.display();
	cout << "fraction 2<-5: ";
	f2.display();*/


	/*fraction f11(2, 3), f12(3, 4), f13(4, 5), f14, f15, f16;
	f14=f11++;
	f15=++f12;
	f16=-f13;

	cout << "pre fix fraction 11++: ";
	f11.display();
	cout << endl;
	f14.display();
	cout << "post fix fraction 12++() : ";
	f12.display();
	cout << endl;
	f15.display();
	cout << "inverse fraction 13: ";
	f13.display();
	cout << endl;
	f16.display();*/
	fraction f11(2, 3), f12(3, 4), f13(4, 5), f14, f15, f16;
	cout << "f11: "; f11.display();
	cout << "f12: "; f12.display();
	cout << "f13: "; f13.display();
	f14 = f11++;
	f15 = ++f12;
	f16 = --f13;
	/*In prefix increment, the variable is first incremented and
	then the new value is used in the expression. For example:
	int a = 1;
    int b = ++a;
	In this case, the value of b will be 2, because a is first
	incremented to 2 and then the new value of a is assigned to b.
	*/
	cout << "f11: ";
	f11.display();//it is changed prefix increment
	cout << "f15: ";
	f15.display();//it will display previous value prefix increment
	cout << "f12: ";
	f12.display();
	cout << "f16: ";
	f16.display();//it will display previous value prefix increment
	cout << "f13: ";
	f13.display();
	/*in post increment, the current value of the variable is first used in the
	expression and then the variable is incremented. For example:
    int a = 1;
    int b = a++;
    In this case, the value of b will be 1, because the current value of a
    (which is 1) is used in the expression and assigned to b.
    After that, a is incremented to 2.*/
	//cout << "f15: "; f15.display();
	//cout << "f13: "; f13.display();//inverse function will make negative number->(a positive number)
	//cout << "f16: "; f16.display();
	/*fraction f21(2, 30), f23(2, 3);
	if (f21 >= f23)
	{
		cout << "greater equal";
	}
	else
		cout << "not greater";
	cout << endl << "next operater < " << endl;
	fraction f20(1, 2), f22(2, 3);
	if (f20 <= f22)
	{
		cout << "smaller equal";
	}
	else
		cout << "not smaller";*/

	/*fraction f30(4, 5), f32(4, 5);
	if (f30 == f32)
	{
		cout << "Equal";
	}
	else
		cout << "not equal";*/
	return 0;
}
```
### source file
```
#include<iostream>
#include<cmath>
#include"Header.h"
using namespace std;
fraction::fraction()
{
	num = 0;
	den = 1;
}
fraction::fraction(int num, int den=1)
{
	this->num = num;
	this->den = den;
}
void fraction::display()const
{
	cout << "Num and Den " << num << " / " << den << endl;
}
void fraction::set_num(int num)
{
	this->num = num;
}
void fraction::set_den(int den)
{
	this->den = den;
}
int fraction::get_nem()const
{
	return num;
}
int fraction::get_den()const
{
	return den;
}
fraction::fraction(const fraction& obj)
{
	num = obj.num;
	den = obj.den;
}
/*fraction& fraction::operator+(const fraction& obj)
{
	fraction res=*this;
	res.num = (num* obj.den)+(obj.num*den);
	res.den = den * obj.den ;
	int save = 0,j=0;
	if (res.num < 0) {
		 j = 1;
	}
	else
		j = res.num;
	for (int i = 0; i < j && i < res.den; i++)
	{
		if (res.num % i == 0 && res.den % i == 0)
		{
			save = i;
		}
	}
	res.num = res.num / save;
	res.den = res.den / save;
	return res;
}*/
fraction fraction::operator+(const fraction& obj)  {
	fraction res;
	res.num = (this->num * obj.den) + (this->den * obj.num);
	res.den = this->den * obj.den;
	int save = 0;
	//cout << endl << "num den " << num << " " << den << " " << endl << save;
	//cout << endl << "obj 2 num den " << obj.num << " " << obj.den << " " << endl << save;
	//cout << endl << "res num den " << res.num << " " << res.den << " " << endl << save;
	for (int i = 1; i < res.num && i < res.den; i++)
	{
		if (res.num % i == 0 && res.den % i == 0)
		{
			save = i;
		}
	}
	res.num = res.num / save;
	res.den = res.den / save;
	return res;
}
fraction fraction::operator-(const fraction& obj)
{
	fraction res;
	res.num = (num * obj.den) - (obj.num * den);
	res.den = den * obj.den;
	int save = 0, j = 0;
	//cout<<res.num <<"  " << res.den << "yes";
	if (res.num < 0) {
		j = res.num*-1;
	}
	else
		j = res.num;
	for (int i = 1; i < j && i < res.den; i++)
	{
		if (res.num % i == 0 && res.den % i == 0)
		{
			save = i;
		}
	}
	res.num = res.num / save;
	res.den = res.den / save;
	return res;
}
fraction fraction::operator*(const fraction& obj)
{
	fraction res;
	res.num = num * obj.num;
	res.den = den* obj.den;
	return res;
}
fraction fraction::operator/(const fraction& obj)
{
	fraction res;
	res.num = num * obj.den;
	res.den = den * obj.num;
	return res;
}
fraction& fraction::operator++() {
	// Post-increment operator
	num = num + den;
	return *this;
}

fraction fraction::operator++(int) {
	// Pre-increment operator
	fraction res = *this;
	num = num + den;
	return res;
}
fraction& fraction::operator--() {
	// Pre-decrement operator
	num = num - den;
	return *this;
}

fraction fraction::operator--(int) {
	// Post-decrement operator
	fraction res = *this;
	num = num - den;
	return res;
}

/*fraction fraction::operator++()
{
	fraction res = *this;
	res.num = num + den;
	return res;
}
fraction fraction::operator++(int)
{
	fraction res = *this;
	num = num + den;
	return res;
}*/
fraction fraction::operator-()
{
	fraction res = *this;
	res.num = res.num * (-1);
	return res;
}
bool fraction::operator>(const fraction& obj)
{
	int num1 = num * obj.den; // cross-multiply
	int num2 = obj.num * den; // cross-multiply
	if (num1 > num2) {
		return true;
	}
	else
		return false;
}
bool fraction::operator<(const fraction& obj){
	double a = (double)num / den;
	double b = (double)obj.num / obj.den;
	if (a<b) {
		return true;
	}
	else
		return false;
}
bool fraction::operator>=(const fraction& obj)
{
	int num1 = num * obj.den; // cross-multiply
	int num2 = obj.num * den; // cross-multiply
	if (num1 >= num2) {
		return true;
	}
	else
		return false;
}
bool fraction::operator<=(const fraction& obj)
{
	double a = (double)num / den;
	double b = (double)obj.num / obj.den;
	if (a < b) {
		return true;
	}
	else
		return false;
}
bool fraction::operator==(const fraction& obj)
{
	return (num == obj.num) && (den == obj.den);
}
fraction::~fraction()
{
	static int i = 1;
	cout << i++ << " object destroyed" << endl;
	//cout << endl << i++<<" object destroyed" << endl;
}
```
### header file
```
#pragma once
class fraction {
private:
	int num;
	int den;
public:
	fraction();
	fraction(int, int);
	fraction(const fraction&);
	void set_num(int);
	void set_den(int);
	int get_nem() const;
	int get_den() const;
	void display()const;
	fraction operator+(const fraction&);
	fraction operator-(const fraction&);
	fraction operator*(const fraction&);
	fraction operator/(const fraction&);
	fraction& operator++();// Post-increment operator
	fraction operator++(int);// Pre-increment operator
	fraction& operator--();// Pre-decrement operator
	fraction operator--(int);// Post-decrement operator
	fraction operator-();
	bool operator>(const fraction&);
	bool operator<(const fraction&);
	bool operator>=(const fraction&);
	bool operator<=(const fraction&);
	bool operator==(const fraction&);
	~fraction();
};
```
