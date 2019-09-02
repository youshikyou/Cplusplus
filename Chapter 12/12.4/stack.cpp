#include "stack.h"
#include<iostream>
Stack::Stack(int n)
{
	if (n > MAX)
	{
		std::cout << "exceed MAX, set to MAX=10" << '\n';
		n = MAX;
	}
	pitems = new Item[n];
	size = n;
	top = 0;
}

Stack::Stack(const Stack &st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i < top; i++)
		pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty()const
{
	return top == 0;
}

bool Stack::isfull()const
{
	return top == MAX;
}

bool Stack::push(const Item &item)
{
	if (top < MAX)
	{
		pitems[top++] = item;

		return true;
	}
	else
		return false;
}

bool Stack::pop(Item &item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack &Stack::operator =(const Stack &st)
{
	if (this == &st)
		return *this;
	delete[]pitems;
	pitems = new Item[size];
	size = st.size;
	top = st.top;
	for (int i = 0; i < top; i++)
		pitems[i] = st.pitems[i];
	return *this;
}
