#include "recursion.h"
#include<iostream>
int main() 
{
	std::cout<<"load stack 5\n";
	int f = factorial(5);
	std::cout<<"unload from stack "<<f<<"\n";

	return 0;
}