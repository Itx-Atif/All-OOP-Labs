### task 7

### main file
```
#include<iostream> 
#include"Header.h" 
using namespace std;
int main()
{
	dist d1(11, 10), d2(5, 11);

	cout << "first distance  ";

	d1.display();

	cout << "second distance: ";

	d2.display();

	d1 += d2;

	cout << "first distance after addition: ";

	d1.display();

	return 0;

}

```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
dist::dist()

{

	d1 = 0;

	d2 = 0;

}

dist::dist(int e, int  f)

{

	d1 = e;

	d2 = f;

}

dist dist::operator+=(const dist& a)

{

	d1 += a.d1;

	d2 += a.d2;

	return *this;

}

void dist::display()const {

	cout << "feet: " << d1 << "\t inches : " << d2 << endl;

}
```
### header file
```
#pragma once

#include<iostream> 
using namespace std;
class dist {

private:

	int d1;

	int d2;

public:

	dist();

	dist(int, int);

	dist operator+=(const dist&);

	void display()const;

};
```
