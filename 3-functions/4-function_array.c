/*
transfering array elements to funtion can be done in two ways.
by value is used when we dont need any refelction;
*/

//write a funnction which ll take array and a number and write multiplicaion table in it

#include<stdio.h>

void mul(int arr[], int num);
//void mul(int *, int);

int main()
{
	int x = 5;
	
	int arr[10];

	mul(arr, x);
	
	for(x = 0; x < 10; x++)
		printf("%d\n", arr[x]);

	return 0;
}

void mul(int arr[], int num)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		arr[i] = num* (i + 1);
	}
}