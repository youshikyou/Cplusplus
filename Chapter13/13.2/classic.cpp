#include<cstring>
#include<iostream>
#include"classic.h"


Classic::Classic(const char * s1, const char*s2, const char * s3, int n, double x) :Cd(s2, s3, n, x)
{
	mainwork = new char[strlen(s1) + 1];
	strcpy_s(mainwork, strlen(s1) + 1, s1);
}
Classic::Classic():Cd("default","none",0,0.0){

	mainwork = new char[strlen("default") + 1];
	strcpy_s(mainwork, strlen("default") + 1, "default");
}

Classic::~Classic() {
	delete[]mainwork;
}

void Classic::Report()const {
	Cd::Report();
	std::cout << "mainwork: " << mainwork << '\n';
}

Classic& Classic::operator=(const Classic&d)//注意这里，这里的特征标（形参）要与基类一致，否则将会隐藏方法P506， 如果返回值是基类的引用和指针，则可以相应修改。只适用于返回值。
{
	if (this == &d)
		return *this;
	Cd::operator=(d);
	delete[]mainwork;
	mainwork = new char[strlen(d.mainwork) + 1];
	strcpy_s(mainwork, strlen(d.mainwork) + 1,d.mainwork);
	return *this;
}
