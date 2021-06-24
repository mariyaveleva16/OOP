#pragma once
#include "Video.h"
#include "Stream.h"

class MultimediaPlayer
{
public:
	MultimediaPlayer();
	void addFile(MultimediaFile* newfile);
	void removeFile(int e);
	void print();
private:
	std::vector<MultimediaFile*> player;
};
MultimediaPlayer::MultimediaPlayer():player(std::vector<MultimediaFile*>())
{}
void MultimediaPlayer:: addFile(MultimediaFile* newfile)
{
	player.push_back(newfile);
}
void MultimediaPlayer::removeFile(int e)
{
	player.erase(player.begin() + e);
}
void MultimediaPlayer::print()
{
	for (size_t i = 0; i < this->player.size(); i++)
	{
		this->player[i]->print();
	}
};