/*
Author : Anas khan
Date : 4-10-2022
Topic : function pointer
key learning : function pointer function
ko point karta hai
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b){
  return a + b;
}

void  greet(){
  printf("Hello world my user good morning \n");
}

void function(char a[66] , char b[78]){
  printf("the content is %s%s\n",a,b );
}

int main(int argc, char const *argv[]) {
  int a ;
  printf("The sum of 1 and 2 are is %d\n",sum(1,2));

  int (*fptr) (int , int ); // Declaring a function pointer
  fptr = &sum ; // creating a function pointer
  int d = (*fptr)(4,5); // Dereferncing a function pointer
  printf("The value of d is %d\n",d );

  char (*voide) () ;
  voide = &greet;
  printf("%d\n",&voide );
  char f = (*voide) ();
  printf("%s",f );

  char (*stri) (char ,char);
  stri = &function;
  char s = (*stri) ("anas","khan");
  printf("%s\n",s );


  return 0;
}
