#pragma once
#include "Card.h"

class Hero: virtual public Card
{
public:
	Hero();
	Hero(std::string name, unsigned cardNum, unsigned imgNum, unsigned attack, unsigned deffence);
	//Hero(const Hero& other);
	//Hero& operator=(const Hero& other);
	virtual std::string getType() const override;
	virtual void print()override;
	virtual ~Hero() = default;

protected:
	unsigned attack;
	unsigned deffence;
};

Hero::Hero() : Card(), attack(0), deffence(0)
{};
Hero::Hero(std::string name, unsigned cardNum, unsigned imgNum, unsigned attack, unsigned deffence) :
	Card(name, cardNum, imgNum), attack(attack), deffence(deffence)
{};
/*
Hero::Hero(const Hero& other):Card(other)
{
	attack = other.attack;
	deffence = other.deffence;
}

Hero& Hero :: operator=(const Hero& other)
{
	if (this != &other)
	{
		Card::operator=(other);
		attack = other.attack;
		deffence = other.deffence;
	}
	return *this;
};*/
void Hero::print()
{
	Card::print();
	std::cout << "Attack power: " << attack << std::endl;
	std::cout << "Deffence power: " << deffence << std::endl;
}
std::string Hero::getType() const {
	return "Hero";
}