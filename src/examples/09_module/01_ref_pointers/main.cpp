#include "ref_pointers.h"
#include<iostream>

int main() 
{
	int num = 5;
	int& num_ref = num;
	
	int num1 = 10;
	int* ptr = &num1;//declare pointer -- after = initialize the pointer with address of num1
	int* ptr1 = &num;

	if(*ptr > *ptr1)///we are comparing values
	{

	}

	std::cout<<"Address of num1: "<<ptr<<"\n";
	std::cout<<"Value of num1:   "<<*ptr<<"\n";
	std::cout<<"Address of ptr:  "<<&ptr<<"\n\n";

	//pointer to CONST
	const int SIZE = 6;
	const int* ptr_size = &SIZE;
	
	std::cout<<"value of SIZE: "<<*ptr_size<<"\n";

	ptr_size = &num1;

	std::cout<<"value of num1: "<<*ptr_size<<"\n\n";
	
	//const pointer -- works like a reference?
	int num2 = 20;
	int* const const_ptr = &num2;
	std::cout<<"value of num2: "<<*const_ptr<<"\n";

	*const_ptr = 25;
	std::cout<<"value of num2: "<<*const_ptr<<"\n";



	return 0;
}