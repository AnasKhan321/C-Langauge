/*
Author : Anas khan
Date : 16-09-22
Topic : Reverse list
*/

#include <stdio.h>

int reversein(int* arr[]){
  int devide,conte;
  conte = arr[1];
  devide = arr[0];
  arr[0] = arr[4];
  arr[1] = arr[3];
  arr[3] = conte;
  arr[4] = devide;
  return 0;
}

int main(int argc, char const *argv[]) {
  int arrd[]= {4,3,54,90,12};
  printf("%s\n","The list is this");
  printf("%d\t",arrd[0]);
  printf("%d\t",arrd[1]);
  printf("%d\t",arrd[2]);
  printf("%d\t",arrd[3]);
  printf("%d\n",arrd[4]);
  // printf("%d\n",arrd[0]);

  reversein(&arrd);
  printf("%s\n","The reverse list is this " );
  printf("%d\t",arrd[0]);
  printf("%d\t",arrd[1]);
  printf("%d\t",arrd[2]);
  printf("%d\t",arrd[3]);
  printf("%d\n",arrd[4]);
  return 0;
}
