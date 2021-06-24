#include "Image.h"
using namespace std;
Image::Image(const char* n, double w, double h, const char* e) 
{
	int len = strlen(n);
	this->device_name = new char[len + 1];
	strcpy_s(this->device_name, len + 1, n);
	this->device_name[len] = '\0';
	width = w;
	height = h;
	int len1 = strlen(e);
	this->im_extension = new char[len1 + 1];
	strcpy_s(this->im_extension, len1 + 1, e);
	this->im_extension[len1] = '\0';
};
void Image::im_output(ostream& outs)
{
	outs << "Device name: " << device_name << endl;
	outs << "Resolution: "<< width << "/" << height << endl;
	outs << "Extension: " << im_extension << endl;
};
void Image::im_input(istream& ins)
{
	cout << "Device name: ";
	int i = 0;
	while (device_name[i] != '/n')
	{
		ins >> device_name[i];
		i++;
	}
	cout << "Width: ";
	ins >> width;
	cout << "Height: ";
	ins >> height;
	cout << "Extension: ";
	int j = 0;
	while (im_extension[j] != '/n')
	{
		ins >> im_extension[j];
		j++;
	}
};
Image& Image:: operator=(const Image& other) {

	if (this != &other) {

		delete[] this->device_name;
		int len = strlen(other.device_name);
		this->device_name = new char[len + 1];
		strcpy_s(this->device_name, len + 1, other.device_name);
		this->device_name[len] = '\0';
		this->width = other.width;
		this->height = other.height;
		delete[] this->im_extension;
		int len1 = strlen(other.im_extension);
		this->im_extension = new char[len1 + 1];
		strcpy_s(this->im_extension, len1 + 1, other.im_extension);
		this->im_extension[len1] = '\0';
	}
	return *this;
};