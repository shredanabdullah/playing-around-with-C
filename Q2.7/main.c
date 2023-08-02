#include <stdio.h>
#include <stdlib.h>
/*(7) Write a C Function that reads two integers
 and checks if the first is multiple of the second.*/
void isMultiple(int x,int y);
int main()
{
    int x,y;
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);
    isMultiple(x,y);
    return 0;
}
void isMultiple(int num1,int num2){
if(((float)num1/num2)-(num1/num2)==0.0)printf("the first number is multiple of the second number");
else printf("the first number is not multiple of the second number");

}
