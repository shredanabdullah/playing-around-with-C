#include <stdio.h>
#include <stdlib.h>
/*
(1) Write a C Function that prints the cube of any number.
*/
void print_cube(int num);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
   print_cube(x);
    return 0;
}
void print_cube(int num){
int result=num*num*num;
printf("%d",result);
}
