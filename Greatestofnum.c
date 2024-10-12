#include <stdio.h>
// Program to compare the greatest of three numbers
void main() {
  printf("Enter First Number: ");
  int n1;
  scanf("%d", &n1);
  printf("Enter Second Number: ");
  int n2;
  scanf("%d", &n2);
  printf("Enter Third Number: ");
  int n3;
  scanf("%d", &n3);
  int max;
  if (n1 >= n2) {
    if (n1 >= n3) {
      max = n1;
    } else {
      max = n3;
    }
  } else {
    if (n2 >= n3) {
      max = n2;
    } else {
      max = n3;
    }
  }

  printf("The Largest Number is %d", max);
}