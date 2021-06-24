#include "Date.h"
Date::Date() {
	day = 0;
	month = 0;
	year = 0;
};
Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
};
void Date::check(int d, int m, int y) {
	if(y<0||y>2020) std::cout << "The year is invalid" <<std::endl;
	else
	{
		if(m<1||m>12) std::cout << "The month is invalid" << std::endl;
		else
		{
			if ((m == 4) || (m ==6) || (m == 9) || (m == 11))
			{
				if(d>30) std::cout << "The day is invalid" << std::endl;
				else
				{
					day = d;
					month = m;
					year = y;
				}
			}
			else 
			{
				if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
				{
					if (d > 31) std::cout << "The day is invalid" << std::endl;
					else
					{
						day = d;
						month = m;
						year = y;
					}
				}
				else
				{
					if ((m == 2) && (y % 4 == 0))
					{
						if(d > 29) std::cout << "The day is invalid" << std::endl;
						else
						{
							day = d;
							month = m;
							year = y;
						}
					}
					else
					{
						if ((m == 2) && (y % 4 != 0))
						{
							if (d > 28) std::cout << "The day is invalid" << std::endl;
							else
							{
								day = d;
								month = m;
								year = y;
							}
						}
					}
				}
			}

		}
	}
};
void Date::print() const {
	std::cout << day << " /" << month << " /" << year <<std:: endl;
};


