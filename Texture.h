#pragma once
class Texture
{
public:
	Texture();
	virtual ~Texture();
	unsigned char Data[100];

	Texture* Clear()
	{
		return this;
	}

	static int Size;

	static void Test() {}
};

