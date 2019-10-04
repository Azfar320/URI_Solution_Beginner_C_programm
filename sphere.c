//URI problem 1011

#include <stdio.h>


int main(){


  double radius, area, pi = 3.14159;


  printf("");
  scanf("%lf", &radius);


  area = (4.0/3)*pi*pow(radius,3);

  printf("VOLUME = %0.3lf\n", area);




  return 0;
}
