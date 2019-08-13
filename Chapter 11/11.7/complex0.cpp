#include "complex0.h"
#include <iostream>

Complex::Complex()
{
	real_num_ = imag_num_ = 0.0;
}

Complex::Complex(double a, double b)
{
	real_num_ = a;
	imag_num_ = b;
}

Complex::~Complex()
{

}

Complex Complex::operator +(const Complex &add_num) const
{
	return Complex(real_num_ + add_num.real_num_, imag_num_ + add_num.imag_num_);
}

Complex Complex::operator -(const Complex &sub_num) const
{
	return Complex(real_num_ - sub_num.real_num_, imag_num_ - sub_num.imag_num_);
}

Complex Complex::operator *(const Complex &mul_num) const
{
	return Complex(real_num_*mul_num.real_num_ - imag_num_ * mul_num.imag_num_, real_num_*mul_num.imag_num_ + imag_num_ * mul_num.real_num_);
}



Complex Complex::operator ~() const
{
	return Complex(real_num_, -imag_num_);
}

// friend function

Complex operator *(const Complex &a, double n)
{
	return Complex(a.real_num_*n, a.imag_num_*n);
}

Complex operator *(double n, const Complex &a)
{
	return a * n;
}

std::ostream & operator <<(std::ostream&os, const Complex &a)
{
	os << "( " << a.real_num_ << "," << a.imag_num_ << "i)";

	return os;
}


std::istream & operator >>(std::istream&is, Complex &a)
{
	std::cout << "real: ";
	is >> a.real_num_;
	std::cout << "imaginary: ";
	is >> a.imag_num_;
	return is;

}

