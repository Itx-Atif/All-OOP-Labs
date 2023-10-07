# Task 1: 
 
# Write a non-returning function Swap which takes two integers as parameters by reference to swaps those integers.  

#include<iostream>
using namespace std;
void Swap(int&, int&);
int main()
{
	/*Write a non-returning function Swap which takes two integers as parameters by reference to swaps those integers.  */
	int a = 9, b = 8;
	cout << " before swapping: " << endl;;
	cout << "a = " << a << " b = " << b << endl;
	Swap(a, b);
	cout << "after swapping: " << endl;
	cout << "a = " << a << " b = " << b << endl;
	return 0;
}
void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
