#include <stdio.h>
#include <stdlib.h>
/*
(11) Print sum of first 100 integers. (With data validation)
*/
int main()
{
    int sum=0;
    for(int i=0;i<100;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
