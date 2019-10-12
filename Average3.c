//URI Problem 1040

#include <stdio.h>


int main(){

  float N1, N2, N3, N4, ExamScore;
  double SumOfScores, Media, MediaFinal;


  scanf("%f %f %f %f", &N1,&N2,&N3,&N4);

  Media = ((N1*2)+(N2*3)+(N3*4)+N4)/10;


  printf("Media: %0.1lf\n",Media);

  if(Media>=7.0){
    printf("Aluno aprovado.\n");
  }

  else if(Media<5.0){
    printf("Aluno reprovado.\n");
  }
  else if(Media<=6.9 || Media>=5.0){
    printf("Aluno em exame.\n");
    scanf("%f",&ExamScore);
    SumOfScores = (Media+ExamScore)/2;
    printf("Nota do exame: %0.1f\n",ExamScore);

    if(SumOfScores>=5.0){
       printf("Aluno aprovado.\n");
    }
    else if(SumOfScores<=4.9){
       printf("Aluno reprovado.\n");
    }
       printf("Media final: %0.1lf\n",SumOfScores);
  }

  return 0;
}
