#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
(8) Write a program that reads a positive integer and checks if it is a perfect square.
*/
int main()
{
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);
    // Calculate the square root of the number
    double squareRoot = sqrt(x);
    //we need to check it is positive
    if(x<=0){
        printf("the entered number is not positive");
    }
    else{
    // Check if the square root is an integer
    if (squareRoot == (int)squareRoot) printf("It is a perfect square.\n");
    else printf("It is not a perfect square.\n");
    }

    return 0;
}
