#include "Triangle.h"
#include <iostream>
#include <fstream>
#include <string>

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
	std::cout << "(" << X << "," << Y << ")" << std::endl;
	std::cout << "Edge : " << Edge << std::endl;
}

void Triangle::Save(std::ofstream& writeFile)
{
	writeFile << GetName() << std::endl;
	writeFile << GetX() << std::endl;
	writeFile << GetY() << std::endl;
	writeFile << GetEdge() << std::endl;
}

Shape* Triangle::Load(std::ifstream& readFile)
{
	std::string line;

	getline(readFile, line); //X값
	int X = std::stoi(line);

	getline(readFile, line); //Y값
	int Y = std::stoi(line);

	getline(readFile, line); //한변
	int Edge = std::stoi(line);

	return this;
}
