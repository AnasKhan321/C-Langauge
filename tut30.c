/*
Author : Anas khan
Date : 13-09-22
purpose : Printing star in c
*/
//
// #include <stdio.h>
// int main(int argc, char const *argv[]) {
//   // char a="*";
//   printf("%s\n","Enter 0 for triangular 1 for reverse triangular" );
//   int c;
//   scanf("%d",&c );
//   switch (c) {
//     case 0:
//       printf("%s\n","*\n**\n***\n****");
//       break;
//     case 1:
//       printf("%s\n","****\n***\n**\n*" );
//   }
//   printf("%s%d\n",'*'*5 );
//   return 0;
//   }

#include <stdio.h>

void printstar(int rows){
  for (size_t i = 0; i < rows; i++) {
    for (size_t j = 0; j <= i; j++) {
        printf("*");

    }
    printf("\n");
  }
}

void reversprintstar(int rows){
  for (size_t i = 0; i < rows; i++) {
    for (size_t j = 0; j <= rows-i-1; j++) {
        printf("*");

    }
    printf("\n");
  }

}

int main(int argc, char const *argv[]) {
  printf("%s\n", "enter the number of rows");
  int rows ;
  scanf("%d",&rows );
  printf("%s\n","Enter 0 for triangular 1 for reverse triangular" );
  int tr;
  scanf("%d",&tr );
  switch (tr) {
    case 0:
      printstar(rows);
      break;
    case 1 :
      reversprintstar(rows);
    default:
      printf("%s\n","You entered invalid input" );
      break;
  }

  return 0;
}
