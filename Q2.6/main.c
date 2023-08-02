#include <stdio.h>
#include <stdlib.h>
/*(6) Write C Function that converts the any letter from lowercase to uppercase.*/
void toUpper(char x);
int main()
{
    char x;
    printf("enter a letter: ");
    scanf("%c",&x);
    toUpper(x);
    return 0;
}
void toUpper(char x){
    if(x>=97&&x<=122){
    char result=x-32;
    printf("%c",result);
    }
    else if(x>=65&&x<=90)
        printf("the letter is already uppercase");
}
