#include <stdio.h>


void  swap(int *a , int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


int main(int argc, char const *argv[]) {
  int a , b ;
  a = 34;
  b = 56;
  printf("The value of a is %d and the value of b is %d\n",a,b );
  swap(&a,&b);
  printf("The value of a is %d and the value of b is %d\n",a,b );
  // swapbyreference(&a,&b);
  // printf("The value of a is %d and the value of b is %d\n",a,b );

  int m[23] = {23,42,21,43,26,4};
  int *ptr ;
  ptr = m;
  ptr++;
  printf("%d\n",*(ptr+1) );
  return 0;
}
