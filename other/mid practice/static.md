### static keyword practice

### main file
```
#include"Header.h"
#include<iostream>
using namespace std;
int employee::static_var = 0;
int main()
{
	employee emp11, emp22,emp4;
	emp11.set_smpl_var(123);
	emp22.set_static_var(987);
	employee emp33 = emp11;
	employee emp44(emp22);
	emp4 = emp33;
	cout << "EMP 11:";
	emp11.display2();
	cout << "EMP 22:";
	emp22.display2();
	cout << "EMP 4:";
	emp4.display2();
	cout << "EMP 33:";
	emp33.display2();
	cout << "EMP 44:";
	emp44.display2();
	//employee emp1, emp2;
	//emp1.set_smpl_var(100);
	//emp2.set_static_var(1);
	//emp1.set_static_var(20);
	//cout<<emp1.get_smpl_var()<<endl;
	//cout << emp1.get_static_var() << endl;
	//emp1.set_static_var(10);
	//cout << emp1.get_static_var() << endl;
	//cout << emp2.get_static_var() << endl;
	return 0;
}
```
### source file
```

```
### header file
```
#pragma once
#include<iostream>
using namespace std;
class employee {
private:
	int smpl_var;
	static int static_var;
public:
	employee() {
		smpl_var = 0;
		static_var = 0;
	}
	employee(int s,int v) {
		smpl_var = s;
		static_var = v;
	}
	employee(const employee& e) {
		smpl_var = e.smpl_var;
		static_var = e.static_var;
	}
	employee operator=(const employee& e) {
		this->smpl_var = e.smpl_var;
		this->static_var = e.static_var;
		return *this;
	}
	void set_static_var(int);
	void set_smpl_var(int);
	int get_smpl_var();
	static int get_static_var();
	static void display();
	void display2();
};
void employee::display2() {
	cout << "smpl_var: " << smpl_var << endl;
	cout << "static: " << static_var << endl;
}
void employee::display()
{
	cout << "static: " << static_var<<endl;
}
void employee::set_static_var(int s)
{
	static_var = s;
}
void employee::set_smpl_var(int s)
{
	smpl_var = s;
}
int employee::get_smpl_var()
{
	return smpl_var;
}
int employee::get_static_var()
{
	return static_var;
}
```
