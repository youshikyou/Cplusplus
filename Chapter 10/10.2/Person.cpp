#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "Person1.h"


Person::Person(const std::string &ln, const char *fn)
{
	lname_ = ln;
	strncpy_s(fname_, fn, LIMIT-1);
	fname_[LIMIT - 1] = '\0';

}
void Person::Show() const
{
	std::cout << "firstname: " << fname_ << std::endl;
	std::cout << "lastname: " << lname_ << std::endl;

}
void Person::FormalShow() const
{
	std::cout << "lastname: " << lname_ << std::endl;
	std::cout << "firstname: " << fname_ << std::endl;
}
