#include <iostream>
#include <vector>
#include <array>
#include <cstring>
#include <climits>
#include <cctype>
#include <fstream>
#include <string>
#include "sales.h"
namespace SALES
{
	Sales::Sales(const double *sales, int n)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			if (i < n)
				sales_[i] = sales[i];
			else
				sales_[i] = 0.0;
		}
		max_ = sales_[0];
		min_ = sales_[0];
		double total = sales_[0];

		for (int i = 1; i < QUARTERS; i++)
		{
			if (max_ < sales_[i])
				max_ = sales_[i];
			if (min_ > sales_[i])
				min_ = sales_[i];
			total += sales[i];

		}
		average_ = total / double(4);

	}

	void Sales::setSales()
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Please enter #" << (i + 1) << " quarter's sales: ";
			while (!(std::cin >> sales_[i]))
			{
				std::cin.clear();
				while (std::cin.get() != '\n')
					continue;
				std::cout << "Please enter #" << (i + 1) << " quarter's sales(double): ";
			}
			std::cin.get();
		}

		max_ = sales_[0];
		min_ = sales_[0];
		double total = sales_[0];

		for (int i = 1; i < QUARTERS; i++)
		{

			if (max_ < sales_[i])
				max_ = sales_[i];

			if (min_ > sales_[i])
				min_ = sales_[i];

			total += sales_[i];
		}
		average_ = total / double(4);

	}

	void Sales::showSales() const
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "#" << (i + 1) << ": " << sales_[i] << std::endl;
		}
		std::cout << "max: " << max_ << std::endl;
		std::cout << "min: " << min_ << std::endl;
		std::cout << "average: " << average_ << std::endl;


	}
}

