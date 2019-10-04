// URI Problem 1008

#include <stdio.h>


int main(){

    int emp_number, emp_hours;
    double amnt_per_hour, salary;



    printf("");
    scanf("%d", &emp_number);

    printf("");
    scanf("%d",&emp_hours);

    printf("");
    scanf("%lf",&amnt_per_hour);


    salary = emp_hours * amnt_per_hour;

    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n",emp_number,salary);


    return 0;




}
