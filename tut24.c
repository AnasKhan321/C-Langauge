/*
Author : Anas khan
DATE  : 12-09-22
Purpose : Learning C
TOPIC  : Pointer
*/

// Pointer is thing which store the address of the variable

// & varible ka address bata hai like we take input and he store the
//  value at varible of the address
// print karte waqt star lagane se value print karta hai

#include <stdio.h>

int main(int argc, char const *argv[]) {
  // printf("Lets learn about pointer \n");
  // int a=90;
  // int* ptra = &a;
  // printf(" the address  of pointer to a is  %p\n",&ptra);
  // printf("The address of a is %x\n",&ptra );
  // printf(" the valu of a is %p\n",*ptra);
  // printf("the address of a is %p\n",&a );
  int a;
  int* pt= &a;
  int* ptr2 = NULL;
  printf("The is %x\n",pt );
  printf("The address of pt is %p\n",&pt );
  printf("The address of a is %x\n",&a );
  printf("The adress of some garbagi is %p\n",ptr2 );
  printf("this si new \n" );
  return 0;
}
