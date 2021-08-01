/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int x,y;
  float avg;

  printf( "Input marks of subject 1 :" );
  scanf("%d", &x);

  printf( "Input marks of subject 2 :" );
  scanf("%d", &y);

  avg = ( x + y ) / 2.0;

  printf( "Average is : %f", avg );




  
  return 0;
}

