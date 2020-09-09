#include <iostream>
#include "expressions.h"

using std::cout;

int main()
{
    int result = operator_precedence_1(12, 6, 3);

    cout<<result;
    
    return 0;
}