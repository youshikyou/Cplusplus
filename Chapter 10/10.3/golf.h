#pragma once

#ifndef golf_H_
#define golf_H_

#include <iostream>
#include <string>
#include<cstring>

class golf
{
private:
	static const int LEN = 40;
	char fullname_[LEN];
	int handicap_;

public:
	golf();
	golf(const char *fullname,int handicap);
	const golf & setgolf(const golf & g);
	void showgolf() const;
};

#endif //
