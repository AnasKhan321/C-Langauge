/*
Author : Anas khan
Date : 15-09-22
Topic : taking a string
*/


#include <stdio.h>

void printstr(char str[]){
  int i=0;
  while (str[i]!='\0') {
    printf("%c\n",str[i]);
    i++;
 }
}

int main(int argc, char const *argv[]) {
  // char name[] = "anas";
  // char doe[] = {'a','b','c','d'};
  //
  // printf("%s\n", name);
  // printf("%s\n", doe);
  // char str[] = {'h','a','\0'};
  // char str[6]= "harry";
  char str[34];
  gets(str);
  printf("%s\n","using puts" );
  puts(str);
  printf("Using print is a\n %s\n",str );
  // printstr(str);
  return 0;
}
