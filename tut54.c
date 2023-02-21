/*
Author : Anas khan
Date : 23-09-2022
Topic : dangling  pointer

Key learning : dangling pointer is that pointer which address are  free
*/
#include <stdio.h>
#include <stdlib.h>

int*  functionDangling(){
  int a ,b ,sum;
  a = 34;
  b = 364;
  sum a+b;
  reuturn &sum;
  // concept of stack last in first out theory
}


int main(int argc, char const *argv[]) {
// case 1: De allocation of a memory block
  int *ptr =(int *) malloc(7*sizeof(int));
  ptr[0] = 4;
  ptr[1] = 134;
  ptr[2] = 74;
  ptr[3] = 34;
  free(ptr); // ptr is now a dangling pointer

// Case 2 ; function returning local variable address
  int *dangptr = functionDangling();// dangptr is now a dangling pointer



  // Case 3 : if a variable goes out of scope
  int *danglingptr3;{
    int a=45;
    danglingptr3 = &a;

  } // become a dangling ptr
  // Here varialbe a goes out of scope which means danglingptr3 is pointing a location which is freed and hence
  return 0;
}
