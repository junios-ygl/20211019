#include <iostream>
#include "Editor.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	Editor* editor = new Editor();

	editor->AddShape(new Triangle());
	editor->AddShape(new Rectangle());
	editor->AddShape(new Circle());

	editor->Draw();

	editor->Save();

 
	delete editor;

	return 0;
}