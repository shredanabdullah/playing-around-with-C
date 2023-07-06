#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, y;
	printf("enter number 1: ");
	scanf("%d", &x);
	printf("enter number 2: ");
    scanf("%d", &y);
	int Result = (((x + y) * 3) - 10);
    printf("%d", Result);
    return 0;
}
