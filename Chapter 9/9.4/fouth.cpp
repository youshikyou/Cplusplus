#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "fouth.h"

namespace SALES
{
	void setSales(Sales &s, const double ar[], int n)
	{

		for (int i = 0; i < SALES::QUARTERS; i++)
		{
			if (i < n)
				s.sales[i] = ar[i];
			else
				s.sales[i] = 0.0;
		}

		double max = s.sales[0];
		double min = s.sales[0];
		double total = s.sales[0];
		for (int i =1;i< SALES::QUARTERS;i++)
		{
			if (max < s.sales[i])
				max = s.sales[i];

			if (min > s.sales[i])
				min = s.sales[i];

			total += s.sales[i];
		}
	
		s.average = total / double(4);
		s.max = max;
		s.min = min; 
	}

	void setSales(Sales &s)
	{
		for (int i = 0; i < SALES::QUARTERS; i++)
		{
			std::cout << "Please enter #" << (i + 1) << " quarter's sales: ";
			while (!(std::cin >> s.sales[i]))
			{
				std::cin.clear();
				while (std::cin.get()!= '\n')
					continue;
				std::cout << "Please enter #" << (i + 1) << " quarter's sales(double): ";
			}
			std::cin.get();
		}

		double max = s.sales[0];
		double min = s.sales[0];
		double total = s.sales[0];

		for(int i = 1; i < SALES::QUARTERS; i++)
		{

			if (max < s.sales[i])
				max = s.sales[i];

			if (min > s.sales[i])
				min = s.sales[i];

			total += s.sales[i];
		}
		s.average = total / double(4);
		s.max = max;
		s.min = min;

	}
	void showSales(const Sales &s)
	{
		for (int i = 0; i < SALES::QUARTERS; i++)
		{
			std::cout << "#" << (i + 1) << " quarter's sales(double): " << s.sales[i] << std::endl;
	
		}
		std::cout << "max "<< s.max << std::endl;
		std::cout << "min " << s.min << std::endl;
		std::cout << "average " << s.average << std::endl;
	}

}


