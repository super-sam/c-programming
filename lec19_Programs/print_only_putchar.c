#include<stdio.h>

void print_int(int n);

main(void)
{
          int n;
          scanf("%d", &n);
          
          print_int(n);
          getch();
}

void print_int(int n)
{
     if(n < 0)
     {
          putchar('-');
          n = -n;
     }
     if(n < 10) /*base case */
     {
          putchar('0' + n);
     }
     else
     {
         print_int(n/10);
         putchar((n % 10) + '0');
     }
}
