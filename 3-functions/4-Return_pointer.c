#include<stdio.h>

int *mul(int );
int *mul_2(int );

int main()
{
	int *arr;
	int x = 5;

	arr = mul(x);

	for(x= 0; x < 10; x++)
		printf("%d\n",arr[x]);
	return 0;
} 

int *mul(int x)
{
	int arr[10];
	int i;
	
	for(i = 0; i < 10; i++)
		arr[i] = x * (i + 1);

	return arr;
}

int *mul_2(int x)
{
	int *arr;
	arr = (int *)malloc(10*sizeof(int));
	int i;
	
	for(i = 0; i < 10; i++)
		arr[i] = x * (i + 1);

	return arr;	