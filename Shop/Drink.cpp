#include"Drink.h"

Drink::Drink() : Product(), alkohol(0)
{
};
Drink::Drink(std::string name, std::string code, double price, double alkohol) :
	Product(name, code, price), alkohol(alkohol)
{
}
double Drink::getAlkohol()
{
	return alkohol;
}
void Drink::setAlkohol(double alkohol)
{
	this->alkohol = alkohol;
}
std::string Drink::getType() const
{
	return "Drink";
}
void Drink::print()
{
	Product::print();
	std::cout << "Alkohol: " << alkohol << "%" << std::endl;
}