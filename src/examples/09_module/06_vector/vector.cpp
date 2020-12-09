#include "vector.h"
#include<iostream>

template<class T>
Vector<T>::Vector()
: size{0}, space{size}, elements{nullptr}
{
    std::cout<<"\nset size and space to 0 elements points to nullptr\n";
}

//
template<class T>
Vector<T>::Vector(size_t sz)
: size{sz}, space{sz}, elements{new T[sz]}
{
    std::cout<<"Create and init memory at "<<elements<<"\n";
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
template<class T>
Vector<T>::Vector(const Vector<T>& v)
: size{v.size}, elements{new T[v.size]}
{
    std::cout<<"copy constructor Create and init memory at "<<elements<<"\n";
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
template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{
    
    T* temp = new T[v.size];
    std::cout<<"\ncopy assignment from "<<v.elements<<" to "<<elements<<"\n";

    for(size_t i=0; i < v.size; ++i)
    {
        temp[i] = v.elements[i];
    }

    delete[] elements;

    elements = temp;
    size = v.size;
    
    return *this;
}

/*
Move constructor
1-get dynamic memory from v
2-get size from v
3-point v.elements to nullptr
4-set v.size to 0
*/
template<class T>
Vector<T>::Vector(Vector<T> && v)
: size{v.size}
{   
    std::cout<<"\n move constructor from "<<elements<<" to "<<v.elements<<"\n";
    elements = v.elements;
    v.elements = nullptr;
    v.size = 0;
}

/*
Move assignment
1-Deallocate original dynamic memory
2-get dynamic memory from v
3-Get the size from v
4-point v.elements to nullptr
5-set v.size to 0
*/
template<class T>
Vector<T> & Vector<T>::operator=(Vector<T> && v)
{
    std::cout<<"\n move assignment from "<<elements<<" to "<<v.elements<<"\n";
    delete[] elements;
    elements = v.elements;
    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

/*
Reserve
1-Make sure new alllocation is greater than space
2-Create temporary dynamic array of size new allocation
3-Copy values from old memory array to temporary array
4-Delete the old memory array (nums)
5-Set elements to temporary memory array
6-Set space = new allocation

*/
template<class T>
void Vector<T>::Reserve(size_t new_allocation)
{
    if(new_allocation <= space)
    {
        return;
    }

    T* temp = new T[new_allocation];

    for(size_t i=0; i < size; ++i)
    {
        temp[i] = elements[i];
    }

    delete[] elements;
    elements = temp;

    space = new_allocation;
}

/*
1-reserve new space of new allocation size
2-initialize elements greater than size 
3-set space to new allocation
*/
template<class T>
void Vector<T>::Resize(size_t new_allocation)
{
    Reserve(new_allocation);

    for(size_t i=size; i < space; ++i)
    {
        elements[i] = 0;
    }

    space = new_allocation;
}

/*
Pushback
1-if space equal 0 add some space with reserve default size
2-else if space == size add twice space new memory
3-add value to element at size position
4-increment size by 1
*/
template<class T>
void Vector<T>::Pushback(T value)
{
    if(space == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if (space == size)
    {
        Reserve(space * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
}

template<class T>
Vector<T>::~Vector()
{
    std::cout<<"Release memory from heap from "<<elements<<"\n";
    delete[] elements;
}

//only required because we are using both .h and .cpp for the template class
template class Vector<int>;
template class Vector<double>;
template class Vector<char>;

//FREE FUNCTIONS-not part of the Vector class
void use_stack_vector()
{
    Vector<int> v1(3);
    v1[0] = 10;
    std::cout<<v1[0]<<"\n";
    //100 lines of other code
}

void use_heap_vector()
{
    Vector<int>* v1 = new Vector<int>(3);
    //100 lines of other code
    delete v1;
}

Vector<int> get_vector()
{
    Vector<int> v(3);
    return v;
}

