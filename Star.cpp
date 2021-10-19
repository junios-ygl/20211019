#include "Star.h"
#include <iostream>

Star::Star()
{
	SetX(0);
	SetY(0);
	SetColor(0);
	Name = "º°";
}

Star::Star(int NewX, int NewY, int NewColor)
{
	SetX(NewX);
	SetY(NewY);
	SetColor(NewColor);
	Name = "º°";
}

Star::~Star()
{
}

void Star::Draw()
{
	std::cout << Name << std::endl;
	std::cout << "(" << X << "," << Y << ")" << std::endl;
	std::cout << "Color : " << Color << std::endl;
}

