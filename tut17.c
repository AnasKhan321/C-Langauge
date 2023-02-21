/*
Author : Anas khan
Date: 9-9-2022
Purpose : Learning C
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
  // label:
  //     printf("%s\n", "we are inside label");
  //     goto end;
  // printf("%s\n","hello world " );
  // goto label;
  // end:
  //     printf("%s\n", "we are at end");

    int num;
    for (size_t i = 0; i < 8; i++) {
          printf("%d",i );
          for (int  j = 0; j < 8; j++) {
                printf("%s\n","Enter the number enter zero to exit\n" );
                scanf("%d",&num );
                if (num==0) {
                    goto end;
                  /* code */
                }
          }/* code */
    }
    end:
        printf("%s\n","It will end");

    /*
    label ka istemal kar ke
    ham use cheezo ko wapas use kar sakte hai
    Yeh loop todne ke kam aata hai

    */
  return 0;
}
