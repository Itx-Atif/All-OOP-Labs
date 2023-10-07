### 

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	char arr[5] = { 'O', 'O', 'P','\0' };
	char arr2[5] = { 'L', 'a', 'b', '\0' };

	String obj1, obj2;

	obj1.set_name(arr);
	obj2.set_name(arr2);

	String obj3 = obj1 + obj2;
	char* j=obj3.get_name();
	cout << "name: " << j << endl;
	//cout << "name: " << obj3.get_name() << endl;
	system("pause");
	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
String::String()
{
	name = nullptr;
}
String::String(char* n)
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
}
String::String(const String& a)
{
	int len = 0;
	while (true)
	{
		if (a.name[len] != '\0')
		{
			len++;
		}
		else
			break;
	}
	name = new char[len + 1];
	for (int i = 0; i < len; i++) {
		name[i] = a.name[i];
	}
	name[len] = '\0';
}
void String::set_name(char* n)
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
}
char* String::get_name()
{
	if (name != nullptr) {
		int len = 0;
		while (true)
		{
			if (name[len] != '\0')
			{
				len++;
			}
			else
				break;
		}
		char* nm = new char[len + 1];
		for (int i = 0; i < len; i++) {
			nm[i] = name[i];
		}
		return nm;
	}
	else {
		cout << " ";
		return nullptr;
	}
}
/*String String::operator+(const String& other)
{
	String res;
	int len = 0;
	while (true)
	{
		if (other.name[len] != '\0')
		{
			len++;
		}
		else
			break;
	}
	int len2 = 0;
	while (true)
	{
		if (name[len2] != '\0')
		{
			len2++;
		}
		else
			break;
	}
	res.name = new char[len + len2 + 2];
	cout << "len: " << len << " len2: " << len2 << endl;
	for (int i = 0; i < len; i++)
	{
		res.name[i] = name[i];
	}
	res.name[len] = ' ';
	int h = 0;
	for (int j = len+1; j < len + len2 + 1; j++)
	{
		res.name[j] = other.name[h];
		h++;
	}
	res.name[len + len2 + 1] = '\0';
	return res;
}*/
/*String String::operator+(const String& other)
{
	String res;
	int len = 0;
	while (true)
	{
		if (other.name[len] != '\0')
		{
			len++;
		}
		else
			break;
	}
	int len2 = 0;
	while (true)
	{
		if (name[len2] != '\0')
		{
			len2++;
		}
		else
			break;
	}
	res.name = new char[len + len2 + 2];
	std::cout << "len: " << len << " len2: " << len2 << std::endl;
	for (int i = 0; i < len; i++)
	{
		res.name[i] = name[i];
	}
	res.name[len] = ' ';
	int h = 0;
	for (int j = len + 1; j < len + len2 + 1; j++)
	{
		res.name[j] = other.name[h];
		h++;
	}
	res.name[len + len2 + 1] = '\0';
	return res;
}*/

/*String String::operator+(const String& e)
{
	String b;
	int len = 0;
	while (true)
	{
		if (e.name[len] == '\0')
		{
			break;
		}
		else
			len++;
	}
	int len1 = 0;
	while (true)
	{
		if (name[len1] == '\0')
		{
			break;
		}
		else
			len1++;
	}
	char* new_name = new char[len + len1 + 2];
	/*for (int i = 0; i < len + len1; i++) {
		if (i < len) {
			new_name[i] = name[i];
		}
		else if(i>len&&i<len1){
		new_name[len + len1] = ' ';
		}
		else if (i > len) {
			new_name[i] = e.name[i];
		}

	}

	new_name[len + len1] = '\0';*/
	/*int i;
	for (i = 0; i < len; i++)
	{
		//cout << "**************";
		new_name[i] = name[i];
		//cout << new_name[i];
	}
	new_name[i] = ' ';
	i++;
	int j = 0;
	while (e.name[j] != '\0')
	{
		new_name[i] = e.name[j];
		i++;
		j++;
	}

	new_name[i] = '\0';
	b.name = new char[len + len1 + 2];

	for (int l = 0; l < len + len1 + 1; l++) {
		cout << endl;;
		b.name[l] = new_name[l];
		cout << b.name[l];
	}
	b.name[len + len1 + 1] = '\0';
	cout << " not fully completed" << endl; //code running to this line only
	return b;
	cout << " fully completed" << endl;
	cout << endl << endl;
}*/
String String::operator+(const String& e)
{
	String b;
	
	int len = 0;
	while (true)
	{
		if (e.name[len] == '\0')
		{
			break;
		}
		else
			len++;
	}
	int len1 = 0;
	while (true)
	{
		if (name[len1] == '\0')
		{
			break;
		}
		else
			len1++;
	}
	char* new_name = new char[len + len1 + 2];
	
	int i;
	for (i = 0; i < len; i++)
	{
		cout << "**************" << endl;
		new_name[i] = name[i];
		cout << new_name[i];
	}
	cout <<endl<< "i:" << i << endl;
	new_name[i] = ' ';
	i++;
	int j = 0;
	while (e.name[j] != '\0')
	{
		//cout << "**************" << endl;
		new_name[i] = e.name[j];
		//cout << new_name[i];
		i++;
		j++;
	}
	//cout << endl << "i:" << i <<" j:"<<j << endl;
	new_name[i] = '\0';
	b.name = new char[len + len1 + 2];

	for (int l = 0; l < len + len1 + 1; l++) {
		cout << endl;;
		b.name[l] = new_name[l];
		cout << b.name[l];
	}
	b.name[len + len1 + 1] = '\0';
	cout << "completed" << endl;
	return b;
	delete[] new_name;
	cout << "completed" << endl;
	cout << endl << endl;
}
String::~String()
{
	delete[] name;
}
```
### header file
```
#pragma once
class String {
private:
	char* name;
public:
	String();
	String(char*);
	String(const String&);
	void set_name(char*);
	char* get_name();
	String operator+(const String&);
	~String();
};
```
