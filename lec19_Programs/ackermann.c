#include<stdio.h>

int ackermann(int m, int n);

main(void)
{
          int m, n, z;
          scanf("%d %d", &m, &n);
          
          z = ackermann(m, n);
          printf("%d", z);
          getch();
}

int ackermann(int m, int n)
{
    if(m == 0)
         return n;
    else if(m > 0 && n == 0)
         return ackermann(m-1, 1);
    else
        return ackermann(m-1, ackermann(m, n-1));
}
