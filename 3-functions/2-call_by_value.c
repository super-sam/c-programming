/*
there are 2 types of argumment
1: Formal = image of argument
2: Acutal = original

calling a function with formal argument is knownn as call by value
problem: change is not reflectefd;

*/

#include<stdio.h>

int mul(int, int); //square 2 argument and return sum of square

int main()
{
	int a, b, c;
	a = 2;
	b = 3;

	printf("c = %d\n", mul(a, b));
	printf("c = %d\n", mul(a, b));

	return 0;
}
int mul(int a, int b)
{
    a = a*a;
    b = b*b;
    printf("a^2 = %d b^2 = %d\n", a, b);

    return a+b;
}
