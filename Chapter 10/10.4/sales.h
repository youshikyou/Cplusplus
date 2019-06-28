#pragma once

#ifndef SALE_H_
#define SALE_H_

#include <iostream>
#include <string>
#include <cstring>

namespace SALES
{
	class Sales
	{
	private:
		static const int QUARTERS = 4;
		double sales_[QUARTERS];
		double average_;
		double max_;
		double min_;

	public:
		Sales() { sales_[QUARTERS] = { 0 }; average_ = 0.0; max_ = 0.0; min_ = 0.0; };
		Sales(const double *sales,int n);
		void setSales();
		void showSales() const;

	};
}

#endif //
