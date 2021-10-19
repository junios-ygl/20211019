#include <iostream>
#include <fstream>
#include "Editor.h"
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

Editor::Editor()
{
}

Editor::~Editor()
{
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
			Triangle* T = dynamic_cast<Triangle*>(Object);
			writeFile << T->GetName() << std::endl;
			writeFile << T->GetX() << std::endl;
			writeFile << T->GetY() << std::endl;
			writeFile << T->GetEdge() << std::endl;

		} 
		else if (dynamic_cast<Rectangle*>(Object) != nullptr)
		{
			Rectangle* T = dynamic_cast<Rectangle*>(Object);
			writeFile << T->GetName() << std::endl;
			writeFile << T->GetX() << std::endl;
			writeFile << T->GetY() << std::endl;
			writeFile << T->GetWidth() << std::endl;
			writeFile << T->GetHeight() << std::endl;
		}
		else if (dynamic_cast<Circle*>(Object) != nullptr)
		{
			Circle* T = dynamic_cast<Circle*>(Object);
			writeFile << T->GetName() << std::endl;
			writeFile << T->GetX() << std::endl;
			writeFile << T->GetY() << std::endl;
			writeFile << T->GetRadius() << std::endl;
		}
	}

	writeFile.close();
}

void Editor::Load()
{
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