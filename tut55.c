/*
Author : Anas khan
Date : 23-09-2022
Topic :

*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int a =5634;
  int *ptr; // This is a wild pointer
  // *ptr = 34; // This is not a good thing
  ptr = &a ; // ptr is no longer a wild pointer
  printf("The value of a is %d \n",*ptr  );
  return 0;
}
