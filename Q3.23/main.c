#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
/*(23) Write a C function to find the frequency of characters in a string.
• Input the string from the user.
• Traverse the string, character by character and store the count of each of the characters in an array.
• Print the array that contains the frequency of all the characters.*/
void findFrequency(char* str);
int main()
{
    char str[SIZE];
    printf("Enter a string: ");
    gets(str);
    findFrequency(str);
    return 0;
}
void findFrequency(char* str){
    int arr[100];
    int x =0;
for(int i =0;str[i]!='\0';i++){
        int frequency=0;
    for(int j=0;str[j]!='\0';j++){
        if(str[i]==str[j])frequency++;
    }
    arr[i]=frequency;
    x++;
}
for(int i=0;i<x;i++){
    printf("%d",arr[i]);
}
}
