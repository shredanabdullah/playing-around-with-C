#include <stdio.h>
#include <stdlib.h>
/*Finding the largest and the smallest elements in an array using the pointers.
*/
int main()
{
    int arr[17]={10,4,5,2,7,54,7,8,5,6,23,24,-1,54,657,8,9};
    int* ptr=arr;
    int min,max;
    min=max=arr[0];
    for(int i=0;i<17;i++){
        if(ptr[i]>=max){
            max=ptr[i];
        }
        if(arr[i]<=min){
            min=ptr[i];
        }
    }

    printf("the largest element= %d,and the smallest element= %d\n",max,min);
    return 0;
}
