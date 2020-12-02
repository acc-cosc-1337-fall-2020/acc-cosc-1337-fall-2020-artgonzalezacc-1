//
#include "vector.h"
#include <utility>
#include<iostream>

int main()
{
    //use_stack_vector();
    //use_heap_vector();
    
    //requires copy constructor
    Vector v1(3);
    Vector v2 = v1;

    //requires copy assignment
    Vector v3(3);
    Vector v4(3);
    v4 = v3;

    

    
    return 0;
}

