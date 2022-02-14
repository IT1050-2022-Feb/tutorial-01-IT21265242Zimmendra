/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int multiply(int number1,int number2); // function intialization  
int maximum(int number1,int number2); // function intialization  
int minimum(int number1,int number2); // function intialization  
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : "); // get inputs from users 
   scanf("%d", &no1); 
   printf("Enter a value for no 2 : "); // get inputs from users 
   scanf("%d", &no2); 
   printf("%d ", minimum(no1, no2)); // calling the function
   printf("%d ", maximum(no1, no2)); // calling the function
   printf("%d ", multiply(no1, no2)); // calling the function
   return 0; 
}
int multiply(int number1,int number2) //Function Declarations
{
  return number1*number2;
}
int maximum(int number1,int number2) //Function Declarations
{
  return number1+number2;
  
}
int minimum(int number1,int number2)  //Function Declarations
{
return number1-number2;
}

