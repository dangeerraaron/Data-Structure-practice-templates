#include <stdio.h>
#include <stdlib.h>

// 2D arrays both stack and heap
int main(void)
{
int i=0,j=0; //counters for nested for loop
 
 
  int A[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}}; //2D array main memory/stack

int *B[3]; // create pointer B array in stack with 3 rowd
B[0]=(int *)malloc(4*sizeof(int)); //creates index column in heap, *B[3] points to this
B[1]=(int *)malloc(4*sizeof(int));
B[2]=(int *)malloc(4*sizeof(int));

int **C;
C=(int **)malloc(3*sizeof(int));//pointer variable created in heap with 3 rows
C[0]=(int *)malloc(4*sizeof(int));
C[1]=(int *)malloc(4*sizeof(int));
C[2]=(int *)malloc(4*sizeof(int));

for(i=0; i<3; i++)
  {
  for(j=0; j<4; j++)
  {
  printf("%d ", B[i][j]); //will print array A B or C, input can be modified
  }
  printf("\n");
  }

return 0;

}