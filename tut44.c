/*
Author : Anas khan
Date : 19-09-2022
Topic : Exercise

*/
#include <stdio.h>
#include <string.h>

struct manager{
  char name[233];
  int  license ;
  char route[90];
  int  km;
};


int main(int argc, char const *argv[]) {
  struct manager d1,d2,d3;



  printf("%s\n","Enter the first driver  name ");
  gets(d1.name);
  strcpy(d1.name,d1.name);

  printf("%s\n","Enter the first driver route " );
  gets(d1.route);
  strcpy(d1.route,d1.route);

  printf("Enter the first driver licence no \n" );
  scanf("%d",&d1.license );

  printf("%s\n","Enter the first driver  km " );
  scanf("%d",&d1.km );
  getchar();



  printf("%s\n","Enter the Second driver  name ");
  gets(d2.name);
  strcpy(d2.name,d2.name);

  printf("%s\n","Enter the Second driver route " );
  gets(d2.route);
  strcpy(d2.route,d2.route);

  printf("Enter the Second driver licence no \n" );
  scanf("%d",&d2.license );

  printf("%s\n","Enter the Second driver  km " );
  scanf("%d",&d2.km );


  printf("%s\n","Enter the third driver  name ");
  gets(d3.name);
  strcpy(d3.name,d3.name);

  printf("%s\n","Enter the third  driver route " );
  gets(d3.route);
  strcpy(d3.route,d3.route);

  printf("Enter the third driver licence no \n" );
  scanf("%d",&d3.license );

  printf("%s\n","Enter the third  driver  km " );
  scanf("%d",&d3.km );



  printf("The first Driver name is %s\nHis route is %s\nThe licence no is %d\nHis km is %d\n",d1.name,d1.route,d1.license,d1.km );
  printf("The Second Driver name is %s\nHis route is %s\nThe licence no is %d\nHis km is %d\n",d2.name,d2.route,d2.license,d2.km );
  printf("The third  Driver name is %s\nHis route is %s\nThe licence no is %d\nHis km is %d\n",d3.name,d3.route,d3.license,d3.km );

  // printf("%c\n",d.license );
  // printf("%s\n",d.name );
  // printf("%c\n",d.license );
  // printf("%s\n","enter your licence no");

  return 0;
}
