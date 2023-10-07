### version 1

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	char arr[20];
	char* sentence;

	sentence = arr;
	alphabets line;
	cout << "Enter a sentence: ";
	cin.get( arr,20);
	
	line.Input_alphabets(sentence);
    line.display_alphabets();

	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;
void alphabets::Input_alphabets(char* b)
{
	int len = 0; 
	while (true)
	{
		if (*(b + len) != '\0' || *(b + len) == ' ') {
			*(a + len) = *(b + len);
			cout << len;
			len++;
		}
		else
			break;
	}
	length = len;
}
void alphabets::Convert_to_upperCase()
{
	char* nw;
	nw = new char[length];
	for (int i = 0;i < length;i++)
	{
		*(nw+i) = *(a+i) - 32;
		*(a + i) = *(nw + i);
	}
	delete[] nw;
}
void alphabets::display_alphabets()
{
	for (int j = 0;j < length;j++)
	{
		cout << *(a+j);
	}
}
```
### header file
```
#pragma once
class alphabets {
private:
	char* a;
	int length;
public:
	void Input_alphabets(char*);
	void Convert_to_upperCase();
	void display_alphabets();

};

```
### version 2

### main file
```
#include <iostream>
#include "Header.h"
using namespace std;
int main() {
    StringClass str_obj;
    string str;
    getline(cin, str);
    str_obj.input_alphabets(str);
    str_obj.Convert_To_Uppercase();
    cout << str_obj.get_string() << endl;
    return 0;
}

```
### source file
```
#include<iostream>
#include "Header.h"
using namespace std;

StringClass::StringClass() {
    str = "";
}

StringClass::StringClass(const std::string& s) {
    str = s;
}

void StringClass::set_string(const string& s) {
    str = s;
}

string StringClass::get_string() const {
    return str;
}

void StringClass::Convert_To_Uppercase() {
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A'); 
        }
    }
}


/*#include <algorithm>
using namespace std;

void Str::input_alphabets(const string& str) {
    for (char c : str) {
        if (isalpha(c) || isspace(c)) {
            sentence.push_back(c);
        }
    }
}

void Str::Convert_To_Uppercase() {
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::toupper);
}

string Str::get_string() const {
    return sentence;
}*/
```
### header file
```
#pragma once
#include <string>
using namespace std;
class StringClass {
private:
    string sentence;
    string str;
public:
    StringClass();
    StringClass(const string&);
    void set_string(const string&);
    string get_string() const;
    void input_alphabets(const string& str);
    void Convert_To_Uppercase();
};


```
### version 3

### main file
```
#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	statement word;

	char* w;
	w = new char[100];
	cout << "Enter a string: ";
	cin >> w;
	word.set_str(w);
	word.get_str();
	delete[] w;
	return 0;
}
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;

void statement::set_str(char* a)
{
	int len = 0;
	while (true) {
		if (*(a + len) != '\n') {
			len++;
		}
		else
			break;
	}
	str = new char[len];
	char d;
	for (int i = 0;i < len;i++)
	{
		d = *(a + i);
		if (chk(d) == true) {
			*(str + i) = *(a + i);
		}
		else
			*(str + i) = *(a + i);
	}
	length = len;
	Convert_To_Uppercase(str, len);
}
bool statement::chk(char s)
{
	bool vhk=true;
	char F[26] = { 'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	for(int o = 0;o < 26;o++) {
		if (s==F[o])
		{
			return vhk;
		}
	}
	vhk = false;
	return vhk;
}
void statement::Convert_To_Uppercase(char* b,int l)
{
	char* e;
	e = new char[l];
	for (int i = 0;i < l;i++)
	{
		*(e + i) = *(b + i) - 32;
		*(str + i) = *(e + i);
	}

	delete[] e;

}
void statement::get_str()
{
	for (int i = 0;i < length;i++) {
		cout << str[i];
	}
}
```
### header file
```
#pragma once
class statement {
private:
	char* str;
	int length;
public:
	void set_str(char*);
	bool chk(char);
	void Convert_To_Uppercase(char*, int);
	void get_str();
};
```
