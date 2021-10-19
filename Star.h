#pragma once
#include "Shape.h"
class Star : public Shape
{
public:
	Star();
	Star(int NewX, int NewY, int NewColor);
	virtual ~Star();

	inline int GetColor() const { return Color; }
	inline void SetColor(int NewColor) { Color = NewColor; }

	virtual void Draw() override;

	virtual void Save(std::ofstream& writeFile) override;
	virtual Shape* Load(std::ifstream& readFile) override;

protected:
	int Color;
};

