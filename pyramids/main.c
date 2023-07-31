#include <stdio.h>
#include <stdlib.h>
/*
Write a program to display half pyramid using stars pattern.
*
* *
* * *
* * * *
* * * * *

*/
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
