#include "Time.h"
#include <iostream>

Time::Time(int h, int m, int s, bool time_of_the_day) 
{
	this->h = h;
	this->m= m;
	this->s = s;
	this->time_of_the_day =  time_of_the_day;
}

Time Time::difference(const Time& model)
{
   	int S2 = 0;

    if (time_of_the_day == 0 && model.time_of_the_day == 0) // PM
    {
        S2 = -((h * 3600 + m * 60 + s) - (model.h * 3600 + model.m * 60 + model.s));
    }
    else if (time_of_the_day == 1 && model.time_of_the_day == 1) // AM
    {
        S2 = -((model.h * 3600 + model.m * 60 + model.s) - (h * 3600 + m * 60 + s));
    }
    else
    {
    	 S2 = -((h * 3600 + m * 60 + s) - (model.h * 3600 + model.m * 60 + model.s));
	}
	int diffH = S2 / 3600;
    int diffM = (S2 % 3600) / 60;
    int diffS = S2 % 60;
    Time timeDifference(diffH,diffM,diffS,0);
    return timeDifference;

}
void Time::return_variable()
{
	std::cout << "Time difference: " << h << " h, " << m << " m, " << s << " s." << std::endl;
}