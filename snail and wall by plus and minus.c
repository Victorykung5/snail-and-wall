#include <stdio.h>
int main()
{ //h=hight of wall, a = snail climb per day ,b= snail fall per day
  int h, a, b;
  printf("Hight =");
  scanf("%d", &h);
  printf("how   = ");
  scanf("%d", &a);
  printf("B = ");
  scanf("%d", &b);
  int d;
  ;
  for (int e = 0; e <= h;)
  {
    d == 0;
    d++;
    e = e + a;
    if (e >= h)
    {
      printf("%d", d);
      break;
    }
    else
    {
      e = e - b;
      continue;
    }
  }
  return 0;
}