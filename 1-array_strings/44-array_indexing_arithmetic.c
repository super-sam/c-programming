/*
An array memory blocks can be referred in two ways :
	1: Indexing
	2: Arithmetic Reference



*/

#include<stdio.h>

int main()
{
	int x[5] = {0,1,2,3,4};
	int *y, i;

	y = x;

	for(i = 0; i < 5; i=i+1, y=y+1)
	{
		printf("i = %d  y =  %p \n", i, y);
	}
	
	return 0;
}
