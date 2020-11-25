#include<iostream>

using std::cout;

int main() 
{
	const int SIZE = 3;
	int numbers[SIZE] {4, 1, 10};
	int* ptr = numbers;

	//the name of an array is a pointer- we can point to it
	cout<<"Initial array address: "<<numbers<<"\n";
	cout<<"Value at ptr: "<<*ptr<<"\n";

	ptr++;
	cout<<"Value at ptr: "<<*ptr<<"\n";

	ptr++;
	cout<<"Value at ptr: "<<*ptr<<"\n";

	ptr--;
	cout<<"Value at ptr: "<<*ptr<<"\n";

	ptr--;
	cout<<"Value at ptr: "<<*ptr<<"\n";


	return 0;
}