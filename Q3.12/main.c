#include <stdio.h>
#include <stdlib.h>
/*(12) Write a function to find the length of a string.*/
int countLength(char*);
int main()
{
    char arr[1000];
    printf("Enter a string: ");
    gets(arr);
    int count=countLength(arr);
    printf("The length of the string: %d\n",count);
    return 0;
}
int countLength(char* string){
    int i=0,count=0;
while(string[i]!='\0'){
    count++;
    i++;
}
return count;
}
