/*
Author : Anas khan
Date : 18-09-2022
Topic : solution of 41exercise

Key learning : logic building
*/
#include <stdio.h>
#include <string.h>

void parser(char*  string){
  int in = 0;
  int index=0;
  for (size_t i = 0; i < strlen(string); i++) {
    if (string[i] == '<') {
        in = 1;
        continue;
    }
    else if (string[i] == '>') {
        in = 0;
        continue;
    }
    if (in=0) {
        string[index] = string[i];
        index ++;
    }

  }
  string[index] = '\0';


//Remove the trailing spaces from the end
  while (string[0]==' ') {
     //Shift the string to the
     for (size_t i = 0; i < strlen(string); i++) {
       string[i] = string[i+1];

     }

  }
   //Remove the trailing spaces from the end
  while (string[strlen(string) - 1] == ' ') {
      string[strlen(string) - 1] = '\0';
  }

}




int main(int argc, char const *argv[]) {
  char string[] =   "<harrysdfsdfsdf> this is a heading    </harry> ";
  // gets(string);
  parser(string);
  printf("The parsed string is %s\n",string );
  return 0;
}
