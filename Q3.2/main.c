#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
/*(2) Write a function which, given a string, return TRUE if all characters are distinct and FALSE if any character is repeated.*/
int isDistinct(char*,int);
int main(void)
{
    char str[SIZE];
    printf("Enter the string!\n");
    gets(str);
    int result=isDistinct(str,SIZE);
     if(result==1){
           printf("TRUE!\n");
    }
    else   printf("FALSE!\n");

    return 0;
}
int isDistinct(char* str,int size){
    int isDistinct=0;
    for(int i=0;i<size;i++){
        if(str[i]!=str[i+1]){
            isDistinct++;
        }
    }
    if(isDistinct==size){
            return 1;
    }
    else return 0;
}
