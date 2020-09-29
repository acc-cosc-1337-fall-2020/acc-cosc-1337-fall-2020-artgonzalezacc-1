#include<string>
#include<iostream>
#include "for_ranged.h"

using std::string;	using std::cout;

int main() 
{
	string name = "john2";
	string empty_string();
	string name1("copy constructor");
	string name2(name1, 3, 5);
	string name3("Another name", 10);
	string repeating(10, 'x');

	cout<<name<<"\n";
	cout<<empty_string<<"\n";
	cout<<name1<<"\n";
	cout<<name2<<"\n";
	cout<<name3<<"\n";
	cout<<repeating<<"\n\n";

	cout<<"size of name is: "<<name.size()<<"\n";
	cout<<"max size variable name can hold: "<<name.max_size()<<"\n";

	cout<<"Capacity of name: "<<name.capacity()<<"\n";
	name.append(" doe");
	cout<<"Capacity of name: "<<name.capacity()<<"\n";
	cout<<name<<"\n";
	cout<<name[0]<<"\n";
	cout<<name[3]<<"\n\n";

	std::size_t cnt = 0;
	while(cnt < name.size())
	{
		cout<<name[cnt]<<"\n";
		cnt++;
	}
	
	cout<<"\n\n";

	for(auto c: name)
	{
		cout<<c<<"\n";
	}
	
	return 0;
}