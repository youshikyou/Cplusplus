#pragma once
#ifndef CLASSIC_H_
#define CLASSIC_H_
#include"cd.h"

class Classic:public Cd 
{
private:
	char mainwork[80];

public:
	Classic(const char * s1,const char*s2, const char * s3, int n, double x);
	Classic();
	virtual ~Classic();
	virtual void Report()const;
	Classic &operator =(const Classic&d);
};

#endif // !CLASSIC_H_
