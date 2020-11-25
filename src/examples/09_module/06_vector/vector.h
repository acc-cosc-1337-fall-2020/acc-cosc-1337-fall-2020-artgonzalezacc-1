//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

class Vector
{
public:
    Vector(size_t sz);//constructor
    Vector(const Vector& v);//copy constructor 1 of 3 for Rule of 3 Legacy C++
    Vector& operator=(const Vector& v);//copy assignment 2 of 3 for Rule of 3 Legacy C++
    size_t Size()const{return size;}
    int& operator[](size_t i){return elements[i];}
    int& operator[](size_t i)const {return elements[i];}
    ~Vector();//destructor 2 of 3 for Rule of 3 Legacy C++

private:
    size_t size;
    int* elements;

};

//FREE FUNCTIONS-not part of the Vector class
void use_stack_vector();
void use_heap_vector();

#endif