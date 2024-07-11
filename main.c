#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
(1) Write a program that take two integers from the user and print the results of this equation:
Result = ((num1 + num2) * 3) – 10

long int sum(int num1, int num2){
    long int result = ((num1 + num2) * 3) - 10;
    return result;
}

int main()
{
    printf("enter the first number: ");
    int x;
    scanf("%d",&x);

    printf("enter the second number: ");
    int y;
    scanf("%d",&y);

    printf("%d",sum(x,y));

    return 0;
}
*/


/*
(2) Write a program that print your name and your grade in a new line.


int main()
{
    printf("shredan abdullah\n");
    printf("gpa:3\n");


    return 0;
}
*/

/*(3) Write a program for converting temperature from degrees Celsius to degrees Fahrenheit, given the formula: F = C x 95 + 32
int convertTemp(int C){
    int F = C * 95 + 32;
    return F;
}
int main(){
    printf("enter the temperature degrees in Celsius: ");
    int c;
    scanf("%d",&c);
    printf("%d\n",convertTemp(c));
    return 0;
}
*/


/*(4) Write a program that reads the radius of a circle and calculates the area and circumference then prints the results.

int area(int r){
    int result=(3.14* r*r);
    return result;
}
int circumference(int r){
    int result=(2*3.14*r);
    return result;
}
int main(){
    printf("enter the radius:");
    int r;
    scanf("%d",&r);
    printf("the area: %d\nthe circumference: %d",area(r),circumference(r));
   // printf("\n");
   // printf("the circumference: %d",circumference(r));
    return 0;
}
*/


/*(5) Write a program to print the ASCII value of a character input by the user.

int main(){
    printf("enter the character: ");
    int c;
    scanf("%c",&c);
    printf("%d",c);
    return 0;
}
*/


/*(6) Write a program that print the relation between two integer number if those numbers are equal, not equal and which one contain the higher value.
void main(){
    printf("enter the first number: ");
    int x,y;
    scanf("%d",&x);
     printf("enter the second number: ");
    scanf("%d",&y);
    if(x==y){
        printf("two numbers are equal");
    }
    else{
        if(x>y)printf("the first number is higher");
        else printf("the second number is higher");
    }
}
*/


/*(7) Write a program that takes three integers, and prints out the smallest number.
void print(int x,int y,int z){
    if(x<=y && x<=z){printf("the smallest number: %d",x);}
    else if(y<=x && y<=z){printf("the smallest number: %d",y);}
    else if(z<=y && z<=x){printf("the smallest number: %d",z);}
}
void main(){
    print(4,6,7);
}
*/

/*(8) Write a program that reads a positive integer and checks if it is a perfect square.

void main(){
    printf("enter a positive integer: ");
    int x;
    scanf("%d",&x);
    //printf("%d",sqrt(6));
    if(sqrt(x)==(int)sqrt(x)){
        printf("the number is a perfect square");
    }
    else{
        printf("the number is not a perfect square");
    }
}*/

/*(9) Write a program that reads a student grade percentage and prints "Excellent"
if his grade is greater than or equal 85,
"Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50.
void print(int grade){
    if(grade>=85)printf("Excellent");
    else if(grade>=75)printf("Very Good");
    else if(grade>=65)printf("Good");
    else if(grade>=50)printf("Pass");
    else if(grade<50)printf("fail");
}
void main(){
    printf("enter the grade:");
    int x;
    scanf("%d",&x);
    print(x);
}*/

/*(10) Write a program to make a simple calculator using switch-case. The calculator takes the operation (+ or – or * or /) and takes the two input arguments and print the results.
int calculator(char operation,int firstOperand, int secondOperand){
    switch(operation){
    case '+': return firstOperand+secondOperand; break;
    case '-': return firstOperand-secondOperand; break;
    case '*':return firstOperand*secondOperand; break;
    case '/':return firstOperand/secondOperand; break;
    }
}
void main(){
    printf("enter the grade:");
    char op;
    scanf("%c",&op);
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d",calculator(op,x,y));
}*/



/*(11) Print sum of first 100 integers. (With data validation)
void main(){
    for(int i=1;i<=100;i++){
        printf("%d\n",i);
    }

}*/


/*(12) Write a program that reads a positive integer and computes the factorial.

void main(){
    printf("enter the number: ");
    int x;
    scanf("%d",&x);
    int factorial=1;
    if(x==0) printf("%d",1);
    else{
        for(int i=1;i<=x;i++){
        factorial=factorial*i;
    }
    printf("%d",factorial);
    }
}*/


/*(13) Write a program that reads a positive integer and checks if it is a prime.
void main(void){
    int x;
    int isPrime = 1; // Assume the number is prime

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &x);

    // Check if the number is less than or equal to 1
    if (x <= 1) {
        printf("Not prime\n");
        return 0;
    }

    // Check divisibility from 2 to the square root of x
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            isPrime = 0; // Not a prime number
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

}*/

/*(14) Write a program to display English alphabets from A to Z.
void main(void){
   for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c \n", ch);
    }
}*/

/*(15) Write a program to calculate the power of a number. The number and its power are input from user.
void main(void){
    printf("enter the number:");
    int num;
    scanf("%d",&num);

    printf("enter the power:");
    int power;
    scanf("%d",&power);
    int result=1;
    for(int i=0;i<power;i++){
        result*=num;
    }
    printf("%d",result);
}
*/
/*(16) Write a program to reverse a number.
void main(void){
    printf("enter the number:");
    int num;
    scanf("%d",&num);
    int count =0;
    int tempNum=num;
    while(num/10!=0){
        count++;
        num=num/10;
    }
    count++;
    //printf("%d\n",count);
    int newNum=0;
    for(int i=1;i<count;i++){
         int digit=tempNum%10;
         newNum+=digit*pow(10,count-i);
         tempNum=tempNum/10;
    }
    int digit=tempNum%10;
    newNum+=digit;

    printf("%d",newNum);
}*/

/*(17) Write a program to count number of digits in a decimal number.
void main(void){
    printf("enter the number:");
    int num;
    scanf("%d",&num);
    int count=0;
    while(num/10!=0){
        count++;
        num=num/10;
    }
    count++;
    printf("%d",count);
}*/




////////////////////////////////////////////////////////////////////////
/*(1) Write a C Function that prints the cube of any number.
void cube(int num){
    printf("%d",(num*num*num));
}
void main(void){
    cube(2);
}*/


/*(2) Write a C Function that takes one character and checks if it alphabet or not.
void checkchar(char ch){
    if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))printf("alphabet");
    else printf("not alphabet");
}
void main(void){
    checkchar('t');
}*/


/*(3) Write a C Function that check if the number if positive or negative.
void checkSign(int num){
    if(num>=0) printf("pos");
    else printf("neg");
}
void main(void){
    checkSign(0);
}
*/

/*(4) Write a C Function that return the addition or
subtraction or multiplication or division for two numbers.
The function should take the required operation and two numbers as arguments.
It also should check that the input operation is one of those operation that mentioned
 before and if not it should return error. The function should be implemented using switch case.
 void main(void){

}

 */
/*(5) Write a C function to check if the input is an even number or an odd number,
if even number return 0 if odd number return 1. Example: Input 7, Output = 1 (Odd) Input 6, Output = 0 (Even)
int isEven(int num){
    if(num%2==0)return 0;
    else return 1;
}
void main(void){
    printf("%d",isEven(9));
}*/

/*(6) Write C Function that converts the any letter from lowercase to uppercase.
char convert(char ch){
    return ch-32;
}
void main(void){
    //printf("%d",'!');
    printf("%c",convert('a'));

}*/

/*(13) In this challenge write a function to add two floating numbers.
Determine the integer floor of the sum. The floor is the truncated float value,
anything after the decimal point is dropped. For instance floor(1.1+3.05)=floor(4.15)=4
int add(float x,float y){
    int result=x+y;
    return result;
}

void main(void){
printf("%d\n",add(-1.1,-3.05));
printf("%d",floor(-1.1-3.05));
}*/

/*(14) Write a C Function that calculate the Fibonacci series using recursive method.
The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…

void main(void){

}
*/
/*(15) Write a C function to count the number of 1’s in an unsigned 32-bit integer.
void main(void){

}

*/
/*(16) Write a C function to count the number of 1’s in an unsigned 8-bit integer.
#include <stdio.h>

// Function to count the number of 1's in an 8-bit unsigned integer
int countOnes(uint8_t num) {
    int count = 0;

    // Iterate through all bits of the 8-bit integer
    while (num) {
        // Increment count if the least significant bit is 1
        count += num & 1;
        // Right shift the number by 1 to check the next bit
        num >>= 1;
    }

    return count;
}

int main() {
    uint8_t number;

    // Test the function
    printf("Enter an 8-bit unsigned integer (0-255): ");
    scanf("%hhu", &number);

    int result = countOnes(number);
    printf("Number of 1's in %u is: %d\n", number, result);

    return 0;
}*/

/*(17) Given two integers: L and R, Find the maximal value of A xor B where A and B satisfy
the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000
Input format: the input contains two lines first line contains L and next line contains R.
Output format: The maximum value of A xor B

void main(void){

}

*/
/*(18) Given a positive integer z, check if z can be written as 𝑝^𝑞, where p and q are positive integers than 1,
if z can be written as 𝑝^𝑞 return 1 else return 0.
Description:
A positive integer that needs to be determined if it can be expressed as a power of square number.
int powerOf(int x){

}

void main(void){

}*/

/*(19) Write a C function that return 0 if a given number is a power of 3,
otherwise return 1 (except 3 to the power of 0).

int powerOfThree(int num){
    while(num%3==0){
        num=num/3;
    }
    if(num==1)return 0;
    else return 1;
}
void main(void){
    printf("%d",powerOfThree(27));
}*/

/////////////////////////////////////////////////////////
/*(1) The sum of an array is the sum of its individual elements. For example, if an array is numbers = {1, 2, 3, 4}, the sum of the array is 1+2+3+4 = 10.
Function Description: Complete the function summation. The function must return the integer
sum of the numbers array. int summation(int numbers_size, int* numbers)
int summation(int numbers_size, int* numbers){
    int sum=0;
    for(int i=0;i<numbers_size;i++){
        sum=sum+numbers[i];
    }
    return sum;
}

void main(void){
    int arr[4]={1,2,3,4};
    summation(4,arr);
    printf("%d",summation(4,arr));

}*/


/*(2) Write a function which, given a string, return TRUE if
 all characters are distinct and FALSE if any character is repeated.
 int distinct(char* str){
     int check=1;
     for(int i=0;str[i]!='\0';i++){
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                check=0;
                return check;
            }
        }
     }
     return check;
 }

 int main(void) {
    char str[100];

    // Get input string from the user
    printf("Enter a string: ");
    scanf("%99s", str); // Limiting input to avoid buffer overflow

    if (distinct(str)) {
        printf("All characters in the string are distinct.\n");
    } else {
        printf("There are duplicate characters in the string.\n");
    }

    return 0;
}*/

/*(3) Write a C function that use the bubble sort algorithm to sort
an integer array in ascending order (search for the bubble sorting algorithm).*/

/*(4) Write a C function that use the selection sort algorithm to sort an
 integer array in ascending order (search for the selection sorting algorithm).*/
/*(5) Write a C function to return the index of FIRST occurrence of a number in a given array.
 Array index start from 0. If the item is not in the list return -1. (Linear Search Algorithm)
Example:
Array = {1,2,3,4,4,4}
The required number is 4 it should return 3*/
/*(6) Write a C function to return the index of LAST occurrence
 of a number in a given array. Array index start from 0. If the item is not in the list return -1. (Linear Search Algorithm) Example:
Array = {1,2,3,4,4,4}
The required number is 4 it should return 5*/
/*(7) Write a program that computes the nth term of the arithmetic series: 1, 3, 5, 7, 9, …
 Run the program to compute the 100th term of the given series.*/
/*(8) Write a program that computes the nth term of the geometric series: 1, 3, 9, 27, …
Run the program to compute the 10th term of the given series.*/
/*(9) The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called Fibonacci numbers;
each is the sum of the preceding 2. Write a program which given n,
returns the nth Fibonacci number. - with for/while - with recursion*/











/*(10) Write a function which, given a string, converts all uppercase letters to
lowercase, leaving the others unchanged.
void convert(char* str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
    }
}


int main() {
    char str[100];

    // Get input string from the user
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Limiting input to avoid buffer overflow

    // Call the convert function to convert uppercase letters to lowercase
    convert(str);

    // Output the modified string
    printf("Converted string: %s\n", str);

    return 0;
}*/


/*(11) Write a function that prints the frequency of a certain character in a string.
int frequentCharacter(char character, char* str){
    int frequency=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==character)frequency++;
    }
    return frequency;
}
int main() {
    char str[100];
    char character;

    // Get input string from the user
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Limiting input to avoid buffer overflow

    // Get character to search for from the user
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &character); // Note the space before %c to consume any whitespace characters

    // Call the frequentCharacter function to find the frequency of the character
    int freq = frequentCharacter(character, str);

    // Output the result
    printf("Frequency of '%c' in the string '%s' is: %d\n", character, str, freq);

    return 0;
}
*/
/*(12) Write a function to find the length of a string.
int length(char* str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int main() {
    char str[100];

    // Get input string from the user
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Limiting input to avoid buffer overflow

    // Call the length function to calculate the length of the string
    int len = length(str);

    // Output the result
    printf("Length of the string '%s' is: %d\n", str, len);

    return 0;
}*/


/*(13) Write a function to remove all characters in a string expect alphabet.

void removeCh(char* str){
    char* newstr = (char*)malloc(strlen(str) + 1); // +1 for null terminator
    int i,x=0;
    for(i=0;str[i]!='\0';i++){
        if((str[i]>=65 && str[i]<=90) ||(str[i]>=97 && str[i]<=122)){
            newstr[x]=str[i];
            x++;
        }
    }
   // newstr[x++]='\0';
    int h;
    for(h=0;newstr[h]!='\0';h++){
        str[h]=newstr[h];
    }
    str[h]='\0';
    printf("%d %d",h,x);

    free(newstr);
}
int main() {
    char str[100];

    // Get input string from the user
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Limiting input to avoid buffer overflow

    // Call the removeChars function to remove specified characters
    removeCh(str);

    // Output the modified string after removal
    printf("Modified string: %s\n", str);

    return 0;
}*/
/*(14) Write a function to reverse a string by passing it to a function.
void reverse(char* str){
    char* newstr = (char*)malloc(strlen(str)+1);
    int i;
    for(i=0;str[i]!='\0';i++){
        newstr[i]=str[strlen(str)-1-i];
    }
    newstr[i++]='\0';
    for(i=0;newstr[i]!='\0';i++){
        str[i]=newstr[i];
    }
    str[i++]='\0';
}

int main() {
    char str[100];

    // Get input string from the user
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Limiting input to avoid buffer overflow

    // Call reverse function to reverse the string
    reverse(str);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}*/


/*(15) Write a function to concatenate two strings without using strcat function.

char* concatenate(char* str1,char* str2){
    char* concatenatestr =(char*)malloc(strlen(str1)+strlen(str2)+1);
    int i;
    for(i=0;str1[i]!='\0';i++){
        concatenatestr[i]=str1[i];
    }
    for(int h=0;str2[h]!='\0';h++){
        concatenatestr[i]=str2[h];
        i++;
    }

    concatenatestr[i]= '\0';
    return concatenatestr;
}

 int main() {
    // Allocate enough space for the input strings
    char str1[100], str2[100];

    // Get the first string from the user
    printf("Enter the first string: ");
    scanf("%99[^\n]", str1); // Limiting input to avoid buffer overflow
    getchar(); // To consume the newline character left by the first scanf

    // Get the second string from the user
    printf("Enter the second string: ");
    scanf("%99[^\n]", str2); // Limiting input to avoid buffer overflow

    // Call concatenate function and store the result
    char* result = concatenate(str1, str2);

    // Check if memory allocation was successful
    if (result != NULL) {
        // Output the concatenated string
        printf("Concatenated string: %s\n", result);

        // Free the dynamically allocated memory
        free(result);
    } else {
        printf("Failed to concatenate strings.\n");
    }

    return 0;
}*/

/*(16) Write a C function that takes an array as input and reverse it. Example: Input : 1,2,3,4,5 Output: 5,4,3,2,1

void reverseArray(int* arr, int size){
    int temp;
    for(int i=0;i<(size/2);i++){
            temp=arr[i];
            arr[i]=arr[size-1-i];
            arr[size-1-i]=temp;
        }
}
//Function to print array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print original array
    printf("Original array: ");
    printArray(arr, size);

    // Reverse the array
    reverseArray(arr, size);

    // Print reversed array
    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}*/


/*(17) Write a C Program for swapping two arrays “A & B” with different lengths. B will be always the smallest array.
int * Swap (int a_size,int *a,int b_size,int *b){

}*/




/*(18) Write a C function that return the count of the longest consecutive occurrence of a given number in an array. Example:
Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 ➔ result = 4
int longest_consecutive_occurrence(int* arr,int size, int number){
    int max_count=0;
    int isConsecutive=0;
    int count=0;
    int countOnce=0;
    for(int i=0;i<size;i++){
        if(arr[i]==number) countOnce++;
    }
    if(countOnce==1)return 1;
    if(countOnce==0)return 0;
    for(int i=0;i<size;i++){
            if(arr[i]==number&& isConsecutive==0){
                count=0;
                isConsecutive=1;
                count++;
            }
            else if(arr[i]==number&& isConsecutive==1){
                count++;
                if(count>max_count)max_count=count;
            }
            else{
                 isConsecutive=0;
            }
    }
    return max_count;
}

int main() {
    int arr[] = {1, 2, 3, 3, 4, 4,3,3,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = 2;

    int result = longest_consecutive_occurrence(arr, size, number);
    printf("The longest consecutive occurrence of %d is: %d\n", number, result);

    return 0;
}
*/


/*(19) Write a C function that compare between 2 arrays with the same length.
 It shall return 0 if the two arrays are identical and 1 if not.

int compare(int*arr1,int* arr2,int size){
    int check=0;
    for(int i=0;i<size;i++){
        if(arr1[i]!=arr2[i])return 1;
        else check=0;
    }
    if(check==0)return 0;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4, 6};

    int size = sizeof(arr1) / sizeof(arr1[0]);

    int result1 = compare(arr1, arr2, size);
    int result2 = compare(arr1, arr3, size);

    printf("Comparison result between arr1 and arr2: %d\n", result1);  // Expected output: 0
    printf("Comparison result between arr1 and arr3: %d\n", result2);  // Expected output: 1

    return 0;
}*/
/*(20) Write a C function to return an array containing the values between
 two 8-bits unsigned integers IN DESCENDING ORDER EXCLUSIVE.
  The function takes 2 values (LowerValue and UpperValue), it shall determine the values in between,
  and then arrange the sequence in descending order excluding the upper and lower values.
  If the LowerValue is greater than or equal the UpperValue, return an array of 2 elements,
  both containing value = 0xFF
Example: Input: LowerValue=2 and UpperValue=5 Output: Output Array=4,3 Output Array Size=2
int* createArray(int LowerValue,int UpperValue){
    int size=UpperValue-LowerValue-1;
    int* arr=(int*)malloc(size);
    for(int i=0;i<size;i++){
        arr[i]=UpperValue-1-i;
    }
    return arr;
}
int main() {
    int LowerValue = 5;
    int UpperValue = 10;
    int* arr = createArray(LowerValue, UpperValue);

    int size = UpperValue - LowerValue -1;
    printf("Array elements from %d to %d in reverse order:\n", LowerValue, UpperValue);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
*/


/*(21) Write a C function to return an array containing the values between two 8-bits unsigned integers IN DESCENDING ORDER INCLUSIZE. The function takes 2 values (LowerValue and UpperValue), it shall determine the values in between, and then arrange the sequence in descending order including the upper and lower values. If the LowerValue is greater than the UpperValue, return an array of 2 elements, both containing value = 0xFF
Example: Input: LowerValue=2 and UpperValue=5 Output: Output Array=5,4,3,2 Output Array Size=4*/
/*(22) Write a c function that removes the repeated number of an input sorted array and return a new array without the repeated numbers. The function shall return error if the size of the input array is ZERO. The function takes four inputs:
a. Old array.
b. Old array size.
c. New array (empty array).
d. The size of the new array after fill it in the function.
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
Example:
arr1 = {1,2,3,3,3,4,4,5,5,5} → arr2 = {1,2,3,4,5}*/
/*(23) Write a C function to find the frequency of characters in a string.
• Input the string from the user.
• Traverse the string, character by character and store the count of each of the characters in an array.
• Print the array that contains the frequency of all the characters.*/
/*(24) Write a C function to find the second largest number in an array and return its value.*/




//////////////////////////////




/*(1) C Program to compute sum of the array elements using pointers. */
/*(2) C Program to find length of a given string using pointer. */
/*(3)C Program to read 10 integers into an array from user and print them in reversing order using pointers. */
/*(4) C function to get the value of the smallest element in array using pointers. */
/*(5) C function to copy all elements of an array into another array using pointers. The two arrays have the same length and types. */
/*(6) C Program to print all the array elements and the maximum number in array using array of pointers. */
/*(7) C function to swap two numbers using bitwise operation and call it using pointer to function. */
/*(8) Write a C function to swap the contents of two arrays with the same length using pointers.*/
/*(9) Given a string, create a new string made up of its last two letters, reversed and separated by a space, the word is “bat”. Return string contains ”t a”*/
/*(10) Write a c function two SWAP two pointers. Hint: use pointer to pointer as a function argument.*/
/*(11) Write a c program that SWAP the value of the two 16-bits of 32-bits integer number.*/

/*(12) Array that contains integer values, some of these values are repeated with an even number of repetitions, and only one value is repeated with an odd number of repetitions. Write a C function that’s take the array as input and the array size and return the number which has odd numbers of repetitions. */



///////////////////////////////

/*(7) Write a C Function that reads two integers and checks if the first is multiple of the second.

void main(void){

}
*/
/*(8)Write a C Function that display Prime Numbers between Intervals (two numbers) by Making Function.

void main(void){

}*/
/*(9)Write a C Function that swaps the value of two integer numbers.
void main(void){

}
*/
/*(10) You are designing a poster which prints out numbers with a unique style applied to each of them.
The styling is based on the number of closed paths or holes present in a giver number.
The number of holes that each of the digits from 0 to 9 have are equal to the number of closed paths in the digit.
Their values are:
• 1, 2, 3, 5 and 7 = 0 holes.
• 0, 4, 6, and 9 = 1 hole.
• 8 = 2 holes.
Given a number, you must determine the sum of the number of holes for all of its digits.
For example, the number 819 has 3 holes.
Function Description
Complete the function countHoles. The function must return an integer denoting the total number of holes in num.

void main(void){

}

*/
/*(11) Write a C function that returns 1 if the input number is a power of 2 and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2. 0, 10 and 30 are not power of 2.

void main(void){

}
*/
/*(12) Write a C function that calculates the required heater activation time
according to the input temperature of water. -
if input temperature is from 0 to 30, then required heating time = 7 mins.
    - if input temperature is from 30 to 60, then required heating time = 5 mins.
    - if input temperature is from 60 to 90, then required heating time = 3 mins. -
     if input temperature is more than 90, then required heating time = 1 mins. -
     if temperature is invalid (more than 100), return 0
Example: Input = 10 → output = 7 Input = 35 → output = 5
void main(void){

}
*/

/*(20) Write a C function to count the maximum number of consecutive 1’s in an unsigned 16 bits integer.
void main(void){

}

*/
/*
char* xor(char* s, char* t){
    char* newt=(char*)malloc(strlen(t)+1);
    char* result=(char*)malloc(strlen(t)+1);
    int count=0;
    for(int i=0;t[i]!='\0';i++){
        if(t[i]=='0'){
            newt[count]=t[i];
            count++;
        }
    }
    int numofOnes=strlen(t)-count;

    for(int i=0;i<numofOnes;i++){
        newt[count+i]='1';
    }
    newt[strlen(t)]='\0';
    for(int i=0;newt[i]!='\0';i++){
        if(s[i]==newt[i])result[i]='0';
        else result[i]='1';
    }
    result[strlen(t)]='\0';
    return result;
}
#include <stdio.h>


int main() {
    char s[] = "11001100";
    char t[] = "01011111";

    char* result = xor(s, t);
    printf("The XOR result of %s and %s is: %s\n", s, t, result);

    free(result);
    return 0;
}*/
/*
#include <stdio.h>
#include <string.h>

// Function to create a new string from last two letters of given string, reversed and separated by a space
char* createNewString(char* str) {
    int len = strlen(str);
    char* newStr = (char*)malloc(4); // Allocate memory for "t a\0"

    // Form the new string "t a"
    newStr[0] = str[len - 1];
    newStr[1] = ' ';
    newStr[2] = str[len - 2];
    newStr[3] = '\0';

    return newStr;
}

// Main function to test createNewString function
int main(void) {
    char str[] = "bat";

    char* newStr = createNewString(str);
    printf("New string: %s\n", newStr);

    // Free dynamically allocated memory
    free(newStr);

    return 0;
}
*/
/*
#include <stdio.h>

// Function to find number with odd number of repetitions in an array
int findOddRepetition(int* arr, int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i]; // XOR operation cancels out even repetitions
    }
    return result;
}

// Main function to test findOddRepetition function
int main(void) {
    int arr[] = {1, 2, 3, 2, 3, 1, 3}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    int oddNumber = findOddRepetition(arr, size);
    printf("Number with odd repetition: %d\n", oddNumber);

    return 0;
}*/

