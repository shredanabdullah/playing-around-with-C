#include <stdio.h>
#include <stdlib.h>
/*(7) Write a program that computes the nth term of the arithmetic series: 1, 3, 5, 7, 9, …
Run the program to compute the 100th term of the given series.*/

int main()
{
    int n;
    printf("enter the index: ");
    scanf("%d",&n);
    int nthTerm=1+(n-1)*2;
    printf("the nth term= %d\n",nthTerm);
    return 0;
}
