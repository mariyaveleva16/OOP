#pragma once
#include "Teacher.h"
#include <iostream>
class Course
{
friend class Teacher;
private:
	char* name;
	char* type;
	int code;
	Teacher teacher;
	int signed_students;

public:
	Course(const char* n, const char* typ, int c, Teacher t, int s);
	~Course() {};
	void output(std::ostream& outs);
	void input(std::istream& ins);
	Course& operator=(const Course& other);
};
std::ostream& operator <<(std::ostream, Course& tmp);
std::istream& operator >>(std::istream, Course& tmp);
