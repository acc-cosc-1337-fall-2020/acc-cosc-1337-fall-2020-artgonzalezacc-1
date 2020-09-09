#include<iostream>
#include<climits>

using std::cout;

int main()
{
    //overflow more than MAX for an int
    int num = 2147483647;
    num = num + 1;

    cout<<num<<"\n";

    //underflow less than the MIN precision for a double
    double dec = __DBL_MIN__;
    dec = dec / 10;
    cout<<dec;

    return 0;
}