/*
malloc() is used to create memory blocks;

(void *) malloc(size_t number_of_bytes);

int *p = malloc(100);
int *p = malloc(50 * sizeof(int));

int var; this means a memory block of 4byte is created and named var for our convention;
int *var this means a referece to a block of 4 byte type is created but memory is not allocated;



*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *num, *arr_num;
	
	char *ch;
	if((num = (int *)malloc(sizeof(int))) == NULL)
	{
		printf("Unable to allocate");
		exit(-1);
	}
	
	*num = 5;
	
	printf("%d\n", *num);

	ch = (char *)malloc(1);

	*ch ='a';	
	printf("%c\n", *ch);

	arr_num = (int *)malloc(5 * sizeof(int));
	
	*arr_num = 1;
	arr_num[1] = 2;
	arr_num[3] = 3;
	
return 0;
}
