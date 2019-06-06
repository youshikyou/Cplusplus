#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "golf.h"

extern const int Len;

void setgolf(golf &g, const char *name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}


int setgolf(golf &g)
{
	std::cout << "please enter name:" << std::endl;
	std::cin.get(g.fullname, Len);
	if (g.fullname[0])
	{
		std::cout << "please enter handicap:" << std::endl;
		while (!(std::cin >> g.handicap))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "please enter handicap(integer): " << std::endl;
		}
		std:: cin.get();  //这里的这个非常重要，需要把输入数字后的回车符读取出来
		return 1;
	}

	else
		return  0;
}
void handicap(golf &g, int hc)
{
	g.handicap = hc;

}


void showgolf(const golf &g)
{
	std::cout << "fullname is: " << g.fullname << std::endl;
	std::cout << "handicap is: " << g.handicap << std::endl;
}

