#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle();
	Circle(int NewX, int NewY, int NewRadius);
	virtual ~Circle();

	inline int GetRadius() { return Radius; }
	inline void SetRadius(int NewRadius) { Radius = NewRadius; }

	virtual void Draw() override;

	virtual void Save(std::ofstream& writeFile) override;
	virtual Shape* Load(std::ifstream& readFile) override;
private:
	int Radius;
};

