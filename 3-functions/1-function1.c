/*
What are functions?
functions are independent block of statements to do some specific task
There are 5 data types
1: int
2: float
3: double
4: char
5: void (means null or no value)


There are 4 version of a function
1: no_return_type func_name(no_argument)
2: no_return_type func_name(arguments)
3: return_type func_name(no_arguments)
4: return_type func_name(arguments)

return_type and arguments can be any one of the five basic data type or can be pointer (*) of any 1 of 
5 basic data type

*/

#include<stdio.h>

void func1(void);
void func2(int);
int func3(void);
int func4(int);

int main(void)
{
	int a, b;
	
	b = 5;
	
	func1();

	func2(b);
	
	printf("%d\n",b = func3());

	printf("%d\n", a = func4(b));

	return 0;
}
void func1(void)
{
	puts("no return type no parameter");
} 

void func2(int x)
{
	printf("no return type parameter = %d\n", x);
}

int func3(void)
{
	puts("return type no parameter");

	return (6+2*2);
}

int func4(int x)
{
	puts("return type parameter");
	
	return x*x;
}