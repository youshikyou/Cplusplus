#include"Cow.h"
#include<iostream>
int main() {
	Cow kaige;
	std::cout << "kaige" << "\n";
	kaige.ShowCow();
	Cow deyuan("deyuan chen", "tennis", 75);
	std::cout << "deyuan" << "\n";
	deyuan.ShowCow();
	Cow zhiqiang (deyuan);
	std::cout << "zhiqiang" << "\n";
	zhiqiang.ShowCow();



	return 0;
}

