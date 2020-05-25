#include<stdio.h>

main(void)
{
  int mark;
  printf("ENTER MARK : ");
  scanf("%d", &mark);
  if(mark < 0 && mark >100)
    printf("INVAID INPUT");
  else if(mark < 40)
    printf("FAIL\n");
  else if(mark < 50)
    printf("GRADE D");
  else if(mark < 60)
    printf("GRADE C\n");
  else if(mark < 70)
    printf("GRADE B\n");
  else
    printf("GRADE A \n");

}