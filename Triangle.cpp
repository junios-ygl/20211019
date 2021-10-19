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
	Name = "����";
}

Triangle::~Triangle()
{
}

void Triangle::Draw()
{
	std::cout << "����" << std::endl;
	std::cout << "(" << X << "," << Y << ")" << std::endl;
	std::cout << "Edge : " << Edge << std::endl;
}
