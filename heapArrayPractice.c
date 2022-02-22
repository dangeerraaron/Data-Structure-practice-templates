#include <stdio.h>
#include <stdlib.h>

//dynamically (Heap) allocated array practice.

int main (void){
	
	int *p; // declare pointer 'p' to heap memory
	int i=0;
	
	p = (int*)malloc(5 * sizeof(int)); //we will declare memory allocation of 5 indexes for array (4 bytes for int)
	
	p[0]=8, p[1]=27, p[2]=3, p[3]=10, p[4]=5; // assign integer value to each array index in Heap
	
	    for(i = 0; i < 5; i++){ //for loop to print each array element
		
		printf("The elements in array in heap are %d\n", p[i]);
		
	}
	free(p);
	
	return 0;
}