#include <stdio.h>
#include <stdlib.h>
/*(17) Given two integers: L and R,
Find the maximal value of A xor B where A and B satisfy the condition L =< A <= B <= R
Constrains: 1 <= L <= R <= 1000 Input format:
the input contains two lines first line contains L and next line contains R.
Output format: The maximum value of A xor B*/
void findMaxXor(int l,int r);
int main()
{
     int x,y;
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);
    findMaxXor(x,y);
    return 0;
}
void findMaxXor(int l,int r){
    int count,max=0;
    max=l^r;
for(int i=l;i<=r;i++){
    for(int j=r;j>=l;j--){
        count=i^j;
        if(max<=count){
                max=count;
                printf("(%d,%d) , result=%d\n",i,j,max);
        }
    }
}
}
