/*
Author : Anas khan
Date : 16-09-22
Topic : Structure

Key Learning : typedef change the name
*/


#include <stdio.h>
typedef struct Student{
  int id;
  int marks;
  char fav_char;
  char name[34];
}std;

//  Type def ki mada se hum name change kar sakte hai
int main(int argc, char const *argv[]) {
  // int* a,b;
  typedef int* intpointer;
  intpointer a,b;
  int c = 89;
  a = &c;
  b = &c;
  printf("%p\n",b);

  // std  s1, s2;
  // s1.id = 89;
  // s2.id = 90;
  // printf("the id  no is %d\n", s1.id);
  // printf("The id no is %d\n",s2.id );
  // // typedef previous name new name
  // typedef unsigned long ul;
  // typedef int integer;
  //
  // ul l1, l2,l3;
  // integer a = 4;
  // printf("%d\n",a );
  return 0;
}
