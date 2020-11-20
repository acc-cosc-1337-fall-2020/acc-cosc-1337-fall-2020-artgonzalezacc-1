//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout; using std::cin;

void stack_array()
{
    const int SIZE = 5;
    int numbers[SIZE]; //declare the array (list)
    
    for(int i=0; i < SIZE; ++i)//initialize
    {
       numbers[i] = i + 1;
    }

    for(int i=0; i < SIZE; ++i)//iterate the array(list)
    {
        cout<<numbers[i]<<"\n";
    }

    cout<<"\nValue at index 0 "<<numbers[0]<<"\n";
    numbers[0] = 10;
    cout<<"\nValue at index 0 "<<numbers[0]<<"\n";

}

void stack_array_cin()
{
    const int SIZE = 3;
    int numbers[SIZE]; //declare the array (list)
    
    for(int i=0; i < SIZE; ++i)//initialize
    {
        cout<<"Enter a number: ";
        cin>>numbers[i];
    }

    for(int i=0; i < SIZE; ++i)//iterate the array(list)
    {
        cout<<numbers[i]<<"\n";
    }

    cout<<"\nValue at index 0 "<<numbers[0]<<"\n";
    numbers[0] = 10;
    cout<<"\nValue at index 0 "<<numbers[0]<<"\n";

}

void stack_array_strings()
{
    const int SIZE = 3;
    std::string names[SIZE]{"Jon", "Joe", "May"};

    for(int i=0; i < SIZE; ++i)
    {
        cout<<names[i]<<"\n";
    }

    names[2] = "Martha";

    for(int i=0; i < SIZE; ++i)
    {
        cout<<names[i]<<"\n";
    }
    
}

void month_and_days()
{
    const int SIZE = 3;
    std::string months[SIZE]{"Jan", "Feb", "Mar"};
    int month_days[SIZE] {31, 28, 31};

    for(int i=0; i < SIZE; ++i)
    {
        cout<<"Month: "<<months[i]<<" has "<<month_days[i]<<"\n";
    }
}

void array_partial_initialization()
{
    const int SIZE = 5;
    int numbers[SIZE]{4, 3, 10};

    for(int i=0; i < SIZE; ++i)
    {
        cout<<numbers[i]<<"\n";
    }

}

void array_for_ranged()
{
    const int SIZE = 5;
    int numbers[SIZE]{4, 3, 10};    

    for(auto& number: numbers)
    {
        cout<<number<<"\n";
        number = 0;
    }
    cout<<"\n\n";
    for(auto number: numbers)
    {
        cout<<number<<"\n";
    }
}