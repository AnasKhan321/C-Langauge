/*
Author : anas khan
Date  : 3-10-2022
Topic : bill generator exercise

*/

#include <stdio.h>


int main(int argc, char const *argv[]) {
  char var[54];
  FILE *fp;
  fp = fopen ("letter.txt","r");
  if (fp!=NULL)
  {
    // fscanf(fp,"%s", &var);
    fgetc(fp);
    fgetc(fp);
    fgets(var,12,fp);
    fclose (fp);
  }
  printf("the content is %s\n",var );

  printf("Welcome to the program\n");
  char name[45];
  char purchasing[78];
  int press ;
  // printf("Press 1 for continue and 0 for quit \n", );
  while (1) {
    printf("Press 1 for continue and 0 for quit \n" );
    scanf("%d",&press);

    if (press==1) {
      printf("Enter your name \n");
      getchar();
      scanf("%s",&name );
      printf("Enter your purchasing item \n");
      getchar();
      scanf("%s",&purchasing );
      printf("Thank you %s for shopping %s\nto your outlet \n",name,purchasing);
    }
    else{
      break;
    }
  }
  return 0;
}
