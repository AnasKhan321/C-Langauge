/*
Author : Anas khan
Date : 5-10-2022
Topic : Memory leak

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a, i = 0;

  int *i2;
  while (i<4555) {
    printf("welcome to anas khan\n" );
    i2 = malloc(34444*sizeof(int));
    if (i%100==0) {
      getchar();
    }
    free(i2);

    i++;
  }


  return 0;
}
