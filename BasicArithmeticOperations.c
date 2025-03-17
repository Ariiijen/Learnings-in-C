#include <stdio.h>

int main() {
  int num1, num2, sum, difference, quotioent, product;
  float quotient;

printf("Enter first number: ");
scanf("%d", &num1);

printf("Enter second number: ");
scanf("%d", &num2);

sum = num1 + num2;
difference = num1 - num2;
quotient = num1 / num2;
product = num1 * num2;

printf("\nA sum of %d and %d is %d", num1, num2, sum);
printf("\nA difference of %d and %d is %d", num1, num2, difference);
printf("\nA quotient of %d and %d is %d", num1, num2, quotient);
printf("\nA product of %d and %d is %d", num1, num2, product);

  return 0;
}
