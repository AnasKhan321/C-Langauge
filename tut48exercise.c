/*
Author : Anas khan
Date : 20-09-2022
Topic : Exercise
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
//   int a = 0;
//   while (a<3) {
//   a++;
//   int d;
//   printf("Enter the lenght of your employe %d id \n",a);
//   scanf("%d",&d );
//   char* employe;
//   employe = (char*) malloc(d*sizeof(char));
//
//   printf("Enter your id \n");
//   gets(employe);
//   puts(employe);
//   // free(employe);
// }
  int d;
  printf("Enter the lenght of your employe 1 id \n");
  scanf("%d",&d );
  char* employe;
  employe = (char*) malloc(d*sizeof(char));
  printf("Enter the  id \n");
  scanf("%s",employe);
  printf("%s\n",employe);

  printf("Enter the lenght of your employe 2 id \n" );
  scanf("%d",&d );
  employe =  (char*) realloc(employe,d*sizeof(char));
  printf("Enter the  id \n");
  scanf("%s",employe );
  printf("%s\n",employe );

  printf("Enter the lenght of your employe 3 id \n" );
  scanf("%d",&d );
  employe =  (char*) realloc(employe,d*sizeof(char));
  printf("Enter the  id \n");
  gets(&employe);
  puts(employe);
  free(employe);
  //

  return 0;
}
