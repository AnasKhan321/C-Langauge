#include <stdio.h>

// int main(int argc, char const *argv[]) {
  // int a = 0;
  // int age ;
  // for (size_t i = 0; i < 10; i++) {
  //     printf("%d\nEnter your age ",i);
  //     scanf("%d",&age );
  //     if (age=18) {
  //       printf("%s\n","Your age is ten " );
  //       break;
  //       printf("%s\n","anas khan " );
  //     }
  // }
  /*

  loop mai ham continue use karge toh
  ye direct dusri iteration mai chalajayega
  continue ke bad jo bhi likha bina use execute k
  */



//   int i,age;
//   for (size_t i = 0; i < 20; i++) {
//     printf("%d\nEnter your age ",i );
//     scanf("%d",&age );
//     if (age>10) {
//         continue;
//       /* code */
//     }
//     printf("%s\n", "we have while true2");
//     /* code */
//   }
//   return 0;
// }




int main(int argc, char const *argv[]) {
  printf("%s\n","Welcome to your guess the number game\nYou have 9 chances" );
  int a = 20;
  int b;
  for (size_t i = 0; i < 10; i++) {
    printf("You have left %d chances\n",i );
    printf("%s\n","Guess the number : " );
    scanf("%d",&b );
    if (b>20) {
        printf("%s\n","Choose a low number " );
    }

    else if (b<15) {
        printf("%s\n","Choose a high number " );
      }

    else if (a=b) {
        printf("%s\n","You won !" );
        break;
      }

   }
  return 0;
}
