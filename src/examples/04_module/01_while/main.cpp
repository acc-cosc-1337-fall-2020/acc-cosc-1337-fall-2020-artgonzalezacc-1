#include <iostream>
#include "while.h"

using std::cout;	using std::cin;

int main() 
{
	int number;
	char choice = 'y';
	
	while(choice == 'y' || choice == 'Y')
	{
		cout<<"Enter number: ";
		cin>>number;

		int sum = sum_of_squares(number);
		cout<<"Sum is: "<<sum<<"\n";

		cout<<"Enter y to continue: ";
		cin>>choice;
	}


	return 0;
}