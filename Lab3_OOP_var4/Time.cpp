#include "Time.h"

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Time::SetHour(int h)
{
		if ((h >= 0) && (h <= 23))
			hour = h;
		else 
			throw "Error";
}

void Time::SetMinute(int m)
{
	if ((m >= 0) && (m <= 59))
		minute = m;
	else 
		throw "Error";
}

void Time::SetSecond(int s)
{
	if ((s >= 0) && (s <= 59))
		second = s;
	else 
		throw "Error";
}

void Time::operator-=(const int n)
{
	int timeInSeconds = second + 60 * (minute + 60 * hour);
	timeInSeconds -= n;
	hour = timeInSeconds / (60*60) - minute/60 - second/(60*60);
	timeInSeconds -= hour*60*60;
	minute = timeInSeconds / 60 - second/60;
	timeInSeconds -= minute*60;
	second = timeInSeconds;
}

ostream& operator<<(ostream& out, const Time& obj)
{
	out << obj.hour << ":" << obj.minute << ":" << obj.second;
	return out;
}

bool operator>=(Time& t1, Time& t2)
{
	return (t1.second + 60*(t1.minute + 60*(t1.hour))) >= (t2.second + 60 * (t2.minute + 60 * (t2.hour)));
}
