
/*
What is a string?

A sentence containing more than one letter is a string
i.e. collection of characters [char take 1byte of memeory]
i.e. collection of consequtive memory block each of 1 byte

"hello world"
[h][e][l][l][o][ ][w][o][r][l][d][\0]

*/

int main()
{
	char str1[11] = "hello world";
	char str2[] = "hello world";
	char str3[12] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};

	puts(str1);
	puts(str2);
	puts(str3);
	
	gets(str2);
	puts(str2);	
	return 0;
}
 