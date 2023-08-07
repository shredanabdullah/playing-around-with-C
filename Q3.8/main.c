#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*(8) Write a program that computes the nth term of the geometric series: 1, 3, 9, 27, …
Run the program to compute the 10th term of the given series.*/
int main()
{
    int n;
    printf("enter the index: ");
    scanf("%d",&n);
    int nthTerm=pow(3, (n-1));;
    printf("the nth term= %d\n",nthTerm);
    return 0;
}
