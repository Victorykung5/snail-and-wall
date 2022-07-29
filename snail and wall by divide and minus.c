#include <stdio.h>
int main()
{ //h=hight of wall, a = snail climb per day ,b= snail fall per day
  int h, a, b;
  printf("Hight =");
  scanf("%d", &h);
  printf("How tall can snail climb per day ?= ");
  scanf("%d", &a);
  printf("How tall snail fall per dat? = ");
  scanf("%d", &b);
  int d;
  int e=h-a;
  int f=a-b;
  d=((h-a)/(a-b));
   if(e%f==0)
    printf("%d",d+1);
   else
    printf("%d",d+2);
  return 0;
}