//
#include "vector.h"
#include <utility>
#include<iostream>

int main()
{
    //use_stack_vector();
    //use_heap_vector();
    
    /*requires copy constructor
    Vector v1(3);
    Vector v2 = v1;

    //requires copy assignment
    Vector v3(3);
    Vector v4(3);
    v4 = v3;

    //requires move constructor
    Vector v(3);
    Vector v1 = std::move(v);
    
    //requires move assignment
    Vector v(3);
    v = get_vector();*/

    Vector v;
    v.Pushback(4);

    std::cout<<v[0]<<"\n";

    v.Pushback(10);
    std::cout<<v[1]<<"\n";

    
    return 0;
}

