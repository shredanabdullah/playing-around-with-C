#include <stdio.h>
#include <stdlib.h>
/*Check If The Number Is Strong Number*/
int fact(int num);
int main()
{
    int num, size;
    printf("enter the number: ");
    scanf("%d",&num);
    int temp =num;
    printf("enter the size: ");
    scanf("%d",&size);

    int last_digit,accumulitive_sum=0;
    for(int i=0;i<size;i++){
         last_digit=temp%10;
         accumulitive_sum=accumulitive_sum+fact(last_digit);
         temp=temp/10;
    }

    printf("%d\n",accumulitive_sum);
    if(accumulitive_sum==num) printf("The Number Is Strong Number");
    else printf("The Number Is Not Strong Number");
    return 0;
}
int fact(int num){
int result=1;
for(int i=1;i<=num;i++){
    result=result*i;
}
return result;
}
