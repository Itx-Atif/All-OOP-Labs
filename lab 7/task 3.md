### task 3

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	demo d(5);
	for (int i = 0; i < 5; i++) {
		cout << d[i] << " ";
	}

	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
demo::demo() { index = 0; }
demo::demo(int a) { index = a; }
int demo::operator[](int index){
	return index+1;
}
```
### header file
```
#pragma once
class demo {
private:
	int index;

public:
	demo();
	demo(int);
	int operator[](int);
};
```
