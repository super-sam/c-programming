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

	cnts[0].roll = 345;
	cnts[0].number = 410400;

	strcpy(cnts[0].name,"supratim");

	cnts[1].roll = 445;
	cnts[1].number = 616200;

	strcpy(cnts[1].name,"super");

	for(i = 0; i < 2; i++, cnts++)
	{
		printf("name = %s  roll = %u  number = %u\n", cnts->name, cnts->roll, cnts->number);
	}

    printf("name = %s  roll = %u  number = %u\n", cnts[0].name, cnts[0].roll, cnts[0].number);

	return 0;
}
