#include <stdio.h>
#include <stdlib.h>
/*
(4) Write a program that reads the radius of a circle and calculates the area and circumference then prints the results.
*/
int main()
{
    printf("Enter the redius\n");
    float r;
    scanf("%f",&r);
    float area=(22.0/7.0)*r*r;
    float circumference=2.0*(22.0/7.0)*r;
    printf("area= %.1f, circumference= %.1f",area,circumference);
    return 0;
}
