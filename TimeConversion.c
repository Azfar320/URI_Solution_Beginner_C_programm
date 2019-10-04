//URI Problem 1019
#include <stdio.h>

int main(){

  int N, hour, minute, second;


  printf("");
  scanf("%d", &N); // N as second

  hour = N/3600;

  minute = (N%3600)/60;

  second = (N%3600)%60;

  printf("%d:%d:%d\n", hour, minute, second);


  return 0;


}
