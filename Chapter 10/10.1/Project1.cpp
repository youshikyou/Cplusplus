#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "bank.h"
int main()
{

	BankAccount dasha;
	BankAccount dashab("duanshuai", "123232", 1000);

	dasha.show();
	dashab.show();
	dasha.deposit(5000);
	dasha.show();
	dasha.withdraw(1000);
	dasha.show();
	dasha.withdraw(6000);

	dashab.deposit(5000);
	dashab.show();
	dashab.withdraw(1000);
	dashab.show();
	dashab.withdraw(6000);

	return 0;
}
