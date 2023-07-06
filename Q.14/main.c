#include <stdio.h>
#include <stdlib.h>
/*
(14) Write a program to display English alphabets from A to Z.
*/
int main()
{
    char x=65;
      printf("%c",x);
     for(int i=0;i<25;i++){
         x=x+1;
          printf("%c",x);
    }

    return 0;
}
