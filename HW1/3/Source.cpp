
#include "Header.h"

SVG::SVG(double x, double y)
{
	this->x = x;
	this->y = y;
}
void SVG::read()
{
	std::cin >> x;
	std::cin >> y;
}
double SVG::lenght(SVG p) const
{
	return abs(x - p.x);
}
double SVG::height(SVG p) const
{
	return abs(y - p.y);
}
double SVG::s(SVG p) const
{
	return lenght(p) *height(p);
}

void SVG::print() const
{
	std::cout << '(' << x << ", " << y << ')';
}


