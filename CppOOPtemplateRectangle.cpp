#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Rectangle{ //declaring class 

private:
    int length;
    int width;
public:
    Rectangle(){//constructor declaration, should have this as it is good practice
    
    length = 0;  //default or non-paramaterized constructor, initialize as 0
    width = 0;               
 }
 Rectangle(int l, int w){ // rectangle constructor TAKES PARAMETERS and SETS given length and width of rectangle


    length = l;
    width = w;
}
int area(){ // will take call and parameters from main function

    return length * width;

}

int perimeter(){

     return   (length + width) * 2;

}
 //all below is extra code, this is to make a complete class for C++ OOP
 // set function is a mutator function
void setLength(int l){   //method for reading, writing the properties of a rectangle and setting length

    length = l;
}
void setWidth(int w){  //method for reading, writing properties of rectangle setting width

    width = w;
}
int getLength(){  //accessor functions

    return length;

} 
int getWidth(){

    return width;

}

~Rectangle(){ //destructor is a tilda plus object

    cout<<"Destructor ";  //frees memory from, allocation of memory

}

};

int main(){  //driver code

    Rectangle r(10,5);
	
    cout<<"Area  "<<r.area()<<endl;
    cout<<"Perimeter  "<<r.perimeter()<<endl;

    return 0;  //object automatically destroyed with destructor on completion of the function
}