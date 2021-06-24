#pragma once
#include "StoreItem.h"

class Fruit: virtual public StoreItem
{
public:
	Fruit();
	Fruit(productType type, unsigned kalories, double price, std::string name, std::string color);
	virtual std::string getColor();
	virtual void setColor(std::string color);
	virtual std::string getT()const override;
	virtual void print()override;
	virtual ~Fruit()=default;

private:
	std::string color;
};

Fruit::Fruit(): StoreItem(), color("No color")
{
}

Fruit::Fruit(productType type, unsigned kalories, double price, std::string name, std::string color):
	StoreItem(type, kalories, price, name), color(color)
{
}
std::string Fruit::getColor()
{
	return color;
}
void Fruit::setColor(std::string color)
{
	this->color = color;
}
std::string Fruit::getT() const
{
	return "fruit";
}
void Fruit::print()
{
	StoreItem::print();
	std::cout << "Color: " << this->color << std::endl;
}
bool operator>(Fruit a, Fruit b)
{
	return a.getKalories() > b.getKalories();
}