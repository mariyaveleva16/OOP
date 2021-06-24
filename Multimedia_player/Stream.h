#pragma once
#include "MultimediaFile.h"

class Stream : virtual public MultimediaFile
{
public:
	Stream();
	Stream(std::string name, double size, std::string razshirenie, double lenght, std::string singer);
	virtual std::string getType() const override;
	virtual void print() override;
	virtual ~Stream() = default;
private:
	std::string path;
};
Stream::Stream() :
	MultimediaFile(), path("-")
{}
Stream::Stream(std::string name, double size, std::string razshirenie, double lenght, std::string singer) :
	MultimediaFile(), path(path)
{}
std::string Stream::getType() const
{
	return "Stream";
}
void Stream::print()
{
	MultimediaFile::print();
	std::cout << "Path: " << this->path << std::endl;
}