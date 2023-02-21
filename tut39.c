/*
Author : Anas khan
Date : 17-09-22
Topic : Unions


Key Learning : Union is same like structure but differecne is he takes less
memory then structure and use at time only for one variable


It is very usefull in mangaing memory
*/

#include <stdio.h>
#include <string.h>
// Union Anas{
//   int a;
//   int marks;
//   char b;
//   char name[34];
// }


union Anas{
  int a;
  int marks;
  char b;
  char name[34];
};


int main(int argc, char const *argv[])
 {
  union Anas s1;
  s1.a = 1;
  s1.marks = 53;
  s1.b = 'a';
  strcpy(s1.name,"Anas khan");
  printf("The id no is %d\n",s1.a );
  printf("The name is %s\n",s1.name );
  printf("The marks  is %d\n",s1.marks );
  printf("The fav  is %c\n",s1.b );
  return 0;
}
