/*
Author : Anas khan
Date : 18-09-2022
Topic : static varaible
key learning : static apni value yaad rakhtha hai static fuction accept nahi karta
hai
*/
#include <stdio.h>
int b = 34; // This is a global variable it is declared inside main

int ret(){
  return 34;
}

static int myvar = 93;

int func1(int b1){
  static int myvar = 90;
  printf("The value of myvar is %d\n",myvar );
  myvar --;
  // printf("The value of myvar is %d\n",myvar );
  // int loc = 89;
  // printf("The valu of inside func1 is %d\n",b );
  // printf("The addres of b inside func1 is %d\n",&b );
  return b1 + myvar;}

void func2(){
  printf("%d\n",myvar);
}




int main(int argc, char const *argv[]) {

  int b = 343;// local variable

  int val = func1(b);
  val = func1(b);
  val = func1(b);
  val = func1(b);
  val = func1(b);
  func2();
  // int *ptr = &val;

  printf("The value of func1 is %d",val );
  func2();

  return 0;
}
