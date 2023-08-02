#include <stdio.h>
#include <stdlib.h>
/*(11) Write a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2. 0, 10 and 30 are not power of 2.*/
int isPower(int x);
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    int result=isPower(x);
    printf("%d\n",result);
    return 0;
}
int isPower(int num){
 if((num/2)%2==0||num==2){
    return 1;
 }else return 0;
}
