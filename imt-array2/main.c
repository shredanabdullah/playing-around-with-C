#include <stdio.h>
#include <stdlib.h>
/*Write C code that manage a small school.
The school has 3 classes each class contains 10 students.
Define three arrays for the three classes each one with a length of 10.
Save a random numbers in all array elements to indicate the students grade.
The program will calculate and display the following statistics:
1- Number of passed students
2- Number of Failed students
3- Highest grade
4- Lowest grade
5- Average grade Knowing that the total grade is from 100 and the minimum passing grade is 50.*/
int main()
{
    int class1[10]={99,80,40,50,98,65,98,23,76,76};
    int class2[10]={95,86,70,40,98,35,58,50,76,96};
    int class3[10]={43,80,40,50,100,65,98,23,94,76};
    int countPassed1=0,countFailed1=0,countPassed2=0,countFailed2=0,countPassed3=0,countFailed3=0,sum1=0,sum2=0,sum3=0;
    int max1,min1, max2,min2, max3,min3,max,min,countPassedTotal,countFailedTotal;
    int average;
    max1=class1[0];
    min1=class1[0];
   for(int i=0;i<10;i++){
     if(class1[i]>=50){
        countPassed1++;
     }
     else if(class1[i]<50){
        countFailed1++;
     }
       if(class1[i]>=max1){
        max1=class1[i];
     }
       if(class1[i]<=min1){
       min1=class1[i];
     }
     sum1=sum1+class1[i];
   }

     max2=class2[0];
     min2=class2[0];
    for(int i=0;i<10;i++){
     if(class2[i]>=50){
        countPassed2++;
     }
     else if(class2[i]<50){
        countFailed2++;
     }
      if(class2[i]>=max2){
        max2=class2[i];
     }
       if(class2[i]<=min2){
       min2=class2[i];
     }

      sum2=sum2+class2[i];
   }

    max3=class3[0];
    min3=class3[0];
    for(int i=0;i<10;i++){
     if(class3[i]>=50){
        countPassed3++;
     }
     else if(class3[i]<50){
        countFailed3++;
     }

       if(class3[i]>=max3){
        max3=class3[i];
     }
       if(class3[i]<=min3){
       min3=class3[i];
     }

      sum3=sum3+class3[i];
   }

   max=max1;min=min1;

   if(min2<=min)min=min2;
   else if(min3<=min)min=min3;

   if(max2>=max)max=max2;
   else if(max3>=max)max=max3;
   average=(sum1+sum2+sum3)/30;
   countPassedTotal=countPassed1+countPassed2+countPassed3;
   countFailedTotal=countFailed1+countFailed2+countFailed3;
   printf("Number of passed students is: %d,Number of Failed students: %d,Highest grade is: %d,Lowest grade is: %d,average is: %d",countPassedTotal,countFailedTotal,max,min,average);
    return 0;
}
