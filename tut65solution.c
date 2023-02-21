/*
Author : Anas khan
Date : 30-09-2022
topic : exercise Solution
key learnign = reversed  the number
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int num){
    int reversed = 0;
    int originalNumber = num;
    while ( num!=0) {
      reversed = reversed*10 + num%10;
      num = num/10;
    }
    printf("%d\n",reversed );
    if (originalNumber == reversed) {
      return 1;
    }


    else{
      return 0 ;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    // Your task is to implement this function
    if (isPalindrome(number)){
        printf("This number is a palindrome\n");
    }
    else{
        printf("This number is not a palindrome\n");
    }

    return 0;
}
