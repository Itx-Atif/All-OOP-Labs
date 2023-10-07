# Task 3: 
 
# Write a returning function strLength which takes only one char* as parameter and returns the length of the array. Its prototype should be: 

```
#include<iostream>
using namespace std;
int strLength(const char* src);
int main()
{
	/*Task 3:Write a returning function strLength which takes only one char* as parameter and returns the length of the array.
Its prototype should be: 
int strLength(const char* src); */
	int len = 0;
	char arr[] = "i am Atif";
	cout << arr;
	const char* ptr = arr;
	len = strLength(ptr);
	cout << "The length of char array is: " << len;
	
	return 0;
}
int strLength(const char* src)
{
	int len = 0;
	int i = 0;
	while (1) {
		if (*(src + i) != '\n') {
			len++;
			i++;
		}
		else
			exit(1);
	}
	return len;
}
```
