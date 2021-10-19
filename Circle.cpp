#include "Circle.h"
#include <iostream>
#include <fstream>
#include <string>

Circle::Circle()
{
	SetX(0);
	SetY(0);
	SetRadius(0);
	Name = "���׶��";
}

Circle::Circle(int NewX, int NewY, int NewRadius)
{
	SetX(NewX);
	SetY(NewY);
	SetRadius(NewRadius);
	Name = "���׶��";
}

Circle::~Circle()
{
}

void Circle::Draw()
{
	std::cout << "���׶��" << std::endl;
	std::cout << "(" << X << "," << Y << ")" << std::endl;
	std::cout << "Radius : " <<  Radius << std::endl;
}

void Circle::Save(std::ofstream& writeFile)
{
	writeFile << GetName() << std::endl;
	writeFile << GetX() << std::endl;
	writeFile << GetY() << std::endl;
	writeFile << GetRadius() << std::endl;
}

Shape* Circle::Load(std::ifstream& readFile)
{
	std::string line;

	getline(readFile, line); //X��
	int X = std::stoi(line);

	getline(readFile, line); //Y��
	int Y = std::stoi(line);

	getline(readFile, line); //Radius
	int Radius = std::stoi(line);

	SetX(X);
	SetY(Y);
	SetRadius(Radius);

	return this;
}
