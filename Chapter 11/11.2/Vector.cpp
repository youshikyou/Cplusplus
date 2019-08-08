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

	void Vector::set_x(double n1,double n2)
	{
		x = n1 * cos(n2);
	}

	void Vector::set_y(double n1,double n2)
	{
		y = n1 * sin(n2);
	}


	//public method 

	Vector::Vector()
	{
		x = y = 0.0;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;

		}
		else if (form == POL)
		{
			set_x(n1,n2);
			set_y(n1, n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "Vector set to 0 \n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			set_x(n1,n2);
			set_y(n1,n2);

		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "Vector set to 0 \n";
			x = y = 0.0;
			mode = RECT;

		}
	}

	Vector::~Vector()
	{
	}

	double Vector::magval() const
	{
		return sqrt(x*x+y*y);
	}

	double Vector::anval() const
	{
		if (x == 0.0&&y == 0.0)
			return 0;
		else
			return atan2(y, x);
	}


	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
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
		return a * n;
	}

	std::ostream & operator <<(std::ostream&os, const Vector&v)
	{
		if (v.mode == Vector::RECT)
		{
			os << "(x,y) = (" << v.x << "," << v.y << ")";
		}
		else if (v.mode == Vector::POL)
		{
			os << "(m,a) = (" << v.magval() << "," << v.anval()*Rad_to_deg << ")";
		}
		return os;
	}

	/*std::fstream & operator <<(std::fstream&of, const Vector&v)
	{
		if (v.mode == Vector::RECT)
		{
			of << "(x,y) = (" << v.x << "," << v.y << ")";
		}
		else if (v.mode == Vector::POL)
		{
			of << "(m,a) = (" << v.mag << "," << v.ang*Rad_to_deg << ")";
		}
		return of;
	}*/

}




