#include<stdio.h>

#define VALUE 1
int x, n;
const int y = 2;
main(void)
{
    scanf("%d", &n);
    
    switch(n)
    {
      default:
	      printf("DEFAULT");
      
      case 0:
	      printf("0\n");
	      break;
      case VALUE :
		  printf("1\n");
		  break;
      case -1:
	      printf("-1\n");
	      break;
      }

    
}