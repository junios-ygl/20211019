#include "Editor.h"
#include "Shape.h"

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