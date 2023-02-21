/*
Author : Anas khan
Date : 14-09-22
TOPIC : passing array as argument

*/

#include <stdio.h>
int func1(int array[]){
  for (size_t i = 0; i < 4; i++) {
    printf("%d\n",array[i] );
  }
  array[0] = 382; // if you change the value it reflect in main it does not reflect on normal argument except array mai hi hota  hai  wor sirf pointer se change hota hai
  return 0 ;

}

void normal(int* a){
  *a = 78;
  printf("%d\n",*a );
}

void func2(int* ptr){
  for (size_t i = 0; i < 4; i++) {
    printf("%d\n",*(ptr+i) );
  }
  *(ptr + 2 ) = 6533;
}


void func3(int arr[2][2]){
    for (size_t i = 0; i < 2; i++) {
      for (size_t j = 0; j < 2; j++) {
        printf("The value at %d , %d is %d\n",i,j,arr[i][j] );
        /* code */
      }
    }
}

int main(int argc, char const *argv[]) {
  int ared[][2] ={{2,13} , {3,4}};
  int arr[]= {23,3,12,43};
  printf("The value of at index 0 is %d\n",arr[0] );
  func1(arr);
  printf("The value of at index 0 is %d\n",arr[0] );
  func2(arr);
  func2(arr);
  func3(ared);
  int d=90;
  printf("%d\n",d );
  normal(&d);
  printf("%d\n",d );

  return 0;
}
