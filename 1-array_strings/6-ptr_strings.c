/*
string is a char array
array_name is a pointer
pointing to the 1st memory block

so string can be reffered from a char pointer
pointer string can be accessed by
	indexing
	pointer arithmetic

*/

#include<stdio.h>

int main(void)
{
	char str1[] = "hello world";
	char *str2;

	str2 = str1;
	
	int i;

	printf(" str1[] = %s *str2 = %s\n", str1, str2);

	puts("printing string char by char like puts");
	
	for(i = 0; *(str2 + i) != '\0'; i++)
	{
		printf("%c", str1[i]);
	}
	puts("");
	
	return 0;
}