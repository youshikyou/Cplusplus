#pragma once

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>

namespace VECTOR
{
	class Vector
	{
		
	private:
		double x;
		double y;

	public:
		Vector();
		Vector(double n1, double n2);
		~Vector();
		void reset(double n1, double n2);
		double xval()const { return x; }
		double yval()const { return y; }
		void magval()const;
		void angval()const;

		Vector operator+(const Vector &b)const;
		Vector operator-(const Vector &b)const;
		Vector operator-() const;
		Vector operator *(double n) const;
		friend Vector operator *(double n, const Vector &a);
		friend std::ostream & operator <<(std::ostream&os, const Vector&v);
		
	};

}


#endif //
