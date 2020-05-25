#include<stdio.h>

struct point
{
       int x, y;
};
struct line
{
       struct point p1, p2;
};

main()
{
      struct line l;
      l.p1.x = 2;
      l.p1.y = 3;
      
      l.p2.x = 5;
      l.p2.y = 8;
      
      getch();
}
