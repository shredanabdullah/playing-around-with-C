#include <stdio.h>
#include <stdlib.h>
/*(11) Write a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2. 0, 10 and 30 are not power of 2.*/
void isPower(int x);
int main()
{
    isPower(350,7);
    return 0;
}
void isPower(int x){
    int reminder;
while(x!=1){
    reminder=x%2;
    x=x/2;
}
 if(reminder==0)printf("is Power");
 else printf("is not Power");

}
