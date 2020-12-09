//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

template<class T>
class Vector
{
public:
    Vector();
    Vector(size_t sz);//constructor
    Vector(const Vector<T>& v);//copy constructor 1 of 3 for Rule of 3 Legacy C++
    Vector<T>& operator=(const Vector<T>& v);//copy assignment 2 of 3 for Rule of 3 Legacy C++
    Vector(Vector<T> && v);//move constructor 4 of 5 of rule of 5 C++ 11
    Vector<T> & operator=(Vector<T> && v);//move assignment 5 of 5 rule of 5 C++ 11
    size_t Size()const{return size;}
    size_t Capacity()const{return space;}
    void Reserve(size_t new_allocation);
    void Resize(size_t new_allocation);
    void Pushback(T value);
    T& operator[](size_t i){return elements[i];}
    T& operator[](size_t i)const {return elements[i];}
    ~Vector();//destructor 2 of 3 for Rule of 3 Legacy C++

private:
    size_t size;
    size_t space;//size + free slots/spaces
    T* elements;
    const int RESERVE_DEFAULT_SIZE {8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};

};

//FREE FUNCTIONS-not part of the Vector class
void use_stack_vector();
void use_heap_vector();
Vector<int> get_vector();

template<class T>//tells compiler we want to create a templatized function
T add(T a, T b)
{
    return a + b;
}


#endif