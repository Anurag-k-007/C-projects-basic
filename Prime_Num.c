#include <stdio.h>
//
void main(){
    long Num,count;
    printf("Enter Number: ");
    scanf("%d",&Num);
    // applying for loop
    for (long i = 2; i < Num; i++)
    {
        if(Num%i==0){
            count+=1;
        }
    }
     if (count==0)
     {
        printf("%d is Prime Number",Num);
     }
     else {
         printf("%d is not Prime Number",Num);
     }
     
    
}