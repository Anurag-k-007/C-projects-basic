#include <stdio.h>
//
void main(){
  int size;
  printf("Enter size of Array: ");
  scanf("%d",&size);
    int array[size];
    int max,min;
    printf("Enter elements of Array: ");
    for ( int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
      max=array[0],min=array[0];
    for ( int j = 0; j < size; j++)
    {
      if(array[j]>=max)
      max=array[j];
      if(array[j]<=min)
      min=array[j];
    }

    printf("Maximum element of array: %d\n",max);
     printf("Minimum element of array: %d",min);
}