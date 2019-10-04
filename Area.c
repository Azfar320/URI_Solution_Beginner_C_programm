//URI problem 1012
#include <stdio.h>

int main(){

   double A,B,C, triangleArea, circleArea, trapeziumArea, squareArea, rectangleArea, pi= 3.14159;


   printf("");
   scanf("%lf %lf %lf",&A,&B,&C);

   triangleArea = 0.5*(A*C);
   circleArea = pi*(C*C);
   trapeziumArea = 0.5*(A+B)*C;
   squareArea = B*B;
   rectangleArea = A*B;


   printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",triangleArea,circleArea,trapeziumArea,squareArea,rectangleArea);





   return 0;

}
