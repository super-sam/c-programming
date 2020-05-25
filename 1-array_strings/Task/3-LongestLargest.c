#include<stdio.h>
#include<string.h>

#define MAXSIZE 20

main(void)
{
    char word[MAXSIZE], largest[MAXSIZE] = "\0", longest[MAXSIZE] = "\0";
    int len, maxlen = 0;
    while( scanf("%s", word) == 1)
    {
      len = strlen(word);
      if(len > maxlen)
      {
	maxlen = len;
	strcpy(longest, word);
      }
      if(strcmp(largest, word) < 0)
	strcpy(largest, word);
    }

    printf("LARGEST WORD : %s LONGEST WORD : %s OF LENGTH : %d \n", largest, longest, strlen(longest));
}
