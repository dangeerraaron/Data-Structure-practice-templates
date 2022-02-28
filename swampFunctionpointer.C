#include <stdio.h>
#include <stdlib.h>

/* function with call by address, swap numbers */

void swap(int *x, int*y){ //formal parameters
    int temp; //place holder variable
	temp = *x; //assign x to temp
	*x = *y; //assign y to x
	*y = temp; //assign temp to y

}

int main (void){
	
	int num1=15, num2=20;
	swap(&num1,&num2); //assign address to num1 and num2 and pass to void swap
	printf("Num1 is %d and Num2 is %d swapped!", num1, num2);
	

	
	return 0;
	
}