/*
Author : Anas khan
Date : 20-09-2022
Topic : Dynamic   memory  allocation
malloc allocate karta hai grabage value
calloc allocat karta hai 0 value
by this we take memory of heap
*/
#include <stdio.h>
#include <stdlib.h> //

int main(int argc, char const *argv[]) {
//   // use of malloc
//   int* ptr ;
//   int n;
//   printf("Enter the size of the array you want to create \n" );
//   scanf("%d",&n );
//   ptr = (int*) malloc(n*sizeof(int));
//   for (int i = 0; i < n; i++) {
//     printf("Enter the value of no %d of this array \n",i );
//     scanf("%d",&ptr[i]);
//   }
//   for (size_t i = 0; i < n; i++) {
//     printf("The value at %d of this array is %d\n",i,ptr[i] );
//   }





//   // use of calloc he initalized 0 and he take more memory
//   int* ptr ;
//   int n ;
//   printf("Enter the size of the array you want to create\n");
//   scanf("%d",&n );
//   ptr = (int*) calloc(n,sizeof(int));
//   for (int i = 0; i < n; i++) {
//     printf("Enter the value of no %d of this array \n",i );
//     scanf("%d",&ptr[i]);
//   }
//   for (size_t i = 0; i < n; i++) {
//     printf("The value at %d of this array is %d\n",i,ptr[i] );
//   }
//
//
//
// // use of realloc
//  realloc is use to change the size of array through runtime
//   // int* ptr ;
//   // int n ;
//   printf("Enter the size of the array you want to create\n");
//   scanf("%d",&n );
//   ptr = (int*) realloc(ptr,n*sizeof(int));
//
//   for (int i = 0; i < n; i++) {
//     printf("Enter the value of no %d of this array \n",i );
//     scanf("%d",&ptr[i]);
//   }
//   for (size_t i = 0; i < n; i++) {
//     printf("The value at %d of this array is %d\n",i,ptr[i] );
//   }
//
//   // use of free
//   free(ptr);
  int* ptr ;
  int a = 0;
  ptr = (int*) malloc(1*sizeof(int));
  while (a<4) {
    a++;
    scanf("%d", &ptr );
    printf("The value of ptr is %d\n",ptr );
    free(ptr);

  }

  return 0;
}
