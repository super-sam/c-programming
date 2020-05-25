/*
no * i.e. value of operator used in structure so no indexin or arithmetic

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct contact
{
	char name[20];
	int roll;
	unsigned int number;
};

int main()
{
	int i;
	struct contact *cnts;

	cnts = (struct contact*)malloc(2*sizeof(struct contact));

	cnts->roll = 345;
	cnts->number = 410400;

	strcpy(cnts->name,"supratim");

	cnts++;

	cnts->roll = 445;
	cnts->number = 616200;

	strcpy(cnts->name,"super");

	cnts--;

	for(i = 0; i < 2; i++, cnts++)
	{
		printf("name = %s  roll = %u  number = %u\n", cnts->name, cnts->roll, cnts->number);
	}

	return 0;
}
