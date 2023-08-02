#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*(13) In this challenge write a function to add two floating numbers.
Determine the integer floor of the sum.
The floor is the truncated float value, anything after the decimal point is dropped.
For instance floor(1.1+3.05)=floor(4.15)=4*/
int add(float,float);
int main()
{
    float x,y;
    printf("enter the first number: ");
    scanf("%f",&x);
    printf("enter the second number: ");
    scanf("%f",&y);
    int result=add(x,y);
    printf("%d\n",result);
    return 0;
}
int add(float num1,float num2){
float result=num1+num2;
return floor(result);
}
