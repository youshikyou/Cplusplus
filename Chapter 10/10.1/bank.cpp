#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "bank.h"

BankAccount::BankAccount() {
	strcpy_s(name, "no name");
	strcpy_s(accnum, "123456789");
	balance = 0.0;
}

BankAccount::BankAccount(const char *client, const char*acc, double bal) {
	strncpy_s(name, client,19);
	name[19] = '\0';
	strncpy_s(accnum, acc,29);
	accnum[29] = '\0';
	balance = bal;
}

BankAccount::~BankAccount() {

}
void BankAccount::show()const
{
	std::cout << "Client Name: " << name << std::endl;
	std::cout << "Client Account Number: " << accnum << std::endl;
	std::cout << "Balance: " << balance << std::endl;
}
void BankAccount::deposit(double cash)
{
	if (cash < 0) 
	{
		std::cout << "Deposit negative" << "\n";
		std::cout << "Abort" << "\n";
	}
	else
	{
		balance += cash;
	}

}
void BankAccount::withdraw(double cash) 
{
	if (cash > balance)
	{
		std::cout << "balance not enough" << "\n";
		std::cout << "Abort" << "\n";
	}
	else
	{
		balance -= cash;

	}
}
