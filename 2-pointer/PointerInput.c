#include<stdio.h>

#include<malloc.h>


main(void)

{

  int *ptr;

  ptr = (int *)malloc(sizeof(int));

  printf("ENTER A NUMBER");

  scanf("%d", ptr);

  printf("\n NUmber entered = %d \n", ptr);

}
