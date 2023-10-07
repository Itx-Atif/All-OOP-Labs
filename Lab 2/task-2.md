### Task 2:  
Write a class that contains a string, you have to enter a string using a member function input_alphabets(); and then use a convert  function Convert_To_Uppercase that converts all of its letters to uppercase (Hint: Use a character array to store the sentence. You can also add checks for invalid characters). You have to perform this task in three different files.
Sample Input
	Object oriented programming is so cool!
Expected Output
	OBJECT ORIENTED PROGRAMMING IS SO COOL!

### main file
```
#include<iostream>
#include"Header.h"
#include<string>
using namespace std;
int main() {
	int x = 5;

	// Post-increment operator
	int postResult = x++; // The value of x is used in the expression, then it is incremented
	std::cout << "Post-increment result: " << postResult << std::endl; // Output: 5
	std::cout << "Updated value of x: " << x << std::endl; // Output: 6

	// Pre-increment operator
	int preResult = ++x; // The value of x is incremented first, then it is used in the expression
	std::cout << "Pre-increment result: " << preResult << std::endl; // Output: 7
	std::cout << "Updated value of x: " << x << std::endl; // Output: 7

	int h = 0;
	cout <<"h = "<< h << endl;

	int b = h;
	cout << "b = " << b << endl;

	int g = h++;
	cout << "g = h++ " << g << endl;
	cout << "h++ = " << h << endl;

	int j = 0;
	cout << "j = " << j << endl;

	int t = --j;
	cout << "t =--j " << t << endl;
	cout << "--j " << j << endl;
	int f = j--;
	cout << "f " << f<<endl;
	cout << "j " << j << endl;
	return 0;
}
/*int main()
{
	sentence word;
	char a[100];
	cout << "Enter string: ";
	
	cin.get(a, 20);
	
	word.input_alphabets(a);
	word.display();

	return 0;
}*/
```
### source file
```
#include<iostream>
#include"Header.h"
using namespace std;

void sentence::input_alphabets(char s[])
{
    int len = 0;
    for (int h = 0;h < 100;h++) {
        if (s[h]!='\0'|| s[h]==' ') {
            line[h] = s[h];
            len++;
        }
        else
            break;
   }
    length = len;
    convert_to_uppercase();
}
void sentence::convert_to_uppercase()
{
  for (int i = 0; i < length; i++) {
      if (line[i] >= 'a' && line[i] <= 'z')
      {
          line[i] = line[i] - 32;
      }
      else if (line[i] >= 'A' && line[i] <= 'Z')
      {
          line[i] = line[i];
      }
    }
}
void sentence::display()
{
    for (int j = 0;j < length;j++) {
        cout << line[j];
    }
}
```
### header file
```
#pragma once
class sentence {
private:
	char line[100];
	int length;
public:
	void input_alphabets(char[]);
	void convert_to_uppercase();
	void display();
};

```
