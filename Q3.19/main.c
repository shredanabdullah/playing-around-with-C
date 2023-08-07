#include <stdio.h>
#include <stdlib.h>
/*(19) Write a C function that compare between 2 arrays with the same length. It shall return 0 if the two arrays are identical and 1 if not.*/
int strCompare(char*,char*);
int main()
{
   // printf("enter the size: ");
    //int x;
    //scanf("%d",&x);
    char arr1[1000];
    printf("Enter the first string: ");
    gets(arr1);
    char arr2[1000];
    printf("Enter the second string: ");
    gets(arr2);
    //char arr1[x];char arr2[x];
    //printf("enter the first array: ");
    //gets(arr1);
    //printf("enter the second array: ");
    //gets(arr2);
    printf("%d\n",strCompare(arr1,arr2));
    return 0;
}
int strCompare(char* arr1,char* arr2){
    int isIdentical=0;
for(int i=0;i<arr1[i]!='\0';i++){
    if(arr1[i]!=arr2[i]){
        isIdentical=1;
    }
    else  isIdentical=0;
}
 if(isIdentical==1){
        return 1;
    }
    else  return 0;
}
