#include <stdio.h>
#include <stdlib.h>

/* modular programming template with struct and initialization */

struct Rectangle{
	
	int length;
	int width;
	
};

void initialize(struct Rectangle *r, int l, int b){
	
	r->length = l;
	r->breadth = b;
}

int area(struct Rectangle r){ //function call by value to calculate area
	
	return r.length * r.breadth;
}

int perimeter(struct Rectangle r){ //function call to calculate perimeter
	
	int p = 0;
	p = 2 * (r.length + r.breadth);
	
	return p;
}

int main(void){
	
	struct Rectangle r= {0,0};
	
	int a=0, peri=0;
	
	int l,b;
	
	printf("Please enter the length and width: ");
	scanf("%d %d", &l, &b);
	
	initialize(&r,l,b);
	
	a = area(r);
	peri = perimeter(r);
	
	printf("Area = %d\nPerimeter = %d \n", a, peri);
	
	return 0;
}
