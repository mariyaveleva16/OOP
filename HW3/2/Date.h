#pragma once
#include <iostream>
#include<cstring>
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	~Date() {};
	void check(int, int, int);
	void print() const;
};
