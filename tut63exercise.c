/*
Author : Anas khan
Date : 30-09-2022
topic : exercise

*/


#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{   printf("%d\n")
    return 1;
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
