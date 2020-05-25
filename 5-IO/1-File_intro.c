/*
What is stream?
c works with varity of devices including terminals, disk drives etc
each device is diff
buffered file system transform each into logical device called stream

Text Stream?
sequence of char

Binary stream?
sequence of byte

FILE?
It can be imagined as a structure
struct FILE
{
	char name_of_file[];
	current pos of file;
	status of file;
	and so on
}

to access a stream of
	we need a Obj reference of FILE type
	i.e. Pointer
	FILE *ptr_name;
*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char ch;
	FILE *ptr_in, *ptr_out;

	if(argc != 3)
	{
		printf("USAGE : <%s> <input_file> <output_file> ", argv[0]);
		exit(-1);
	}

	if((ptr_in = fopen(argv[1], "r")) == NULL)
	{
	    puts("unable to open file");
	    exit(1);
	}
	ptr_out = fopen(argv[2], "w");

	while(!feof(ptr_in))
	{
		ch = getc(ptr_in);
		putchar(ch);
		putc(ch, ptr_out);
	}

	return 0;
}


