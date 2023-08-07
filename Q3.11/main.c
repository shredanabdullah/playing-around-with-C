#include <stdio.h>
#include <stdlib.h>
/*(11) Write a function that prints the frequency of a certain character in a string.*/
int countFrequency(char*,int,char);
int main()
{
    int x;
    printf("enter the size: ");
    scanf("%d",&x);
     printf("enter the string: ");
    while (getchar() != '\n');
    char arr[x];
    for(int i=0;i<x;i++){
     scanf("%c",&arr[i]);
 }
 while (getchar() != '\n');
    char ch;
    printf("enter the letter: ");
    scanf("%c",&ch);

    int count=countFrequency(arr,x,ch);
    printf("the frequency of a character: %d\n",count);
    return 0;
}
int countFrequency(char* str,int size,char letter){
    int count=0;
 for(int i=0;i<size;i++){
    if(str[i]==letter){
        count++;
    }
 }
 return count;
}
