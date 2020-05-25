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
	struct contact cnts[2], cnt1, cnt2;

	cnts[0].roll = 345;
	cnts[0].number = 410400;

	cnts[0].name = "supratim";
	//strcpy(cnts[0].name,"supratim");
	
	cnts[1].roll = 445;
	cnts[1].number = 616200;

	strcpy(cnts[1].name,"super");

	for(i = 0; i < 2; i++)
	{
		printf("name = %s  roll = %u  number = %u\n", cnts[i].name, cnts[i].roll, cnts[i].number);
	}

	return 0;
}
	