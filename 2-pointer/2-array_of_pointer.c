/*
array of pointer = 2D array
		    j	
array_name[i][j]  i[][][]
	     	   [][][]
             	   [][][]
		    j
*array_name[j]	 ->[][][]
		   [][][]
		   [][][]
*/

#include<stdio.h>

int main(void)
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int *ptr_arr[3];
	int i, j;	
	ptr_arr = arr;

	for(i = 0; i < 3; i++)
	{
		for(j = 0 ;j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 12; i++)
	{
		printf("%d ", *(*(ptr_arr)));
	}

	return 0;
}
	