#include <stdio.h>
#include <stdlib.h>
/*(9)Write a C Function that swaps the value of two integer numbers.*/
void swap(int num1,int num2);
int main()
{   int x,y;
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);
    swap(x,y);
    return 0;
}
void swap(int num1,int num2){
int temp=num1;
num1=num2;
num2=temp;
printf("the first number becomes: %d and the second number becomes: %d",num1,num2);
}
