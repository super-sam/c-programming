/*what is a structure?

It is a logical skeleton
doesnt have physical existance
until object is created;

its a user defined data type

it is used to bind different/same type of value together;

*/

#include<stdio.h>
#include<stdlib.h>

struct point
{
	int x, y;

};

int main()
{
	size_t size1;
	struct point p1;

	printf("%u ", sizeof(p1));

	p1.x = 5;
	p1.y = 10;
	return 0;
}
