#include <stdio.h>
#include <stdlib.h>

// more pointer calls to heap memory

struct Rectangle{
  
    int length;
	int width;

};

int main(void){

    int *p1;  //pointer to int
	char *p2;  // pointer to char
	float *p3; //pointer to float
	double *p4;//pointer to double 
    struct Rectangle *p5; //pointer to struct, which has been declared before main function
	
	printf("%ld bytes\n", sizeof(p1)); //displays amount of bytes in heap memory
	printf("%ld bytes\n", sizeof(p2));
	printf("%ld bytes\n", sizeof(p3));
	printf("%ld bytes\n", sizeof(p4));
	printf("%ld bytes\n", sizeof(p5));
 
return 0;
}