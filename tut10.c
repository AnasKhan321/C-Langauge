/*
Author = Anas khan
date = "6-09=2022"
purpose = to Learning c and if else condition
*/

#include <stdio.h>

// int main(int argc, char const *argv[]) {
//   int age;
//   printf("%s\n","Enter your age :" );
//
//   scanf("%d",&age );
//   printf("You have entered %d is your age\n",age );
//   if (age>=18) {
//       printf("%s\n","You can vote" );
//   }
//
//   else if(age>10){
//       printf("%s\n","You are between 10 to 18 and you can vote for kids" );
//   }
//   else if (age>3){
//       printf("%s\n","You can vote fro babys" );
//   }
//   else{
//       printf("%s\n","You cannot vote!" );
//   }
//   return 0;
// }

int main(int argc, char const *argv[]) {
  int a;
  printf("%s\n","Enter the passed subject number" );

  printf("%s\n", "1 for maths\n2 for science\n3 for both exams");

  scanf("%d",&a );
  if(a==3) {
      printf("%s\n","You passed both of exam. You get 45 ruppes" );
  }
  else if(a=2) {
      printf("%s\n","Ok you passed exam you get 15 ruppes" );
  }
  else if(a=1) {
      printf("%s\n","Ok you passed exam you get 15 ruppes" );
  }
  else{
      printf("%s\n","Sorry you don't get anything " );
  }

  return 0;
}
