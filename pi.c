#include <stdio.h>

void  update(int *a,int *b) {
   printf("%d\n",*a + *b );
   if (*a>*b) {
     printf("%d\n",*a - *b );
   }
   else{
     printf("%d\n",*b - *a );

   }

   // printf("The value of b is %d\n",*b - *a );

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);

    return 0;
}
