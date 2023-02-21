/*
Author : Anas khan
Date : 30-09-2022
topic : file io and functions of file

fopen = open karne ke liye
fclose = file close karne ke liye
fscanf = file ko read karne ke liye
fprintf = file  mai text add karne ke liye like
write karna ho ya append
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {

  // FILE *ptr;
  // char string[34]= "anas is the new king ";
  // ptr = fopen("anas.txt","r");
  // fscanf(ptr,"%s",string);
  // printf("The content of this file has %s\n",string );

  // FILE *ptr;
  // ptr  = fopen ("anas.txt","w");
  // if (ptr!=NULL)
  // {
  //   fprintf(ptr,"%s",string);
  //   fclose (ptr);
  // }


  // FILE *fp;
  // char local[37];
  // fp = fopen ("anas.txt","r");
  // if (fp!=NULL)
  // {
  //   fscanf(fp,"%s\n", local);
  //   fclose (fp);
  //   printf("the content is %s\n",local );
  // }

  FILE *fp = NULL;
  char string[784]= "\nThis this man is the rock is khokhe ";
  fp = fopen ("anas.txt","w");
  if (fp!=NULL)
  {
    fprintf(fp,string);
    fclose (fp);
  }



  return 0;
}
