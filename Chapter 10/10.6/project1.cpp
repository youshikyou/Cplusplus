#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "Move.h"


int main()
{
	Move a(3.0, 4.0);  //three method to construct class object
	Move b;
	Move c = Move (23,32);

	std::cout << "a" << '\n';
	a.showmove();
	std::cout << "b" << '\n';
	b.showmove();
	std::cout << "c" << '\n';
	c.showmove();
	std::cout << "a reset" << '\n';
	a.reset();
	a.showmove();
	std::cout << "a reset" << '\n';
	a.reset(5.0, 7.0);
	a.showmove();
	std::cout << "b reset " << '\n';
	b.reset(10.0, 11.0);
	b.showmove();
	std::cout << "add a with b" << '\n';

	c =a.add(b);
	std::cout << "now c value is sum of a and b" << '\n';
	c.showmove();

	return 0;
}
