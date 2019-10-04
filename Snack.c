//URI Problem 1038
#include <stdio.h>


int main(){

 int X,Y;
 float price1,price2,price3,price4,price5;

 printf("");
 scanf("%d %d", &X, &Y);


  price1 = 4.00*Y;
  price2 = 4.50*Y;
  price3 = 5.00*Y;
  price4 = 2.00*Y;
  price5 = 1.50*Y;

 if(X==1){

    printf("Total: R$ %0.2f\n", price1);
 }
 else if(X==2){
    price2 = 4.50*Y;
    printf("Total: R$ %0.2f\n", price2);
 }
 else if(X==3){
    price3 = 5.00*Y;
    printf("Total: R$ %0.2f\n", price3);
 }
 else if(X==4){
    price4 = 2.00*Y;
    printf("Total: R$ %0.2f\n", price4);
 }
 else if(X==5){
    price5 = 1.50*Y;
    printf("Total: R$ %0.2f\n", price5);
 }


  return 0;
}
