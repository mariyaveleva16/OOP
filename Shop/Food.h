#pragma once
#include "Product.h"

class Food:virtual public Product
{
public:
	Food();
	Food(std::string, std::string, double, double);
	virtual double getKalories();
	virtual void setKalories(double);
	virtual std::string getType() const override;
	virtual void print()override;
	virtual ~Food() = default;
private:
	double kalories;
};
