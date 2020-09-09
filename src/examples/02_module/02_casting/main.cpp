#include<iostream>
#include "casting.h"

using std::cout;    using std::cin;

int main()
{
    double num;

    cout<<"Enter a decimal value: ";
    cin>>num;

    int result = convert_double_to_int(num);
    cout<<"Int value is: "<<result;

    return 0;
}