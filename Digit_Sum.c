#include <stdio.h>
// sum of digits of a number
void main(){
   int num,sum;
   printf("Enter Number: ");
   scanf("%d",&num);
   while (num!=0)
   {
    sum=sum+(num%10);
    num=num/10;
   }
   printf("Sum of digits of number %d is: ",sum);

}