/*
Author : Anas khan
Date : 3-10-2022
topic : command line argument
argc : argc yeh bata hai wo kitne argument leta hai
argv : isse yeh pata chaltha hai ki konse argument kis index
par mojood hai or unke saath kya karna wo aap program mai likh sakte hai

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("the value of argc is %d\n",argc );
  for (int i = 0; i < argc; i++) {
    printf("this argument at index  number %d has value of %s\n",i,argv[i] );
  }

  return 0;
}
