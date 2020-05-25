/*pointer argument pointer return type */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *Upper_Case(char *);

int main()
{
	char var1[80], *var2;

	gets(var1);
	
	var2 = Upper_Case(var1);

	puts(var1);
	puts(var2);
	
	return 0;
}

char *Upper_Case(char *var1)
{
	char *var2;
	int i;

	var2 = (char *)malloc((strlen(var1) + 1) * sizeof(char));

	for(i = 0; var1[i] != '\0'; i++)
		var2[i] = toupper(var1[i]);
	
	return var2;
}