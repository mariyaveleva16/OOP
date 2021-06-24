#pragma once
#include <iostream>
#include <cmath>
class SVG
{
private:
	double x, y;

public:

	SVG()
	{
		x = y = 0;
	};
	SVG(double, double);
	void read();
	double getX() const {
		return x;
	}
	double getY() const
	{
		return y;
	}
	void print() const;
	double lenght(SVG) const;
	double height(SVG) const;
	double s(SVG) const;

	void setX(double x)
	{
		this->x = x;
	}
	void setY(double y)
	{
		this->y = y;
	}

};
