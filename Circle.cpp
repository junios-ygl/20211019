#include "Circle.h"
#include <iostream>

Circle::Circle()
{
}

Circle::Circle(int NewX, int NewY, int NewRadius)
{
	SetX(NewX);
	SetY(NewY);
	SetRadius(NewRadius);
	Name = "동그라미";
}

Circle::~Circle()
{
}

void Circle::Draw()
{
	std::cout << "동그라미" << std::endl;
}
