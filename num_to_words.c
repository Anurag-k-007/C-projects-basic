#include <stdio.h>
//
int rev_num(int num) {

  int reversed_num = 0;
  while (num != 0) {
    int digit = num % 10;
    reversed_num = reversed_num * 10 + digit;
    num /= 10;
  }

  return reversed_num;
}

void main() {
  char word[10][10] = {"Zero ", "One ", "Two ",   "Three ", "Four ",
                       "Five ", "Six ", "Seven ", "Eight ", "Nine "};
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  num = rev_num(num);
  printf("The number in words is: ");
  while (num != 0) {
    printf("%s", word[num % 10]);
    num /= 10;
  }
}
