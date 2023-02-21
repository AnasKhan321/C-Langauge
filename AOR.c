// Date : 6-10-2022


#include <stdio.h>
#include <stdlib.h>
// #include <math.h>
// #define PI 3.14 ;
// Area of rectangle formulal
// int main(int argc, char const *argv[]) {
//   int lenght ;
//   int breadth ;
//   printf("enter the lenght of rectangle \n" );
//   scanf("%d",&lenght );
//   printf("Enter the breadth of rectangle \n");
//   scanf("%d",&breadth );
//   printf("The area of rectangle is %d\n",lenght*breadth );
//   return 0;
// }


// Area of circle and volume of cylinder

// int main(int argc, char const *argv[]) {
//   float Pi = 3.14;
//   printf("Enter the radius of circle \n");
//   int radius ;
//   scanf("%d",&radius );
//   printf("The area is %f\n",radius*radius *Pi );
//   printf("Enter the height of cylinder to calculate the voluem of cylinder \nIF YOU MAKE cylinder of given radius");
//   int height ;
//   scanf("%d",&height );
//   float r = radius*radius;
//   float volume = Pi *r*height;
//   printf("The volume of cylinder is %0.2f\n",volume );
//   return 0;
// }

// Celcius to f

// int main(int argc, char const *argv[]) {
//   // float f = 3;
//   int Celcius;
//   // scanf("%d",&Celcius);
//   printf("Enter the Celcius of degree\n");
//   scanf("%d",&Celcius);
//   printf("Celcius to farehinate is %df\n",Celcius *9/5 + 32 );
//
//
//   return 0;
// }

int main(int argc, char const *argv[]) {
  int z,y,x,k;
  z = 3 ;
  y = 3;
  x = 2 ;
  k = 1 ;

  // printf("%d\n",3*x/y-z+k );
  // int  *ptr ;
  // ptr = (int *) malloc(6*sizeof(int ));
  // for (size_t i = 0; i < 6; i++) {
  //   printf("ente the number \n" );
  //   scanf("%d",&ptr[i]);
  //
  // }
  // for (size_t i = 0; i < 6; i++) {
  //   printf("%d\n",ptr[i] );
  // }

  // int *m;
  //
  // printf("Enter the number of element you put in the array \n" );
  // int in ;
  // scanf("%d", &in );
  // m = (int *) calloc(in,sizeof(int ));
  // for (size_t i = 1; i < in+1; i++) {
  //   scanf("%d",&m[i]);
  // }
  // for (size_t i = 1; i < in+1; i++) {
  //   printf("%d\t",m[i]*i );
  // }
  //
  // m = realloc(m,in+5*sizeof(int ));
  //
  // for (size_t i = 1; i < in+6; i++) {
  //   scanf("\n%d",&m[i] );
  // }
  // for (size_t i = 1; i < in+6; i++) {
  //   printf("%d\t",m[i] );
  // }
  int  table ;
  int * tab;
  tab = (int *) calloc(10,sizeof(int));
  printf("enter your number \n" );
  scanf("%d",&table );
  for (size_t i = 1; i < 11; i++) {
    printf("%d\n",table*i );
    tab[i] = table*i;
  }
  for (size_t i = 0; i < 11; i++) {
    printf("%d\n",tab[i] );
  }

  tab = (int *) realloc(tab,15*sizeof(int ));
  for (size_t i = 0; i < 15; i++) {
    printf("%d\t",table *i );
    tab[i] == table*i;
  }
  for (size_t i = 0; i < 16; i++) {
    printf("%d\n",tab[i]);
  }




  return 0;
}
