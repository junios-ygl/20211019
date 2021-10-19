#include "Texture.h"

int Texture::Size = 0;

Texture::Texture()
{
	Texture::Size++;
}

Texture::~Texture()
{
	Texture::Size--;
}