#include "Move.h"
#include <iostream>

Move::Move(double a,double b)
{
	x = a;
	y = b;
}

void Move::showmove() const 
{
	std::cout << "x value: " << x << '\n';
	std::cout << "y value: " << y << '\n';

}

Move Move::add(const Move &m) const 
{
	Move newmove;
	newmove.x= m.x + this->x;
	newmove.y= m.y + this->y;
	return newmove;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
