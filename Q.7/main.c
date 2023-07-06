#include <stdio.h>
#include <stdlib.h>
/*
(7) Write a program that takes three integers, and prints out the smallest number.
*/
int main()
{
    int x,y,z;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    printf("Enter the third number: ");
    scanf("%d",&z);
    int min;
    min=x;
    if(min>y) min=y;
    else if(min>z)min=z;
    printf("the smallest number is %d",min);
    return 0;
}
