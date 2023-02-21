#include <stdio.h>

int max_of_four(int a, int b, int c , int d){
    if (c>d) {
        if (c>b) {
            if (c>a) {
                return c;
            }
        }

    }
    if (a>d) {
        if (a>b) {
            if (a>c) {
                return a;
            }
     }

    }
    if (b>d) {
        if (b>c) {
            if (b>a) {
                return b;
                }
            }

        }


    if (d>c) {
        if (d>b) {
            if (d>a) {
                return d;
            }
        }

    }
    else {
      return 0;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("The max number is %d", ans);

    return 0;
}
