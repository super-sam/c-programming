#include<stdio.h>

int search(int a[], int n, int e);

main(void)
{
          int e;
          int a[] = {1, 3, 5, 10, 15, 26 ,37 ,48, 59};
          scanf("%d", &e);
          e = search(a, 9, e);
          if(e != -1)
               printf("%d", e);
          else
              printf("%d", e);
          getch();
}

int search(int a[], int n, int e)
{
    int low, high, mid;
    low = 0;
    high = n -1;
    while(low <= high)
    {
              mid = (low + high)/2;
              if(e == a[mid])
                   return mid;
              else if(e > a[high])
                   return high+1;
              else if(e < a[mid])
                   high = mid - 1;
              else
                  low = mid + 1;
    }
    return mid
    ;
}
