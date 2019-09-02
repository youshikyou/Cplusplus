#pragma once
#include "stock20.h"
#include <iostream>
#include<cstring>

Stock::Stock() {
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
	company = nullptr;
}

Stock::Stock(const char *co, long n , double pr)
{
	company = new char[strlen(co) + 1];
	strcpy_s(company, strlen(co) + 1, co);
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative;"
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();


}

Stock::~Stock()
{
	delete[]company;
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased cannot be negative."
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares = num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares sold cannot be negative."
			<< "Transaction is aborted.\n";
	}
	else if(num>shares)
	{
		std::cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

const Stock& Stock::topval(const Stock &s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

std::ostream & operator <<(std::ostream&os, const Stock & st)
{
	std::ios_base::fmtflags orig = os.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::streamsize prec = os.precision(3);
	os << "Company: " << st.company
		<< " Shares: " << st.shares << '\n';
	os << " Share Price: $" << st.share_val;
	os.precision(2);
	os << " Total worth :$ " << st.total_val << '\n';
	os.setf(orig, std::ios_base::floatfield);
	os.precision(prec);
	return os;

}
