#include<string>
#include<iostream>
using namespace std;

#include "graphics.h"

#pragma once
class Shape
{
protected:
	string name;
public:
	Shape(){}
	Shape(string n);
	void Print();
	virtual void Draw()=0;
	~Shape();
};