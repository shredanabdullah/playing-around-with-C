#include <stdio.h>
#include <stdlib.h>
/*
(3) Write a program for converting temperature from degrees Celsius to degrees Fahrenheit, given the formula: F = C x 95 + 32
*/
int main()
{
    printf("Enter the temperature in degrees Celsius\n");
    float c;
    scanf("%f",&c);
    float f = c * 95 + 32;

    printf("%.1f",f);
    return 0;
}
