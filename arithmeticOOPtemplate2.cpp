#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Arithmetic
{
private:
    int a;
    int b;   
public: 
    Arithmetic(int a, int b);
	int add();
	int sub();

};

    Arithmetic::Arithmetic(int a, int b) //scope resolution operator
    {
        this->a=a; // pointers to private class
        this->b=b;

    }

    int Arithmetic::add()
    {
        int c=0;
        c = a + b;
        return c;
    }
    int Arithmetic::sub()
    {
        int c=0;
        c = a - b;
       return c;
    }


int main()
{
Arithmetic ar(10,5); //ar is created object from class arithmetic

cout<<"Add "<<ar.add()<<endl;
cout<<"Subtract "<<ar.sub()<<endl;

return 0;
}