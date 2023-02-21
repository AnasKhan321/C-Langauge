/*
Author : Anas khan
Date : 22-09-2022
Topic : Exercise Rock paper scissor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generaterandomnumber(int a){
  srand(time(NULL));
  return rand() %a+1;
}


int main(int argc, char const *argv[]) {
  int computerscore = 0;
  int score = 0;

  int a = 0;
  char name[34];
  int d ;
  d = generaterandomnumber(3);
  // srand(time(NULL) ); // seed
  printf("Welcome to Your rock  paper scissor game\nPlease enter your name ");
  scanf("%s",&name);
  printf("Ok rules are following\npress 1 for rock\n2 for scissor\n3 for paper  \n");
  while (a<3) {
    a++;
    printf("%d\n", );
    printf("\n%s's Turn \n",name );
    int input ;
    scanf("%d",&input );
    d = generaterandomnumber(3);
    if (input==1 & d==2 || input==3 & d==1 || input==2 & d==3) {
      printf("%s choose number %d\n",name,input );
      printf("\nComputer choose %d\n",d );
      printf("\n%s won the game\n",name );
      score++;
    }
    else if (d==1 & input==2 || d==3 & input==1 || d==2 & input==3) {
      printf("\n%s choose number %d\n",name,input );
      printf("\nComputer choose %d\n",d );
      printf("\nCompute won the game \n");
      computerscore++;
    }
    else if(d==input){
      printf("\n%s choose number %d\n",name,input );
      printf("\nComputer choose %d\n",d );
      printf("\nit's Tie \n" );
      computerscore ++;
      score++;
    }



  }
  if (computerscore>score) {
    printf("\n******* Computer won the game. His points are %d ******* \n",computerscore );

  }
  else if (score>computerscore) {
    printf("\n******* %s won the game.  His points are %d ********\n",name,score);
  }
  else if (score == computerscore) {
    printf("\n****It is a tie****** \n");
  }

  return 0;
}
