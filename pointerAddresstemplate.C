#include <stdio.h>

int main(void){
    
    int a=10;
    int *p;
    p=&a;
    
    printf("The value of a is %d", a);
    printf("\nThe address of a is %d\n", &a);
    printf("The pointer address is %d\n", p);
    printf("The value of *p is %d", *p);
    
    
  return 0;
}