/*
Author : Anas khan
Date : 17-09-22
Topic : Solution of exercise tut 36

*/

#include <stdio.h>

void arrayRev(int arr []){
  int temp;
  for (size_t i = 0; i < 7/2; i++) {  //agar use 2 se divide nahi karenge toh wo wapas siddha ho jayega swap kardeng aur wapas seddhar kar degan isliye half tak hi chalaye
    // swap item i wiht item 6-1

    // arr[i]
    temp = arr[i];
    arr[i] = arr[6-i];
    arr[6-i] = temp;
  }

}

void arrayPring(int arr[]){
  for (int i = 0; i < 7; i++) {
    printf("The value of element is %d is %d\n",i,arr[i]);
  }
}

int main(int argc, char const *argv[]) {
  int arr[] = {1,2,3,4,5,6,67};
  printf("before  reversing the array\n");
  arrayPring(arr);
  printf("After the reversing the arry\n");
  arrayRev(arr);
  arrayPring(arr);
  return 0;
}
