#include <stdio.h>
#include <stdlib.h>
/*
(3) Write a C Function that check if the number if positive or negative.
*/
void sign(int x);
int main(void)
{
    int x;
    printf("enter number: ");
    scanf("%d",&x);
   sign(x);

    return 0;
}
void sign(int x){
if(x>=0)printf("positive number");
else printf("negative number");

}
