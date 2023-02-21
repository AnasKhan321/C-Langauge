#include <stdio.h>


int main(int argc, char const *argv[]) {
  printf("%s\n","Enter your number :" );
  int a;
  int ind;
  scanf("%d",&a );
  ind = 1;
  do {
    printf("%d%s%d%s%d\n",a,"x",ind,"=",a*ind );
    ind = ind +1;
  } while(ind<11);
  // printf("%s\n","Enter the numer you want the multiplication table of : " );
  // int a;
  // scanf("%d",&a );
  // printf("%s\b","Table of :");
  // printf("%d\n",a );
  //
  // printf("%d%s\b",a,"x1= " );
  // printf("%d\n",a*1 );
  //
  // printf("%d%s\b",a,"x2= " );
  // printf("%d\n",a*2 );
  //
  // printf("%d%s\b",a,"x3= " );
  // printf("%d\n",a*3 );
  //
  // printf("%d%s\b",a,"x4= " );
  // printf("%d\n",a*4 );
  //
  // printf("%d%s\b",a,"x5= " );
  // printf("%d\n",a*5 );
  //
  // printf("%d%s\b",a,"x6= " );
  // printf("%d\n",a*6 );
  //
  // printf("%d%s\b",a,"x7= " );
  // printf("%d\n",a*7 );
  //
  // printf("%d%s\b",a,"x8= " );
  // printf("%d\n",a*8 );
  //
  // printf("%d%s\b",a,"x9= " );
  // printf("%d\n",a*9 );
  //
  // printf("%d%s\b",a,"x10= " );
  // printf("%d\n",a*10 );

  // printf("%d\n",a*"2"=a*2 );
  // printf("%d\n",a*3=a*3 );
  // printf("%d\n",a*4=a*4 );
  // printf("%d\n",a*5=a*5 );
  // printf("%d\n",a*"6"=a*6 );
  // printf("%d\n",a*1=a*7 );
  // printf("%d\n",a*1=a*8 );
  // printf("%d\n",a*1=a*9 );
  // printf("%d\n",a*1=a*10 );
  printf("%s\n","Enter your first  number" );
  int f,b;

  scanf("%d",&f );
  printf("%s\n","Enter your second number" );
  scanf("%d",&b );
  printf("%d\n",f+b);

  return 0;
}
