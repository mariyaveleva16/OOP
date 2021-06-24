#pragma once
#include "Audio.h"
#include "AudioV.h"
#include <vector>

class Video: virtual public MultimediaFile,virtual public AudioV
{
public:
	Video();
	Video(std::string name, double size, std::string razshirenie, std::string subs, std::vector<Audio*> audio);
	
	virtual std::string getType() const override;
	virtual void print() override;
	virtual ~Video() = default;
private:
	std::string subs;
	std::vector<Audio*> audio;//mnojestvo audio iztochnika samo puss funkciq
};

Video::Video() :MultimediaFile(), subs("-"), audio(std::vector<Audio*>())
{
};

Video::Video(std::string name, double size, std::string razshirenie, std::string subs, std::vector<Audio*> audio) :
	MultimediaFile(name, size, razshirenie), subs(subs), audio(audio)
{
};

std::string Video::getType() const
{
	return "Video";
}
void Video::print()
{
	MultimediaFile::print();
	std::cout << "Subtitles: " << subs << std::endl;
	for (size_t i = 0; i < this->audio.size(); i++)
	{
		std::cout << this->audio[i];// ->print();
	}
}