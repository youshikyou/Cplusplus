#pragma once
#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>


class Complex
{
	public:
		Complex();
		Complex(double a, double b);
		~Complex();

		Complex operator +(const Complex &add_num) const;
		Complex operator -(const Complex &sub_num) const;
		Complex operator *(const Complex &mul_num) const;
		Complex operator ~() const;

		friend Complex operator *(const Complex &a,const double n);
		friend Complex operator *(double n, const Complex &a);
		friend std::ostream & operator <<(std::ostream&os, const Complex &a);
		friend std::istream & operator >>(std::istream&os, Complex &a);
	
	private:
		double real_num_;
		double imag_num_;	
};


#endif //

