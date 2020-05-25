#include<stdio.h>

int gcd(int a, int b);

main(void)
{
          int a, b, d;
          scanf("%d %d", &a, &b);
          d = gcd(a, b);
          
          printf("%d", d);
          
          getch();
}

int gcd(int a, int b)
{
    if(a == b)
         return a;
    else if(a > b)
         return gcd(a-b, b);
    else
        return gcd(b-a, a);
}
          
