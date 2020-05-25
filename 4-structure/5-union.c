/*
Union are same as structure but member varialble sharing memory
*/

#include<stdio.h>


union example
{
	int x;
	char c;
};

struct example_
{
	int x;
	char c;
};

int main(void)
{
	union example eg;
	struct example_ eg_;

	size_t size1, size2;

	size1 = sizeof(eg);

	size2 = sizeof(eg_);

	printf("%u \n", size1);
	printf("%u \n", size2);

	return 0;
}
