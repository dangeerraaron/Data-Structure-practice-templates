#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//Conversion of a template

template <class T>
class Arithmetic
{
private:
    T a;  //use'T' for template declaration
    T b;   
public: 
    Arithmetic(T a, T b); // T with constructor with function parameters, utilize with scope :: operator
	T add();  //template for function typecast
	T sub();

}; //scope of template ends here!

    template<class T> //redeclare template for functions outside of class scope
    Arithmetic<T>::Arithmetic(T a, T b) // declaring template for arithmetic class scope and variables which can be changed into various data types in 'main' function
    {
        this->a=a; // pointers to private class
        this->b=b;

    }
     template <class T> //add template above each function
     T Arithmetic<T>::add() // T must be prefix
    {
        T c=0; //change local variable to 'T'
        c = a + b;
        return c;
    }
	template <class T>
    T Arithmetic<T>::sub()
    {
        T c=0;
        c = a - b;
       return c;
    }

int main()
{
Arithmetic <float>ar(10,5); //ar is created object from class arithmetic '<>' allows to change to data typecasting ie float, char, int, double etc.

cout<<"Add "<<ar.add()<<endl;
cout<<"Subtract "<<ar.sub()<<endl;

return 0;
}