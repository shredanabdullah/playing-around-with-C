#include <stdio.h>
#include <stdlib.h>
/*C program to read a 5x5 array of integers and then print the row sum and column sum.*/

int main()
{

    int multidarr[5][5];
    printf("enter numbers: ");
    for(int i=0;i<5;i++){
        for(int e=0;e<5;e++){
            scanf("%d",&multidarr[i][e]);
        }
    }
    int rowSum=0,columnSum=0;
    for(int i=0;i<5;i++){
        for(int e=0;e<5;e++){
             rowSum=rowSum+ multidarr[i][e];
        }
        printf("The row sum %d\n",rowSum);
        rowSum=0;
    }

    for(int i=0;i<5;i++){
        for(int e=0;e<5;e++){
             columnSum=columnSum+ multidarr[e][i];
        }
         printf("The column sum %d\n",columnSum);
         columnSum=0;
    }


    return 0;
}
