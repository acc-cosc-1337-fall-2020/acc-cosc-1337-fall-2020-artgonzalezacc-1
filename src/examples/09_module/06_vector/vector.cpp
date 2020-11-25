#include "vector.h"
#include<iostream>

//
Vector::Vector(size_t sz)
: size{sz}, elements{new int[sz]}
{
    std::cout<<"Create and init memory\n";
    for(size_t i=0; i < sz; ++i)
    {
        elements[i] = 0;
    }
}

/*
Copy constructor

1-initialize size for v2
2-initialize memory for v2
3-copy element values from v1 into v2
*/
Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
{
    std::cout<<"copy constructor Create and init memory\n";
    for(size_t i=0; i < size; ++i)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Create temporary memory
2-Copy values from v1 into temporary memory
3-Delete class(v2) elements memory
4-Point elements memory to temporary memory
5-Return a reference to this vector

*/
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(size_t i=0; i < v.size; ++i)
    {
        temp[i] = v.elements[i];
    }

    delete[] elements;

    elements = temp;
    size = v.size;
    
    return *this;
}

Vector::~Vector()
{
    std::cout<<"Release memory from heap\n";
    delete[] elements;
}


//FREE FUNCTIONS-not part of the Vector class
void use_stack_vector()
{
    Vector v1(3);
    v1[0] = 10;
    std::cout<<v1[0]<<"\n";
    //100 lines of other code
}

void use_heap_vector()
{
    Vector* v1 = new Vector(3);
    //100 lines of other code
    delete v1;
}
