#include<stdio.h>

main(void)
{
  float avg;
  int count, i, sum;
  int array[10];

  sum = 0;

  for(i = 0; i< 10; i++)
  {
      printf("enter mark of student %d :", i+1);
      scanf("%d", &array[i]);
      sum += array[i];
  }
  avg = sum/10.0;
  count = 0;
  for(i = 0; i < 10; i++)
  {
    if(array[i] < avg)
      count++;
  }
  printf("avg = %f Student below Average = %d \n", avg, count);
}
