#include <iostream>
#include <fstream>
#include "Editor.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Star.h"
#include "Texture.h"

using namespace std;



void Swap(int& A, int& B)
{
	int Temp = A;
	A = B;
	B = Temp;
}

void ReturnTwo(const int& InA, int& OutA, int& OutB) 
{
	OutA = InA + 10;
	OutB = InA + 20;
}

void ClearTexture(Texture& T)
{
	///삭제 변경
}

class Util
{
public:
	static int Add() { return 0; }
};

class Engine
{
public:
	static const Engine& GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new Engine();
			return *Instance;
		}
		else
		{
			return *Instance;
		}
	}
private:
	Engine() {}
	virtual ~Engine() {}

	static Engine* Instance;
};
Engine* Engine::Instance = nullptr;

int main()
{

	//Texture* T1 = new Texture();
	//Texture* T2 = new Texture();
	//Texture* T3 = new Texture();

	//cout << Texture::Size << endl;

	//delete T2;

	//cout << Texture::Size << endl;

	Texture::Test();
	cout << Util::Add() << endl;

	//int A = 0;
	//int B = 0;
	//int C = 20;

	//ReturnTwo(C, A, B);

	//cout << A << ", " << B << endl;

	//Swap(A, B);

	//cout << A << ", " << B << endl;

	//Texture A1;

	//ClearTexture(A1);

	Texture::Size = 1;


	return 0;
}