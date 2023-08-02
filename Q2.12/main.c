#include <stdio.h>
#include <stdlib.h>
/*(12) Write a C function that calculates the required heater activation time according to the input temperature of water.
 - if input temperature is from 0 to 30, then required heating time = 7 mins.
 - if input temperature is from 30 to 60, then required heating time = 5 mins.
 - if input temperature is from 60 to 90, then required heating time = 3 mins.
 - if input temperature is more than 90, then required heating time = 1 mins.
 - if temperature is invalid (more than 100), return 0
 Example: Input = 10 → output = 7 Input = 35 → output = 5*/
 int calculateHeatTime(int x);
int main()
{
    int x;
    printf("enter the temperature: ");
    scanf("%d",&x);
    int result=calculateHeatTime(x);
    printf("%d\n",result);
    return 0;
}
int calculateHeatTime(int x){
if(x>=0&&x<=30){
    return 7;
}
else if(x>=30&&x<=60){
    return 5;
}
else if(x>=60&&x<=90){
    return 3;
}
else if(x>90&&x<=100){
   return 1;
}
else if(x>100){
   return 0;
}
}
