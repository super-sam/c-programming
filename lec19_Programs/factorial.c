#include<stdio.h>

int factorial(int n);

main(void)
{
          int n, fact;
          scanf("%d", &n);
          
          fact = factorial(n);
          
          printf("\n%d\n", fact);
          
          getch();
}

int factorial(int n)
{
    if(n == 0)
         return 1;
    else
        return n*factorial(n - 1);
}
          
