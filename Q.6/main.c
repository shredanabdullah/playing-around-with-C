#include <stdio.h>
#include <stdlib.h>
/*
(6) Write a program that print the relation between two integer number if those numbers are equal, not equal and which one contain the higher value.
*/
int main()
{
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    if(x==y)printf("those numbers are equal");
    else{
       if(x>y)printf("those numbers are not equal, the first number contains the higher value");
       else printf("those numbers are not equal, the second number contains the higher value");
    }

    return 0;
}
