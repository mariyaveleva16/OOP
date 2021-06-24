#pragma once
#include <string>
#include <iostream>
//trqbvat li mi kopirasht konstruktor i operator=
class MultimediaFile
{
public:
	MultimediaFile();
	MultimediaFile(std::string name, double size, std::string razshirenie);
	virtual std::string getType()const = 0;
	virtual void print();
	virtual ~MultimediaFile() = default;
private:
	std::string name;
	double size;
	std::string razshirenie;
};
MultimediaFile::MultimediaFile():
	name("-"), size(0), razshirenie("-")
{}
MultimediaFile::MultimediaFile(std::string name, double size, std::string razshirenie):
	name(name), size(size), razshirenie(razshirenie)
{}
void MultimediaFile:: print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Razshirenie: " << razshirenie << std::endl;
	std::cout << "Size: " << size <<"MB"<< std::endl;
}