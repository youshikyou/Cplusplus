#include"Cow.h"
#include<iostream>
int main() {
	Cow kaige;
	std::cout << "kaige" << "\n";
	kaige.ShowCow();
	Cow deyuan("deyuan chen", "tennis", 75);
	std::cout << "deyuan" << "\n";
	deyuan.ShowCow();
	Cow zhiqiang =deyuan; //复制
	std::cout << "zhiqiang" << "\n";
	zhiqiang.ShowCow();

	kaige = zhiqiang;//重载赋值运算符
	std::cout << "kaige" << "\n";
	kaige.ShowCow();


	return 0;
}


