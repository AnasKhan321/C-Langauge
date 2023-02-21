#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;
  printf("%s\n","Enter your age drive or not" );
  scanf("%d",&a );

  switch (a) {
    case 18:
        printf("%s\n","You are able to drive " );
        break;


    case 17:
          printf("%s\n","You are able to drive Activa" );
          break;
    case 16:
          printf("%s\n","You are able to drive Activa" );
          break;
    default:
    printf("Your age is %d you are not able to drive",a );
  }
  return 0;
}
// # codegrapper.com
