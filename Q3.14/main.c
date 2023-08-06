#include <stdio.h>
#include <stdlib.h>
/*(14) Write a function to reverse a string by passing it to a function.*/
void reverseString(char *,int);
int main()
{
    printf("enter size: ");
    int y;
    scanf("%d",&y);

    while (getchar() != '\n');
    /*Changed the loop in the main function to read characters
    using getchar() instead of scanf("%c", &arr[i]).
    This change is important because scanf considers whitespace characters (including newline) as valid input characters,
    which could lead to unexpected behavior.*/
    char arr[y];
    printf("enter string: ");
    for(int i=0;i<y;i++){
    scanf("%c",&arr[i]);
}
   reverseString(arr,y);

   for(int i=0;i<y;i++){
   printf("%c",arr[i]);
}
    return 0;
}
void reverseString(char * str,int size){
char arr[size];
for(int i=0;i<size;i++){
    arr[i]=str[size-1-i];
}
for(int i=0;i<size;i++){
    str[i]=arr[i];
}
}
