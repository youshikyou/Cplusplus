#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "Stack.h"


int main()
{

	Stack st;
	char ch;
	std::cout << "Please enter A to add customer information,\n"
		<< "D to delete,Q to quit.\n";
	Items info;
	double sum = 0.0;
	while (std::cin >> ch && toupper(ch) != 'Q')
	{
		while (std::cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}
		switch (ch)
		{
			case 'A':
			case 'a':
				std::cout << "Enter customer name: \n";
				std::cin.getline(info.fullname, 35);
				std::cout << "Enter customer payment: \n";
				std::cin >> info.payment;
				if (st.isfull())
					std::cout << "stack already full\n";
				else
					st.push(info);
				break;

			case 'D':
			case 'd':
				if (st.isempty())
					std::cout << "stack already empty\n";
				else
				{
					st.pop(info);
					sum += info.payment;
					std::cout << "sum = " << sum << '\n';
				}
				break;
		}

		std::cout << "Please enter A to add customer information,\n"
			<< "D to delete,Q to quit.\n";
	}

	std::cout << "Bye!" << '\n';

	return 0;
}
