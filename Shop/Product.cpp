#include "Product.h"

Product::Product() : name("-"), code("-"), price(0)
{
};
Product::Product(std::string name, std::string code, double price) :
	name(name), code(code), price(price)
{
}
std::string Product::getName()
{
	return name;
}
std::string Product::getCode()
{
	return code;
}
double Product::getPrice()
{
	return price;
}
void Product::setName(std::string name)
{
	this->name = name;
}
void Product::setCode(std::string code)
{
	this->code = code;
}
void Product::setPrice(double price)
{
	this->price = price;
}
void Product::print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Code: " << code << std::endl;
	std::cout << "Price: " << price << std::endl;
}