#include <iostream>
#include <fstream>
#include "Editor.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Star.h"

using namespace std;

int main()
{
	Editor* editor = new Editor();

	editor->Load();

	//editor->AddShape(new Star(1, 1, 2));
	//editor->AddShape(new Rectangle(20, 20, 10, 20));
	//editor->AddShape(new Circle(5, 5, 5));

	editor->Draw();

	//editor->Save();
 
	delete editor;

	return 0;
}