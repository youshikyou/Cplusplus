#include"mytime.h"
#include<iostream>

const int min_per_hr = 60;
Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

Time::~Time()
{

}

void Time::AddMin(int m)
{
	hours += (minutes + m) / min_per_hr;
	minutes= (minutes + m) % min_per_hr;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time & a, const Time &b)
{
	Time sum;
	sum.minutes = a.minutes + b.minutes;
	sum.hours = a.hours + b.hours + sum.minutes / min_per_hr;
	sum.minutes = sum.minutes % min_per_hr;
	return sum;
}

Time operator-(const Time & a, const Time &b)
{
	Time diff;
	diff.minutes = (a.hours*min_per_hr + a.minutes) - (b.hours*min_per_hr + b.minutes);
	diff.hours = diff.minutes / min_per_hr;
	diff.minutes %= min_per_hr;
	return diff;
}

Time operator-(const Time &a)
{
	return Time(-a.hours, -a.minutes);
}

Time operator*(const Time &a, double b)
{
	Time mul_rel;
	mul_rel.minutes=(a.hours * min_per_hr + a.minutes) *b;
	mul_rel.hours = mul_rel.minutes / min_per_hr;
	mul_rel.minutes %= min_per_hr;
	return mul_rel;
}

Time operator*(double b, const Time &a)
{
	return a * b;
}


std::ostream & operator <<(std::ostream &os, const Time &t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}
