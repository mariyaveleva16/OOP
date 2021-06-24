#pragma once
#include<iostream>
#include <string>

class Product
{
public:
	Product();
	Product(std::string, std::string, double);
	virtual std::string getName();
	virtual std::string getCode();
	virtual double getPrice();
	virtual void setName(std::string);
	virtual void setCode(std::string);
	virtual void setPrice(double);
	virtual std::string getType() const = 0;
	virtual void print();
	virtual ~Product()=default;

private:
	std::string name;
	std::string code;
	double price;
};

