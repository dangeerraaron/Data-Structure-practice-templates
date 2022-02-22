#include <stdio.h>

//pointer to a fixed size array template

int main(void)
{
    int arr[5]={1,3,5,7,9};//declared and initialized array
    int *p;
    p=&arr[0]; // pointer initialized and declared to point to the 0 index address of array
    int i=0;
    
    for(i = 0; i < 5; i=i+1){ // for loop to print each element in array
        
        printf("%d ",arr[i]);
    }

       printf("\n%d ", *p); // pointer to index 0 of array
       
       printf("\n%d", p ); //location of pointer variable in memory
       
       p=&arr[4]; //pointer re-assigned to index subscript 4 of array
       
       printf("\n%d", *p);
       
       p=&arr[2];  //re-assigned pointer to index 2
       
       printf("\n%d", *p);
       
       p=&arr[1]; //re-assigned to pointer to index 1
       
       printf("\n%d", *p);
       
       p=&arr[3]; //re-assigned pointer to index 3
       
       printf("\n%d", *p);
       
       printf("\n%d", p); //print current memory address of pointer
       
    return 0;
}
