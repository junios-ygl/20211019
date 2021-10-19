#include <iostream>
#include <fstream>
#include "Editor.h"
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Star.h"

Editor::Editor()
{
}

Editor::~Editor()
{
	for (auto Object : Shapes)
	{
		delete Object;
	}

	Shapes.clear();
}

void Editor::Draw()
{
	//반복문 크기만큼 반복
	//for (size_t i = 0; i < Shapes.size(); ++i)
	//{
	//	Shapes[i]->Draw();
	//}

	////iterator
	////for (std::vector<Shape*>::iterator iter = Shapes.begin(); iter != Shapes.end(); ++iter)
	//for (auto iter = Shapes.begin(); iter != Shapes.end(); ++iter)
	//{
	//	(*iter)->Draw();
	//}

	////c++ 14
	//for (auto iter = Shapes.rbegin(); iter != Shapes.rend(); ++iter)
	////for (std::vector<Shape*>::reverse_iterator iter = Shapes.rbegin(); iter != Shapes.rend(); ++iter)
	//{
	//	(*iter)->Draw();
	//}

	//range for
	for (auto Object : Shapes)
	{
		Object->Draw();
	}

}

void Editor::Save()
{
	std::ofstream writeFile;
	writeFile.open("Editor.sav");

	for (auto Object : Shapes)
	{
		if (dynamic_cast<Triangle*>(Object) != nullptr)
		{
			Triangle* Temp = dynamic_cast<Triangle*>(Object);
			Temp->Save(writeFile);
		} 
		else if (dynamic_cast<Rectangle*>(Object) != nullptr)
		{
			Rectangle* Temp = dynamic_cast<Rectangle*>(Object);
			Temp->Save(writeFile);
		}
		else if (dynamic_cast<Circle*>(Object) != nullptr)
		{
			Circle* Temp = dynamic_cast<Circle*>(Object);
			Temp->Save(writeFile);
		}
		else if (dynamic_cast<Star*>(Object) != nullptr)
		{
			Star* Temp = dynamic_cast<Star*>(Object);
			Temp->Save(writeFile);
		}
	}

	writeFile.close();
}

void Editor::Load()
{
	std::ifstream readFile;
	readFile.open("Editor.sav");

	std::string line;
	while (getline(readFile, line))
	{
		if (line == "세모")
		{
			Triangle* T = new Triangle();
			AddShape(T->Load(readFile));
		}
		else if (line == "네모")
		{
			Rectangle* T = new Rectangle();
			AddShape(T->Load(readFile));
		}
		else if (line == "동그라미")
		{
			Circle* T = new Circle();
			AddShape(T->Load(readFile));
		}
		else if (line == "별")
		{
			Star* T = new Star();
			AddShape(T->Load(readFile));
		}
	}
	
	readFile.close();
}

void Editor::AddShape(Shape* NewShape)
{
	Shapes.push_back(NewShape);
}


//class Vector
//{
//public:
//	int X;
//	int Y;
//
//	Vector& operator+(const Vector& RHS)
//	{
//		this->X += RHS.X;
//		this->Y += RHS.Y;
//
//		return *this;
//	}
//
//};
//
//Vector A;
//Vector B;
//Vector C;
//C = A + B;