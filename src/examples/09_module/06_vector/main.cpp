//
#include "vector.h"
#include <utility>
#include<iostream>

int main()
{
    /*int num = add(5, 5);
    std::cout<<num<<"\n";

    double num1 = add(1.5, 4.9);
    std::cout<<num1<<"\n";*/

    //use_stack_vector();
    //use_heap_vector();
    
    /*/requires copy constructor
    Vector<int> v1(3);
    Vector<int> v2 = v1;
    v1[0] = 5;

    std::cout<<v1[0]<<"\n";

    //requires copy assignment
    Vector<double> v3(3);
    Vector<double> v4(3);
    v4 = v3;
    v4[1] = 10;

    std::cout<<v4[1]<<"\n";*/

    //requires move constructor
    Vector<char> v(3);
    Vector<char> v1 = std::move(v);
    v1[0] = 'a';
    v1[1] = 'b';

    std::cout<<v1[0]<<"\n";
    std::cout<<v1[1]<<"\n";
    
    /*/requires move assignment
    Vector v(3);
    v = get_vector();

    Vector v;
    v.Pushback(4);

    std::cout<<v[0]<<"\n";

    v.Pushback(10);
    std::cout<<v[1]<<"\n";*/

    
    return 0;
}

