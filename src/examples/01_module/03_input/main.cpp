//write include statements
#include<iostream>

//write namespace using statements

/*
Capture units and rate values from keyboard.
Call the get_total function by passing units and rates variables to it.
Save the get_total return value to a variable named total.
Display the total:

Total: 100

*/

using std::cout;	using std::cin;

int main() 
{
	int num;
	cout<<"Enter a number: ";//Text to display to screen.
	cin>>num;//capture a number from the keyboard
	
	cout<<"You entered: "<<num;

	return 0;
}