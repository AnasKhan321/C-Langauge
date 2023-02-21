#include <stdio.h>

int fabonachi(int a){
  if (a==1 || a==2) {
      return a;

  }
  else{
    return fabonachi(a-1)+fabonachi(a-2);
  }
}

int main(int argc, char const *argv[]) {
  int d;
  d = fabonachi(6);
  printf("%d\n",d );
  return 0;
}
