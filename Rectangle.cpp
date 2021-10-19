#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int NewX, int NewY, int NewWidth, int NewHeight)
{
	SetX(NewX);
	SetY(NewY);
	SetWidth(NewWidth);
	SetHeight(NewHeight);
	Name = "네모";
}

Rectangle::~Rectangle()
{
}

void Rectangle::Draw()
{
	std::cout << "네모" << std::endl;
	std::cout << "(" << X << "," << Y << ")" << std::endl;
	std::cout << "Width : " << Width << std::endl;
	std::cout << "Height : " << Height << std::endl;
}
