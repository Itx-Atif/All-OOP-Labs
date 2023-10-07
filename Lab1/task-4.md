/*Task 4:Write a non-returning function strCopy which takes only two char* as parameters,
	one is destination and other is source.
	Your task is to copy all the data of the source into destination. 
Hint: You can use strLength function of task 2 to calculate the length of the source.
Prototype of the function should be: 
void strCopy(char* &dest, const char* src); 
 */
```
#include<iostream>
#include<cstdlib>
using namespace std;
int strLength(const char*);
void strCopy(char*&, const char*);
int main()
{
	int len1 ;
	char arr[] = "i am Atif";
	cout << "source: " << arr << endl;
	const char* src = arr;
	len1 = strLength(src);
	//cout << "len "<<len1 << endl;
	
	char* dest;
	dest = new char[len1];
	strCopy(dest, src);
	cout << "destination : " << endl;
	for (int i = 0;i < len1;i++) {
		cout << *(dest+i);
	}
	
	//for (int i = 0;i < len1;i++) {
		delete[] dest;
	//}*/
	return 0;
}
int strLength(const char* src)
{
	/*int len = 0;
	int i = 0;
	while (1) {
		if (*(src + i) != '\0' && *(src + i) != ' ')
		{
			len++;
			//cout << src[i] << endl;
			//cout << len << " : len" << endl;
			i++;
		}
		else if (*(src + i) == ' ')
		{
			i++;
		}
		else {
			return len;
		}
		
	}*/
	
	int len = 0;
	int i = 0;
	while (1) {
		if (*(src + i) != '\0')
		{
			len++;
			i++;
		}
		else
			return len;
			//exit(1);
	}
}
void strCopy(char*& dest, const char* src)
{
	int len;
	len = strLength(src);
	for (int i = 0;i < len;i++)
	{
		//cout << src[i];
		*(dest+i) = *(src+i);
	}
}
```
