#include "Canvas.h"
#include <cmath>
#include <iostream>

Canvas::Canvas(int width, int height)
{
	this->X = width;
	this->Y = height;
	for (int i = 0; i < X; i++)
		for (int j = 0; j < Y; j++)
			M[i][j] = ' ';
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	float pi = 3.14159;
	for (float i = 0; i <= 2 * pi; i += 0.001)
	{
		float h = sin(i) * ray;
		float t = cos(i) * ray;
		M[x + int(h)][y + int(t)] = ch;
	}
}

void Canvas::Print()
{
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
		{
			std::cout << M[i][j];
		}
		std::cout << '\n';
	}
}

void Canvas::Clear()
{
	for (int i = 0; i < X; i++)
		for (int j = 0; j < Y; j++)
			M[i][j] = ' ';
}