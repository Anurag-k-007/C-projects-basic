#include <stdio.h>
// check for leap year
void main() {
  printf("Enter Year: ");
  int year;
  scanf("%d", &year);

  if (year % 4 == 0) {
    printf("%d is Leap Year", year);
  } else {
    printf("%d is not Leap Year", year);
  }
}
