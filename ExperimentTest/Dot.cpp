#include "Dot.h"

Dot::Dot()
{
	x = 0;
	y = 0;
}

Dot::Dot(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Dot::getX() const
{
	return x;
}

int Dot::getY() const
{
	return y;
}

void Dot::setX(int x)
{
	this->x = x;
}

void Dot::setY(int y)
{
	this->y = y;
}

Dot Dot::summDot(Dot dot) const
{
	return Dot(x + dot.x, y + dot.y);
}

string Dot::getInfo()
{
	return "X: " + to_string(x) + "\nY: " + to_string(y);
}

Dot Dot::operator +(Dot dot) const
{
	return Dot(x + dot.x, y + dot.y);
}

Dot Dot::operator -(Dot dot) const
{
	return Dot(x - dot.x, y - dot.y);
}

int Dot::operator *(Dot dot) const
{
	int px = x * dot.x;
	int py = y * dot.y;

	return px + py;
}



