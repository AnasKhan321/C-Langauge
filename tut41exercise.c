#include <stdio.h>
#include <string.h>

void parsing(char ou[]){
  int f;
  f = strlen(ou);
  for (size_t i = 5; i < f-6; i++) {
     printf("%c",ou[i]);
  }

}


int main(int argc, char const *argv[]) {
  printf("Enter your string \n");
  char input[67];
  gets(input);
  parsing(input);
  return 0;
}



// int main(int argc, char const *argv[]) {
//   char string[78];
//   char d;
//   // d = scanf("%s",string );
//   gets(string);
//   printf("%d\n",strlen(string) );
//   printf("%s\n",string);
//   return 0;
// }
