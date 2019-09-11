#include<iostream>
#include<string>
#include"port.h"

int main() {
	/*Port test1;
	std::cout << "test1: " << test1 << std::endl;
	Port test2("lafei", "wine", 20);
	std::cout << "test2: " << test2 << std::endl;
	Port test3(test2);
	std::cout << "test3: " << test3 << std::endl;
	test1 = test2;
	std::cout << "after assignment test1: " << test1 << std::endl;
	test2 -=14;
	std::cout << "test2-14: ";
	test2.show();
	test2+= 4;
	std::cout << "test2+4: ";
	test2.show();

	VintagePort test6;
	std::cout << "test6: " << test6 << std::endl;
	VintagePort test7("boerduo", 30, "qinqin", 2001);
	std::cout << "test7: ";
	test7.show();
	VintagePort test8;
	std::cout << "test8: " << test8 << std::endl;
	test8 = test7;
	std::cout << "after assignment test8: " << test8 << std::endl;

	VintagePort test9(test8);
	std::cout << "after copy test9: " << test9 << std::endl;*/


	Port p1;
	Port p2("Tsingtao", "Beer", 30);
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	Port p3 = p2;
	p3.show();
	p3 += 3;
	p3.show();

	VintagePort vp1("Harbin", 50, "hb", 1992);
	vp1.show();
	VintagePort vp2;
	vp2.show();
	vp1 -= 3;
	vp2 = vp1;
	vp2.show();

	return 0;
}
