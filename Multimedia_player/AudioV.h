#pragma once
#include "Audio.h"
#include<vector>

class AudioV
{
public:
	AudioV();
	void addFile(Audio* newfile);
	virtual void print();
private:
	std::vector<Audio*> audio;
};
AudioV::AudioV() :audio(std::vector<Audio*>())
{}
void AudioV::addFile(Audio* newfile)
{
	audio.push_back(newfile);
}
void AudioV::print()
{
	for (size_t i = 0; i < this->audio.size(); i++)
	{
		this->audio[i]->print();
	}
};