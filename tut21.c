#include <stdio.h>

// recursion mean wo apni copy ko call karta hai  small problem ko solve karne ke liye

// wo apni base case tak jata hai
int anas(int num){
  if (num ==1 || num==0) {
      return 1;/* code */
  }
  else{
    return num * anas(num-1);
  }
}

int main(int argc, char const *argv[]) {
  int d,c;
  printf("%s\n","Enter Your number :" );
  scanf("%d",&c );
  d = anas(6);
  printf("%d\n",d );
  return 0;
}
