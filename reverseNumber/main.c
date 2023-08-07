#include <stdio.h>
#include <stdlib.h>
/*C program to reverse the order of the numbers stored in an array.*/
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
