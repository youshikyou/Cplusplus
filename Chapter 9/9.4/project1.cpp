#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include<new>
#include "fouth.h"

int main()
{
	double ini[4] = { 4.0,5.0,7.0,8.0 };
	using SALES::setSales;
	using SALES::showSales;
	using SALES::Sales;

	Sales test1;
	setSales(test1, ini, 4);
	showSales(test1);

	Sales test2;
	setSales(test2);
	showSales(test2);

	return 0;
}
