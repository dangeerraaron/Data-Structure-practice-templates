#include <stdio.h>
#include <stdlib.h>

//using function to print elements of array

void fun(int A[], int n) { // does not return value
   
    int i=0;
    for(i=0; i<n; i++){ //for loop to print elements of array
   
    printf("%d", A[i]);
   
    }

}

int main(void)
{

    int Arr[5]={1,3,5,7,9};
    fun(Arr,5); // first parameter passed by address, second by value


return 0;
}