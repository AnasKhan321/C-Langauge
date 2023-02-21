/*
Author : Anas khan
Date : 14-09-22
TOPIC : Call by reference and value

*/
// #include <stdio.h>
// value by defalut hoti
// aur reference se uska address send
// karte hai aur wo uski value change kar sakte hai
// void swap(int *x , int *y){
//   int temp;
//   temp = *x;
//   *x = *y;
//   *y = temp;
//   return;
// }
// int main(int argc, char const *argv[]) {
//   int a = 34 ,b = 74;
//   printf("%d and %d \n",a,b );
//   swap(&a,&b);
//   printf("%d and %d\n",a,b  );
//   return 0;
// }
// #include <stdio.h>
//
// void changevalue(int* add){
//   // reference ki madad se change kar sakte hai
//   *add = 345; // changed
// }
//
// int return_double(int z){
//   return z+z;
// }
//
// int main(int argc, char const *argv[]) {
//   int a = 34 , b= 56;
//   printf("%d\n", a);
//   changevalue(&a);// call by reference
//   printf("%d\n", a);
//   int q;
//   q = return_double(65);
//   printf("%d\n",q ); // call by value
//   return 0;
// }

#include <stdio.h>

int maths(int* a ,int* b){
  printf("The addition value of number %d and %d is %d\n",*a,*b,*a+*b );
  printf("The subtraction  value of number %d and %d is %d\n",*a,*b,*a-*b);
  return;

}


int main(int argc, char const *argv[]) {
  int a = 2, b= 3,c;
  maths(&a,&b);

  return 0;
}
