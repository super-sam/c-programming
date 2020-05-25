#include<stdio.h>

main(void)
{
  int grade, marks;
  scanf("%d", &marks);

  switch(marks/10)
  {
    case 10:
    case 9 :
    case 8:
	    printf("GRADE A");
	    break;
    case 7:
    case 6:
	    printf("GRADE B");
	    break;
    case 5:
	    printf("GRADE C");
	    break;
    case 4:
	   printf("GRADE D");
	    break;
    default:
	    printf("FAIL");
  }
    

}