#include <stdio.h>
#include <stdlib.h>
/*1. C Program to store information (name, roll and marks) for a student using structure and display it.*/
struct student{
char name[25];
char roll[25];
int marks[7];
}student;
int main()
{
    strcpy(student.name,"sherry");
    strcpy(student.roll,"networks");
    for(int i=0;i<7;i++){
      student.marks[i]=60;
    }
     printf("roll: %s\n",student.roll);
     printf("name: %s\n",student.name);
    //student.marks={59,98,78,100};
    for(int i=0;i<7;i++){
      printf("marks: %d\n",student.marks[i]);
    }

    return 0;
}
