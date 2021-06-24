#include "JSONObject.h"
#include "JSONArray.h"

int main()
{
	JSONObject<double> p; 
	p.setKey ("dfgt");
	p.setValue(2345);
	JSONArray<double>::addObject(p);
	p.print(); std::cout <<std:: endl;
	return 0;
}
