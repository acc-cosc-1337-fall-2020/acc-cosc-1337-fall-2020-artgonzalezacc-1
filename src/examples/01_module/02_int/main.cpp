#include<iostream>
#include "vars.h"

using std::cout;

int main() 
{
	//echo_variable(5);
	//cout<<"\n"<<echo_variable_ret(5)<<"\n";

	auto num = echo_variable_ret(5);
	cout<<num;

	return 0;
}