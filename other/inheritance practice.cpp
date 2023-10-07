### practice inheritance

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{    /* //parent class
	a obj1;
	cout<<obj1.c;
	obj1.get(1,2,3);
	obj1.r();
	  
	  //child class (first drived class)
	b obj2,obj33;
	cout << obj2.f;
	obj2.get1(11, 22, 33);
	obj2.s();

	cout<< obj33.c;
	obj33.get(33, 44, 55);
	obj33.r();
	cout << "*************************"<<endl;
	cc obj3;
	cout<<obj3.c;
	cout << obj3.f;
	obj3.get(14, 22, 3);
	obj3.r();
	obj3.get1(15, 2, 33);	
	obj3.s();
	obj3.get3(10, 2, 3);
	obj3.t();*/
	cout << "*************************" << endl;
	
	/*e obj4;
	obj4.ff;
	obj4.show();
	obj4.get(1, 2, 3);
	obj4.s();
	obj4.set_class_a(77, 8, 0);
	obj4.show();
	cout << "*************************" << endl;
	f obj5;
	obj5.get(20,30,40);
	obj5.t();
	obj5.set_class_aa(1, 34, 45);
	obj5.set_class_b(21, 24, 35);
	obj5.get_it();*/

	cout << "*************************" << endl;


	return 0;
}
```

### header file
```
#pragma once
#include<iostream>
using namespace std;
class a {
private:
	int aa;
protected:
	int bb;
public:
	int c;
	a() { aa = 0; bb = 0; c = 0; }
	virtual void get(int x, int y, int z) { aa = x; bb = y; c = z; }
	void set_a(int s) { aa = s; }
	void set_b(int y) { bb = y; }
	void set_c(int s) { c = s; }
	int get_a() { return aa; }
	int get_b() { return bb; }
	int get_c() { return c; }
	void r() { cout << endl << "*****aa= " << aa << "\tbb= "<<bb << "\tc= " << c << endl; }
};
class b:public a {
private:
	int d;
protected:
	int e;
public:
	int f;
	b() { d = 0; e = 0; f = 0; }
	void set_d(int s) { d = s; }
	void set_e(int y) { e = y; }
	void set_f(int s) { f = s; }
	int get_d() { return d; }
	int get_e() { return e; }
	int get_f() { return f; }
	virtual void get1(int x, int y, int z) { d = x; e = y; f = z; }
	// virtual void get(int x, int y, int z) {a=x; b=y; c = z; }//get(x, y, z);}//not working
	virtual void get(int x, int y, int z) { set_a(x); set_b(y); c = z; }
	// void get2(int x, int y, int z) { set_a(x); set_b(y); c = z; }
	void s() { cout << endl << "////d= " << d << "\te= "<<e << "\tf= " << f << endl; }
};
class cc:public b {
private:
	int g;
protected:
	int h;
public:
	int i;
	cc() { g = 0; h = 0; i = 0; }
	void set_g(int s) { g = s; }
	void set_h(int y) { h = y; }
	void set_i(int s) { i = s; }
	void get3(int x, int y, int z) { g = x; h = y; i = z; }
	 void get1(int x, int y, int z) { set_d(x); set_e(y); f = z; }
	void t() { cout << endl << "-----g= " << g << "\th= "<<h << "\ti= " << i << endl; }
};
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
class e :protected a {
private:
	int dd;
protected:
	int ee;
public:
	int ff;
	e() { dd = 0; ee = 0; ff = 0; }
	void get(int x, int y, int z) { dd = x; ee = y; ff = z; }
	void set_class_a(int s, int d, int f) {
		set_a(s); bb = d; c = f; 
	}//set_b(d);set_f() }
	void show() { cout << get_a()<<" =a " << bb << " =b " << c << " = c " << endl; };
	void s() { cout << endl << "dd= " << dd << "\tee= " << ee << "\tff= " << ff << endl; }
};
class f :protected b {
private:
	int gg;
protected:
	int hh;
public:
	int ii;
	f() { gg = 0; hh = 90; ii = 0; }
	void set_class_aa(int aa,int d,int s){
		set_a(aa); set_b(d); set_c(s);
	}
	void set_class_b(int j, int u,int o) {
		set_d(j); set_e(u); set_f(o);
	}
	void get_it() {
		cout << "a = " << get_a() << " b= " << get_b() << " c= " << c << endl;
		cout << "d = " << get_d() << " e= " << get_e() << " f= " << get_f() << endl;
	}
	void get(int x, int y, int z) { gg = x; hh = y; ii = z; }
	void t() { cout << endl << "gg= " << gg << "\thh= " << hh << "\tii= " << ii << endl; }
};
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
class g :private a {
private:
	int ddd;
protected:
	int eee;
public:
	int fff;
	void get(int x, int y, int z) { ddd = x; eee = y; fff = z; }
	void s() { cout << endl << "ddd= " << ddd << "\teee= " << eee << "\tfff= " << fff << endl; }
};
class h :private b {
private:
	int ggg;
protected:
	int hhh;
public:
	int iii;
	void get(int x, int y, int z) { ggg = x; hhh = y; iii = z; }
	void t() { cout << endl << "ggg= " << ggg << "\thhh= " << hhh << "\tiii= " << iii << endl; }
};
///////////////////////////////////////////////////////////////////////////////////////////
class df {
private:
	int j;
protected:
	int k;
public:
	int l;
	void get(int x, int y, int z) { j = x; k = y; l = z; }
	void u() { cout << endl << "j= " << j << "\tk= " << k << "\tl= " << l << endl; }
};
class dd  {
private:
	int j;
protected:
	int k;
public:
	int l;
	void get(int x, int y, int z) { j = x; k = y; l = z; }
	void u() { cout << endl << "j= " << j << "\tk= " << k << "\tl= " << l << endl; }
};

class d :protected df, public dd {
private:
	int j;
protected:
	int k;
public:
	int l;
	void get(int x, int y, int z) { j = x; k = y; l = z; }
	void u() { cout << endl << "j= " << j << "\tk= " << k << "\tl= " << l << endl; }
};
```
