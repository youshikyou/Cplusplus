#include "Stonewt.h"
#include <iostream>

Stonewt::Stonewt()
{
	stone = pound = pounds = 0;
	format = POUNDS;
}

Stonewt::Stonewt(double lbs,Mode form)
{
	stone = int(lbs) / Lbs_per_stone;
	pound = int(lbs) % Lbs_per_stone + lbs - int(lbs);
	pounds = lbs;
	format = form;

}

Stonewt::Stonewt(int s, double lbs,Mode form)
{
	stone = s + int(lbs) / Lbs_per_stone;
	pound = int(lbs) % Lbs_per_stone + lbs - int(lbs);
	pounds = s * Lbs_per_stone + lbs;
	format = form;

}

Stonewt::~Stonewt()
{

}

Stonewt Stonewt::operator +(const Stonewt &b) const
{
	return Stonewt(pounds + b.pounds,format);

}

Stonewt Stonewt::operator -(const Stonewt &b) const
{
		return Stonewt(pounds - b.pounds,format);

}


Stonewt Stonewt::operator*(double mul) const
{

		return Stonewt(pounds*mul,format);
}

Stonewt operator *(double n, const Stonewt &a)
{
		return Stonewt(a.pounds*n,a.format);
}

std::ostream & operator <<(std::ostream &os, const Stonewt &a)
{
	if (a.format == Stonewt::STONE)
	{
		os << "stone format" << '\n';
		os << a.stone << " stones " << a.pound << " pounds" << '\n';
	}
	else if (a.format == Stonewt::POUNDS)
	{
		os << "pounds format" << '\n';
		os << a.pounds << " pounds" << '\n';
	}
	else
		os << "not valdid" << '\n';
	return os;
}

