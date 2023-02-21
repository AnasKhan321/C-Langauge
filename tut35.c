/*
Author : Anas khan
Date : 15-09-22
Topic : taking a string
*/
#include <stdio.h>
#include <string.h>
// int main(int argc, char const *argv[]) {
//   char s1[] = "harry";
//   char s2[] = "harry";
//   char s3[54];
//   printf("The strcmp for s1, s2 returned %d\n",strcmp(s1,s2));
//   // puts(strcat(s1,s2));
//   // printf("The lenght of s1 is %d\n",strlen(s1));
//   // printf("The lenght of s2 is %d\n",strlen(s2) );
//   // printf("The reverse of s1 is %s\n",strrev(s1) );
//   // printf("The reverse of s2 is %s\n",strrev(s2) );
//
//   strcpy(s3,strcat(s1,s2));
//   puts(s3);
//   return 0;
// }


/*
# Key learning
strrev - reverse
#include<stdio.h>
#include<string.h>
int main()
{
char str[50] = "1234";
printf("After reversing string is =%s",strrev(str));
return 0;}
//Output: After reversing string is = 4321





strcmp - combine the two string
#include <stdio.h>
#include <string.h>
int main()
{
char string1[ ] = "Harry" ;
char string2[ ] = "Code" ;
int a;
a= strcmp ( string1, string2 ) ;
printf ("\n%d", a) ;
return 0;
}
//Output:5


strcpy - copy 1 to 2
int main( ) {
char  s[ ] = "CodeWithHarry" ;
char  t[20] ;
strcpy ( t, s ) ;
printf ( "\n Source string = %s", s ) ;
printf ( "\n Target string = %s", t ) ; }
//And here is the output...
//Source string = CodeWithHarry
//Target string = CodeWithHarry



strcat - combine two string
int main( ) {
char  s[ ] = "Hello" ;
char  t[30] = "World" ;
strcat ( t, s ) ;
printf ( "String = %s", t ) ;
}
//Output: string = HelloWorld


strlen - len of String
int main( ) {
char  str[ ] = "Harry" ;
int  str_length;
str_length= strlen ( str ) ;
printf ( " length = %d", str_length );
}
//Output: length = 5
*/

int main(int argc, char const *argv[]) {
  // char s1[]="anaskhan";
  // char s2[] = "katrinakaif";
  // char input[45];
  // gets(input);
  // printf("%s\n",input );
  //
  // printf("The reverse of s1 is %s\n",strrev(s1));
  // printf("The reverse of s2 is %s\n",strrev(s2));
  // printf("The lenght of s1 is %d\n",strlen(s1) );
  // printf("The lenght of s2 is %d\n",strlen(s2));
  // printf("The combination of two string is %s\n",strcat(s1,s2));
  // printf("the copy is %s\n", strcpy(s2,s1));
  // printf("the combine %s\n",strcmp(s1,s2));
  char s;
  char line[10];
  char sentence[67];
  scanf("%s\n",s );
  scanf("%s\n", line);
  gets(sentence);
  printf("%s\n",s );
  printf("%s\n", line);
  printf("%s\n",sentence );




  return 0;
}
