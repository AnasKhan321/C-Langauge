/*
Author : Anas khan
Date : 16-09-22
Topic : Structure

(.) Structure member operator
*/
#include <stdio.h>
#include <string.h>

//  it called user define data type



// struct Student harry,ravi ,shubham;
// void p()
// {
//   printf("%s",harry.name );
// }


struct Student{
  int id;
  int marks;
  char fav_char;
  char name[34];
};


struct Student harry,ravi ,shubham ;

void de(){
  printf("%s",harry.name);
}

int main(int argc, char const *argv[]) {
  struct Student harry,ravi ,shubham;
  harry.id = 1;
  ravi.id = 2;
  shubham.id = 3;
  harry.marks = 754;
  ravi.marks = 454;
  shubham.marks = 654;
  harry.fav_char = 'h';
  ravi.fav_char = 'r';
  shubham.fav_char = 's';

  strcpy(harry.name,"Sahil Khan ");
  strcpy(ravi.name,"Ravi Kumar");
  strcpy(shubham.name,"Shubham sasodia");
  de();

  printf("The Student name is %s and his id no is %d and he got %d marks his favourite character is %c\n",harry.name,harry.id,harry.marks,harry.fav_char );
  printf("The Student name is %s and his id no is %d and he got %d marks his favourite character is %c\n",ravi.name,ravi.id,ravi.marks,ravi.fav_char );
  printf("The Student name is %s and his id no is %d and he got %d marks his favourite character is %c\n",shubham.name,shubham.id,shubham.marks,shubham.fav_char );
  return 0;
}
