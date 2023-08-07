#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 4
/*(1) The sum of an array is the sum of its individual elements.
For example, if an array is numbers = {1, 2, 3, 4}, the sum of the array is 1+2+3+4 = 10.
Function Description: Complete the function summation.
The function must return the integer sum of the numbers array.
int summation(int numbers_size, int* numbers)*/
int summation(int numbers_size, int* numbers);
int main()
{

	int arr[ARR_SIZE];
	printf("Enter the array: \n");
	for(int i=0;i<ARR_SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}

	int res = summation(ARR_SIZE,arr);

	printf("The Sum of the array elements: %d",res);
    return 0;
}
int summation(int numbers_size, int* numbers){
    int sum=0;
for(int i=0;i<numbers_size;i++){
    sum=sum+numbers[i];
}
return sum;
}
