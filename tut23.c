// #include <stdio.h>
//
// int main(int argc, char const *argv[]) {
//
//   float miles,foot,inches,kgs,meters;
//   miles = 0.621;
//   foot = 0.083;
//   inches = 0.393;
//   kgs = 0.453;
//   meters =0.025 ;
//
//   while (1) {
//     printf("%s\n","Welcome to your program " );
//     printf("%s\n","Enter the number you to Convert" );
//     int in;
//     scanf("%d",&in );
//     printf("%s\n","Ok enter your operator " );
//     printf("%s\n","1 for kms to miles" );
//     printf("%s\n","2 for inches to foot" );
//     printf("%s\n","3 for cms to inches" );
//     printf("%s\n", "4 for pound to kgs");
//     printf("%s\n","5 for inches to meters" );
//     printf("%s\n","6 for exit " );
//     int w ;
//     scanf("%d",&w );
//     if (w==6) {
//       printf("%s\n","Quitting the program");
//       break;
//     }
//     else if (w==1) {
//       printf("%f\n",in*miles );
//     }
//     else if (w==2) {
//       printf("%f\n",in*foot );
//     }
//     else if (w==3) {
//       printf("%f\n",in*inches );
//     }
//     else if (w==4) {
//       printf("%f\n",in*meters );
//     }
//     else if (w==5) {
//       printf("%f\n",in*meters );
//     }
//   }
//
//   return 0;
// }
//  *** Harry Solution  ***


#include <stdio.h>

int main()
{

    char input;
   float kmsToMiles = 0.621371;
   float inchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float inchesToMeters = 0.0254;
   float first, second;

   while (1)
   {
       printf("Enter the input character. q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");

       scanf(" %c", &input);
    //    printf("The character is '%c'", input);
       switch (input)
       {
       case 'q':
        printf("Quitting the program...");
        goto end;
        break;

        case '1':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * kmsToMiles;
        printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
        break;

        case '2':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * inchesToFoot;
        printf("%f Inches is equal to %f Foot\n", first, second);
        break;

        case '3':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * cmsToInches;
        printf("%f Cms is equal to %f Inches\n", first, second);
        break;

        case '4':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * poundToKgs;
        printf("%f Pounds is equal to Kgs %f \n", first, second);
        break;

        case '5':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * inchesToMeters;
        printf("%f inches is equal to %f meters \n", first, second);
        break;

       default:
       printf("In default now");
           break;
       }
   }
   end:

    return 0;
}
