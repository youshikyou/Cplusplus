#include <iostream>
#include <cstring>
#include<climits>
#include<cctype>
#include <string>
#include "List.h"

void show(Item &i);

int main()
{
	List list;

	Item i_1 = { "zhiqiang", 100 };
	list.push(i_1);

	Item i_2 = { "deyuan", 99 };
	list.push(i_2);

	int n;

	n = list.itemcount();
	std::cout << n << " items in list" << std::endl;

	list.visit(show);

	return 0;
}

void show(Item &i)
{
	std::cout << "name: " << i.name_ << std::endl;
	std::cout << "score: " << i.score_ << std::endl;
}
