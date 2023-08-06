#include <stdio.h>
#include <stdlib.h>
/*(4) Write a C Function that return the addition or subtraction or multiplication or division for two numbers.
 The function should take the required operation and two numbers as arguments.
  It also should check that the input operation is one of those operation
  that mentioned before and if not it should return error.
  The function should be implemented using switch case.
  */
void calc(char op,int num1,int num2);
int main()
{
    int num1,num2;
    char op;
    printf("enter the operation(+,-,*,/): ");
    scanf("%c",&op);
    printf("enter first operand: ");
    scanf("%d",&num1);
    printf("enter second operand: ");
    scanf("%d",&num2);
    calc(op,num1,num2);

    return 0;
}
 void calc(char op,int num1,int num2){
 switch(op){
      case '+': printf("result is %d\n",num1+num2);break;
      case '-': printf("result is %d\n",num1-num2);break;
      case '*': printf("result is %d\n",num1*num2);break;
      case '/': if(num2==0){
          printf("error division by zero\n");break;
      }
                else printf("result is %d\n",num1+num2);break;
      default:printf("error no such operator exists\n");break;

 }
 }
