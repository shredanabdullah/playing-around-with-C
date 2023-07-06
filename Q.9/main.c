#include <stdio.h>
#include <stdlib.h>
/*
(9) Write a program that reads a student grade percentage
and prints "Excellent" if his grade is greater than or equal 85,
"Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50.
*/
int main()
{
    float x;
    printf("Enter a student grade percentage\n");
    scanf("%f",&x);
    if(x>=85.0)printf("Excellent");
    else if(x>=75.0)printf("Very Good");
    else if(x>=65.0)printf("Good");
    else if(x>=50.0)printf("Pass");
    else printf("Fail");
    return 0;
}
