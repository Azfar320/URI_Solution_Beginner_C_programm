//URI Problem 1043

#include <stdio.h>

int main(){


  float A, B, C, TrianglePerimeter, TrapheziumArea;

  scanf("%f %f %f",&A, &B, &C);


  if((B+C>A) && (A+B)>C && (A+C)>B){
    TrianglePerimeter = A+B+C;
    printf("Perimetro = %0.1f\n",TrianglePerimeter);
  }
  else{
    TrapheziumArea = ((A+B)/2)*C;
    printf("Area = %0.1f\n",TrapheziumArea);
  }


  return 0;
}
