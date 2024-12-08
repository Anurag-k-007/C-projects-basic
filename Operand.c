#include <stdio.h>
// Two operand one operator
void main() {
  float x, y;
  char ch;
  printf("Enter First Operand ");
  scanf("%f", &x);
  printf("Enter Second Operand ");
  scanf("%f", &y);
  printf("Enter Operator ");
  scanf(" %c", &ch);

  // switch case

  switch (ch) {
  case '+':
    printf("Result:%d", x + y);
    break;

  case '-':
    printf("Result:%d", x - y);
    break;

  case '*':
    printf("Result:%d", x * y);
    break;

  case '/':
    printf("Result:%f",  (x / y));
    break;

  default:
    break;
  }
}
