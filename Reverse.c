#include <stdio.h>
void main() {
    int  num;
    printf("Enter Number: ");
    scanf("%d",&num);

    int reversed_num = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
     
     printf("Reversed Number: %d", reversed_num);
}