#include <stdio.h>
void main() {
    int  c; float f;
    printf("Enter Temperature in Celsius: ");
   scanf("%d",&c);
   f=((9.0/5.0)*c)+32.0;
   printf("Temperature in Fahrenheit: %f",f);
    
}