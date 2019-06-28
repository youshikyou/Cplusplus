#pragma once

#ifndef Person1
#define Person1

#include <iostream>
#include <string>
#include<cstring>

class Person
{
private:
	static const int LIMIT = 25;
	std::string lname_;
	char fname_[LIMIT];


public:
	Person() { lname_ = ""; fname_[0] = '\0'; }
	Person(const std::string &ln, const char *fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};


#endif // !Person1.h
