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
	const int SIZE = 3;
	Circle circles[SIZE];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();
	
	//dynamic memory - Circle is not a pointer
	Shape* shapes = new Circle[SIZE];
	shapes[0].draw();
	shapes[1].draw();
	shapes[2].draw();

	delete[] shapes;
	shapes = nullptr;

	Shape** shapes1 = new Shape*[SIZE];
	shapes1[0] = new Circle();
	shapes1[1] = new Line();
	shapes1[2] = new Line();

	shapes1[0]->draw();
	shapes1[1]->draw();
	shapes1[2]->draw();

	for(int i=0; i < SIZE; ++i)
	{
		delete shapes1[i];
	}

	delete[] shapes1;
	shapes1 = nullptr;

	/*
	
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
*/

	return 0;
}