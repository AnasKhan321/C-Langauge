// #include  <stdio.h>

#include <stdio.h>
int main(int argc, char const *argv[]) {
  printf("%s\n","Enter you number" );
  int a;
  int ine;
  scanf("%d",&a );
  ine = 0;
  do {
    ine = ine +1;
    printf("%d\n",a*ine );
    // ine = ine +1;
  } while(ine<10);
  return 0;
}
