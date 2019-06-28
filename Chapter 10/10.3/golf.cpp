#include<cctype>
#include<fstream>
#include <string>
#include "golf.h"

golf::golf()
{
	strcpy_s(fullname_, "Noname");
	handicap_ = 0;
}

golf::golf(const char *fullname, int handicap)
{
	
	strncpy_s(fullname_, fullname, LEN - 1);
	fullname_[LEN - 1] = '\0';
	handicap_ = handicap;
}


const golf & golf::setgolf(const golf & g)
{
	strcpy_s(fullname_, g.fullname_);
	handicap_ = g.handicap_;

	return *this;
}


void golf::showgolf() const 
{
	std::cout << "fullname: " << fullname_<<std::endl;
	std::cout << "handicap: " << handicap_ << std::endl;
}
