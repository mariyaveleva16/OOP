#pragma once
#include <string>
#include <iostream>

class Card
{
public:
	Card();
	Card(std::string name, unsigned cardNum, unsigned imgNum);
	virtual std::string getType() const = 0;
	//Card(const Card& other);
	//Card& operator=(const Card& other);
	virtual void print();
	virtual ~Card()=default;

private:
	std::string name;
	unsigned cardNum;
	unsigned imgNum;
};
