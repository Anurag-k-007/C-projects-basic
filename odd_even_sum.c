#include <stdio.h>
// Sum of even and odd numbers between 1 to N.
void main(){
  long even_sum, odd_sum, N ;
  printf("Enter N: ");
  scanf("%d", &N);
  even_sum = 0;
  odd_sum = 0;
  for(int i = 1; i <= N; i++){
    if(i % 2 == 0){
      even_sum += i;
    }
    else{
      odd_sum += i;
    }
  }
  printf("Even Sum: %d\n", even_sum);
  printf("Odd Sum: %d\n", odd_sum);
  
}
