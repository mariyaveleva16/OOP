#include "Music.h"
using namespace std;

Music::Music(const char* singer, const char* song, int y, const char* e)
{
	int len = strlen(singer);
	this->singer_name = new char[len + 1];
	strcpy_s(this->singer_name, len + 1, singer);
	this->singer_name[len] = '\0';
	int len1 = strlen(song);
	this->song_name = new char[len1 + 1];
	strcpy_s(this->song_name, len1 + 1, song);
	this->song_name[len1] = '\0';
	year = y;
	int len2 = strlen(e);
	this->mu_extension = new char[len2 + 1];
	strcpy_s(this->mu_extension, len2 + 1, e);
	this->mu_extension[len2] = '\0';
};
void Music::mu_output(ostream& outs)
{
	outs << "Name: " << singer_name<< " - " << song_name << endl;
	outs << "Year: " << year << endl;
	outs << "Extension: " << mu_extension << endl;
};
void Music::mu_input(istream& ins)
{
	cout << "Singer name: ";
	int i = 0;
	while (singer_name[i] != '/n')
	{
		ins >> singer_name[i];
		i++;
	}
	int p = 0;
	while (song_name[p] != '/n')
	{
		ins >> song_name[p];
		p++;
	}
	cout << "Year: ";
	ins >> year;
	cout << "Extension: ";
	int j = 0;
	while (mu_extension[j] != '/n')
	{
		ins >> mu_extension[j];
		j++;
	}
};
Music& Music:: operator=(const Music& other)
{
	if (this != &other) {

		delete[] this->singer_name;
		int len = strlen(other.singer_name);
		this->singer_name = new char[len + 1];
		strcpy_s(this->singer_name, len + 1, other.singer_name);
		this->singer_name[len] = '\0';
		delete[] this->song_name;
		int len1 = strlen(other.song_name);
		this->song_name = new char[len1 + 1];
		strcpy_s(this->song_name, len1 + 1, other.song_name);
		this->song_name[len1] = '\0';
		this->year = other.year;
		delete[] this->mu_extension;
		int len2 = strlen(other.mu_extension);
		this->mu_extension = new char[len2 + 1];
		strcpy_s(this->mu_extension, len2 + 1, other.mu_extension);
		this->mu_extension[len2] = '\0';
	}
	return *this;
};