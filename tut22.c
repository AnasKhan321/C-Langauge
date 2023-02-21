// Author: Anas khan
// Date : 10-09-22
// purpose - Learning C

#include <stdio.h>

int conveter(int num){
  int a = 0;
  while (a<10) {
    if (num==6) {
        break;
    }
    else if (num==5) {
      printf("%s\n","Ok Enter the number You want to convert" );
      float meters;
      meters = 0.025;
      int inches;
      scanf("%d",&inches );
      return inches * meters;
      continue;
    }
    else if (num==4) {
      printf("%s\n","Ok Enter the number You want to convert" );
      float kgs;
      kgs = 0.453;
      int pound;
      scanf("%d",&pound );
      return pound * kgs;
      continue;
    }
    else if (num==3) {
      printf("%s\n","Ok Enter the number You want to convert" );
      float inche;
      inche = 0.393;
      int cm;
      scanf("%d",&cm );
      return cm * inche;
      continue;

      }
    else if (num==2) {
      printf("%s\n","Ok Enter the number You want to convert" );
      float foot;
      foot = 0.083;
      int inc;
      scanf("%d",&inc );
      return inc * foot;
      continue;

      }
    else if (num==1) {
      printf("%s\n","Ok Enter the number You want to convert" );
      float miles;
      miles = 0.621;
      int km;
      scanf("%d",&km );
      return km * miles;
      continue;
    }

}

}

int main(int argc, char const *argv[]) {

  printf("%s\n","Welcome to your Converter Program " );
  printf("%s\n","Press the number for convert" );
  printf("%s\n","1 for kms to miles" );
  printf("%s\n","2 for inches to foot" );
  printf("%s\n","3 for cms to inches" );
  printf("%s\n", "4 for pound to kgs");
  printf("%s\n","5 for inches to meters" );
  printf("%s\n","6 for exit " );



  int press;
  scanf("%d",&press);
  int w ;
  w = conveter(press);
  printf("%d\n",w );
  return 0;
}
