#include <stdio.h>
#define ANAS 45

int main(int argc, char const *argv[]) {
  char date[90] = __DATE__;
  // printf("anas is the new king and he is the sultan of market\n" );
  printf(" The date is %s\n", date);
  printf("file is %s\n",__FILE__ );
  printf("The time is %s\n", __TIME__);
  printf("LIne no is %d\n", __LINE__);
  printf("ANSI : %d\n",__STDC__ );

  printf("%s\n",__DATE__ );
  return 0;
}
