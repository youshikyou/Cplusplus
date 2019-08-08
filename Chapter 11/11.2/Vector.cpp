#include "Vector.h"
#include <cmath>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{

	const double Rad_to_deg = 45.0 / atan(1.0);

	void Vector::magval()const
	{
		cout << "mag value: " <<sqrt(x*x + y * y) << '\n';
	}

	void Vector::angval()const
	{
		if (x == 0.0&&y == 0.0)

			cout << "ang value: " << 0 << '\n';
		else
			cout << "ang value: " << atan2(y, x) << '\n';
		
	}

	Vector::Vector()
	{
		x = y = 0.0;
	}

	Vector::Vector(double n1, double n2)
	{
		x = n1;
		y = n2;
	}

	void Vector::reset(double n1, double n2)
	{
		x = n1;
		y = n2;
	}

	Vector::~Vector()
	{
	}


	Vector Vector::operator+(const Vector &b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector &b)const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator *(double n) const
	{
		return Vector(x*n, y*n);
	}

	Vector operator *(double n, const Vector &a)
	{
		return a*n;
	}

	std::ostream & operator <<(std::ostream&os, const Vector&v)
	{

		os << "(x,y) = (" << v.x << "," << v.y<<")";

		return os;
	}

}

