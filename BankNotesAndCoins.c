//URI problem 1021
#include <stdio.h>


int main(){


  double n;
  int j,k,l;

  printf("");
  scanf("%lf", &n);

  l = n*100;

  j = l/10000;
  printf("NOTAS:\n%d nota(s) de R$ 100.00\n",j);


  k = l%10000;
  j = k/5000;
  printf("%d nota(s) de R$ 50.00\n",j);

  k = k%5000;
  j = k/2000;
  printf("%d nota(s) de R$ 20.00\n", j);

  k = k%2000;
  j = k/1000;
  printf("%d nota(s) de R$ 10.00\n", j);

  k = k%1000;
  j = k/500;
  printf("%d nota(s) de R$ 5.00\n",j);

  k =k%500;
  j = k/200;
  printf("%d nota(s) de R$ 2.00\n", j);

  k = k%200;
  j = k/100;
  printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", j);

  k = k%100;
  j = k/50;
  printf("%d moeda(s) de R$ 0.50\n", j);

  k = k%50;
  j = k/25;
  printf("%d moeda(s) de R$ 0.25\n", j);

  k = k%25;
  j = k/10;
  printf("%d moeda(s) de R$ 0.10\n", j);


  k = k%10;
  j = k/5;
  printf("%d moeda(s) de R$ 0.05\n", j);


  k = k%5;
  j = k/1;
  printf("%d moeda(s) de R$ 0.01\n", j);


  return 0;
}
