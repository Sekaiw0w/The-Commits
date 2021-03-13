

/*  Programmer  : Sekai Smart-Macaulay
    Date        : 9/10/2018
    FileName    : PrintingSum
    Purpose     : To find the sum of two numbers
*/

#include <stdio.h>

int main(void) {
  float num1, num2, sum = 0;  // Declares the variables

  printf("Enter two numbers \n");  // Prompts the user to enter two numbers
  scanf("%f", &num1);              // Reads the variables
  scanf("%f", &num2);              // Read the variables

  sum = num1 + num2;  // Calculates the sum

  printf("Sum is %f \n", sum);  // Displays the sum

  return 0;
}
