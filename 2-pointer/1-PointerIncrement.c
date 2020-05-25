/*
Pointer increment or decrement depends upon the type of pointer
+1 for char pointer increases 1 byte 
+1 for int pointer increases 4 byte 
+1 increases to 1 more memory block

*/

#include<stdio.h>

int main()
{
	char *ptr = "hello world";

	int i;

	for(i = 0; *ptr!= '\0'; ptr++)
	{
		puts(ptr);
	}
	
	return 0;
}