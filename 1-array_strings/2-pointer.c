/*
What is a variable?
Variable are the name to some memory addresss location which contain some data.

What are pointers?
Pointers are also name to some memory addreess location which contain some data's memory address

As there are 5 types of datatype so to point those 5 datatype we need 5 pointers
1: int *
2: float *
3: double *
4: char *
5: void *

*/

#include<stdio.h>

int main(void)
{
	int x, *y, *z;
	x = 5;

	y = &x;
	z = &x;

	*y = 10;
	printf("%d %d %d\n", x, *y, *z);

	*z = 20;
	printf("%d %d %d", x, *y, *z);

	return 0;
}