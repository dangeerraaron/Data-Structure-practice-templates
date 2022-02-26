#include <stdio.h>
#include <stdlib.h>

/* pointer to struct */

struct Rectangle{ //struct initilization  

    int length;
    int breadth;

};

int main(void)
{

    struct Rectangle *p;  //pointer to struct
    p = (struct Rectangle*)malloc(sizeof(struct Rectangle)); //allocation in heap

    p->length = 15; // declaration of pointer length
    p->breadth = 7; // declaration of pointer breadth

   printf("%d\n",p->length); //displays pointer values
   printf("%d",p->breadth);

return 0;
}