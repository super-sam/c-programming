#include<stdio.h>

#define MAXSIZE 3

main(void)
{
  int i,j,n, temp, array[MAXSIZE][MAXSIZE];

  do
  {
    printf("ENTER THE SIZE OF MATRIX : ");
    scanf("%d", &n);
  }while(n<1 || n > MAXSIZE);

  for(i = 0; i < n; i++)
  {
      for(j = 0; j < n; j++)
      {
	  scanf("%d", &array[i][j]);
      }
  }

  for(i = 0; i < n;  i++)
  {
    for(j = i+1; j < n; j++)
    {
      temp = array[i][j];
      array[i][j] = array[j][i];
      array[j][i] = temp;
    }
  }
  for(i = 0; i < n; i++)
  {
      for(j = 0; j < n; j++)
      {
	  printf("%d  ", array[i][j]);
      }
      putchar('\n');
  }
}
