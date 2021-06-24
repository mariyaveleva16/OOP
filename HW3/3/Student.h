#pragma once
#include <iostream>
class Student
{
private:
	char* name;
	int fn_number;
	int courses;

public:
	Student(const char* n, int fn, int c);
	~Student() {};
	void output(std::ostream& outs);
	void input(std::istream& ins);
	Student& operator=(const Student& other);
};
std::ostream& operator <<(std::ostream, Student& tmp);
std::istream& operator >>(std::istream, Student& tmp);