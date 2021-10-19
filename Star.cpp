#include "Star.h"
#include <iostream>
#include <fstream>
#include <string>

Star::Star()
{
	SetX(0);
	SetY(0);
	SetColor(0);
	Name = "��";
}

Star::Star(int NewX, int NewY, int NewColor)
{
	SetX(NewX);
	SetY(NewY);
	SetColor(NewColor);
	Name = "��";
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

void Star::Save(std::ofstream& writeFile)
{
	writeFile << GetName() << std::endl;
	writeFile << GetX() << std::endl;
	writeFile << GetY() << std::endl;
	writeFile << GetColor() << std::endl;
}

Shape* Star::Load(std::ifstream& readFile)
{
	std::string line;

	getline(readFile, line); //X��
	int X = std::stoi(line);

	getline(readFile, line); //Y��
	int Y = std::stoi(line);

	getline(readFile, line); //color
	int Color = std::stoi(line);

	SetX(X);
	SetY(Y);
	SetColor(Color);

	return this;
}

