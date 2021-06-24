#pragma once
#include<string>
#include<iostream>
using namespace std;
enum productType {no,fruit, vegetable};
class StoreItem
{
public:
	StoreItem();
	StoreItem(productType type, unsigned kalories, double price, std::string name);
	virtual productType getType();
	virtual unsigned getKalories();
	virtual double getPrice();
	virtual std::string getName();
	virtual void setType(productType type);
	virtual void setKalories(unsigned kalories);
	virtual void setPrice(double price);
	virtual void setName(std::string name);
	virtual ~StoreItem()=default;
	virtual std::string getT() const = 0;
	virtual void print();

private:
	productType type;	
	unsigned kalories;
	double price;
	std::string name;
};

StoreItem::StoreItem(): type(no),kalories(0), price(0),name("-")
{
}
StoreItem::StoreItem(productType type, unsigned kalories, double price, std::string name):
	type(type), kalories(kalories), price(price),name(name)
{
}
productType StoreItem::getType()
{
	return type;
}
unsigned StoreItem::getKalories()
{
	return kalories;
}
double StoreItem::getPrice()
{
	return price;
}
std::string StoreItem::getName()
{
	return name;
}
void StoreItem::setType(productType type)
{
	this->type = type;
}
void StoreItem::setKalories(unsigned kalories)
{
	this->kalories = kalories;
}
void StoreItem::setPrice(double price)
{
	this->price = price;
}
void StoreItem::setName(std::string name)
{
	this->name = name;
}
void StoreItem::print()
{
	std::cout << "Type: " << type << std::endl;
	std::cout << "Kalories: " << kalories << std::endl;
	std::cout << "Price: " << price << std::endl;
	std::cout << "Name: " << name << std::endl;
}