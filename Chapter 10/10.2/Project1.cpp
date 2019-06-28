#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "Person1.h"


int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	std::cout << std::endl;
	one.FormalShow();
	std::cout << std::endl;

	two.Show();
	std::cout << std::endl;
	two.FormalShow();
	std::cout << std::endl;

	three.Show();
	std::cout << std::endl;
	three.FormalShow();
	std::cout << std::endl;

	return 0;
}
