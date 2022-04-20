#pragma once
#include "MainHeader.h"

class Dot
{
private:
	int x;
	int y;
public:
	Dot();
	Dot(int x, int y);

	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);

	Dot summDot(Dot dot) const;

	Dot operator +(Dot dot) const;
	Dot operator -(Dot dot) const;
	Dot operator -() const;
	int operator *(Dot dot) const;
	void operator ++();
	void operator ++(int);

	string getInfo();
};

