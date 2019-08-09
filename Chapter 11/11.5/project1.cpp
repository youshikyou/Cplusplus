#include<iostream>
#include"Stonewt.h"

int main()
{
	Stonewt test1;
	std::cout <<"test1: "<< test1 << std::endl;

	Stonewt test2(2, 8, Stonewt::STONE);
	std::cout << "test2: "<<test2 << std::endl;

	Stonewt test3(2, 3, Stonewt::POUNDS);

	std::cout << "test3: " << test3 << std::endl;
	
	Stonewt test4 = test2 + test3;
	std::cout << test4 << std::endl;

	std::cout << test2+test3 << std::endl;  

	std::cout << 2 * test2 << std::endl;

	std::cout << test2 *3 << std::endl;

	std::cout << test3 * 3 << std::endl;

	std::cout << test3 - test2 << std::endl;

	std::cout << test2 - test3 << std::endl;


	return 0;

}
