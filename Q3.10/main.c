#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
/*(10) Write a function which, given a string, converts all uppercase letters to lowercase, leaving the others unchanged.*/
void toLowercase(char* str,int size);
int main()
{
    char arr[SIZE];
    printf("Enter a string: ");
    gets(arr);
    toLowercase(arr,SIZE);
    for(int i=0;i<SIZE;i++){
   printf("%C",arr[i]);
 }
    return 0;
}
void toLowercase(char* str,int size){
 for(int i=0;i<size;i++){
    if((str[i]>=65&&str[i]<=90)){
        str[i]=str[i]+32;
    }
 }
}
