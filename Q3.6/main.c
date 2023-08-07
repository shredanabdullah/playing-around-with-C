#include <stdio.h>
#include <stdlib.h>
/*(6) Write a C function to return the index of LAST occurrence of a number in a given array.
Array index start from 0. If the item is not in the list return -1.
(Linear Search Algorithm) Example:
Array = {1,2,3,4,4,4}
The required number is 4 it should return 5*/
int lastOccurrence(int*,int,int);
int main()
{
    int x;
    printf("enter the array size: ");
    scanf("%d",&x);
     int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int arr[x];
    printf("enter the array: ");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }

    printf("The LAST occurrence is: %d\n",lastOccurrence(arr,x,num));
    return 0;
}
int lastOccurrence(int* arr,int size,int num){
    int occurrence=-1;
for(int i=0;i<size;i++){
    if(arr[i]==num)
    {
        occurrence=i;
    }
}
return occurrence;
}
