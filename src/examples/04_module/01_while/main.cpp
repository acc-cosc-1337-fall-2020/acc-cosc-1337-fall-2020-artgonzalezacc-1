#include <iostream>
#include "while.h"

using std::cout;	using std::cin;

int main() 
{
	int num;
	char choice = 'y';
	
	while(choice == 'y' || choice == 'Y')
	{
		cout<<"Enter number: ";
		cin>>num;

		int sum = sum_of_squares(num);
		cout<<"Sum is: "<<sum<<"\n";
		cout<<"main num "<<num<<"\n";

		cout<<"Enter y to continue: ";
		cin>>choice;
	}


	return 0;
}