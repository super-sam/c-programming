// condition or expression inside if is executed first the condition is checked

#include<stdio.h>

int x = 0, y = 1;

main(void)
{
  if(x++)
    y--;
  printf("x = %d y = %d\n", x , y);
  x = 0;
  if(++x)
    y--;
  printf("x = %d y = %d", x , y);
}