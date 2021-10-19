#include "Triangle.h"
#include <iostream>

Triangle::Triangle()
{
}

Triangle::Triangle(int NewX, int NewY, int NewEdge)
{
	SetX(NewX);
	SetY(NewY);
	SetEdge(NewEdge);
	Name = "세모";
}

Triangle::~Triangle()
{
}

void Triangle::Draw()
{
	std::cout << "세모" << std::endl;
}
