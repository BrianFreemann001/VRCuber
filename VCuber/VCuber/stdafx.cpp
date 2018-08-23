// stdafx.cpp : source file that includes just the standard includes
// VCuber.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int Maths::From2Dto1D(int x, int y, int width)
{
	return (y * width + x);
}

Pointer Maths::From1Dto2D(int index, int width, int colour)
{
	Pointer cubie;
	cubie.x = index / width;
	cubie.y = index % width;
	cubie.colour = colour;
	return cubie;
}

