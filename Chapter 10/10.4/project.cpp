#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "sales.h"


int main()
{
	using SALES::Sales;

	double vals[3] = { 10, 20, 30 };
	Sales s = Sales(vals, 3);
	s.showSales();

	Sales t;
	t.setSales();
	t.showSales();

	return 0;
}
