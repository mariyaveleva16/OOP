#pragma once
#include "File.h"
class Image
{
private:
	char* device_name;
	double width;
	double height;
	char* im_extension;
public:
	Image(const char* n, double w, double h, const char* e);
	~Image() {};
	void im_output(std::ostream& outs);
	void im_input(std::istream& ins);
	Image& operator=(const Image& other);
};
std::ostream& operator <<(std::ostream, Image& tmp);
std::istream& operator >>(std::istream, Image& tmp);