#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Arithmetic
{
private:
    int a;
    int b;   
public: Arithmetic(int a, int b)
{
    this->a=a; // pointers to private class
    this->b=b;

}

int add()
{
    int c=0;
    c = a + b;
    return c;
}
int sub()
{
    int c=0;
    c = a - b;
    return c;
}

};
int main()
{
Arithmetic ar(10,5); //ar is created object from class arithmetic

cout<<"Add "<<ar.add()<<endl;
cout<<"Subtract "<<ar.sub()<<endl;

return 0;
}