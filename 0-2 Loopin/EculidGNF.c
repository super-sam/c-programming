#include<stdio.h>

main(void)
{
  int num1, num2;
  
  do
  {
    printf("ENTER TWO NUMBER'S :  ");
    scanf("%d %d", &num1, &num2);
  }while(num1 < 0 || num2 < 0);

  while(num1 != num2)
  {
    if(num1 > num2)
	num1 -= num2;
    else
	num2 -= num1;
  }
      printf("the GNF is = %d\n", num1);
}