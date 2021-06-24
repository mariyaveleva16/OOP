#pragma once
#include <iostream>
class Teacher
{
private:
	char* name;
	char* title;

public:
	Teacher(const char* n, const char* t, int c, const char* t);
	~Teacher() {};
	void output(std::ostream& outs);
	void input(std::istream& ins);
	Teacher& operator=(const Teacher& other);
};
std::ostream& operator <<(std::ostream, Teacher& tmp);
std::istream& operator >>(std::istream, Teacher& tmp);