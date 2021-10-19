#include <iostream>
#include <fstream>
#include "Editor.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	Editor* editor = new Editor();

	editor->AddShape(new Triangle(10, 10, 10));
	editor->AddShape(new Rectangle(20, 20, 10, 20));
	editor->AddShape(new Circle(5, 5, 5));

	editor->Draw();

	editor->Save();
 
	delete editor;

	return 0;
}