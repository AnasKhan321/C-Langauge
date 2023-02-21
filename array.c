// #include <stdio.h>
//
// int main(int argc, char const *argv[]) {
//   int marks[2][4]= {{56,23,54,234}, {3,2,2,3}} ;
//   // marks[0] = 34;
//   // printf("Marks of the student 1 is %d\n",marks[0] );
//   // marks[0]= 90;
//   // printf("Anas number : %d\n",marks[0] );
//
//   // for (int i = 0; i < 4; i++) {
//   //     printf("Enter the element of %d of array\n",i );
//   //     scanf("%d",&marks[i] );
//   //   /* code */
//   // }
//   for (int i = 0; i < 2; i++) {
//
//     for (size_t j = 0; j < 4; j++) {
//         printf("%d \n",marks[i][j]);
//     }
//   }
//   return 0;
// }
// // game grow link https://dashboard.bytebrew.io/register
#include<stdio.h>

// int main()
// {
//
// 	//Two dimensional array
// 	int Matrice[3][3];
// 	printf("This Program will print no. from 1-9 in matrice form : \n");
// 	for(int i=0;i<3,i++;)
// 	{
// 		for (int j=0;j<3;j++)
// 		{
// 			printf("Enter no. (1-9) : ");
// 			scanf("%d", &Matrice[i][j]);
// 		}
// 	}
// 	printf("\n\n\n");
// 	for (int i=0;i<3;i++)
// 	{
// 		for (int j=0;j<3;j++)
// 		{
// 			printf("%d\t", Matrice[i][j]);
// 		}
// 		printf("\n");
// 	}
//
// 	printf("\n\n\n So that's the matrice form of no from 1-9");
// 	return 0;
// }

int main(int argc, char const *argv[]) {
  int matrix[3][3];
  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {
      scanf("%d",matrix[i][j] );

      /* code */
    }
  }
    for (int i=0;i<3;i++){
    		for (int j=0;j<3;j++){
    			printf("%d\t", Matrice[i][j]);
    		}
    		printf("\n");
    	}
    // printf("%d\n",matrix );
    /* code */

  return 0;
}
