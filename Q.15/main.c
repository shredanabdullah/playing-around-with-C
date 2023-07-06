#include <stdio.h>
#include <stdlib.h>
/*
(15) Write a program to calculate the power of a number. The number and its power are input from user.
*/
int main()
{
    int x, y;
    int z=1;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("Enter its power: ");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++){
        z= z* x;
    }
    printf("%d ", z);
    return 0;
}
