//Program to see the property of execution of && and || operator
//TO KNOW ABOUT THE && AND || PROPERTY REFER NOTES OF THE SAME LECTURE
#include<stdio.h>

main(void)
{
          int x = 1, y = 0, z = 1;
          
          //second expression is not evaluated
          if(y && ++x);
          printf("%d\n", x);
          if(z || ++x);
          printf("%d\n", x);
          
          //second expression is evaluated
          if(z && ++x);
          printf("%d\n", x);
          if(y || ++x);
          printf("%d\n", x);
          
          getch();
}
