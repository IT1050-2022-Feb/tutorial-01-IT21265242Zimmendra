/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2;
  float average;
  printf("marks of the subject one:"); // ask for input
  scanf("%d",&sub1);
  printf("marks of the subject one:"); // ask for input
  scanf("%d",&sub2);
  average = (sub1 + sub2)/2;     // Calculations
  printf("total mark is: %.2f",average); //display average
  return 0;
}

