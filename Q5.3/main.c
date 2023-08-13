#include <stdio.h>
#include <stdlib.h>
/*3. C function to add two complex numbers by passing two structure to a function and display the results.*/
struct complex{
    int real;
    int img;
}num1,num2;
void displayComplex(struct complex num1,struct complex num2){

printf("real part= %d\n",num1.real+num2.real);
printf("img part= %d",num1.img+num2.img);
}

int main()
{
    num1.real=1;num2.real=3;
    num1.img=1;num2.img=3;
    displayComplex(num1,num2);
    return 0;
}
