#include<stdio.h>
#include<conio.h>
// swap using third variable
void main(){
     printf("Enter First Number: ");
  int n1;
  scanf("%d", &n1);
  printf("Enter Second Number: ");
  int n2;
  scanf("%d", &n2);

  // swapping
  int n3;
  n3=n1;
  n1=n2;
  n2=n3;
  // printing swapped value
   printf("n1=%d\n",n1);
   printf("n2=%d",n2);

}