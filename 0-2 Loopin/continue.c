#include<stdio.h>

main(void)
{
  int fori, whilei;
  for(fori = 0; fori < 5; fori++)
  {
      if(fori < 2)
        continue;
      printf("fori = %d\n", fori);
  }

  whilei = 0;

  while(whilei < 5)
  {
      if(whilei < 2)
            continue;
      printf("whilei = %d\n", whilei);
      whilei++;
  }
  puts("program ends");
}
