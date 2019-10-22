//URI problem 1046
#include <stdio.h>

int main(){

  int startTime, endTime, difference;


  scanf("%d %d", &startTime, &endTime);


  if(startTime > endTime){
    endTime = endTime+24;
    difference = endTime - startTime;
    printf("O JOGO DUROU %d HORA(S)\n",difference);
   }
  else if(startTime < endTime){
    difference = endTime - startTime;
    printf("O JOGO DUROU %d HORA(S)\n",difference);
  }
  else
    printf("O JOGO DUROU 24 HORA(S)\n");

  return 0;


}
