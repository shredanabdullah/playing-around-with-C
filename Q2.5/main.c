#include <stdio.h>
#include <stdlib.h>
/*(5) Write a C function to check if the input is an even number or an odd number,
if even number return 0 if odd number return 1.
Example: Input 7, Output = 1 (Odd) Input 6, Output = 0 (Even)*/

int isEven(int num);
int main()
{
    int x;
    printf("enter number: ");
    scanf("%d",&x);
    int output=isEven(x);
    if(output==0)
        printf("even");
    else printf("odd");
    return 0;
}
int isEven(int num){
if(num%2==0){
return 0;
}else return 1;
}
