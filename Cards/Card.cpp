#include "Card.h"

Card::Card() : name("No name"), cardNum(0), imgNum(0)
{}
Card::Card(std::string name, unsigned cardNum, unsigned imgNum) : name(name), cardNum(cardNum), imgNum(imgNum)
{}
/*
Card::Card(const Card& other)
{
	this->name = other.name;
	this->cardNum = other.cardNum;
	this->imgNum = other.imgNum;
}

Card& Card :: operator=(const Card& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->cardNum = other.cardNum;
		this->imgNum = other.imgNum;
	}
	return *this;
};*/
void Card::print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Card number: " << cardNum << std::endl;
	std::cout << "Image number: " << imgNum << std::endl;
}