#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  int chars ,i = 0;
  // char a,b;
  char *ptr;
  while (i<3) {
    printf("Employee %d :Enter the number of characters in your employee id \n",i+1 );
    scanf("%d",&chars);
    getchar();

    // printf("Enter the value of a\n" );
    // scanf("%c",&a);
    // getchar();
    //
    // printf("Enter the value of b\n" );
    // scanf("%c",&b);
    // getchar();

    ptr = (char *) malloc((chars+1)*sizeof(char));
    printf("Enter your employee id \n" );
    scanf("%s",ptr);
    printf("Your employee id is %s\n",ptr );
    free(ptr);
    i = i+1;
  }
  return 0;
}
