#include "Shape.h"


Shape::Shape(string n) :name(n)
{
}
void Shape::Print()
{
	cout << "I am " << this->name << endl;
}
void Shape::Draw()
{
	// Do nothing....
}

Shape::~Shape()
{
}
