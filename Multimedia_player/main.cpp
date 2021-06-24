#include "MultimediaPlayer.h"

int main()
{
	MultimediaPlayer p;
	MultimediaFile* a;
	Audio one("Name1", 20, ".mp3", 4, "Singer1");
	Audio two("Name2", 25, ".mp3", 5, "Singer2");
	Audio three("Name3", 30, ".mp3", 6, "Singer3");
	AudioV au;
	au.addFile(&one);
	au.addFile(&two);
	au.addFile(&three);
	Video video("VName", 35, "mp4", "sdfghj", au);
	Stream stream();

	return 0;
}
