/*
Author : Anas khan
Date : 25-09-2022
topic : #include #define preprocessero directive
.h = header files
*/


#include <stdio.h>
// #include "tut58.c"
#define PI 3.14
#define SQUARE(r) r*r  // macros


int a= 45;



int main(int argc, char const *argv[]) {
  int var = 10;
  int r = 4;
  printf("This is me %f\n",PI );
  printf("The are of this circle is %d\n",SQUARE(89));
  return 0;
}
