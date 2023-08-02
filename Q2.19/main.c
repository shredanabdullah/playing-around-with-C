#include <stdio.h>
#include <stdlib.h>
/*(19) Write a C function that return 0 if a given number is a power of 3, otherwise return 1 (except 3 to the power of 0).*/

void isPower(int x);
int main()
{
    isPower(90);
    return 0;
}
void isPower(int x){
    int reminder;
while(x!=1){
    reminder=x%3;
    if(reminder!=0)break;
    x=x/3;
}
 if(reminder==0)printf("is Power");
 else printf("is not Power");

}
