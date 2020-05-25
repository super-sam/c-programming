/*
Array are collection of memory block
	to store similar type of data

What does Array name mean?
int array_name[10]

It means that 10 continious memory block have been allocated
	of int type i.e. each block is of 4 byte(windows) 2byte(linux)
	[0][1][2][3][4][5][6][7][8][9]
	array_name points to or reffer to the first memory block i.e.[0]

	array_name == &array_name[0];
*/

#include<stdio.h>

int main()
{
    double array_name[10] = {0, 1, 2, 3, 4};
    double i= 1000;
    array_name[5] = 23;
    printf("&array_name[0] = %p  array_name = %p", &array_name[1], array_name);
    printf("\n%d\n", sizeof(array_name[5]));
    printf("\n%d\n", sizeof(array_name));

    return 0;
}
