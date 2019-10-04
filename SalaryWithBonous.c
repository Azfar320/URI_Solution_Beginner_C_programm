//URI problem 1009

#include <stdio.h>

int main(){

   char str[100];
   double fixed_salary, sales_amount, received_percentage_on_sale, total_salary;


   printf("");
   gets(str);


   printf("");
   scanf("%lf",&fixed_salary);

   printf("");
   scanf("%lf",&sales_amount);


   received_percentage_on_sale = (sales_amount*15)/100;

   total_salary = fixed_salary +  received_percentage_on_sale;


   printf("TOTAL = R$ %0.2lf\n", total_salary);






   return 0;


}
