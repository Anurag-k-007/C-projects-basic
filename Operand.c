#include <stdio.h>
// Two operand one operator
void main() {
  long x, y;
  char ch;
  printf("Enter First Operand ");
  scanf("%d", &x);
  printf("Enter Second Operand ");
  scanf("%d", &y);
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
    printf("Result:%d", x / y);
    break;

  default:
    break;
  }
}
