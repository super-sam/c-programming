#include<stdio.h>

int search(int a[], int n, int e);

main(void)
{
          int e;
          int a[] = {1, 2, 3, 4, 5, 6 ,7 ,8, 9};
          scanf("%d", &e);
          e = search(a, 9, e);
          printf("%d", e);
          getch();
}

int search(int a[], int n, int e)
{
    int i;
    for(i = 0; i < n; i++)
    {
          if(a[i] == e)
                  return i;
    }
    return -1;
}
