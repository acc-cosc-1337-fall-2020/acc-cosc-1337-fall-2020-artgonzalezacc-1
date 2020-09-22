#include "for.h"
#include<iostream>

//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/
void display_numbers(int num)
{
    for(int i=0; i < num; ++i)
    {
      std::cout<<"i is: "<<i<<" i + 1 is "<<i + 1<<"\n";
    }
}
//4 -> 4+4 3+3 2+2 1+1
int sum_numbers(int num)
{
    int sum = 0;

    for(int i=0; i <= num; ++i)
    {
        sum += i + i;
    }

    return sum;
}

