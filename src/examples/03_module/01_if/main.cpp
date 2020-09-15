#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	//create a bool variable named even
	//create an int variable named value
	bool even;
	int value;

	//prompt user for a keyboard number
	//assign the number to the value variable
	cout<<"Enter a number: ";
	cin>>value;

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	even = is_even(value);
	

	//display even if number is even
	if(even)
	{
		cout<<"Value is even \n";
	}
	else
	{
		cout<<"value is odd \n";
	}

	cout<<"Enter a number: ";
	cin>>value;

	cout<<overtime(value);


	return 0;
}
