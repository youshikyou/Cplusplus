#include "List.h"
#include <cstring>
#include <string>
#include <iostream>

List::List()
{
	top = 0;
}

bool List::isempty() const
{
	return top == 0;
}

bool List::isfull()const
{
	return top == max;
}

bool List::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

int List::itemcount() const
{
	return top;
}

void List::visit(void(*pf)(Item &))
{
	for (int i = 0; i < top; ++i)
		(*pf)(items[i]);
}
