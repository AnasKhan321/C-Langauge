/*
Author : Anas khan
Date : 21-09-2022
Topic :Storage Classes In C Auto, Extern, Static & Register Storage

Auto class = by default or local varible
External class = global varible and a miss touch of Extern who importe the file varible
extern keyword global ko local mai use karne ke kaam aata hai
Static class =  wo apni value yaad rakhthta hai
register class = wo processor se request karta hai for some space around the processor and
he will processing the fast

*/
// #include <stdio.h>
// #include "p.c"
// // extern int sum ;
// int sum = 890;
// // int sum = 908;
// // #include <stdlib.h>
// // #include <string.h>
//
// // int sum = 90;
//
// int myfunc(int a, int b ){
//   // int sum;
//   // sum = a+b;
//   int sum;
//   return sum;
// }
//
// int main(int argc, char const *argv[]) {
//   // Declarration - telling compiler about the varible
//   // Definiton = Declaration + space reservation
//   // int sum = myfunc(3,4);
//   // myfunc(3,5);
//   int sum = myfunc(3,5);
//   printf("The sum is %d\n",sum );
//
//
//   return 0;
// }





#include <stdio.h>

int func1(){
  static int myvar1 = 8;

  printf("the number is %d\n",myvar1 );
  myvar1--;
  return myvar1;
}


int main(int argc, char const *argv[]) {
  register int d = func1();
  d= func1();
  d = func1();
  return 0;
}
