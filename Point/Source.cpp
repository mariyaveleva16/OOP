
#include "Header.h"

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}
void Point ::read() 
{
	std::cin >> x;
	std::cin >> y;
}
double Point::lenght(Point p) const
{
	return abs(x - p.x);
}
double Point::height(Point p) const
{
	return abs(y - p.y);
}
double Point::s(Point p) const
{
	return lenght(p) *height(p);
}

void Point::print() const
{
	std::cout << '(' << x << ", " << y << ')';
}


