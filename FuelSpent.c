// URI problem 1017
#include <stdio.h>

int main(){

  int trip_hour, average_trip_car_speed;

  double overall_trip_distance,required_oil_for_trip;


  printf("");
  scanf("%d", &trip_hour);

  printf("");
  scanf("%d", & average_trip_car_speed);


  overall_trip_distance = trip_hour * average_trip_car_speed;

  required_oil_for_trip = overall_trip_distance/12;


  printf("%0.3lf\n", required_oil_for_trip);


  return 0;
}
