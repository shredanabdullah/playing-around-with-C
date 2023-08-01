#include <stdio.h>
#include <stdlib.h>
/*
(19) Write a program to display inverted half pyramid using stars pattern.
* * * * *
* * * *
* * *
* *
*
*/
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=x;i>0;i--){
        for(int h=0;h<i;h++){
              printf("*");
        }
        printf("\n");
        }
    return 0;
}
