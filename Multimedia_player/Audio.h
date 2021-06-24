#pragma once
#include "MultimediaFile.h"

class Audio: virtual public MultimediaFile
{
public:
	Audio();
	Audio(std::string name, double size, std::string razshirenie, double lenght, std::string singer);
	virtual std::string getType() const override;
	virtual void print() override;
	virtual ~Audio() = default;
	void addFile(Audio*);
private:
	double lenght;
	std::string singer;
};
Audio::Audio():
	MultimediaFile(), lenght(0), singer("-")
{}
Audio::Audio(std::string name, double size, std::string razshirenie, double lenght, std::string singer):
	MultimediaFile(name, size, razshirenie), lenght(lenght), singer(singer)
{}
std::string Audio::getType() const
{
	return "Audio";
}
void Audio::print()
{
	MultimediaFile::print();
	std::cout << "Lenght: " << this->lenght << std::endl;
	std::cout << "Singer " << this->singer << std::endl;
}