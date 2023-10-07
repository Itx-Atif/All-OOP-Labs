### Task 5:Write a non-returning function searhAndDelete which receives an integer
###	array of unique elements and an element to search and delete from the array.

 ```
#include<iostream>
using namespace std;
//void searchAndDelete(int*, int);
void searchAndDelete(int [], int);
int main()
{
	const int len = 6;
	int arr[len] = { 1,2,3,4,5,'\0'};
	for(int o=0;o<5;o++)
	{
	cout << arr[o]<<" ";
	}
	int* ptr;
	ptr = arr;
	int ele;
	cout << "\nenter element to find: " << endl;
	cin >> ele;
	searchAndDelete(arr, ele);
	cout << "\nafter" << endl;
	for (int k = 0;k < len-1;k++)
	{
		cout << *(arr + k) << " ";
	}
	return 0;
}
//void searchAndDelete(int* arr, int ele)
void searchAndDelete(int arr1[], int ele)
{
	//int* arr1 = arr;
	/*int i = 0, len1 = 0;
	while (1) {
		if (*(arr + i) != '\0') {
			len1++;
			i++;
		}
		else
			break;
	}
	cout << "len " << len1 << "   i  " << i << endl;*/
	int len1 = *(&arr1 + 1) - arr1;  
	cout << "size " << len1 << endl;
	for (int j = 0;j < len1;j++)
	{
		if (*(arr1 + j) == ele)
		{
			for (int h = j;h < len1;h++)
			{
				//if(h<len-1)
				*(arr1 + h) = *(arr1 + h + 1);
			}
		}
	}
	for (int q = 0;q < len1-1;q++)
	{
		cout << *(arr1 + q);
	}
```
}
