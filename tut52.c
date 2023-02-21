/*
Author : Anas khan
Date : 22-09-2022
Topic : void pointer
key learning : void pointer can be typecasting in any format
*/
#include <stdio.h>
#include <stdlib.h>

int var = 90;

int main(int argc, char const *argv[]) {
  int a = 345;
  float b = 9.3;
  void *ptr;
  ptr = &b;
  printf("The value of a is %f \n",*( (float *) ptr) );
  ptr = &a;
  printf("The value of a is %d \n",*( (int *) ptr) );


  int d = 56;
  int *dr = NULL;


  void *ptd ;
  ptd= (int *) malloc(6*sizeof(int));
  ptd = 445432;
  printf("%d\n",ptd );
  return 0;
}
