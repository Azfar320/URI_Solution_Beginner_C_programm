//URI problem 1020

#include <stdio.h>

int main(){

  int N, Days, Months, Years;

  printf("");
  scanf("%d", &N); //Input Days


  Years = N/365;

  Months = (N%365)/30;

  Days = (N%365)%30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Years, Months, Days);

  return 0;

}
