#include <stdio.h>
#include <stdlib.h>

// passing a an array as a function using pointer, this is a template

int* fun(int size){  // some compliers require [] instead of * 

    int i=0;
    int *p;// pointer declared
	p = (int *)malloc(size * sizeof(int)); //dynamically allocate size of array in heap
	for(i=0; i < size; i++){
	   p[i]= i + 1; //increment each index of the array by one
	}
	return p;

}

int main(void){

    int *ptr, sz=7, i=0; //declare array pointer and size of arr
	ptr=fun(sz); //initializing pointer assigning it to function size
	
	for(i=0; i <sz; i++){
	    
	    printf("%d\n", ptr[i]); // print each element of array
	}

 return 0;
}