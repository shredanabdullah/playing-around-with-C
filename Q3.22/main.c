#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
/*(22) Write a c function that removes the repeated number of an input sorted array and return a new array without the repeated numbers.
The function shall return error if the size of the input array is ZERO. The function takes four inputs:
a. Old array.
b. Old array size.
c. New array (empty array).
d. The size of the new array after fill it in the function.
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
Example:
arr1 = {1,2,3,3,3,4,4,5,5,5} → arr2 = {1,2,3,4,5}*/
void removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new);
int main()
{
     printf("enter numbers: ");
    int arr1[SIZE];
    int arr2[SIZE];
    for(int i=0;i<SIZE;i++){
    scanf("%d",&arr1[i]);
}
    int new_size = 0;
    removeDuplicates(arr1, SIZE, arr2, &new_size);
    for (int i = 0; i < new_size; i++) {
        printf("%d", arr2[i]);
    }

    return 0;
}
void removeDuplicates(int arr_old[], int n_old, int arr_new[],int *n_new){
    int isRepeated=0;
    *n_new=0;
    int current=arr_old[0];
    int next=arr_old[1];
for(int i=0;i<n_old;i++){
 if(current!=next){
    arr_new[(*n_new)++]=current;
    current=arr_old[i+1];
    next=arr_old[i+2];
 }
 else if(current==next&&isRepeated==0){
    isRepeated=1;
     arr_new[(*n_new)++]=current;
    current=arr_old[i+1];
    next=arr_old[i+2];

 }
  else if(current!=next&&isRepeated==1){
     arr_new[(*n_new)++]=next;
    current=arr_old[i+1];
    next=arr_old[i+2];
     isRepeated=0;

 }
}

}
