#pragma once
#include"Product.h"

class Drink :virtual public Product
{
public:
	Drink();
	Drink(std::string, std::string, double, double);
	virtual double getAlkohol();
	virtual void setAlkohol(double);
	virtual std::string getType() const override;
	virtual void print()override;
	virtual ~Drink() = default;
private:
	double alkohol;
};
