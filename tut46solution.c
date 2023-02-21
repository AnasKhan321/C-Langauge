/*
Author : Anas khan
Date : 19-09-2022
Topic : Exercise solution
*/
#include <stdio.h>
#include <string.h>

struct Driver {
  char name[34];
  char d1no[45];
  char route[47];
  int kms;
};



int main(int argc, char const *argv[]) {
  struct Driver d1,d2,d3;
  printf("%s\n","enter the details of the driver " );
  printf("%s\n","enter the name  of the first driver " );
  scanf("%s",&d1.name );

  printf("%s\n","enter the d1no of the first driver " );
  scanf("%s",&d1.d1no );

  printf("%s\n","enter the route  of the first driver " );
  scanf("%s",&d1.route );

  printf("%s\n","enter the number of kms  of the first driver " );
  scanf("%d",&d1.kms );


  printf("%s\n","enter the name  of the second driver " );
  scanf("%s",&d2.name );

  printf("%s\n","enter the d1no of the second driver " );
  scanf("%s",&d2.d1no );

  printf("%s\n","enter the route  of the second driver " );
  scanf("%s",&d2.route );

  printf("%s\n","enter the number of kms  of the second driver " );
  scanf("%d",&d2.kms );


  printf("%s\n","enter the name  of the third driver " );
  scanf("%s",&d3.name );

  printf("%s\n","enter the d1no of the third driver " );
  scanf("%s",&d3.d1no );

  printf("%s\n","enter the route  of the third driver " );
  scanf("%s",&d3.route );

  printf("%s\n","enter the number of kms  of the third driver");
  scanf("%d",&d3.kms );
  printf("****Printing Informationn of these drivers****\n");
  printf("The first Driver name is %s\nHis route is %s\nThe licence no is %s\nHis km is %d\n",d1.name,d1.route,d1.d1no,d1.kms );
  printf("The Second Driver name is %s\nHis route is %s\nThe licence no is %s\nHis km is %d\n",d2.name,d2.route,d2.d1no,d2.kms );
  printf("The third  Driver name is %s\nHis route is %s\nThe licence no is %s\nHis km is %d\n",d3.name,d3.route,d3.d1no,d3.kms );

  return 0;
}
