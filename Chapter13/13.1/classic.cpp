#include<cstring>
#include<iostream>
#include"classic.h"


Classic::Classic(const char * s1, const char*s2, const char * s3, int n, double x) :Cd(s2, s3, n, x)
{
	strncpy_s(mainwork, s1, 79);
	mainwork[79] = '\0';
}
Classic::Classic():Cd("default","none",0,0.0){

	strcpy_s(mainwork, "none");
}

Classic::~Classic() {
}

void Classic::Report()const {
	std::cout << "mainwork: " << mainwork << '\n';
	Cd::Report();
}

Classic& Classic::operator=(const Classic&d)//注意这里，这里的特征标（形参）要与基类一致，否则将会隐藏方法P506， 如果返回值是基类的引用和指针，则可以相应修改。只适用于返回值。
{
	if (this == &d)
		return *this;
	Cd::operator=(d);
	strncpy_s(mainwork, d.mainwork, 79);
	mainwork[79] = '\0';
	return *this;
}
