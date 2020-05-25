/*
An array memory blocks can be referred in two ways :
	1: Indexing
	2: Arithmetic Reference



*/

#include<stdio.h>

int main()
{
	int array[5] = {0,1,2,3,4};
	int *ptr_array, counter_i;

	ptr_array = array;

	for(counter_i = 0; counter_i < 5; counter_i++)
	{
		printf("array[%d] = %d  *(ptr_array + %d) =  %d \n", counter_i, array[counter_i], counter_i, *(ptr_array + counter_i));
	}
	
	return 0;
}