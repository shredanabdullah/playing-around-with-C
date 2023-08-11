#include <stdio.h>
#include <stdlib.h>
/*Finding the mid of an array using the returning pointers.*/
int* midArray(int*arr,int size);
int main()
{
    int arr[5]={1,2,3,4,5};
int *ptr=midArray(arr,5);
    printf("%d\n",*ptr);
    return 0;
}
int* midArray(int*arr,int size){
return &arr[(size-1)/2];
}
