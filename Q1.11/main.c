#include <stdio.h>
#include <stdlib.h>
/*Check If The Number Is Palindrome Number*/
int main()
{
    int num,y;
    printf("enter the number: ");
    scanf("%d",&num);
    int temp=num;
    printf("enter its size: ");
    scanf("%d",&y);

    int last_digit,reversed=0;
    for(int i=0;i<y;i++){
        last_digit=temp%10;
        reversed=reversed*10+last_digit;
        temp=temp/10;
    }
printf("%d\n",reversed);
if(reversed==num)
{
printf("the number is Palindrome Number");
}
else  printf("the number is not Palindrome Number");
    return 0;
}
