/*
Author : Anas khan
Date : 1-10-2022
topic : more functions of file
fputc == Write character in the file
fputs == Write string in the file
fgetc == Read character in the file
fgets == Read string in the file
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// int main(int argc, char const *argv[]) {
//   // FILE *fp;
//   // fp = fopen ("filename.txt","r");
//   // if (fp!=NULL)
//   // {
//   //   fscanf(fp,"Some String\n", &var);
//   //   fclose (fp);
//   //
//   // }
//   void *ptr;
//   ptr = (char *) malloc(4*sizeof(char));
//   ptr = "anas";
//   printf("%s\n",ptr );
//
//   FILE *fp;
//   fp = fopen ("filename.txt","w");
//   if (fp!=NULL)
//   {
//     fprintf(fp,"Some String\n");
//     fclose (fp);
//   }
//   float a = 8.5;
//   float b ;
//   scanf("%f", &b);
//   printf("%f\n",a*b );
//
//
//   return 0;
// }
int main(int argc, char const *argv[]) {
  // FILE *fp;
  // fp = fopen ("anas.txt","a+");
  // if (fp!=NULL)
  // {
  //   // fscanf(fp,"Some String\n", &var);
  //   // fclose (fp);
  //   // char c = fgetc(fp);
  //   // printf("the character I read was %c\n",c );
  //   // c = fgetc(fp);
  //   // printf("the character I read was %c\n",c );
  //   // fclose (fp);
  //   char str[56] ;
  //   // fgets(str,10,fp);
  //   // printf("The string is %s\n",str );
  //
  //   fputc('o',fp);
  //   fputs("anas is the new king ",fp);
  //   fgets(str,34,fp);
  //   printf("this string is %s\n",str );
  // }
  FILE *fp;
  fp = fopen (".txt","r");
  if (fp!=NULL)
  {
    fscanf(fp,"Some String\n", &var);
    fclose (fp);
  }


  return 0;
}
