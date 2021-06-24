#pragma once
#include "Date.h"

class File
{
friend class Image;
friend class Music;
private:
	char* name;
	Date date_of_creation;
	int size;
	char* extension;

public:
	//File();
	File(const char* n, Date d, int s,const char* e);
	~File() {};
	void output(std::ostream& outs);
	void input(std::istream& ins);
	File& operator=(const File& other);
};
std::ostream& operator <<(std::ostream, File& tmp);
std::istream& operator >>(std::istream, File& tmp);