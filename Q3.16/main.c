#include <stdio.h>
#include <stdlib.h>
/*(16) Write a C function that takes an array as input and reverse it. Example: Input : 1,2,3,4,5 Output: 5,4,3,2,1*/
void reverseNumber(int*,int);
int main()
{

    printf("enter size: ");
    int y;
    scanf("%d",&y);
    int arr[y];
    printf("enter numbers: ");
    for(int i=0;i<y;i++){
    scanf("%d",&arr[i]);
}
   reverseNumber(arr,y);

   for(int i=0;i<y;i++){
   printf("%d",arr[i]);
}
    return 0;
}
void reverseNumber(int* number,int size){
    int num[size];
for(int i=0;i<size;i++){
    num[i]=number[size-1-i];
}
for(int i=0;i<size;i++){
    number[i]=num[i];
}
}
