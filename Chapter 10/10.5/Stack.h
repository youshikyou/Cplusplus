#pragma once

#ifndef STACK_H_
#define STACK_H_

#include <iostream>

struct customer 
{
	char fullname[35];
	double payment;
};

typedef customer Items;

class Stack
	{
	private:
		enum {MAX=10};
		Items items[MAX];
		int top;

	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		bool push(const Items &item);
		bool pop(Items &item);
	};

#endif //

