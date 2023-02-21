#include <stdio.h>

int main(int argc, char const *argv[]) {
  // int i;
  // int j;
  //
  // for ( i = 0,j=0; i < 7; i++) {
  //   printf("%d %d\n",i,j );
  // }

  // int i = 0 ,j = 0;
  // for(i<5,i++){
  //   printf("%d%d\n",i,j );
  // }


  // for (size_t i = 0; j = 3,i < 10; i++) {
  //   printf("%s\n","anas khan is the new king " );
  //   j++;
  // }

  // for (size_t i = 0; i++;) {
  //   printf("%s\n","anas khan " );  /* code */
  // }


  // int j = 0;
  // for (size_t i = 0; i < 5;) {
  //   printf("%d %d\n",i,j );
  //   i++;j++;
  // }


  for (size_t i = 0; i < 12;) {
      printf("%s\n", "hello world ");
      i = i+2;
  }


  /*
  first expression = i or wo do expression le sakta hai
  and also optional
  i++ = i+1
  loops jab tak chalega jab tak
  last condition false nahi ho jati

  first expression ko bahar bhi rakh sakte hai
  second expression is optional  agar hum wo nahi dalege toh infinty loop chala jayega

  third expression ko hum loop ke andar bhi rak sakhte hai

  third  expression is optional we put on last
  */

printf("Hello World\n");
    int i, j=0;
    for(i=0 ;  ; )
    {
       printf("%d %d\n", i, j);
       i++;j++;
    }

    int num = 10;
    int i;
    for(i = 0; i < num; i++) {
    printf("%d ",i);
}
  return 0;
}
