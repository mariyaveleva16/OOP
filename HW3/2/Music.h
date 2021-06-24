#pragma once
#include "File.h"
class Music 
{
private:
	char* singer_name;
	char* song_name;
	int year;
	char* mu_extension;
public:
	Music(const char* singer, const char* song, int y, const char* e);
	~Music() {};
	void mu_output(std::ostream& outs);
	void mu_input(std::istream& ins);
	Music& operator=(const Music& other);
};
std::ostream& operator <<(std::ostream, Music& tmp);
std::istream& operator >>(std::istream, Music& tmp);