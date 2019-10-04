//URI problem 1013

#include <stdio.h>

int main(){


  int a,b,c,d, major;


  printf("");
  scanf("%d %d %d", &a, &b, &c);

  d = (a+b+abs(a-b))/2;
  major = (d+c+abs(d-c))/2;


  printf("%d eh o maior\n", major);

  return 0;
}
