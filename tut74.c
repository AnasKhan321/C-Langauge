/*
Author : Anas khan
Date : 5-10-2022
Topic : Exercise
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14;

float  Edistance(float x1, float y1, float x2, float y2){

  // Formula executed

  float distance,s ;
  distance = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
  s = sqrt(distance);
  return s;
}

float areaOfCircle(float (*fptr) (float , float, float , float)){

  // Take input from the user
  float x1,x2,y1,y2;
  printf("Enter the value of x1\n");
  scanf("%f",&x1 );

  printf("Enter the value of x2\n");
  scanf("%f",&x2 );

  printf("Enter the value of y1\n");
  scanf("%f",&y1 );

  printf("Enter the value of y2\n");
  scanf("%f",&y2 );
  float dis ;
  dis = fptr(x1,y1,x2,y2);
  printf("The distance is %0.2f\n",dis );
  float squa ;
  squa = pow(dis,2);
  return squa*PI;
}
int main(){
  float area;
  float (*file) (float , float ,float ,float );
  file = &Edistance;
  area = areaOfCircle(file);
  printf("The area of circle is %f\n",area);

  return 0;
}


// Harry's code
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
//
// float Edistance(int x1, int y1, int x2, int y2)
// {
//     int a = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
//     return sqrt(a);
// }
//
// float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
// {
//     return distance(x1, y1, x2, y2);
// }
//
// int main()
// {
//     int x1, y1, x2, y2;
//     float dst;
//     // Take x1, y1 and x2, y2 from the user using scanf
//     printf("Enter the value of x1\n");
//     scanf("%d", &x1);
//
//     printf("Enter the value of x1\n");
//     scanf("%d", &y1);
//
//     printf("Enter the value of x1\n");
//     scanf("%d", &x2);
//
//     printf("Enter the value of x1\n");
//     scanf("%d", &y2);
//     dst = areaOfCircle(x1, y1, x2, y2, Edistance);
//     printf("The distance between these points is %.2f\n", dst);
//     return 0;
// }
