#include "Food.h"

Food::Food() : Product(), kalories(0)
{
};
Food::Food(std::string name, std::string code, double price, double kalories) :
	Product(name, code, price), kalories(kalories)
{
}
double Food::getKalories()
{
	return kalories;
}
void Food::setKalories(double kalories)
{
	this->kalories = kalories;
}
std::string Food::getType() const
{
	return "Food";
}
void Food::print()
{
	Product::print();
	std::cout << "Kalories: " << kalories << std::endl;
}