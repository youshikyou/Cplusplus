#include "Plorg.h"
#include <cstring>
#include <string>
#include <iostream>

Plorg::Plorg()
{
	strcpy_s(fullname_,"Plorga");
	ci_ = 50;
}

Plorg::Plorg(const char *fullname, const int ci)
{
	strcpy_s(fullname_, fullname);
	ci_ = ci;
}

void Plorg::Plorgshow() const
{
	std::cout << "fullname is: " << fullname_ << std::endl;
	std::cout << "CI is: " << ci_ << std::endl;

}

void Plorg::reset(const int &ci)
{
	ci_ = ci;
}
