#pragma once
#include <iostream>
#include <cmath>
class Point
{
private:
	double x, y;

public:

	Point()
	{
		x = y = 0;
	};
	Point(double, double);
	void read();
	double getX() const {
		return x;
	}
	double getY() const
	{
		return y;
	}
	void print() const;
	double lenght(Point) const;
	double height(Point) const;
	double s(Point) const;

	void setX(double x)
	{
		this->x = x;
	}
	void setY(double y)
	{
		this->y = y;
	}

};
