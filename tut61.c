/*
Author : anas khan
date : 28-09-22
topic :  solution of 57
*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int m,n, sum = 0;
  int a[3][4],b[4][2] ,result[3][2];
  printf("Enter your first matrix\n" );
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 4; j++) {
        printf("Enter %d %d element of  first matrix\n",i,j );
        scanf("%d",&a[i][j] );
    }
  }



  printf("%s\n","Enter the second matrix " );
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 2; j++) {
        printf("Enter %d %d element of  first matrix\n",i,j );
        scanf("%d",&b[i][j] );
    }
  }



  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 2; j++) {
      for (size_t k = 0; k < 4; k++) {
        sum += a[i][k] * b[k][j];
      }
      result[i][j] = sum;
      sum = 0;
    }
  }


  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 2; j++) {
      printf("%d\t",result[i][j]);

    }
    printf("\n");
  }


  return 0;
}

// Harry's solution

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int m, n, sum = 0;
//     int a[3][4], b[4][2], result[3][2];
//     printf("Enter the first matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             // printf("Enter the %d %d element of first matrix\n", i, j);
            // scanf("%d", &a[i][j]);
//             // printf("\t");
//         }
//          printf("\n");
//     }
//     printf("Enter the second matrix\n");
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             // printf("Enter the %d %d element of first matrix\n", i, j);
//             scanf("%d", &b[i][j]);
//             // printf("\t");
//         }
//          printf("\n");
//     }
//
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             // Calculate the result
//             for (int k = 0; k < 4; k++)
//             {
//                 sum += a[i][k] * b[k][j];
//             }
//             result[i][j] = sum;
//             sum = 0;
//         }
//     }
//
//     //Print the resultant matrix
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             // Print the result
//             printf("%d \t", result[i][j]);
//         }
     //     printf("\n");
     // }

//     return 0;
// }
