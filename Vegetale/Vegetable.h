#pragma once
#include "StoreItem.h"

class Vegetable : virtual public StoreItem
{
public:
	Vegetable();
	Vegetable(productType type, unsigned kalories, double price, std::string name, std::string sort);
	virtual std::string getSort();
	virtual void setSort(std::string sort);
	virtual std::string getT()const override;
	virtual void print()override;
	virtual ~Vegetable() = default;

private:
	std::string sort;
};

Vegetable::Vegetable() : StoreItem(), sort("No sort")
{
}

Vegetable::Vegetable(productType type, unsigned kalories, double price, std::string name, std::string sort) :
	StoreItem(type, kalories, price,name), sort(sort)
{
}
std::string Vegetable::getSort()
{
	return sort;
}
void Vegetable::setSort(std::string sort)
{
	this->sort = sort;
}
std::string Vegetable::getT() const
{
	return "Vegetable";
}
void Vegetable::print()
{
	StoreItem::print();
	std::cout << "Sort: " << this->sort << std::endl;
}
bool operator==(Vegetable a, Vegetable b)
{
	return a.getSort() == b.getSort();
}