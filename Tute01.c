/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark1,mark2,avg;

  printf("Input mark of 1st subject : ");
  scanf("%f",&mark1);

  printf("Input mark of 2nd subject : ");
  scanf("%f",&mark2);

  avg = (mark1 + mark2) / 2.0;

  printf("The average is %.2f",avg);
  return 0;
}

