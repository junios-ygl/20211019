#include "Shape.h"

Shape::Shape()
{
}

Shape::Shape(int NewX, int NewY)
{
	SetX(NewX);
	SetY(NewY);
}

Shape::~Shape()
{
}

void Shape::SetX(int NewX)
{
	X = NewX;
}

void Shape::SetY(int NewY)
{
	Y = NewY;
}

int Shape::GetX()
{
	return X;
}

int Shape::GetY()
{
	return Y;
}
