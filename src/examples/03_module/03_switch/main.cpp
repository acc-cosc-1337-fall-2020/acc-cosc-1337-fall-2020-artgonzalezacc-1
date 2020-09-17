#include<iostream>
#include "switch.h"

using std::cout;	using std::cin;

int main() 
{
	int option, y=0, z=0;
	int choice;
	cout<<"Enter 0 for switch with number";
	cin>>choice;

	if(choice == 0)
	{
		cout<<"Enter a number: ";
		cin>>option;

		std::string result = menu(option);

		cout<<"\n"<<result;

		//Immediate if
		option > 4 ? y = 10 : z = 20;

		cout<<"\n"<<y<<" "<<z;
	}
	else
	{
		char letter;
		cout<<"Enter a letter: ";
		cin>>letter;

		cout<<menu(letter);
	}

	return 0;
}