#include <stdio.h>
#include <stdlib.h>
/*
(2) Write a C Function that takes one character and checks if it alphabet or not.
*/

int isChar(char x);
int main()
{
    char x;
    scanf("%c",&x);
    int y=isChar(x);
    if(y==1){
        printf("an alphabet");
    }
    else   printf("not an alphabet");
    return 0;
}
int isChar(char x){
if((x>=65&&x<=90)||(x>=97&&x<=122))
return 1;
else return 0;
}
