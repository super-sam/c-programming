/*
Write a function which has two paramenter and after function is executed will swap their values


*/
#include<stdio.h>

void swap_value(int, int);
void swap_ref(int *, int *);

int main()
{
	int a= 5, b = 10;
	
	printf("before swapping a = %d b = %d \n", a, b);

	//swap_value(a, b);
	//swap_ref(&a, &b);
	
	printf("before swapping a = %d b = %d \n", a, b);

	return 0;
}

void swap_value(int a, int b)
{
	int temp;
	temp = a;
	a = b; 
	b = temp;
}

void swap_ref(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b; 
	*b = temp;
}