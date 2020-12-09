#include "recursion.h"
#include<iostream>
//Write code for recursive display function
void display(int count)
{
    if(count == 0)
    {
        std::cout<<"base case\n";
        return;   
    }

    std::cout<<"hello-load stack\n";
    display(count - 1);
    std::cout<<"unload from stack\n";
}

//Write code for recursive factorial
int factorial(int n)
{
    int f;//factorial
    int r;//return value

    if(n == 0)
    {
        return 1;
    }

    std::cout<<"load stack"<<n-1<<"\n";
    r = factorial(n-1);
    f = n * r;
    std::cout<<"unload stack n: "<<n<<" r: "<<r<<" f: "<<f<<"\n";

    return f;
}
