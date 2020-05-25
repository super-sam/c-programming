#include<stdio.h>

main(void)
{
  int n;
  do
  {
    printf("ENTER A NUMBER: ");
    scanf("%d", &n)
  }while(n<0)
}