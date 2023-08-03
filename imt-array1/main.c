#include <stdio.h>
#include <stdlib.h>
/*Write a C code that ask the user to enter 10 values and save them in an array using a for loop.
Then print the minimum and the maximum of the values.*/
int main()
{
    printf("enter 10 values: ");
    int x;
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&x);
        arr[i]=x;
    }
    int max,min;
     max=arr[0];
     min=arr[0];
    for(int h=0;h<10;h++){
        if(arr[h]>=max)
            max=arr[h];
        if(arr[h]<=min)
            min=arr[h];
    }
    printf("the minimum is %d and the maximum is %d ",min,max);
    return 0;
}
