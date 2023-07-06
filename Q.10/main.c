#include <stdio.h>
#include <stdlib.h>
/*
(10) Write a program to make a simple calculator using switch-case.
  The calculator takes the operation (+ or – or * or /)
  and takes the two input arguments and print the results.
*/
int main()
{
    char x;
    float y,z,result;

    printf("Enter the operation: ");
    scanf("%c",&x);
    printf("Enter the first operand: ");
    scanf("%f",&y);
    printf("Enter the second operand: ");
    scanf("%f",&z);
   switch (x) {
    case 43:
       result=y + z;
       printf("%.1f",result);
        break;
    case 45:
       result=y - z;
       printf("%.1f",result);
        break;
    case 42:
        result=y * z;
       printf("%.1f",result);
        break;
    case 47:
       result=y/z;
       printf("%.1f",result);
        break;
}
    return 0;
}
