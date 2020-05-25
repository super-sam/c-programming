/*
What are arrays?
Arrays are nothin but collection of similar type of items in a contigoues memory location referred through
a common name.

Why use arrays?

Suppose we want to save daily expenditure for a year without array. then we have to create 365 variable
and maintaining them and updation will be vry difficlt.

There are basically 2 types of array:
1: single dimensional
2: mutli dimensional (2 or more dimension)

syntax: data_type array_var_name[no_of_elements];

*/

#include<stdio.h>

#define MAX 10

int main()
{
	int arr1[MAX];
	float arr2[MAX];
	double arr3[MAX];
	char arr4[MAX];

	int arr5[MAX] = {0,1,2,3,4};
	float arr6[MAX]= {0.0f, 1.0f};
	double arr7[MAX] = {0.0, 0.1};
	char arr8[MAX] = {'a', 'b', 'c'}; 	//"abc"

	arr1[0] = 0;
	arr2[1] = 1.0f;
}