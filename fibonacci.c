#include <stdio.h>
// Fibonacci Series
void main() {
  long a = 0;
  long b = 1;
  long c = 0;
  printf("0\n");
  for (int i = 0; i < 10; i++) {
    c = a + b;
    printf("%d\n", c);
    a = b;
    b = c;
  }
}
