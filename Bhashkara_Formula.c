//URI Problem 1036
#include <stdio.h>
#include <math.h>

int main(){

 float A, B, C,D, E, F;

 printf("");
 scanf("%f %f %f", &A, &B, &C);

  D = (B*B)-(4*A*C);


  if(D<0)
    printf("Impossivel calcular\n");
  else if(A==0)
    printf("Impossivel calcular\n");
  else{
    E = (-B+sqrt(D))/(A+A);
    F = (-B-sqrt(D))/(A+A);
    printf("R1 = %0.5f\nR2 = %0.5f\n", E, F);
  }



 return 0;
}
