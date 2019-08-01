#pragma once

#ifndef LIST_H_
#define LIST_H_
#include <iostream>

const int max = 20;

struct lazy
{
	char name_[max];
	int score_;
};

typedef lazy Item;

class List
	{
	private:
		enum {MAX=10};
		Item items[MAX];
		int top;

	public:
		List();
		bool isempty() const;
		bool isfull() const;
		bool push(const Item & item);
		int itemcount() const;
		void visit(void (*pf)(Item &));
	};

#endif //

