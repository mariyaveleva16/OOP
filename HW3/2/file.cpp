#include "File.h"
using namespace std;
/*
File::File() {
	name = new char[1];
	name[0] = '\0';
	date_of_creation = 0;//???
	size = 0;
	extension = new char[1];
	extension[0] = '\0';
};*/
File::File(const char* n, Date d, int s,const char* e) {
	int len = strlen(n);
	this->name = new char[len + 1];
	strcpy_s(this->name, len + 1, n);
	this->name[len] = '\0';
	date_of_creation = d;
	size = s;
	int len1 = strlen(e);
	this->extension = new char[len1 + 1];
	strcpy_s(this->extension, len1 + 1, e);
	this->extension[len1] = '\0';
};
void File::output(ostream& outs)
{
	outs << "Name: " << name << extension << endl;
	outs << "Date of creation: "<< Date::print << endl;
	outs << "Size: " << size << endl;
};
void File::input(istream& ins)
{
	if (ins.peek() == '\n') ins.ignore();
	cout << "Name: ";
	int i = 0;
	while (name[i] != '/n')
	{
		ins >> name[i];
		i++;
	}
	cout << "Date: ";
	//
	cout << "Size: ";
	ins >> size;
	cout << "Extension: ";
	int j = 0;
	while (extension[j] != '/n')
	{
		ins >> extension[j];
		j++;
	}
};
File& File:: operator=(const File& other) {

	if (this != &other) {

		delete[] this->name;
		int len = strlen(other.name);
		this->name = new char[len + 1];
		strcpy_s(this->name, len + 1, other.name);
		this->name[len] = '\0';
		this->date_of_creation = other.date_of_creation;
		this->size = other.size;
		delete[] this->extension;
		int len1 = strlen(other.extension);
		this->extension = new char[len1 + 1];
		strcpy_s(this->extension, len1 + 1, other.extension);
		this->extension[len1] = '\0';
	}
	return *this;
};