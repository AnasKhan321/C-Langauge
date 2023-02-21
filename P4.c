#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int num , sum = 0;
  printf("Enter the last natural number you want the sum of \n");
  scanf("%d",&num );

  for (size_t i = 0; i <=num ; i++) {
    sum+= i;
  }
  printf("Sum of first %d natural number is : %d\n",num ,sum  );

  printf("Enter the number you want prime number \n");
  int prime ;
  scanf("%d",&prime );
  // printf("%d\n",squr(prime) );
  for (size_t j = 0; j <=prime; j++) {
    // if (j% = 0 ) {
    //   printf("%d\n", j);
    }


  printf("Enter the number\n");
  int n ,count = 0 ;
  scanf("%d",&n );
  while (n!=0) {
    n/10 ;
    count ++;
  }
  printf("%d\n", count);
  return 0;
}
