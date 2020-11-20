//main
#include <iostream>
#include<memory>
#include<utility>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
using std::unique_ptr; using std::make_unique;


int main() 
{
	Circle* ptr_circle = nullptr;//declare a pointer

	Circle circle0;
	ptr_circle = &circle0;
	ptr_circle->draw();//dereferencing the pointer( using * behind the scenes)
	std::cout<<"First circle example ends\n\n";

	unique_ptr<Shape> circle = make_unique<Circle>();
	circle->draw();

	unique_ptr<Shape> line = make_unique<Line>();
	line->draw();
	std::cout<<"\n\n";
	std::vector<unique_ptr<Shape>> shapes;
	shapes.push_back(std::move(circle));
	shapes.push_back(std::move(line));

	for(auto& shape: shapes)
	{   
		shape->draw();
	}


	return 0;
}