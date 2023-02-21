//  Date : 6-10-2022
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int guess = 23;
  printf("Welcome to the game\nGuess the number \n");
  int in;
  int minus = 9;
  for (size_t i = 0; i < 9; i++) {
    printf("You have %d guess\n",minus-i );
    scanf("%d",&in );

    if (in == guess) {
      printf("You won it \n");
      printf("You take %d chance to guess the number \n",i+1 );
      break;
    }
    else if (in>guess) {
      printf("Enter a lower number\n");
    }
    else if (in< guess) {
      printf("Enter a higher number \n");
    }

  }

  return 0;
}
