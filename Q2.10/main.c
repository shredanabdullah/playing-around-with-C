#include <stdio.h>
#include <stdlib.h>
/*
(10) You are designing a poster which prints out numbers with a unique style applied to each of them.
The styling is based on the number of closed paths or holes present in a giver number.
The number of holes that each of the digits from 0 to 9 have are equal to the number of closed paths in the digit.
Their values are:
• 1, 2, 3, 5 and 7 = 0 holes.
• 0, 4, 6, and 9 = 1 hole.
• 8 = 2 holes.
Given a number, you must determine the sum of the number of holes for all of its digits. For example, the number 819 has 3 holes.
Function Description
Complete the function countHoles. The function must return an integer denoting the total number of holes in num.
*/
int countHoles(int x);
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int result=countHoles(x);
    printf("%d\n",result);
    return 0;
}
int countHoles(int num){
    int last_digit,counter=0;
 while(num!=0){
    last_digit=num%10;
    if(last_digit==1||last_digit==2||last_digit==3||last_digit==5||last_digit==7){
         counter=counter+0;
    }
    else if(last_digit==0||last_digit==4||last_digit==6||last_digit==9){
        counter=counter+1;
    }
    else if(last_digit==8){
        counter=counter+2;
    }
    num=num/10;
 }return counter;
}
