#include <stdio.h>
/*
why recursion is bad
becasue it takes time in calculate a big number
becaue of its recursion tree
who goes to 1 and 0 in loop

*/
int fabonachi(int a){
  if (a==1||a==2) {
      return a;
  }
  else{
    return fabonachi(a-1) + fabonachi(a-2);
  }

}
int fab_iterative(int n){
  int a = 0;
  int b = 1;

  for (int i = 0; i < n-1; i++) {
    b = a+b;//1
    a = b-a;// 1
  }
  return a;



}
int main(int argc, char const *argv[]) {
  int r;
  scanf("%d",&r );
  int f;
  f = fabonachi(r);
  printf("The value is %d\n",f );

  int number;
  printf("%s\n","Enter the index to get fibonacci series\n" );
  scanf("%d",&number);
  printf("The value of fibonacci number at  positon no %d using iterative appproch is %d \n",number
  ,fab_iterative(number));

  return 0;
}
// ****HARRY'S CODE****
// #include <stdio.h>
//
//
// int fib_recursive(int n)
// {
//     if(n==1 || n==2){
//         return n-1;
//     }
//     else{
//         return fib_recursive(n-1) + fib_recursive(n-2);
//     }
// }
//
//
// int fib_iterative(int n)
// {
//     int a = 0;
//     int b = 1;
//
//     for (int i = 0; i < n-1; i++)
//     {
//         b = a+b; //1 for iteration 1
//         a = b-a; //1 for iteration 1
//
//     }
//
//     return a;
// }
//
// int main(int argc, char const *argv[]) {
//     int number;
//     printf("Enter the index to get fibonacci series\n");
//     scanf("%d", &number);
//     printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
//     printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
//     return 0;
// }
