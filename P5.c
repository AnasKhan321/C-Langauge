#include <stdio.h>
#include <stdlib.h>

// int main()
// {   int input ;
//     scanf("%d",&input );
//     int array[355];
//     for (size_t i = 0; i < input; i++) {
//       scanf("%d",&array[i] );
//     }
//     int copy = input;
//     // for (size_t i = 0; i < input/2; i++) {
//     //   int s = array[i] ;
//     //   array[i] = array[i -copy ];
//     //   array[i-copy] = s ;
//     // }
//     for (size_t i = 0; i < input; i++) {
//       printf("%d\n",array[i] );
//     }
//
//     // int copy = input;
//     for (size_t i = 0; i < input; i++) {
//       int s = array[i] ;
//       array[i] = array[i -copy ];
//       array[i-copy] = s ;
//     }
//     for (size_t i = 0; i < input; i++) {
//       printf("%d\t",array[i] );
//     }
//     return 0;
// }
int main()
{
    int num, *arr, i;
    scanf("%d",&num );
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }


    /* Write the logic to reverse the array. */
    int  c = num;
    for (int k= 0  ; k < c; k ++) {

        int copy;
        copy = arr[k];
        arr[k] = arr[k- num] ;
        arr[k-num ] = copy;

    }
    printf("%d\n",arr[3] );
    for(i = 0; i < num; i++){
        printf("%d ", arr[i]);
      }
    return 0;
}
