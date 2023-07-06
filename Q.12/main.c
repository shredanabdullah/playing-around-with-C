#include <stdio.h>
#include <stdlib.h>
/*
(12) Write a program that reads a positive integer and computes the factorial.
*/
int main()
{
    int x;
    printf("Enter a positive integer: ");
    scanf("%d",&x);
    int sum=1;
    for(int i=1;i<(x+1);i++){
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}
