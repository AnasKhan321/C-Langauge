/*
Author : Anas khan
Date : 5-10-2022
Topic : callback function
*/

#include <stdio.h>

int sum (int a, int b){
  return a+b;
}

float average (float c , float d ){
  float aver = c+d;
  return aver/2;
}

void Hello(int (*fptr) (int ,int)){
  printf("Hello user \n");
  printf("The sum of a and b is %d\n",fptr(5,7) );

}

void executive(int (*fptr) (int , int )) {
  printf("Good morning user \n" );
  printf("The sum of a and b is %d\n",fptr(5,90) );

}

void goodafternooon(float (*goodaf) (float ,float)){
  printf("Good afternoon user\n" );
  printf("The average of two number is %f\n",goodaf(8,7));
}


void goodevening(int (*even) (int ,int )){
  printf("Good evening MUMBAI \n" );
  printf("The average of two number is %d\n",even(67,34) );
}
int main(int argc, char const *argv[]) {
  int (*ptr)(int , int );
  ptr = &sum;
  Hello(ptr);
  executive(ptr);

  int (*night) (int ,int);
  night = &average;

  float (*e) (float,float);
  e = &average;
  goodafternooon(e);
  goodevening(night);

  return 0;
}
