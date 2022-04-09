#include <stdio.h>
#include <stdlib.h>

/* static array example and pointer/heap array example */

int main(void)
{
int A[5]={2,4,6,8,10}; //static array created in stack
int i=0;
int *p; //pointer to create array in heap

p=(int *)malloc(5 * sizeof(int)); //typecast and reservation of memory block in heap
p[0]=3; //assigns value to each index of array in heap
p[1]=5;
p[2]=7;
p[3]=9;
p[4]=11;

for(i=0; i < 5; i++)
{
   printf("%d ", A[i]);
}
  printf("\n");
 
  for(i=0; i<5; i++)
  {
  printf("%d ", p[i]);
  }

return 0;