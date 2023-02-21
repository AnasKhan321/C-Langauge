#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("%s\n","Enter your first number" );
  int i = 0;
  int d;
  scanf("%d",&d );
  while (i<10) {
    i = i+1;
    printf("%d\n",i*d );

    // i = i+1;
    /* code */
  }
  printf("%s\n","Enter Your second number");
  int a = 0;
  int b;
  scanf("%d",&b );
  do {
    a = a+1;
    printf("%d\n",a*b );
  } while(a<10);
  return 0;
}
